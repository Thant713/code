package main

type User struct {
	Name string
	Membership
}

func newUser(name string, membershipType string) User {
	// if membershipType == "premium" {
	// 	return User{
	// 		Name: name,
	// 		Membership: Membership{
	// 			Type:             membershipType,
	// 			MessageCharLimit: 1000,
	// 		},
	// 	}
	// } else {
	// 	return User{
	// 		Name: name,
	// 		Membership: Membership{
	// 			Type:             membershipType,
	// 			MessageCharLimit: 100,
	// 		},
	// 	}
	// }
	n := User{}
	n.Name = name
	n.Membership.Type = membershipType
	if n.Membership.Type == "premium" {
		n.Membership.MessageCharLimit = 1000
	} else {
		n.Membership.MessageCharLimit = 100
	}
	return n
}

type Membership struct {
	Type             string
	MessageCharLimit int
}
