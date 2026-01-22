// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeleteAccessKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DeleteAccessKeyRequest() = default ;
    DeleteAccessKeyRequest(const DeleteAccessKeyRequest &) = default ;
    DeleteAccessKeyRequest(DeleteAccessKeyRequest &&) = default ;
    DeleteAccessKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessKeyRequest() = default ;
    DeleteAccessKeyRequest& operator=(const DeleteAccessKeyRequest &) = default ;
    DeleteAccessKeyRequest& operator=(DeleteAccessKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr
        && this->userPrincipalName_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline DeleteAccessKeyRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DeleteAccessKeyRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The ID of the AccessKey pair that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> userAccessKeyId_ {};
    // The logon name of the RAM user.
    // 
    // If this parameter is empty, the AccessKey pair of the current user is deleted.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
