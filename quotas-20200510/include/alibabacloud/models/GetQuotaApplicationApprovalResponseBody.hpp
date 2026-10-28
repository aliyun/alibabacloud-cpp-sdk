// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONAPPROVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONAPPROVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationApprovalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationApprovalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationApprovalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQuotaApplicationApprovalResponseBody() = default ;
    GetQuotaApplicationApprovalResponseBody(const GetQuotaApplicationApprovalResponseBody &) = default ;
    GetQuotaApplicationApprovalResponseBody(GetQuotaApplicationApprovalResponseBody &&) = default ;
    GetQuotaApplicationApprovalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationApprovalResponseBody() = default ;
    GetQuotaApplicationApprovalResponseBody& operator=(const GetQuotaApplicationApprovalResponseBody &) = default ;
    GetQuotaApplicationApprovalResponseBody& operator=(GetQuotaApplicationApprovalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalHours, approvalHours_);
        DARABONBA_PTR_TO_JSON(ReminderIntervalHours, reminderIntervalHours_);
        DARABONBA_PTR_TO_JSON(SupportReminder, supportReminder_);
        DARABONBA_PTR_TO_JSON(UnsupportReminderReason, unsupportReminderReason_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalHours, approvalHours_);
        DARABONBA_PTR_FROM_JSON(ReminderIntervalHours, reminderIntervalHours_);
        DARABONBA_PTR_FROM_JSON(SupportReminder, supportReminder_);
        DARABONBA_PTR_FROM_JSON(UnsupportReminderReason, unsupportReminderReason_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->approvalHours_ == nullptr
        && this->reminderIntervalHours_ == nullptr && this->supportReminder_ == nullptr && this->unsupportReminderReason_ == nullptr; };
      // approvalHours Field Functions 
      bool hasApprovalHours() const { return this->approvalHours_ != nullptr;};
      void deleteApprovalHours() { this->approvalHours_ = nullptr;};
      inline int32_t getApprovalHours() const { DARABONBA_PTR_GET_DEFAULT(approvalHours_, 0) };
      inline Module& setApprovalHours(int32_t approvalHours) { DARABONBA_PTR_SET_VALUE(approvalHours_, approvalHours) };


      // reminderIntervalHours Field Functions 
      bool hasReminderIntervalHours() const { return this->reminderIntervalHours_ != nullptr;};
      void deleteReminderIntervalHours() { this->reminderIntervalHours_ = nullptr;};
      inline int32_t getReminderIntervalHours() const { DARABONBA_PTR_GET_DEFAULT(reminderIntervalHours_, 0) };
      inline Module& setReminderIntervalHours(int32_t reminderIntervalHours) { DARABONBA_PTR_SET_VALUE(reminderIntervalHours_, reminderIntervalHours) };


      // supportReminder Field Functions 
      bool hasSupportReminder() const { return this->supportReminder_ != nullptr;};
      void deleteSupportReminder() { this->supportReminder_ = nullptr;};
      inline bool getSupportReminder() const { DARABONBA_PTR_GET_DEFAULT(supportReminder_, false) };
      inline Module& setSupportReminder(bool supportReminder) { DARABONBA_PTR_SET_VALUE(supportReminder_, supportReminder) };


      // unsupportReminderReason Field Functions 
      bool hasUnsupportReminderReason() const { return this->unsupportReminderReason_ != nullptr;};
      void deleteUnsupportReminderReason() { this->unsupportReminderReason_ = nullptr;};
      inline string getUnsupportReminderReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportReminderReason_, "") };
      inline Module& setUnsupportReminderReason(string unsupportReminderReason) { DARABONBA_PTR_SET_VALUE(unsupportReminderReason_, unsupportReminderReason) };


    protected:
      // The average approval time for the quota application. Unit: hours.
      shared_ptr<int32_t> approvalHours_ {};
      // The approval reminder interval for the quota application. Unit: hours.
      shared_ptr<int32_t> reminderIntervalHours_ {};
      // Specifies whether approval reminders are supported for the quota application. Valid values:
      // - false: Not supported.
      // - true: Supported.
      shared_ptr<bool> supportReminder_ {};
      // The reason why approval reminders are not supported for the quota application.
      shared_ptr<string> unsupportReminderReason_ {};
    };

    virtual bool empty() const override { return this->allowRetry_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr
        && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetQuotaApplicationApprovalResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetQuotaApplicationApprovalResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetQuotaApplicationApprovalResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetQuotaApplicationApprovalResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetQuotaApplicationApprovalResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQuotaApplicationApprovalResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetQuotaApplicationApprovalResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQuotaApplicationApprovalResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetQuotaApplicationApprovalResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetQuotaApplicationApprovalResponseBody::Module) };
    inline GetQuotaApplicationApprovalResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetQuotaApplicationApprovalResponseBody::Module) };
    inline GetQuotaApplicationApprovalResponseBody& setModule(const GetQuotaApplicationApprovalResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetQuotaApplicationApprovalResponseBody& setModule(GetQuotaApplicationApprovalResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaApplicationApprovalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQuotaApplicationApprovalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Specifies whether retries are allowed. Valid values:
    // - false: Retries are not allowed.
    // - true: Retries are allowed.
    shared_ptr<bool> allowRetry_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response object.
    shared_ptr<GetQuotaApplicationApprovalResponseBody::Module> module_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Specifies whether the call was successful. Valid values:
    // 
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
