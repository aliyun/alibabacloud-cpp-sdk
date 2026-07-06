// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetAccessKeyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccessKeyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccessKeyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    SetAccessKeyPolicyRequest() = default ;
    SetAccessKeyPolicyRequest(const SetAccessKeyPolicyRequest &) = default ;
    SetAccessKeyPolicyRequest(SetAccessKeyPolicyRequest &&) = default ;
    SetAccessKeyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccessKeyPolicyRequest() = default ;
    SetAccessKeyPolicyRequest& operator=(const SetAccessKeyPolicyRequest &) = default ;
    SetAccessKeyPolicyRequest& operator=(SetAccessKeyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyPolicy_ == nullptr
        && this->userAccessKeyId_ == nullptr && this->userPrincipalName_ == nullptr; };
    // accessKeyPolicy Field Functions 
    bool hasAccessKeyPolicy() const { return this->accessKeyPolicy_ != nullptr;};
    void deleteAccessKeyPolicy() { this->accessKeyPolicy_ = nullptr;};
    inline string getAccessKeyPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessKeyPolicy_, "") };
    inline SetAccessKeyPolicyRequest& setAccessKeyPolicy(string accessKeyPolicy) { DARABONBA_PTR_SET_VALUE(accessKeyPolicy_, accessKeyPolicy) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline SetAccessKeyPolicyRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline SetAccessKeyPolicyRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The network access restriction policy.
    // 
    // A JSON-formatted string. For more information, see the AccessKeyPolicy structure description.
    // 
    // This parameter is required.
    shared_ptr<string> accessKeyPolicy_ {};
    // The AccessKey ID.
    // 
    // This parameter is required.
    shared_ptr<string> userAccessKeyId_ {};
    // The logon name of the RAM user. 
    // 
    // If this parameter is left empty, the network access restriction policy is set for the specified AccessKey pair of the current user by default.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
