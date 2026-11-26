// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVERIFICATIONMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVERIFICATIONMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SendVerificationMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVerificationMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, SendVerificationMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    SendVerificationMessageRequest() = default ;
    SendVerificationMessageRequest(const SendVerificationMessageRequest &) = default ;
    SendVerificationMessageRequest(SendVerificationMessageRequest &&) = default ;
    SendVerificationMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVerificationMessageRequest() = default ;
    SendVerificationMessageRequest& operator=(const SendVerificationMessageRequest &) = default ;
    SendVerificationMessageRequest& operator=(SendVerificationMessageRequest &&) = default ;
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
    inline SendVerificationMessageRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SendVerificationMessageRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline SendVerificationMessageRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The verification type for the security information. Valid values:
    // 
    // - SecurityEmail: security email address
    // 
    // This parameter is required.
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
