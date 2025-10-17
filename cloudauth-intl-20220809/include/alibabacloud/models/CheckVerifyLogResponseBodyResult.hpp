// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERIFYLOGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERIFYLOGRESPONSEBODYRESULT_HPP_
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
  class CheckVerifyLogResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVerifyLogResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CheckVerifyLogResponseBodyResult& obj) { 
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
    CheckVerifyLogResponseBodyResult() = default ;
    CheckVerifyLogResponseBodyResult(const CheckVerifyLogResponseBodyResult &) = default ;
    CheckVerifyLogResponseBodyResult(CheckVerifyLogResponseBodyResult &&) = default ;
    CheckVerifyLogResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVerifyLogResponseBodyResult() = default ;
    CheckVerifyLogResponseBodyResult& operator=(const CheckVerifyLogResponseBodyResult &) = default ;
    CheckVerifyLogResponseBodyResult& operator=(CheckVerifyLogResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extInfo_ == nullptr
        && return this->interruptPage_ == nullptr && return this->interruptPageEn_ == nullptr && return this->logInfo_ == nullptr && return this->logInfoEn_ == nullptr && return this->logStatisticsInfo_ == nullptr
        && return this->passed_ == nullptr && return this->subCode_ == nullptr && return this->verifyErrorCode_ == nullptr && return this->verifyStatus_ == nullptr; };
    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline CheckVerifyLogResponseBodyResult& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // interruptPage Field Functions 
    bool hasInterruptPage() const { return this->interruptPage_ != nullptr;};
    void deleteInterruptPage() { this->interruptPage_ = nullptr;};
    inline string interruptPage() const { DARABONBA_PTR_GET_DEFAULT(interruptPage_, "") };
    inline CheckVerifyLogResponseBodyResult& setInterruptPage(string interruptPage) { DARABONBA_PTR_SET_VALUE(interruptPage_, interruptPage) };


    // interruptPageEn Field Functions 
    bool hasInterruptPageEn() const { return this->interruptPageEn_ != nullptr;};
    void deleteInterruptPageEn() { this->interruptPageEn_ = nullptr;};
    inline string interruptPageEn() const { DARABONBA_PTR_GET_DEFAULT(interruptPageEn_, "") };
    inline CheckVerifyLogResponseBodyResult& setInterruptPageEn(string interruptPageEn) { DARABONBA_PTR_SET_VALUE(interruptPageEn_, interruptPageEn) };


    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const vector<string> & logInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, vector<string>) };
    inline vector<string> logInfo() { DARABONBA_PTR_GET(logInfo_, vector<string>) };
    inline CheckVerifyLogResponseBodyResult& setLogInfo(const vector<string> & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline CheckVerifyLogResponseBodyResult& setLogInfo(vector<string> && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    // logInfoEn Field Functions 
    bool hasLogInfoEn() const { return this->logInfoEn_ != nullptr;};
    void deleteLogInfoEn() { this->logInfoEn_ = nullptr;};
    inline const vector<string> & logInfoEn() const { DARABONBA_PTR_GET_CONST(logInfoEn_, vector<string>) };
    inline vector<string> logInfoEn() { DARABONBA_PTR_GET(logInfoEn_, vector<string>) };
    inline CheckVerifyLogResponseBodyResult& setLogInfoEn(const vector<string> & logInfoEn) { DARABONBA_PTR_SET_VALUE(logInfoEn_, logInfoEn) };
    inline CheckVerifyLogResponseBodyResult& setLogInfoEn(vector<string> && logInfoEn) { DARABONBA_PTR_SET_RVALUE(logInfoEn_, logInfoEn) };


    // logStatisticsInfo Field Functions 
    bool hasLogStatisticsInfo() const { return this->logStatisticsInfo_ != nullptr;};
    void deleteLogStatisticsInfo() { this->logStatisticsInfo_ = nullptr;};
    inline string logStatisticsInfo() const { DARABONBA_PTR_GET_DEFAULT(logStatisticsInfo_, "") };
    inline CheckVerifyLogResponseBodyResult& setLogStatisticsInfo(string logStatisticsInfo) { DARABONBA_PTR_SET_VALUE(logStatisticsInfo_, logStatisticsInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline CheckVerifyLogResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline CheckVerifyLogResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // verifyErrorCode Field Functions 
    bool hasVerifyErrorCode() const { return this->verifyErrorCode_ != nullptr;};
    void deleteVerifyErrorCode() { this->verifyErrorCode_ = nullptr;};
    inline string verifyErrorCode() const { DARABONBA_PTR_GET_DEFAULT(verifyErrorCode_, "") };
    inline CheckVerifyLogResponseBodyResult& setVerifyErrorCode(string verifyErrorCode) { DARABONBA_PTR_SET_VALUE(verifyErrorCode_, verifyErrorCode) };


    // verifyStatus Field Functions 
    bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
    void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
    inline string verifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, "") };
    inline CheckVerifyLogResponseBodyResult& setVerifyStatus(string verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


  protected:
    // Extended information
    std::shared_ptr<string> extInfo_ = nullptr;
    // Records the last page where the authentication was interrupted.
    // 
    // - Page not started
    // - OCR guide page
    // - OCR camera authorization
    // - OCR document capture page
    // - OCR recognition loading
    // - OCR recognition result editing page
    // - OCR recognition result editing loading
    // - Liveness detection guide page
    // - Liveness detection camera authorization page
    // - Liveness detection page
    // - Liveness detection fallback page
    // - Liveness detection retry
    // - Liveness detection loading
    std::shared_ptr<string> interruptPage_ = nullptr;
    // The page where the authentication process stops. Possible English values:
    // 
    // The following are the values in an unordered list:
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
    std::shared_ptr<string> interruptPageEn_ = nullptr;
    // SDK operation log details
    std::shared_ptr<vector<string>> logInfo_ = nullptr;
    // SDK Operation Log Details (English Version)
    std::shared_ptr<vector<string>> logInfoEn_ = nullptr;
    // SDK operation log statistics details
    std::shared_ptr<string> logStatisticsInfo_ = nullptr;
    // Whether the authentication passed.
    // 
    // - Y: Passed.
    // - N: Not passed.
    std::shared_ptr<string> passed_ = nullptr;
    // Sub-result code
    std::shared_ptr<string> subCode_ = nullptr;
    // Authentication interruption error codes
    // 
    // - 1000: The user completed the face scanning process, and the suggested authentication result is pass
    // - 1001: The user completed the face scanning process, and the suggested authentication result is fail
    // - 1002: System error
    // - 1003: SDK initialization failed, please check if the client time is correct
    // - 1004: Camera permission error
    // - 1005: Network error
    // - 1006: User exited
    // - 1007: Invalid TransactionId
    // - 1009: Client timestamp error
    // - 1011: Incorrect document type submitted
    // - 1012: Missing or format validation failure of key information on the recognized document
    // - 1013: Poor image quality
    // - 1014: Exceeded the upper limit of errors
    // - 1015: Android system version too low
    // - 1016: Camera permission not obtained
    // - 9999: Suspected authentication process interruption
    std::shared_ptr<string> verifyErrorCode_ = nullptr;
    // Authentication status, values:
    // 
    // - 0: finished (authentication completed)
    // - 1: unfinished (authentication interrupted)
    // - 2: notstart (authentication not started)
    std::shared_ptr<string> verifyStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
