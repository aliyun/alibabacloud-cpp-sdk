// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGAPPLYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGAPPLYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTagApplyRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagApplyRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagApplyRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTagApplyRuleResponseBody() = default ;
    QueryTagApplyRuleResponseBody(const QueryTagApplyRuleResponseBody &) = default ;
    QueryTagApplyRuleResponseBody(QueryTagApplyRuleResponseBody &&) = default ;
    QueryTagApplyRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagApplyRuleResponseBody() = default ;
    QueryTagApplyRuleResponseBody& operator=(const QueryTagApplyRuleResponseBody &) = default ;
    QueryTagApplyRuleResponseBody& operator=(QueryTagApplyRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyMaterialDesc, applyMaterialDesc_);
        DARABONBA_PTR_TO_JSON(AutoAudit, autoAudit_);
        DARABONBA_PTR_TO_JSON(ChargingStandardLink, chargingStandardLink_);
        DARABONBA_PTR_TO_JSON(EncryptedQuery, encryptedQuery_);
        DARABONBA_PTR_TO_JSON(NeedApplyMaterial, needApplyMaterial_);
        DARABONBA_PTR_TO_JSON(SlaLink, slaLink_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyMaterialDesc, applyMaterialDesc_);
        DARABONBA_PTR_FROM_JSON(AutoAudit, autoAudit_);
        DARABONBA_PTR_FROM_JSON(ChargingStandardLink, chargingStandardLink_);
        DARABONBA_PTR_FROM_JSON(EncryptedQuery, encryptedQuery_);
        DARABONBA_PTR_FROM_JSON(NeedApplyMaterial, needApplyMaterial_);
        DARABONBA_PTR_FROM_JSON(SlaLink, slaLink_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyMaterialDesc_ == nullptr
        && this->autoAudit_ == nullptr && this->chargingStandardLink_ == nullptr && this->encryptedQuery_ == nullptr && this->needApplyMaterial_ == nullptr && this->slaLink_ == nullptr; };
      // applyMaterialDesc Field Functions 
      bool hasApplyMaterialDesc() const { return this->applyMaterialDesc_ != nullptr;};
      void deleteApplyMaterialDesc() { this->applyMaterialDesc_ = nullptr;};
      inline string getApplyMaterialDesc() const { DARABONBA_PTR_GET_DEFAULT(applyMaterialDesc_, "") };
      inline Data& setApplyMaterialDesc(string applyMaterialDesc) { DARABONBA_PTR_SET_VALUE(applyMaterialDesc_, applyMaterialDesc) };


      // autoAudit Field Functions 
      bool hasAutoAudit() const { return this->autoAudit_ != nullptr;};
      void deleteAutoAudit() { this->autoAudit_ = nullptr;};
      inline int64_t getAutoAudit() const { DARABONBA_PTR_GET_DEFAULT(autoAudit_, 0L) };
      inline Data& setAutoAudit(int64_t autoAudit) { DARABONBA_PTR_SET_VALUE(autoAudit_, autoAudit) };


      // chargingStandardLink Field Functions 
      bool hasChargingStandardLink() const { return this->chargingStandardLink_ != nullptr;};
      void deleteChargingStandardLink() { this->chargingStandardLink_ = nullptr;};
      inline string getChargingStandardLink() const { DARABONBA_PTR_GET_DEFAULT(chargingStandardLink_, "") };
      inline Data& setChargingStandardLink(string chargingStandardLink) { DARABONBA_PTR_SET_VALUE(chargingStandardLink_, chargingStandardLink) };


      // encryptedQuery Field Functions 
      bool hasEncryptedQuery() const { return this->encryptedQuery_ != nullptr;};
      void deleteEncryptedQuery() { this->encryptedQuery_ = nullptr;};
      inline int64_t getEncryptedQuery() const { DARABONBA_PTR_GET_DEFAULT(encryptedQuery_, 0L) };
      inline Data& setEncryptedQuery(int64_t encryptedQuery) { DARABONBA_PTR_SET_VALUE(encryptedQuery_, encryptedQuery) };


      // needApplyMaterial Field Functions 
      bool hasNeedApplyMaterial() const { return this->needApplyMaterial_ != nullptr;};
      void deleteNeedApplyMaterial() { this->needApplyMaterial_ = nullptr;};
      inline int64_t getNeedApplyMaterial() const { DARABONBA_PTR_GET_DEFAULT(needApplyMaterial_, 0L) };
      inline Data& setNeedApplyMaterial(int64_t needApplyMaterial) { DARABONBA_PTR_SET_VALUE(needApplyMaterial_, needApplyMaterial) };


      // slaLink Field Functions 
      bool hasSlaLink() const { return this->slaLink_ != nullptr;};
      void deleteSlaLink() { this->slaLink_ = nullptr;};
      inline string getSlaLink() const { DARABONBA_PTR_GET_DEFAULT(slaLink_, "") };
      inline Data& setSlaLink(string slaLink) { DARABONBA_PTR_SET_VALUE(slaLink_, slaLink) };


    protected:
      // The requirements for application materials.
      shared_ptr<string> applyMaterialDesc_ {};
      // Indicates whether the application is automatically approved.
      shared_ptr<int64_t> autoAudit_ {};
      // The URL for the billing documentation.
      shared_ptr<string> chargingStandardLink_ {};
      // indicates whether encrypted queries are supported.
      shared_ptr<int64_t> encryptedQuery_ {};
      // Indicates whether application materials are required.
      shared_ptr<int64_t> needApplyMaterial_ {};
      // The URL for the service agreement.
      shared_ptr<string> slaLink_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTagApplyRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTagApplyRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTagApplyRuleResponseBody::Data) };
    inline QueryTagApplyRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTagApplyRuleResponseBody::Data) };
    inline QueryTagApplyRuleResponseBody& setData(const QueryTagApplyRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTagApplyRuleResponseBody& setData(QueryTagApplyRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTagApplyRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTagApplyRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTagApplyRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. **OK** indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryTagApplyRuleResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
