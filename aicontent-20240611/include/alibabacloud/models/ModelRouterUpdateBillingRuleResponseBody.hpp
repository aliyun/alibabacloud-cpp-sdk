// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEBILLINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEBILLINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterUpdateBillingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateBillingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateBillingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterUpdateBillingRuleResponseBody() = default ;
    ModelRouterUpdateBillingRuleResponseBody(const ModelRouterUpdateBillingRuleResponseBody &) = default ;
    ModelRouterUpdateBillingRuleResponseBody(ModelRouterUpdateBillingRuleResponseBody &&) = default ;
    ModelRouterUpdateBillingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateBillingRuleResponseBody() = default ;
    ModelRouterUpdateBillingRuleResponseBody& operator=(const ModelRouterUpdateBillingRuleResponseBody &) = default ;
    ModelRouterUpdateBillingRuleResponseBody& operator=(ModelRouterUpdateBillingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(billingType, billingType_);
        DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
        DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_ANY_TO_JSON(pricingConfig, pricingConfig_);
        DARABONBA_PTR_TO_JSON(symbol, symbol_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(billingType, billingType_);
        DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
        DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_ANY_FROM_JSON(pricingConfig, pricingConfig_);
        DARABONBA_PTR_FROM_JSON(symbol, symbol_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->billingType_ == nullptr
        && this->deleteTag_ == nullptr && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelType_ == nullptr
        && this->pricingConfig_ == nullptr && this->symbol_ == nullptr && this->version_ == nullptr; };
      // billingType Field Functions 
      bool hasBillingType() const { return this->billingType_ != nullptr;};
      void deleteBillingType() { this->billingType_ = nullptr;};
      inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
      inline Data& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


      // deleteTag Field Functions 
      bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
      void deleteDeleteTag() { this->deleteTag_ = nullptr;};
      inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
      inline Data& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Data& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modelCode Field Functions 
      bool hasModelCode() const { return this->modelCode_ != nullptr;};
      void deleteModelCode() { this->modelCode_ = nullptr;};
      inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
      inline Data& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
      inline Data& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Data& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // pricingConfig Field Functions 
      bool hasPricingConfig() const { return this->pricingConfig_ != nullptr;};
      void deletePricingConfig() { this->pricingConfig_ = nullptr;};
      inline       const Darabonba::Json & getPricingConfig() const { DARABONBA_GET(pricingConfig_) };
      Darabonba::Json & getPricingConfig() { DARABONBA_GET(pricingConfig_) };
      inline Data& setPricingConfig(const Darabonba::Json & pricingConfig) { DARABONBA_SET_VALUE(pricingConfig_, pricingConfig) };
      inline Data& setPricingConfig(Darabonba::Json && pricingConfig) { DARABONBA_SET_RVALUE(pricingConfig_, pricingConfig) };


      // symbol Field Functions 
      bool hasSymbol() const { return this->symbol_ != nullptr;};
      void deleteSymbol() { this->symbol_ = nullptr;};
      inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
      inline Data& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Data& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> billingType_ {};
      shared_ptr<int32_t> deleteTag_ {};
      shared_ptr<string> effectiveTime_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> modelCode_ {};
      shared_ptr<int64_t> modelId_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelType_ {};
      Darabonba::Json pricingConfig_ {};
      shared_ptr<string> symbol_ {};
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelRouterUpdateBillingRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelRouterUpdateBillingRuleResponseBody::Data) };
    inline ModelRouterUpdateBillingRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelRouterUpdateBillingRuleResponseBody::Data) };
    inline ModelRouterUpdateBillingRuleResponseBody& setData(const ModelRouterUpdateBillingRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterUpdateBillingRuleResponseBody& setData(ModelRouterUpdateBillingRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterUpdateBillingRuleResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterUpdateBillingRuleResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterUpdateBillingRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterUpdateBillingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterUpdateBillingRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ModelRouterUpdateBillingRuleResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
