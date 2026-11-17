// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERIFYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERIFYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CheckVerifyLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVerifyLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVerifyLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckVerifyLogResponseBody() = default ;
    CheckVerifyLogResponseBody(const CheckVerifyLogResponseBody &) = default ;
    CheckVerifyLogResponseBody(CheckVerifyLogResponseBody &&) = default ;
    CheckVerifyLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVerifyLogResponseBody() = default ;
    CheckVerifyLogResponseBody& operator=(const CheckVerifyLogResponseBody &) = default ;
    CheckVerifyLogResponseBody& operator=(CheckVerifyLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(InterruptPage, interruptPage_);
        DARABONBA_PTR_TO_JSON(InterruptPageEn, interruptPageEn_);
        DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
        DARABONBA_PTR_TO_JSON(LogInfoEn, logInfoEn_);
        DARABONBA_PTR_TO_JSON(LogStatisticsInfo, logStatisticsInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(VerifyErrorCode, verifyErrorCode_);
        DARABONBA_PTR_TO_JSON(VerifyStatus, verifyStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(InterruptPage, interruptPage_);
        DARABONBA_PTR_FROM_JSON(InterruptPageEn, interruptPageEn_);
        DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
        DARABONBA_PTR_FROM_JSON(LogInfoEn, logInfoEn_);
        DARABONBA_PTR_FROM_JSON(LogStatisticsInfo, logStatisticsInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(VerifyErrorCode, verifyErrorCode_);
        DARABONBA_PTR_FROM_JSON(VerifyStatus, verifyStatus_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extInfo_ == nullptr
        && this->interruptPage_ == nullptr && this->interruptPageEn_ == nullptr && this->logInfo_ == nullptr && this->logInfoEn_ == nullptr && this->logStatisticsInfo_ == nullptr
        && this->passed_ == nullptr && this->subCode_ == nullptr && this->verifyErrorCode_ == nullptr && this->verifyStatus_ == nullptr; };
      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Result& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // interruptPage Field Functions 
      bool hasInterruptPage() const { return this->interruptPage_ != nullptr;};
      void deleteInterruptPage() { this->interruptPage_ = nullptr;};
      inline string getInterruptPage() const { DARABONBA_PTR_GET_DEFAULT(interruptPage_, "") };
      inline Result& setInterruptPage(string interruptPage) { DARABONBA_PTR_SET_VALUE(interruptPage_, interruptPage) };


      // interruptPageEn Field Functions 
      bool hasInterruptPageEn() const { return this->interruptPageEn_ != nullptr;};
      void deleteInterruptPageEn() { this->interruptPageEn_ = nullptr;};
      inline string getInterruptPageEn() const { DARABONBA_PTR_GET_DEFAULT(interruptPageEn_, "") };
      inline Result& setInterruptPageEn(string interruptPageEn) { DARABONBA_PTR_SET_VALUE(interruptPageEn_, interruptPageEn) };


      // logInfo Field Functions 
      bool hasLogInfo() const { return this->logInfo_ != nullptr;};
      void deleteLogInfo() { this->logInfo_ = nullptr;};
      inline const vector<string> & getLogInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, vector<string>) };
      inline vector<string> getLogInfo() { DARABONBA_PTR_GET(logInfo_, vector<string>) };
      inline Result& setLogInfo(const vector<string> & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
      inline Result& setLogInfo(vector<string> && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


      // logInfoEn Field Functions 
      bool hasLogInfoEn() const { return this->logInfoEn_ != nullptr;};
      void deleteLogInfoEn() { this->logInfoEn_ = nullptr;};
      inline const vector<string> & getLogInfoEn() const { DARABONBA_PTR_GET_CONST(logInfoEn_, vector<string>) };
      inline vector<string> getLogInfoEn() { DARABONBA_PTR_GET(logInfoEn_, vector<string>) };
      inline Result& setLogInfoEn(const vector<string> & logInfoEn) { DARABONBA_PTR_SET_VALUE(logInfoEn_, logInfoEn) };
      inline Result& setLogInfoEn(vector<string> && logInfoEn) { DARABONBA_PTR_SET_RVALUE(logInfoEn_, logInfoEn) };


      // logStatisticsInfo Field Functions 
      bool hasLogStatisticsInfo() const { return this->logStatisticsInfo_ != nullptr;};
      void deleteLogStatisticsInfo() { this->logStatisticsInfo_ = nullptr;};
      inline string getLogStatisticsInfo() const { DARABONBA_PTR_GET_DEFAULT(logStatisticsInfo_, "") };
      inline Result& setLogStatisticsInfo(string logStatisticsInfo) { DARABONBA_PTR_SET_VALUE(logStatisticsInfo_, logStatisticsInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Result& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // verifyErrorCode Field Functions 
      bool hasVerifyErrorCode() const { return this->verifyErrorCode_ != nullptr;};
      void deleteVerifyErrorCode() { this->verifyErrorCode_ = nullptr;};
      inline string getVerifyErrorCode() const { DARABONBA_PTR_GET_DEFAULT(verifyErrorCode_, "") };
      inline Result& setVerifyErrorCode(string verifyErrorCode) { DARABONBA_PTR_SET_VALUE(verifyErrorCode_, verifyErrorCode) };


      // verifyStatus Field Functions 
      bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
      void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
      inline string getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, "") };
      inline Result& setVerifyStatus(string verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


    protected:
      // The extended information.
      shared_ptr<string> extInfo_ {};
      // The last page where the authentication was interrupted. Valid values:
      // 
      // - The page is not started.
      // - The OCR guide page.
      // - The OCR camera authorization page.
      // - The OCR document capture page.
      // - The OCR recognition loading page.
      // - The OCR recognition result editing page.
      // - The OCR recognition result editing loading page.
      // - The liveness detection guide page.
      // - The liveness detection camera authorization page.
      // - The liveness detection page.
      // - The liveness detection fallback page.
      // - The liveness detection retry page.
      // - The liveness detection loading page.
      shared_ptr<string> interruptPage_ {};
      // The last page where the authentication was interrupted, in English. Valid values:
      // 
      // - LOADING
      // 
      // - GUIDE
      // 
      // - FACE
      // 
      // - OCR_SCAN
      // 
      // - OCR_RESULT
      // 
      // - NFC_INPUT
      // 
      // - NFC_READ
      shared_ptr<string> interruptPageEn_ {};
      // The details of the SDK runtime logs.
      shared_ptr<vector<string>> logInfo_ {};
      // The details of the SDK runtime trace logs in English. The format of this field is the same as that of **LogInfo**.
      shared_ptr<vector<string>> logInfoEn_ {};
      // The statistical details of the SDK runtime logs.
      shared_ptr<string> logStatisticsInfo_ {};
      // Indicates whether the authentication is passed. Valid values:
      // 
      // - Y: Passed.
      // - N: Not passed.
      shared_ptr<string> passed_ {};
      // The sub-result code.
      shared_ptr<string> subCode_ {};
      // The error code for authentication interruption. Valid values:
      // 
      // - 1000: The user completed the face scanning process, and the recommended authentication result is passed.
      // - 1001: The user completed the face scanning process, and the recommended authentication result is not passed.
      // - 1002: A system error occurred.
      // - 1003: SDK initialization failed. Check whether the client time is correct.
      // - 1004: A camera permission error occurred.
      // - 1005: A network error occurred.
      // - 1006: The user exited.
      // - 1007: The TransactionId is invalid.
      // - 1009: The client timestamp is incorrect.
      // - 1011: The submitted document type is incorrect.
      // - 1012: The recognized key information of the document is missing or the format verification failed.
      // - 1013: The image quality is poor.
      // - 1014: The number of errors exceeded the upper limit.
      // - 1015: The Android system version is too low.
      // - 1016: Camera permissions are not obtained.
      // - 9999: The authentication process is suspected to be interrupted.
      shared_ptr<string> verifyErrorCode_ {};
      // The authentication status. Valid values:
      // 
      // - 0: finished. The authentication is completed.
      // - 1: unfinished. The authentication is interrupted.
      // - 2: notstart. The authentication is not started.
      shared_ptr<string> verifyStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckVerifyLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckVerifyLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckVerifyLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CheckVerifyLogResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CheckVerifyLogResponseBody::Result) };
    inline CheckVerifyLogResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CheckVerifyLogResponseBody::Result) };
    inline CheckVerifyLogResponseBody& setResult(const CheckVerifyLogResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CheckVerifyLogResponseBody& setResult(CheckVerifyLogResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The backend error code.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CheckVerifyLogResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
