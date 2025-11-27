// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSmsSignResponseBodyAuditInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetSmsSignResponseBodySignIspRegisterDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyScene, applyScene_);
      DARABONBA_PTR_TO_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterAuditPass, authorizationLetterAuditPass_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(FileUrlList, fileUrlList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(RegisterResult, registerResult_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignCode, signCode_);
      DARABONBA_PTR_TO_JSON(SignIspRegisterDetailList, signIspRegisterDetailList_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignStatus, signStatus_);
      DARABONBA_PTR_TO_JSON(SignTag, signTag_);
      DARABONBA_PTR_TO_JSON(SignUsage, signUsage_);
      DARABONBA_PTR_TO_JSON(ThirdParty, thirdParty_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyScene, applyScene_);
      DARABONBA_PTR_FROM_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterAuditPass, authorizationLetterAuditPass_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(FileUrlList, fileUrlList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(RegisterResult, registerResult_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignCode, signCode_);
      DARABONBA_PTR_FROM_JSON(SignIspRegisterDetailList, signIspRegisterDetailList_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignStatus, signStatus_);
      DARABONBA_PTR_FROM_JSON(SignTag, signTag_);
      DARABONBA_PTR_FROM_JSON(SignUsage, signUsage_);
      DARABONBA_PTR_FROM_JSON(ThirdParty, thirdParty_);
    };
    GetSmsSignResponseBody() = default ;
    GetSmsSignResponseBody(const GetSmsSignResponseBody &) = default ;
    GetSmsSignResponseBody(GetSmsSignResponseBody &&) = default ;
    GetSmsSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsSignResponseBody() = default ;
    GetSmsSignResponseBody& operator=(const GetSmsSignResponseBody &) = default ;
    GetSmsSignResponseBody& operator=(GetSmsSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyScene_ == nullptr
        && return this->auditInfo_ == nullptr && return this->authorizationLetterAuditPass_ == nullptr && return this->authorizationLetterId_ == nullptr && return this->code_ == nullptr && return this->createDate_ == nullptr
        && return this->fileUrlList_ == nullptr && return this->message_ == nullptr && return this->orderId_ == nullptr && return this->qualificationId_ == nullptr && return this->registerResult_ == nullptr
        && return this->remark_ == nullptr && return this->requestId_ == nullptr && return this->signCode_ == nullptr && return this->signIspRegisterDetailList_ == nullptr && return this->signName_ == nullptr
        && return this->signStatus_ == nullptr && return this->signTag_ == nullptr && return this->signUsage_ == nullptr && return this->thirdParty_ == nullptr; };
    // applyScene Field Functions 
    bool hasApplyScene() const { return this->applyScene_ != nullptr;};
    void deleteApplyScene() { this->applyScene_ = nullptr;};
    inline string applyScene() const { DARABONBA_PTR_GET_DEFAULT(applyScene_, "") };
    inline GetSmsSignResponseBody& setApplyScene(string applyScene) { DARABONBA_PTR_SET_VALUE(applyScene_, applyScene) };


    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline const GetSmsSignResponseBodyAuditInfo & auditInfo() const { DARABONBA_PTR_GET_CONST(auditInfo_, GetSmsSignResponseBodyAuditInfo) };
    inline GetSmsSignResponseBodyAuditInfo auditInfo() { DARABONBA_PTR_GET(auditInfo_, GetSmsSignResponseBodyAuditInfo) };
    inline GetSmsSignResponseBody& setAuditInfo(const GetSmsSignResponseBodyAuditInfo & auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };
    inline GetSmsSignResponseBody& setAuditInfo(GetSmsSignResponseBodyAuditInfo && auditInfo) { DARABONBA_PTR_SET_RVALUE(auditInfo_, auditInfo) };


    // authorizationLetterAuditPass Field Functions 
    bool hasAuthorizationLetterAuditPass() const { return this->authorizationLetterAuditPass_ != nullptr;};
    void deleteAuthorizationLetterAuditPass() { this->authorizationLetterAuditPass_ = nullptr;};
    inline bool authorizationLetterAuditPass() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterAuditPass_, false) };
    inline GetSmsSignResponseBody& setAuthorizationLetterAuditPass(bool authorizationLetterAuditPass) { DARABONBA_PTR_SET_VALUE(authorizationLetterAuditPass_, authorizationLetterAuditPass) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t authorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline GetSmsSignResponseBody& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetSmsSignResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // fileUrlList Field Functions 
    bool hasFileUrlList() const { return this->fileUrlList_ != nullptr;};
    void deleteFileUrlList() { this->fileUrlList_ = nullptr;};
    inline const vector<string> & fileUrlList() const { DARABONBA_PTR_GET_CONST(fileUrlList_, vector<string>) };
    inline vector<string> fileUrlList() { DARABONBA_PTR_GET(fileUrlList_, vector<string>) };
    inline GetSmsSignResponseBody& setFileUrlList(const vector<string> & fileUrlList) { DARABONBA_PTR_SET_VALUE(fileUrlList_, fileUrlList) };
    inline GetSmsSignResponseBody& setFileUrlList(vector<string> && fileUrlList) { DARABONBA_PTR_SET_RVALUE(fileUrlList_, fileUrlList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetSmsSignResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline GetSmsSignResponseBody& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // registerResult Field Functions 
    bool hasRegisterResult() const { return this->registerResult_ != nullptr;};
    void deleteRegisterResult() { this->registerResult_ = nullptr;};
    inline int32_t registerResult() const { DARABONBA_PTR_GET_DEFAULT(registerResult_, 0) };
    inline GetSmsSignResponseBody& setRegisterResult(int32_t registerResult) { DARABONBA_PTR_SET_VALUE(registerResult_, registerResult) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetSmsSignResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signCode Field Functions 
    bool hasSignCode() const { return this->signCode_ != nullptr;};
    void deleteSignCode() { this->signCode_ = nullptr;};
    inline string signCode() const { DARABONBA_PTR_GET_DEFAULT(signCode_, "") };
    inline GetSmsSignResponseBody& setSignCode(string signCode) { DARABONBA_PTR_SET_VALUE(signCode_, signCode) };


    // signIspRegisterDetailList Field Functions 
    bool hasSignIspRegisterDetailList() const { return this->signIspRegisterDetailList_ != nullptr;};
    void deleteSignIspRegisterDetailList() { this->signIspRegisterDetailList_ = nullptr;};
    inline const vector<GetSmsSignResponseBodySignIspRegisterDetailList> & signIspRegisterDetailList() const { DARABONBA_PTR_GET_CONST(signIspRegisterDetailList_, vector<GetSmsSignResponseBodySignIspRegisterDetailList>) };
    inline vector<GetSmsSignResponseBodySignIspRegisterDetailList> signIspRegisterDetailList() { DARABONBA_PTR_GET(signIspRegisterDetailList_, vector<GetSmsSignResponseBodySignIspRegisterDetailList>) };
    inline GetSmsSignResponseBody& setSignIspRegisterDetailList(const vector<GetSmsSignResponseBodySignIspRegisterDetailList> & signIspRegisterDetailList) { DARABONBA_PTR_SET_VALUE(signIspRegisterDetailList_, signIspRegisterDetailList) };
    inline GetSmsSignResponseBody& setSignIspRegisterDetailList(vector<GetSmsSignResponseBodySignIspRegisterDetailList> && signIspRegisterDetailList) { DARABONBA_PTR_SET_RVALUE(signIspRegisterDetailList_, signIspRegisterDetailList) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline GetSmsSignResponseBody& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signStatus Field Functions 
    bool hasSignStatus() const { return this->signStatus_ != nullptr;};
    void deleteSignStatus() { this->signStatus_ = nullptr;};
    inline int64_t signStatus() const { DARABONBA_PTR_GET_DEFAULT(signStatus_, 0L) };
    inline GetSmsSignResponseBody& setSignStatus(int64_t signStatus) { DARABONBA_PTR_SET_VALUE(signStatus_, signStatus) };


    // signTag Field Functions 
    bool hasSignTag() const { return this->signTag_ != nullptr;};
    void deleteSignTag() { this->signTag_ = nullptr;};
    inline string signTag() const { DARABONBA_PTR_GET_DEFAULT(signTag_, "") };
    inline GetSmsSignResponseBody& setSignTag(string signTag) { DARABONBA_PTR_SET_VALUE(signTag_, signTag) };


    // signUsage Field Functions 
    bool hasSignUsage() const { return this->signUsage_ != nullptr;};
    void deleteSignUsage() { this->signUsage_ = nullptr;};
    inline string signUsage() const { DARABONBA_PTR_GET_DEFAULT(signUsage_, "") };
    inline GetSmsSignResponseBody& setSignUsage(string signUsage) { DARABONBA_PTR_SET_VALUE(signUsage_, signUsage) };


    // thirdParty Field Functions 
    bool hasThirdParty() const { return this->thirdParty_ != nullptr;};
    void deleteThirdParty() { this->thirdParty_ = nullptr;};
    inline bool thirdParty() const { DARABONBA_PTR_GET_DEFAULT(thirdParty_, false) };
    inline GetSmsSignResponseBody& setThirdParty(bool thirdParty) { DARABONBA_PTR_SET_VALUE(thirdParty_, thirdParty) };


  protected:
    // Content of application scenarios.
    std::shared_ptr<string> applyScene_ = nullptr;
    // Audit information.
    std::shared_ptr<GetSmsSignResponseBodyAuditInfo> auditInfo_ = nullptr;
    std::shared_ptr<bool> authorizationLetterAuditPass_ = nullptr;
    std::shared_ptr<int64_t> authorizationLetterId_ = nullptr;
    // Request status code.
    // 
    // - OK indicates a successful request.
    // - For other error codes, see [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // Creation date and time of the SMS signature.
    std::shared_ptr<string> createDate_ = nullptr;
    // 更多资料信息，补充上传业务证明文件或业务截图文件列表。
    std::shared_ptr<vector<string>> fileUrlList_ = nullptr;
    // Description of the status code.
    std::shared_ptr<string> message_ = nullptr;
    // Work order number.
    // 
    // Used by reviewers when querying the review. You need to provide this work order number if you require expedited review.
    std::shared_ptr<string> orderId_ = nullptr;
    // Credential ID, the credential ID associated when applying for the signature.
    std::shared_ptr<int64_t> qualificationId_ = nullptr;
    std::shared_ptr<int32_t> registerResult_ = nullptr;
    // Explanation of the SMS signature scenario, with a maximum length of 200 characters.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and issue localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // SMS signature code.
    std::shared_ptr<string> signCode_ = nullptr;
    std::shared_ptr<vector<GetSmsSignResponseBodySignIspRegisterDetailList>> signIspRegisterDetailList_ = nullptr;
    // SMS signature name.
    std::shared_ptr<string> signName_ = nullptr;
    // Signature review status. Values:
    // 
    // - **0**: Under review.
    // - **1**: Approved.
    // - **2**: Review failed, please check the Reason parameter for the failure cause.
    // - **10**: Review canceled.
    std::shared_ptr<int64_t> signStatus_ = nullptr;
    // Signature tag indicating whether the signature is user-defined, system-provided, test, or trial. Values:
    // 
    // - 2: User-defined signature
    // - 3: System-provided signature
    // - 4: Test signature
    // - 5: Trial signature
    std::shared_ptr<string> signTag_ = nullptr;
    // scenarios for using signatures.
    std::shared_ptr<string> signUsage_ = nullptr;
    // Signature usage indication—self-use or third-party use.
    // 
    // - false: Self-use (default)
    // 
    // - true: Third-party use
    std::shared_ptr<bool> thirdParty_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
