// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRANSFERINBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRANSFERINBYINSTANCEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTransferInByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTransferInByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_TO_JSON(ModificationDateLong, modificationDateLong_);
      DARABONBA_PTR_TO_JSON(NeedMailCheck, needMailCheck_);
      DARABONBA_PTR_TO_JSON(ProgressBarType, progressBarType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultDate, resultDate_);
      DARABONBA_PTR_TO_JSON(ResultDateLong, resultDateLong_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmissionDate, submissionDate_);
      DARABONBA_PTR_TO_JSON(SubmissionDateLong, submissionDateLong_);
      DARABONBA_PTR_TO_JSON(TransferAuthorizationCodeSubmissionDate, transferAuthorizationCodeSubmissionDate_);
      DARABONBA_PTR_TO_JSON(TransferAuthorizationCodeSubmissionDateLong, transferAuthorizationCodeSubmissionDateLong_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WhoisMailStatus, whoisMailStatus_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTransferInByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_FROM_JSON(ModificationDateLong, modificationDateLong_);
      DARABONBA_PTR_FROM_JSON(NeedMailCheck, needMailCheck_);
      DARABONBA_PTR_FROM_JSON(ProgressBarType, progressBarType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultDate, resultDate_);
      DARABONBA_PTR_FROM_JSON(ResultDateLong, resultDateLong_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmissionDate, submissionDate_);
      DARABONBA_PTR_FROM_JSON(SubmissionDateLong, submissionDateLong_);
      DARABONBA_PTR_FROM_JSON(TransferAuthorizationCodeSubmissionDate, transferAuthorizationCodeSubmissionDate_);
      DARABONBA_PTR_FROM_JSON(TransferAuthorizationCodeSubmissionDateLong, transferAuthorizationCodeSubmissionDateLong_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WhoisMailStatus, whoisMailStatus_);
    };
    QueryTransferInByInstanceIdResponseBody() = default ;
    QueryTransferInByInstanceIdResponseBody(const QueryTransferInByInstanceIdResponseBody &) = default ;
    QueryTransferInByInstanceIdResponseBody(QueryTransferInByInstanceIdResponseBody &&) = default ;
    QueryTransferInByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTransferInByInstanceIdResponseBody() = default ;
    QueryTransferInByInstanceIdResponseBody& operator=(const QueryTransferInByInstanceIdResponseBody &) = default ;
    QueryTransferInByInstanceIdResponseBody& operator=(QueryTransferInByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->email_ == nullptr && return this->expirationDate_ == nullptr && return this->expirationDateLong_ == nullptr && return this->instanceId_ == nullptr && return this->modificationDate_ == nullptr
        && return this->modificationDateLong_ == nullptr && return this->needMailCheck_ == nullptr && return this->progressBarType_ == nullptr && return this->requestId_ == nullptr && return this->resultCode_ == nullptr
        && return this->resultDate_ == nullptr && return this->resultDateLong_ == nullptr && return this->resultMsg_ == nullptr && return this->simpleTransferInStatus_ == nullptr && return this->status_ == nullptr
        && return this->submissionDate_ == nullptr && return this->submissionDateLong_ == nullptr && return this->transferAuthorizationCodeSubmissionDate_ == nullptr && return this->transferAuthorizationCodeSubmissionDateLong_ == nullptr && return this->userId_ == nullptr
        && return this->whoisMailStatus_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // expirationDateLong Field Functions 
    bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
    void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
    inline int64_t expirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
    inline QueryTransferInByInstanceIdResponseBody& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modificationDate Field Functions 
    bool hasModificationDate() const { return this->modificationDate_ != nullptr;};
    void deleteModificationDate() { this->modificationDate_ = nullptr;};
    inline string modificationDate() const { DARABONBA_PTR_GET_DEFAULT(modificationDate_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setModificationDate(string modificationDate) { DARABONBA_PTR_SET_VALUE(modificationDate_, modificationDate) };


    // modificationDateLong Field Functions 
    bool hasModificationDateLong() const { return this->modificationDateLong_ != nullptr;};
    void deleteModificationDateLong() { this->modificationDateLong_ = nullptr;};
    inline int64_t modificationDateLong() const { DARABONBA_PTR_GET_DEFAULT(modificationDateLong_, 0L) };
    inline QueryTransferInByInstanceIdResponseBody& setModificationDateLong(int64_t modificationDateLong) { DARABONBA_PTR_SET_VALUE(modificationDateLong_, modificationDateLong) };


    // needMailCheck Field Functions 
    bool hasNeedMailCheck() const { return this->needMailCheck_ != nullptr;};
    void deleteNeedMailCheck() { this->needMailCheck_ = nullptr;};
    inline bool needMailCheck() const { DARABONBA_PTR_GET_DEFAULT(needMailCheck_, false) };
    inline QueryTransferInByInstanceIdResponseBody& setNeedMailCheck(bool needMailCheck) { DARABONBA_PTR_SET_VALUE(needMailCheck_, needMailCheck) };


    // progressBarType Field Functions 
    bool hasProgressBarType() const { return this->progressBarType_ != nullptr;};
    void deleteProgressBarType() { this->progressBarType_ = nullptr;};
    inline int32_t progressBarType() const { DARABONBA_PTR_GET_DEFAULT(progressBarType_, 0) };
    inline QueryTransferInByInstanceIdResponseBody& setProgressBarType(int32_t progressBarType) { DARABONBA_PTR_SET_VALUE(progressBarType_, progressBarType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultDate Field Functions 
    bool hasResultDate() const { return this->resultDate_ != nullptr;};
    void deleteResultDate() { this->resultDate_ = nullptr;};
    inline string resultDate() const { DARABONBA_PTR_GET_DEFAULT(resultDate_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setResultDate(string resultDate) { DARABONBA_PTR_SET_VALUE(resultDate_, resultDate) };


    // resultDateLong Field Functions 
    bool hasResultDateLong() const { return this->resultDateLong_ != nullptr;};
    void deleteResultDateLong() { this->resultDateLong_ = nullptr;};
    inline int64_t resultDateLong() const { DARABONBA_PTR_GET_DEFAULT(resultDateLong_, 0L) };
    inline QueryTransferInByInstanceIdResponseBody& setResultDateLong(int64_t resultDateLong) { DARABONBA_PTR_SET_VALUE(resultDateLong_, resultDateLong) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // simpleTransferInStatus Field Functions 
    bool hasSimpleTransferInStatus() const { return this->simpleTransferInStatus_ != nullptr;};
    void deleteSimpleTransferInStatus() { this->simpleTransferInStatus_ = nullptr;};
    inline string simpleTransferInStatus() const { DARABONBA_PTR_GET_DEFAULT(simpleTransferInStatus_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setSimpleTransferInStatus(string simpleTransferInStatus) { DARABONBA_PTR_SET_VALUE(simpleTransferInStatus_, simpleTransferInStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryTransferInByInstanceIdResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submissionDate Field Functions 
    bool hasSubmissionDate() const { return this->submissionDate_ != nullptr;};
    void deleteSubmissionDate() { this->submissionDate_ = nullptr;};
    inline string submissionDate() const { DARABONBA_PTR_GET_DEFAULT(submissionDate_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setSubmissionDate(string submissionDate) { DARABONBA_PTR_SET_VALUE(submissionDate_, submissionDate) };


    // submissionDateLong Field Functions 
    bool hasSubmissionDateLong() const { return this->submissionDateLong_ != nullptr;};
    void deleteSubmissionDateLong() { this->submissionDateLong_ = nullptr;};
    inline int64_t submissionDateLong() const { DARABONBA_PTR_GET_DEFAULT(submissionDateLong_, 0L) };
    inline QueryTransferInByInstanceIdResponseBody& setSubmissionDateLong(int64_t submissionDateLong) { DARABONBA_PTR_SET_VALUE(submissionDateLong_, submissionDateLong) };


    // transferAuthorizationCodeSubmissionDate Field Functions 
    bool hasTransferAuthorizationCodeSubmissionDate() const { return this->transferAuthorizationCodeSubmissionDate_ != nullptr;};
    void deleteTransferAuthorizationCodeSubmissionDate() { this->transferAuthorizationCodeSubmissionDate_ = nullptr;};
    inline string transferAuthorizationCodeSubmissionDate() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCodeSubmissionDate_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setTransferAuthorizationCodeSubmissionDate(string transferAuthorizationCodeSubmissionDate) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCodeSubmissionDate_, transferAuthorizationCodeSubmissionDate) };


    // transferAuthorizationCodeSubmissionDateLong Field Functions 
    bool hasTransferAuthorizationCodeSubmissionDateLong() const { return this->transferAuthorizationCodeSubmissionDateLong_ != nullptr;};
    void deleteTransferAuthorizationCodeSubmissionDateLong() { this->transferAuthorizationCodeSubmissionDateLong_ = nullptr;};
    inline int64_t transferAuthorizationCodeSubmissionDateLong() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCodeSubmissionDateLong_, 0L) };
    inline QueryTransferInByInstanceIdResponseBody& setTransferAuthorizationCodeSubmissionDateLong(int64_t transferAuthorizationCodeSubmissionDateLong) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCodeSubmissionDateLong_, transferAuthorizationCodeSubmissionDateLong) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryTransferInByInstanceIdResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // whoisMailStatus Field Functions 
    bool hasWhoisMailStatus() const { return this->whoisMailStatus_ != nullptr;};
    void deleteWhoisMailStatus() { this->whoisMailStatus_ = nullptr;};
    inline bool whoisMailStatus() const { DARABONBA_PTR_GET_DEFAULT(whoisMailStatus_, false) };
    inline QueryTransferInByInstanceIdResponseBody& setWhoisMailStatus(bool whoisMailStatus) { DARABONBA_PTR_SET_VALUE(whoisMailStatus_, whoisMailStatus) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> expirationDate_ = nullptr;
    std::shared_ptr<int64_t> expirationDateLong_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> modificationDate_ = nullptr;
    std::shared_ptr<int64_t> modificationDateLong_ = nullptr;
    std::shared_ptr<bool> needMailCheck_ = nullptr;
    std::shared_ptr<int32_t> progressBarType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultDate_ = nullptr;
    std::shared_ptr<int64_t> resultDateLong_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<string> simpleTransferInStatus_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> submissionDate_ = nullptr;
    std::shared_ptr<int64_t> submissionDateLong_ = nullptr;
    std::shared_ptr<string> transferAuthorizationCodeSubmissionDate_ = nullptr;
    std::shared_ptr<int64_t> transferAuthorizationCodeSubmissionDateLong_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<bool> whoisMailStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
