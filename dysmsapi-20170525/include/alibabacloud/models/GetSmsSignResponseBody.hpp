// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(AppIcpRecordId, appIcpRecordId_);
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
      DARABONBA_PTR_TO_JSON(TrademarkId, trademarkId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIcpRecordId, appIcpRecordId_);
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
      DARABONBA_PTR_FROM_JSON(TrademarkId, trademarkId_);
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
    class SignIspRegisterDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SignIspRegisterDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
        DARABONBA_PTR_TO_JSON(OperatorCompleteTime, operatorCompleteTime_);
        DARABONBA_PTR_TO_JSON(RegisterStatus, registerStatus_);
        DARABONBA_PTR_TO_JSON(RegisterStatusReasons, registerStatusReasons_);
      };
      friend void from_json(const Darabonba::Json& j, SignIspRegisterDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
        DARABONBA_PTR_FROM_JSON(OperatorCompleteTime, operatorCompleteTime_);
        DARABONBA_PTR_FROM_JSON(RegisterStatus, registerStatus_);
        DARABONBA_PTR_FROM_JSON(RegisterStatusReasons, registerStatusReasons_);
      };
      SignIspRegisterDetailList() = default ;
      SignIspRegisterDetailList(const SignIspRegisterDetailList &) = default ;
      SignIspRegisterDetailList(SignIspRegisterDetailList &&) = default ;
      SignIspRegisterDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SignIspRegisterDetailList() = default ;
      SignIspRegisterDetailList& operator=(const SignIspRegisterDetailList &) = default ;
      SignIspRegisterDetailList& operator=(SignIspRegisterDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegisterStatusReasons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegisterStatusReasons& obj) { 
          DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
          DARABONBA_PTR_TO_JSON(ReasonDescList, reasonDescList_);
        };
        friend void from_json(const Darabonba::Json& j, RegisterStatusReasons& obj) { 
          DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
          DARABONBA_PTR_FROM_JSON(ReasonDescList, reasonDescList_);
        };
        RegisterStatusReasons() = default ;
        RegisterStatusReasons(const RegisterStatusReasons &) = default ;
        RegisterStatusReasons(RegisterStatusReasons &&) = default ;
        RegisterStatusReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegisterStatusReasons() = default ;
        RegisterStatusReasons& operator=(const RegisterStatusReasons &) = default ;
        RegisterStatusReasons& operator=(RegisterStatusReasons &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reasonCode_ == nullptr
        && this->reasonDescList_ == nullptr; };
        // reasonCode Field Functions 
        bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
        void deleteReasonCode() { this->reasonCode_ = nullptr;};
        inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
        inline RegisterStatusReasons& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


        // reasonDescList Field Functions 
        bool hasReasonDescList() const { return this->reasonDescList_ != nullptr;};
        void deleteReasonDescList() { this->reasonDescList_ = nullptr;};
        inline const vector<string> & getReasonDescList() const { DARABONBA_PTR_GET_CONST(reasonDescList_, vector<string>) };
        inline vector<string> getReasonDescList() { DARABONBA_PTR_GET(reasonDescList_, vector<string>) };
        inline RegisterStatusReasons& setReasonDescList(const vector<string> & reasonDescList) { DARABONBA_PTR_SET_VALUE(reasonDescList_, reasonDescList) };
        inline RegisterStatusReasons& setReasonDescList(vector<string> && reasonDescList) { DARABONBA_PTR_SET_RVALUE(reasonDescList_, reasonDescList) };


      protected:
        shared_ptr<string> reasonCode_ {};
        shared_ptr<vector<string>> reasonDescList_ {};
      };

      virtual bool empty() const override { return this->operatorCode_ == nullptr
        && this->operatorCompleteTime_ == nullptr && this->registerStatus_ == nullptr && this->registerStatusReasons_ == nullptr; };
      // operatorCode Field Functions 
      bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
      void deleteOperatorCode() { this->operatorCode_ = nullptr;};
      inline string getOperatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
      inline SignIspRegisterDetailList& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


      // operatorCompleteTime Field Functions 
      bool hasOperatorCompleteTime() const { return this->operatorCompleteTime_ != nullptr;};
      void deleteOperatorCompleteTime() { this->operatorCompleteTime_ = nullptr;};
      inline string getOperatorCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(operatorCompleteTime_, "") };
      inline SignIspRegisterDetailList& setOperatorCompleteTime(string operatorCompleteTime) { DARABONBA_PTR_SET_VALUE(operatorCompleteTime_, operatorCompleteTime) };


      // registerStatus Field Functions 
      bool hasRegisterStatus() const { return this->registerStatus_ != nullptr;};
      void deleteRegisterStatus() { this->registerStatus_ = nullptr;};
      inline int32_t getRegisterStatus() const { DARABONBA_PTR_GET_DEFAULT(registerStatus_, 0) };
      inline SignIspRegisterDetailList& setRegisterStatus(int32_t registerStatus) { DARABONBA_PTR_SET_VALUE(registerStatus_, registerStatus) };


      // registerStatusReasons Field Functions 
      bool hasRegisterStatusReasons() const { return this->registerStatusReasons_ != nullptr;};
      void deleteRegisterStatusReasons() { this->registerStatusReasons_ = nullptr;};
      inline const vector<SignIspRegisterDetailList::RegisterStatusReasons> & getRegisterStatusReasons() const { DARABONBA_PTR_GET_CONST(registerStatusReasons_, vector<SignIspRegisterDetailList::RegisterStatusReasons>) };
      inline vector<SignIspRegisterDetailList::RegisterStatusReasons> getRegisterStatusReasons() { DARABONBA_PTR_GET(registerStatusReasons_, vector<SignIspRegisterDetailList::RegisterStatusReasons>) };
      inline SignIspRegisterDetailList& setRegisterStatusReasons(const vector<SignIspRegisterDetailList::RegisterStatusReasons> & registerStatusReasons) { DARABONBA_PTR_SET_VALUE(registerStatusReasons_, registerStatusReasons) };
      inline SignIspRegisterDetailList& setRegisterStatusReasons(vector<SignIspRegisterDetailList::RegisterStatusReasons> && registerStatusReasons) { DARABONBA_PTR_SET_RVALUE(registerStatusReasons_, registerStatusReasons) };


    protected:
      shared_ptr<string> operatorCode_ {};
      shared_ptr<string> operatorCompleteTime_ {};
      shared_ptr<int32_t> registerStatus_ {};
      shared_ptr<vector<SignIspRegisterDetailList::RegisterStatusReasons>> registerStatusReasons_ {};
    };

    class AuditInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuditInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AuditDate, auditDate_);
        DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AuditInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditDate, auditDate_);
        DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
      };
      AuditInfo() = default ;
      AuditInfo(const AuditInfo &) = default ;
      AuditInfo(AuditInfo &&) = default ;
      AuditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuditInfo() = default ;
      AuditInfo& operator=(const AuditInfo &) = default ;
      AuditInfo& operator=(AuditInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditDate_ == nullptr
        && this->rejectInfo_ == nullptr; };
      // auditDate Field Functions 
      bool hasAuditDate() const { return this->auditDate_ != nullptr;};
      void deleteAuditDate() { this->auditDate_ = nullptr;};
      inline string getAuditDate() const { DARABONBA_PTR_GET_DEFAULT(auditDate_, "") };
      inline AuditInfo& setAuditDate(string auditDate) { DARABONBA_PTR_SET_VALUE(auditDate_, auditDate) };


      // rejectInfo Field Functions 
      bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
      void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
      inline string getRejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
      inline AuditInfo& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


    protected:
      // Audit date and time.
      shared_ptr<string> auditDate_ {};
      // Reasons for not passing the review.
      shared_ptr<string> rejectInfo_ {};
    };

    virtual bool empty() const override { return this->appIcpRecordId_ == nullptr
        && this->applyScene_ == nullptr && this->auditInfo_ == nullptr && this->authorizationLetterAuditPass_ == nullptr && this->authorizationLetterId_ == nullptr && this->code_ == nullptr
        && this->createDate_ == nullptr && this->fileUrlList_ == nullptr && this->message_ == nullptr && this->orderId_ == nullptr && this->qualificationId_ == nullptr
        && this->registerResult_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr && this->signCode_ == nullptr && this->signIspRegisterDetailList_ == nullptr
        && this->signName_ == nullptr && this->signStatus_ == nullptr && this->signTag_ == nullptr && this->signUsage_ == nullptr && this->thirdParty_ == nullptr
        && this->trademarkId_ == nullptr; };
    // appIcpRecordId Field Functions 
    bool hasAppIcpRecordId() const { return this->appIcpRecordId_ != nullptr;};
    void deleteAppIcpRecordId() { this->appIcpRecordId_ = nullptr;};
    inline int64_t getAppIcpRecordId() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordId_, 0L) };
    inline GetSmsSignResponseBody& setAppIcpRecordId(int64_t appIcpRecordId) { DARABONBA_PTR_SET_VALUE(appIcpRecordId_, appIcpRecordId) };


    // applyScene Field Functions 
    bool hasApplyScene() const { return this->applyScene_ != nullptr;};
    void deleteApplyScene() { this->applyScene_ = nullptr;};
    inline string getApplyScene() const { DARABONBA_PTR_GET_DEFAULT(applyScene_, "") };
    inline GetSmsSignResponseBody& setApplyScene(string applyScene) { DARABONBA_PTR_SET_VALUE(applyScene_, applyScene) };


    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline const GetSmsSignResponseBody::AuditInfo & getAuditInfo() const { DARABONBA_PTR_GET_CONST(auditInfo_, GetSmsSignResponseBody::AuditInfo) };
    inline GetSmsSignResponseBody::AuditInfo getAuditInfo() { DARABONBA_PTR_GET(auditInfo_, GetSmsSignResponseBody::AuditInfo) };
    inline GetSmsSignResponseBody& setAuditInfo(const GetSmsSignResponseBody::AuditInfo & auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };
    inline GetSmsSignResponseBody& setAuditInfo(GetSmsSignResponseBody::AuditInfo && auditInfo) { DARABONBA_PTR_SET_RVALUE(auditInfo_, auditInfo) };


    // authorizationLetterAuditPass Field Functions 
    bool hasAuthorizationLetterAuditPass() const { return this->authorizationLetterAuditPass_ != nullptr;};
    void deleteAuthorizationLetterAuditPass() { this->authorizationLetterAuditPass_ = nullptr;};
    inline bool getAuthorizationLetterAuditPass() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterAuditPass_, false) };
    inline GetSmsSignResponseBody& setAuthorizationLetterAuditPass(bool authorizationLetterAuditPass) { DARABONBA_PTR_SET_VALUE(authorizationLetterAuditPass_, authorizationLetterAuditPass) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t getAuthorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline GetSmsSignResponseBody& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetSmsSignResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // fileUrlList Field Functions 
    bool hasFileUrlList() const { return this->fileUrlList_ != nullptr;};
    void deleteFileUrlList() { this->fileUrlList_ = nullptr;};
    inline const vector<string> & getFileUrlList() const { DARABONBA_PTR_GET_CONST(fileUrlList_, vector<string>) };
    inline vector<string> getFileUrlList() { DARABONBA_PTR_GET(fileUrlList_, vector<string>) };
    inline GetSmsSignResponseBody& setFileUrlList(const vector<string> & fileUrlList) { DARABONBA_PTR_SET_VALUE(fileUrlList_, fileUrlList) };
    inline GetSmsSignResponseBody& setFileUrlList(vector<string> && fileUrlList) { DARABONBA_PTR_SET_RVALUE(fileUrlList_, fileUrlList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetSmsSignResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline GetSmsSignResponseBody& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // registerResult Field Functions 
    bool hasRegisterResult() const { return this->registerResult_ != nullptr;};
    void deleteRegisterResult() { this->registerResult_ = nullptr;};
    inline int32_t getRegisterResult() const { DARABONBA_PTR_GET_DEFAULT(registerResult_, 0) };
    inline GetSmsSignResponseBody& setRegisterResult(int32_t registerResult) { DARABONBA_PTR_SET_VALUE(registerResult_, registerResult) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetSmsSignResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signCode Field Functions 
    bool hasSignCode() const { return this->signCode_ != nullptr;};
    void deleteSignCode() { this->signCode_ = nullptr;};
    inline string getSignCode() const { DARABONBA_PTR_GET_DEFAULT(signCode_, "") };
    inline GetSmsSignResponseBody& setSignCode(string signCode) { DARABONBA_PTR_SET_VALUE(signCode_, signCode) };


    // signIspRegisterDetailList Field Functions 
    bool hasSignIspRegisterDetailList() const { return this->signIspRegisterDetailList_ != nullptr;};
    void deleteSignIspRegisterDetailList() { this->signIspRegisterDetailList_ = nullptr;};
    inline const vector<GetSmsSignResponseBody::SignIspRegisterDetailList> & getSignIspRegisterDetailList() const { DARABONBA_PTR_GET_CONST(signIspRegisterDetailList_, vector<GetSmsSignResponseBody::SignIspRegisterDetailList>) };
    inline vector<GetSmsSignResponseBody::SignIspRegisterDetailList> getSignIspRegisterDetailList() { DARABONBA_PTR_GET(signIspRegisterDetailList_, vector<GetSmsSignResponseBody::SignIspRegisterDetailList>) };
    inline GetSmsSignResponseBody& setSignIspRegisterDetailList(const vector<GetSmsSignResponseBody::SignIspRegisterDetailList> & signIspRegisterDetailList) { DARABONBA_PTR_SET_VALUE(signIspRegisterDetailList_, signIspRegisterDetailList) };
    inline GetSmsSignResponseBody& setSignIspRegisterDetailList(vector<GetSmsSignResponseBody::SignIspRegisterDetailList> && signIspRegisterDetailList) { DARABONBA_PTR_SET_RVALUE(signIspRegisterDetailList_, signIspRegisterDetailList) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline GetSmsSignResponseBody& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signStatus Field Functions 
    bool hasSignStatus() const { return this->signStatus_ != nullptr;};
    void deleteSignStatus() { this->signStatus_ = nullptr;};
    inline int64_t getSignStatus() const { DARABONBA_PTR_GET_DEFAULT(signStatus_, 0L) };
    inline GetSmsSignResponseBody& setSignStatus(int64_t signStatus) { DARABONBA_PTR_SET_VALUE(signStatus_, signStatus) };


    // signTag Field Functions 
    bool hasSignTag() const { return this->signTag_ != nullptr;};
    void deleteSignTag() { this->signTag_ = nullptr;};
    inline string getSignTag() const { DARABONBA_PTR_GET_DEFAULT(signTag_, "") };
    inline GetSmsSignResponseBody& setSignTag(string signTag) { DARABONBA_PTR_SET_VALUE(signTag_, signTag) };


    // signUsage Field Functions 
    bool hasSignUsage() const { return this->signUsage_ != nullptr;};
    void deleteSignUsage() { this->signUsage_ = nullptr;};
    inline string getSignUsage() const { DARABONBA_PTR_GET_DEFAULT(signUsage_, "") };
    inline GetSmsSignResponseBody& setSignUsage(string signUsage) { DARABONBA_PTR_SET_VALUE(signUsage_, signUsage) };


    // thirdParty Field Functions 
    bool hasThirdParty() const { return this->thirdParty_ != nullptr;};
    void deleteThirdParty() { this->thirdParty_ = nullptr;};
    inline bool getThirdParty() const { DARABONBA_PTR_GET_DEFAULT(thirdParty_, false) };
    inline GetSmsSignResponseBody& setThirdParty(bool thirdParty) { DARABONBA_PTR_SET_VALUE(thirdParty_, thirdParty) };


    // trademarkId Field Functions 
    bool hasTrademarkId() const { return this->trademarkId_ != nullptr;};
    void deleteTrademarkId() { this->trademarkId_ = nullptr;};
    inline int64_t getTrademarkId() const { DARABONBA_PTR_GET_DEFAULT(trademarkId_, 0L) };
    inline GetSmsSignResponseBody& setTrademarkId(int64_t trademarkId) { DARABONBA_PTR_SET_VALUE(trademarkId_, trademarkId) };


  protected:
    shared_ptr<int64_t> appIcpRecordId_ {};
    // Content of application scenarios.
    shared_ptr<string> applyScene_ {};
    // Audit information.
    shared_ptr<GetSmsSignResponseBody::AuditInfo> auditInfo_ {};
    shared_ptr<bool> authorizationLetterAuditPass_ {};
    shared_ptr<int64_t> authorizationLetterId_ {};
    // Request status code.
    // 
    // - OK indicates a successful request.
    // - For other error codes, see [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // Creation date and time of the SMS signature.
    shared_ptr<string> createDate_ {};
    // 更多资料信息，补充上传业务证明文件或业务截图文件列表。
    shared_ptr<vector<string>> fileUrlList_ {};
    // Description of the status code.
    shared_ptr<string> message_ {};
    // Work order number.
    // 
    // Used by reviewers when querying the review. You need to provide this work order number if you require expedited review.
    shared_ptr<string> orderId_ {};
    // Credential ID, the credential ID associated when applying for the signature.
    shared_ptr<int64_t> qualificationId_ {};
    shared_ptr<int32_t> registerResult_ {};
    // Explanation of the SMS signature scenario, with a maximum length of 200 characters.
    shared_ptr<string> remark_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and issue localization.
    shared_ptr<string> requestId_ {};
    // SMS signature code.
    shared_ptr<string> signCode_ {};
    shared_ptr<vector<GetSmsSignResponseBody::SignIspRegisterDetailList>> signIspRegisterDetailList_ {};
    // SMS signature name.
    shared_ptr<string> signName_ {};
    // Signature review status. Values:
    // 
    // - **0**: Under review.
    // - **1**: Approved.
    // - **2**: Review failed, please check the Reason parameter for the failure cause.
    // - **10**: Review canceled.
    shared_ptr<int64_t> signStatus_ {};
    // Signature tag indicating whether the signature is user-defined, system-provided, test, or trial. Values:
    // 
    // - 2: User-defined signature
    // - 3: System-provided signature
    // - 4: Test signature
    // - 5: Trial signature
    shared_ptr<string> signTag_ {};
    // scenarios for using signatures.
    shared_ptr<string> signUsage_ {};
    // Signature usage indication—self-use or third-party use.
    // 
    // - false: Self-use (default)
    // 
    // - true: Third-party use
    shared_ptr<bool> thirdParty_ {};
    shared_ptr<int64_t> trademarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
