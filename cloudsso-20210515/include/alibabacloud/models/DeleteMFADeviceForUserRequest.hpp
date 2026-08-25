// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMFADEVICEFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMFADEVICEFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteMFADeviceForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMFADeviceForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MFADeviceId, MFADeviceId_);
      DARABONBA_PTR_TO_JSON(MfaType, mfaType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMFADeviceForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MFADeviceId, MFADeviceId_);
      DARABONBA_PTR_FROM_JSON(MfaType, mfaType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteMFADeviceForUserRequest() = default ;
    DeleteMFADeviceForUserRequest(const DeleteMFADeviceForUserRequest &) = default ;
    DeleteMFADeviceForUserRequest(DeleteMFADeviceForUserRequest &&) = default ;
    DeleteMFADeviceForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMFADeviceForUserRequest() = default ;
    DeleteMFADeviceForUserRequest& operator=(const DeleteMFADeviceForUserRequest &) = default ;
    DeleteMFADeviceForUserRequest& operator=(DeleteMFADeviceForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->MFADeviceId_ == nullptr && this->mfaType_ == nullptr && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteMFADeviceForUserRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // MFADeviceId Field Functions 
    bool hasMFADeviceId() const { return this->MFADeviceId_ != nullptr;};
    void deleteMFADeviceId() { this->MFADeviceId_ = nullptr;};
    inline string getMFADeviceId() const { DARABONBA_PTR_GET_DEFAULT(MFADeviceId_, "") };
    inline DeleteMFADeviceForUserRequest& setMFADeviceId(string MFADeviceId) { DARABONBA_PTR_SET_VALUE(MFADeviceId_, MFADeviceId) };


    // mfaType Field Functions 
    bool hasMfaType() const { return this->mfaType_ != nullptr;};
    void deleteMfaType() { this->mfaType_ = nullptr;};
    inline string getMfaType() const { DARABONBA_PTR_GET_DEFAULT(mfaType_, "") };
    inline DeleteMFADeviceForUserRequest& setMfaType(string mfaType) { DARABONBA_PTR_SET_VALUE(mfaType_, mfaType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteMFADeviceForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The MFA device ID.
    // 
    // You can call [ListMFADevicesForUser](https://help.aliyun.com/document_detail/333531.html) to query the MFA device ID.
    shared_ptr<string> MFADeviceId_ {};
    shared_ptr<string> mfaType_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
