// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListPoliciesForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListPoliciesForUserRequest() = default ;
    ListPoliciesForUserRequest(const ListPoliciesForUserRequest &) = default ;
    ListPoliciesForUserRequest(ListPoliciesForUserRequest &&) = default ;
    ListPoliciesForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesForUserRequest() = default ;
    ListPoliciesForUserRequest& operator=(const ListPoliciesForUserRequest &) = default ;
    ListPoliciesForUserRequest& operator=(ListPoliciesForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userName_ == nullptr; };
    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListPoliciesForUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the RAM user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
