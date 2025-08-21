// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCESSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCESSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateAccessKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccessKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccessKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    UpdateAccessKeyRequest() = default ;
    UpdateAccessKeyRequest(const UpdateAccessKeyRequest &) = default ;
    UpdateAccessKeyRequest(UpdateAccessKeyRequest &&) = default ;
    UpdateAccessKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccessKeyRequest() = default ;
    UpdateAccessKeyRequest& operator=(const UpdateAccessKeyRequest &) = default ;
    UpdateAccessKeyRequest& operator=(UpdateAccessKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->userAccessKeyId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAccessKeyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string userAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline UpdateAccessKeyRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline UpdateAccessKeyRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The status of the AccessKey pair. Valid values:
    // 
    // *   Active
    // *   Inactive
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // The AccessKey ID of the AccessKey pair for which you want to modify the status.
    // 
    // This parameter is required.
    std::shared_ptr<string> userAccessKeyId_ = nullptr;
    // The logon name of the RAM user.
    // 
    // If this parameter is empty, the status of the AccessKey pair for the current user is modified.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
