// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteSecurityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    DeleteSecurityInfoRequest() = default ;
    DeleteSecurityInfoRequest(const DeleteSecurityInfoRequest &) = default ;
    DeleteSecurityInfoRequest(DeleteSecurityInfoRequest &&) = default ;
    DeleteSecurityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityInfoRequest() = default ;
    DeleteSecurityInfoRequest& operator=(const DeleteSecurityInfoRequest &) = default ;
    DeleteSecurityInfoRequest& operator=(DeleteSecurityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->userId_ == nullptr && this->verifyType_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteSecurityInfoRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteSecurityInfoRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline DeleteSecurityInfoRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The verification type of the security information. Valid values:
    // 
    // - SecurityEmail: security email address.
    // 
    // This parameter is required.
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
