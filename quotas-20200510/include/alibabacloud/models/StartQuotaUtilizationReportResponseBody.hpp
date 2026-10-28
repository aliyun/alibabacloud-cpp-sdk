// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTQUOTAUTILIZATIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTQUOTAUTILIZATIONREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class StartQuotaUtilizationReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartQuotaUtilizationReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextRefreshTime, nextRefreshTime_);
      DARABONBA_PTR_TO_JSON(RefreshSuccess, refreshSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartQuotaUtilizationReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextRefreshTime, nextRefreshTime_);
      DARABONBA_PTR_FROM_JSON(RefreshSuccess, refreshSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StartQuotaUtilizationReportResponseBody() = default ;
    StartQuotaUtilizationReportResponseBody(const StartQuotaUtilizationReportResponseBody &) = default ;
    StartQuotaUtilizationReportResponseBody(StartQuotaUtilizationReportResponseBody &&) = default ;
    StartQuotaUtilizationReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartQuotaUtilizationReportResponseBody() = default ;
    StartQuotaUtilizationReportResponseBody& operator=(const StartQuotaUtilizationReportResponseBody &) = default ;
    StartQuotaUtilizationReportResponseBody& operator=(StartQuotaUtilizationReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->message_ == nullptr && this->nextRefreshTime_ == nullptr && this->refreshSuccess_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline StartQuotaUtilizationReportResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline StartQuotaUtilizationReportResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartQuotaUtilizationReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextRefreshTime Field Functions 
    bool hasNextRefreshTime() const { return this->nextRefreshTime_ != nullptr;};
    void deleteNextRefreshTime() { this->nextRefreshTime_ = nullptr;};
    inline string getNextRefreshTime() const { DARABONBA_PTR_GET_DEFAULT(nextRefreshTime_, "") };
    inline StartQuotaUtilizationReportResponseBody& setNextRefreshTime(string nextRefreshTime) { DARABONBA_PTR_SET_VALUE(nextRefreshTime_, nextRefreshTime) };


    // refreshSuccess Field Functions 
    bool hasRefreshSuccess() const { return this->refreshSuccess_ != nullptr;};
    void deleteRefreshSuccess() { this->refreshSuccess_ = nullptr;};
    inline bool getRefreshSuccess() const { DARABONBA_PTR_GET_DEFAULT(refreshSuccess_, false) };
    inline StartQuotaUtilizationReportResponseBody& setRefreshSuccess(bool refreshSuccess) { DARABONBA_PTR_SET_VALUE(refreshSuccess_, refreshSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartQuotaUtilizationReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartQuotaUtilizationReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextRefreshTime_ {};
    shared_ptr<bool> refreshSuccess_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
