// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXCHANGEENTITLEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXCHANGEENTITLEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class ExchangeEntitlementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExchangeEntitlementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExchangeEntitlementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ExchangeEntitlementResponseBody() = default ;
    ExchangeEntitlementResponseBody(const ExchangeEntitlementResponseBody &) = default ;
    ExchangeEntitlementResponseBody(ExchangeEntitlementResponseBody &&) = default ;
    ExchangeEntitlementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExchangeEntitlementResponseBody() = default ;
    ExchangeEntitlementResponseBody& operator=(const ExchangeEntitlementResponseBody &) = default ;
    ExchangeEntitlementResponseBody& operator=(ExchangeEntitlementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(effectiveAt, effectiveAt_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
        DARABONBA_PTR_TO_JSON(keyHash, keyHash_);
        DARABONBA_PTR_TO_JSON(redemptionOrderNo, redemptionOrderNo_);
        DARABONBA_PTR_TO_JSON(reused, reused_);
        DARABONBA_PTR_TO_JSON(template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(effectiveAt, effectiveAt_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
        DARABONBA_PTR_FROM_JSON(keyHash, keyHash_);
        DARABONBA_PTR_FROM_JSON(redemptionOrderNo, redemptionOrderNo_);
        DARABONBA_PTR_FROM_JSON(reused, reused_);
        DARABONBA_PTR_FROM_JSON(template, template_);
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
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(templateId, templateId_);
          DARABONBA_PTR_TO_JSON(templateName, templateName_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(templateId, templateId_);
          DARABONBA_PTR_FROM_JSON(templateName, templateName_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Template() = default ;
        Template(const Template &) = default ;
        Template(Template &&) = default ;
        Template(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Template() = default ;
        Template& operator=(const Template &) = default ;
        Template& operator=(Template &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedModels_ == nullptr
        && this->quotaLimit_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr; };
        // allowedModels Field Functions 
        bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
        void deleteAllowedModels() { this->allowedModels_ = nullptr;};
        inline const vector<string> & getAllowedModels() const { DARABONBA_PTR_GET_CONST(allowedModels_, vector<string>) };
        inline vector<string> getAllowedModels() { DARABONBA_PTR_GET(allowedModels_, vector<string>) };
        inline Template& setAllowedModels(const vector<string> & allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };
        inline Template& setAllowedModels(vector<string> && allowedModels) { DARABONBA_PTR_SET_RVALUE(allowedModels_, allowedModels) };


        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
        inline Template& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline Template& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Template& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> allowedModels_ {};
        shared_ptr<int64_t> quotaLimit_ {};
        shared_ptr<int64_t> templateId_ {};
        shared_ptr<string> templateName_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->effectiveAt_ == nullptr && this->endpoint_ == nullptr && this->expireAt_ == nullptr && this->keyHash_ == nullptr && this->redemptionOrderNo_ == nullptr
        && this->reused_ == nullptr && this->template_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Data& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // effectiveAt Field Functions 
      bool hasEffectiveAt() const { return this->effectiveAt_ != nullptr;};
      void deleteEffectiveAt() { this->effectiveAt_ = nullptr;};
      inline string getEffectiveAt() const { DARABONBA_PTR_GET_DEFAULT(effectiveAt_, "") };
      inline Data& setEffectiveAt(string effectiveAt) { DARABONBA_PTR_SET_VALUE(effectiveAt_, effectiveAt) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // expireAt Field Functions 
      bool hasExpireAt() const { return this->expireAt_ != nullptr;};
      void deleteExpireAt() { this->expireAt_ = nullptr;};
      inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
      inline Data& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


      // keyHash Field Functions 
      bool hasKeyHash() const { return this->keyHash_ != nullptr;};
      void deleteKeyHash() { this->keyHash_ = nullptr;};
      inline string getKeyHash() const { DARABONBA_PTR_GET_DEFAULT(keyHash_, "") };
      inline Data& setKeyHash(string keyHash) { DARABONBA_PTR_SET_VALUE(keyHash_, keyHash) };


      // redemptionOrderNo Field Functions 
      bool hasRedemptionOrderNo() const { return this->redemptionOrderNo_ != nullptr;};
      void deleteRedemptionOrderNo() { this->redemptionOrderNo_ = nullptr;};
      inline string getRedemptionOrderNo() const { DARABONBA_PTR_GET_DEFAULT(redemptionOrderNo_, "") };
      inline Data& setRedemptionOrderNo(string redemptionOrderNo) { DARABONBA_PTR_SET_VALUE(redemptionOrderNo_, redemptionOrderNo) };


      // reused Field Functions 
      bool hasReused() const { return this->reused_ != nullptr;};
      void deleteReused() { this->reused_ = nullptr;};
      inline bool getReused() const { DARABONBA_PTR_GET_DEFAULT(reused_, false) };
      inline Data& setReused(bool reused) { DARABONBA_PTR_SET_VALUE(reused_, reused) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Data::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Data::Template) };
      inline Data::Template getTemplate() { DARABONBA_PTR_GET(template_, Data::Template) };
      inline Data& setTemplate(const Data::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Data& setTemplate(Data::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> effectiveAt_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> expireAt_ {};
      shared_ptr<string> keyHash_ {};
      shared_ptr<string> redemptionOrderNo_ {};
      shared_ptr<bool> reused_ {};
      shared_ptr<Data::Template> template_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExchangeEntitlementResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExchangeEntitlementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExchangeEntitlementResponseBody::Data) };
    inline ExchangeEntitlementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExchangeEntitlementResponseBody::Data) };
    inline ExchangeEntitlementResponseBody& setData(const ExchangeEntitlementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExchangeEntitlementResponseBody& setData(ExchangeEntitlementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExchangeEntitlementResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline ExchangeEntitlementResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExchangeEntitlementResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ExchangeEntitlementResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
