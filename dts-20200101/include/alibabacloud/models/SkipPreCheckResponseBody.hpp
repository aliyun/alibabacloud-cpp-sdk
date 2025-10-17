// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPPRECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SKIPPRECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SkipPreCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipPreCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleJobId, scheduleJobId_);
      DARABONBA_PTR_TO_JSON(SkipItems, skipItems_);
      DARABONBA_PTR_TO_JSON(SkipNames, skipNames_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SkipPreCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleJobId, scheduleJobId_);
      DARABONBA_PTR_FROM_JSON(SkipItems, skipItems_);
      DARABONBA_PTR_FROM_JSON(SkipNames, skipNames_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SkipPreCheckResponseBody() = default ;
    SkipPreCheckResponseBody(const SkipPreCheckResponseBody &) = default ;
    SkipPreCheckResponseBody(SkipPreCheckResponseBody &&) = default ;
    SkipPreCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipPreCheckResponseBody() = default ;
    SkipPreCheckResponseBody& operator=(const SkipPreCheckResponseBody &) = default ;
    SkipPreCheckResponseBody& operator=(SkipPreCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->migrationJobId_ == nullptr
        && return this->requestId_ == nullptr && return this->scheduleJobId_ == nullptr && return this->skipItems_ == nullptr && return this->skipNames_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SkipPreCheckResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline SkipPreCheckResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline SkipPreCheckResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SkipPreCheckResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SkipPreCheckResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string migrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline SkipPreCheckResponseBody& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SkipPreCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleJobId Field Functions 
    bool hasScheduleJobId() const { return this->scheduleJobId_ != nullptr;};
    void deleteScheduleJobId() { this->scheduleJobId_ = nullptr;};
    inline string scheduleJobId() const { DARABONBA_PTR_GET_DEFAULT(scheduleJobId_, "") };
    inline SkipPreCheckResponseBody& setScheduleJobId(string scheduleJobId) { DARABONBA_PTR_SET_VALUE(scheduleJobId_, scheduleJobId) };


    // skipItems Field Functions 
    bool hasSkipItems() const { return this->skipItems_ != nullptr;};
    void deleteSkipItems() { this->skipItems_ = nullptr;};
    inline string skipItems() const { DARABONBA_PTR_GET_DEFAULT(skipItems_, "") };
    inline SkipPreCheckResponseBody& setSkipItems(string skipItems) { DARABONBA_PTR_SET_VALUE(skipItems_, skipItems) };


    // skipNames Field Functions 
    bool hasSkipNames() const { return this->skipNames_ != nullptr;};
    void deleteSkipNames() { this->skipNames_ = nullptr;};
    inline string skipNames() const { DARABONBA_PTR_GET_DEFAULT(skipNames_, "") };
    inline SkipPreCheckResponseBody& setSkipNames(string skipNames) { DARABONBA_PTR_SET_VALUE(skipNames_, skipNames) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SkipPreCheckResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter will be removed in the future.
    std::shared_ptr<string> code_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace %s in ErrMessage.
    // 
    // > If JobId is invalid, JobId is returned for DynamicMessage, and the following message is returned for ErrMessage: The Value of Input Parameter %s is not valid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status codes returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The precheck task ID.
    std::shared_ptr<string> migrationJobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The precheck task ID.
    std::shared_ptr<string> scheduleJobId_ = nullptr;
    // The shortened name of the precheck item.
    std::shared_ptr<string> skipItems_ = nullptr;
    // The precheck item name.
    std::shared_ptr<string> skipNames_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
