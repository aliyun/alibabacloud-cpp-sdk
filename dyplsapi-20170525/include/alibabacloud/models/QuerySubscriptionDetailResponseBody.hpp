// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySubscriptionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySubscriptionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretBindDetailDTO, secretBindDetailDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySubscriptionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretBindDetailDTO, secretBindDetailDTO_);
    };
    QuerySubscriptionDetailResponseBody() = default ;
    QuerySubscriptionDetailResponseBody(const QuerySubscriptionDetailResponseBody &) = default ;
    QuerySubscriptionDetailResponseBody(QuerySubscriptionDetailResponseBody &&) = default ;
    QuerySubscriptionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySubscriptionDetailResponseBody() = default ;
    QuerySubscriptionDetailResponseBody& operator=(const QuerySubscriptionDetailResponseBody &) = default ;
    QuerySubscriptionDetailResponseBody& operator=(QuerySubscriptionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretBindDetailDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretBindDetailDTO& obj) { 
        DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
        DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
        DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(NeedRecord, needRecord_);
        DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_TO_JSON(PhoneNoB, phoneNoB_);
        DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubsId, subsId_);
      };
      friend void from_json(const Darabonba::Json& j, SecretBindDetailDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
        DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
        DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(NeedRecord, needRecord_);
        DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_FROM_JSON(PhoneNoB, phoneNoB_);
        DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
      };
      SecretBindDetailDTO() = default ;
      SecretBindDetailDTO(const SecretBindDetailDTO &) = default ;
      SecretBindDetailDTO(SecretBindDetailDTO &&) = default ;
      SecretBindDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretBindDetailDTO() = default ;
      SecretBindDetailDTO& operator=(const SecretBindDetailDTO &) = default ;
      SecretBindDetailDTO& operator=(SecretBindDetailDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && this->ASRStatus_ == nullptr && this->callRestrict_ == nullptr && this->expireDate_ == nullptr && this->extension_ == nullptr && this->gmtCreate_ == nullptr
        && this->groupId_ == nullptr && this->needRecord_ == nullptr && this->phoneNoA_ == nullptr && this->phoneNoB_ == nullptr && this->phoneNoX_ == nullptr
        && this->status_ == nullptr && this->subsId_ == nullptr; };
      // ASRModelId Field Functions 
      bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
      void deleteASRModelId() { this->ASRModelId_ = nullptr;};
      inline string getASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
      inline SecretBindDetailDTO& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


      // ASRStatus Field Functions 
      bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
      void deleteASRStatus() { this->ASRStatus_ = nullptr;};
      inline bool getASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
      inline SecretBindDetailDTO& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


      // callRestrict Field Functions 
      bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
      void deleteCallRestrict() { this->callRestrict_ = nullptr;};
      inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
      inline SecretBindDetailDTO& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline SecretBindDetailDTO& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline SecretBindDetailDTO& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline SecretBindDetailDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline SecretBindDetailDTO& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // needRecord Field Functions 
      bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
      void deleteNeedRecord() { this->needRecord_ = nullptr;};
      inline bool getNeedRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
      inline SecretBindDetailDTO& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


      // phoneNoA Field Functions 
      bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
      void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
      inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
      inline SecretBindDetailDTO& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


      // phoneNoB Field Functions 
      bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
      void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
      inline string getPhoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
      inline SecretBindDetailDTO& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


      // phoneNoX Field Functions 
      bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
      void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
      inline string getPhoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
      inline SecretBindDetailDTO& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline SecretBindDetailDTO& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subsId Field Functions 
      bool hasSubsId() const { return this->subsId_ != nullptr;};
      void deleteSubsId() { this->subsId_ = nullptr;};
      inline string getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
      inline SecretBindDetailDTO& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


    protected:
      // The ASR model ID. Valid values:
      // 
      // - General-Telephone-Mandarin Chinese model ID: 7ee372834d2f4cc7ac0d0ab2d0ae1aac
      // 
      // - General-Telephone-Cantonese Chinese model ID: 9b4afe3d224e4fa3bf963697113e2f77
      // 
      // - General-Telephone-Regional Accent model ID: 3655a6cb94764145a1f9a38a3c3b3b4b
      shared_ptr<string> ASRModelId_ {};
      // The Automatic Speech Recognition (ASR) status. Valid values:
      // 
      // - **false**: Disabled.
      // - **true**: Enabled.
      shared_ptr<bool> ASRStatus_ {};
      // The one-way call restriction status. This parameter is not returned if no one-way call restriction is configured. Valid values:
      // - **CONTROL_AX_DISABLE**: Phone number A cannot call phone number X.
      // - **CONTROL_BX_DISABLE**: Phone number B cannot call phone number X.
      shared_ptr<string> callRestrict_ {};
      // The expiration time of the binding relationship, in the format of YYYY-MM-DD HH:mm:ss.
      shared_ptr<string> expireDate_ {};
      // The extension number in the AXG extension binding.
      shared_ptr<string> extension_ {};
      // The time when the binding relationship was created.
      shared_ptr<string> gmtCreate_ {};
      // The ID of the number group G (GID) in the binding relationship.
      shared_ptr<int64_t> groupId_ {};
      // Indicates whether all calls generated by this binding relationship are recorded. Valid values:
      // - **false**: Calls are not recorded.
      // - **true**: Calls are recorded.
      shared_ptr<bool> needRecord_ {};
      // The phone number A in the binding relationship.
      shared_ptr<string> phoneNoA_ {};
      // The phone number B in the binding relationship.
      shared_ptr<string> phoneNoB_ {};
      // The private number in the binding relationship, which is the X number.
      shared_ptr<string> phoneNoX_ {};
      // The status of the binding relationship. Valid values:
      // - **0**: Expired.
      // - **1**: Active.
      shared_ptr<int64_t> status_ {};
      // The binding relationship ID.
      shared_ptr<string> subsId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretBindDetailDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySubscriptionDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySubscriptionDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySubscriptionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretBindDetailDTO Field Functions 
    bool hasSecretBindDetailDTO() const { return this->secretBindDetailDTO_ != nullptr;};
    void deleteSecretBindDetailDTO() { this->secretBindDetailDTO_ = nullptr;};
    inline const QuerySubscriptionDetailResponseBody::SecretBindDetailDTO & getSecretBindDetailDTO() const { DARABONBA_PTR_GET_CONST(secretBindDetailDTO_, QuerySubscriptionDetailResponseBody::SecretBindDetailDTO) };
    inline QuerySubscriptionDetailResponseBody::SecretBindDetailDTO getSecretBindDetailDTO() { DARABONBA_PTR_GET(secretBindDetailDTO_, QuerySubscriptionDetailResponseBody::SecretBindDetailDTO) };
    inline QuerySubscriptionDetailResponseBody& setSecretBindDetailDTO(const QuerySubscriptionDetailResponseBody::SecretBindDetailDTO & secretBindDetailDTO) { DARABONBA_PTR_SET_VALUE(secretBindDetailDTO_, secretBindDetailDTO) };
    inline QuerySubscriptionDetailResponseBody& setSecretBindDetailDTO(QuerySubscriptionDetailResponseBody::SecretBindDetailDTO && secretBindDetailDTO) { DARABONBA_PTR_SET_RVALUE(secretBindDetailDTO_, secretBindDetailDTO) };


  protected:
    // The request status code.
    // * OK indicates that the request was successful.
    // * For other error codes, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data structure returned when the API call is successful.
    shared_ptr<QuerySubscriptionDetailResponseBody::SecretBindDetailDTO> secretBindDetailDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
