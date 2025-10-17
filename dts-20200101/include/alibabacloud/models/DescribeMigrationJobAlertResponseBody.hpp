// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_TO_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_TO_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_TO_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_FROM_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_FROM_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMigrationJobAlertResponseBody() = default ;
    DescribeMigrationJobAlertResponseBody(const DescribeMigrationJobAlertResponseBody &) = default ;
    DescribeMigrationJobAlertResponseBody(DescribeMigrationJobAlertResponseBody &&) = default ;
    DescribeMigrationJobAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobAlertResponseBody() = default ;
    DescribeMigrationJobAlertResponseBody& operator=(const DescribeMigrationJobAlertResponseBody &) = default ;
    DescribeMigrationJobAlertResponseBody& operator=(DescribeMigrationJobAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayAlertPhone_ == nullptr
        && return this->delayAlertStatus_ == nullptr && return this->delayOverSeconds_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->errorAlertPhone_ == nullptr
        && return this->errorAlertStatus_ == nullptr && return this->migrationJobId_ == nullptr && return this->migrationJobName_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // delayAlertPhone Field Functions 
    bool hasDelayAlertPhone() const { return this->delayAlertPhone_ != nullptr;};
    void deleteDelayAlertPhone() { this->delayAlertPhone_ = nullptr;};
    inline string delayAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(delayAlertPhone_, "") };
    inline DescribeMigrationJobAlertResponseBody& setDelayAlertPhone(string delayAlertPhone) { DARABONBA_PTR_SET_VALUE(delayAlertPhone_, delayAlertPhone) };


    // delayAlertStatus Field Functions 
    bool hasDelayAlertStatus() const { return this->delayAlertStatus_ != nullptr;};
    void deleteDelayAlertStatus() { this->delayAlertStatus_ = nullptr;};
    inline string delayAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(delayAlertStatus_, "") };
    inline DescribeMigrationJobAlertResponseBody& setDelayAlertStatus(string delayAlertStatus) { DARABONBA_PTR_SET_VALUE(delayAlertStatus_, delayAlertStatus) };


    // delayOverSeconds Field Functions 
    bool hasDelayOverSeconds() const { return this->delayOverSeconds_ != nullptr;};
    void deleteDelayOverSeconds() { this->delayOverSeconds_ = nullptr;};
    inline string delayOverSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayOverSeconds_, "") };
    inline DescribeMigrationJobAlertResponseBody& setDelayOverSeconds(string delayOverSeconds) { DARABONBA_PTR_SET_VALUE(delayOverSeconds_, delayOverSeconds) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobAlertResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobAlertResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorAlertPhone Field Functions 
    bool hasErrorAlertPhone() const { return this->errorAlertPhone_ != nullptr;};
    void deleteErrorAlertPhone() { this->errorAlertPhone_ = nullptr;};
    inline string errorAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(errorAlertPhone_, "") };
    inline DescribeMigrationJobAlertResponseBody& setErrorAlertPhone(string errorAlertPhone) { DARABONBA_PTR_SET_VALUE(errorAlertPhone_, errorAlertPhone) };


    // errorAlertStatus Field Functions 
    bool hasErrorAlertStatus() const { return this->errorAlertStatus_ != nullptr;};
    void deleteErrorAlertStatus() { this->errorAlertStatus_ = nullptr;};
    inline string errorAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(errorAlertStatus_, "") };
    inline DescribeMigrationJobAlertResponseBody& setErrorAlertStatus(string errorAlertStatus) { DARABONBA_PTR_SET_VALUE(errorAlertStatus_, errorAlertStatus) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string migrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline DescribeMigrationJobAlertResponseBody& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string migrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobAlertResponseBody& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobAlertResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Phone number of the contact for delay alarm.
    std::shared_ptr<string> delayAlertPhone_ = nullptr;
    // Whether to monitor the delay status, return values:
    // - **enable**: Yes. - **disable**: No.
    std::shared_ptr<string> delayAlertStatus_ = nullptr;
    // The threshold for triggering a delayed alarm, in seconds.
    std::shared_ptr<string> delayOverSeconds_ = nullptr;
    // Error code returned when the call fails.
    std::shared_ptr<string> errCode_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> errMessage_ = nullptr;
    // Phone number of the contact for abnormal alarm notifications
    std::shared_ptr<string> errorAlertPhone_ = nullptr;
    // Whether to monitor for abnormal status, return values:
    // - **enable**: Yes. - **disable**: No.
    std::shared_ptr<string> errorAlertStatus_ = nullptr;
    // Data migration instance ID.
    std::shared_ptr<string> migrationJobId_ = nullptr;
    // Name of the data migration task.
    std::shared_ptr<string> migrationJobName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
