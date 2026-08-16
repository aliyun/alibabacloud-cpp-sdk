// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListLlmTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLlmTemplatesResponseBody() = default ;
    ListLlmTemplatesResponseBody(const ListLlmTemplatesResponseBody &) = default ;
    ListLlmTemplatesResponseBody(ListLlmTemplatesResponseBody &&) = default ;
    ListLlmTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLlmTemplatesResponseBody() = default ;
    ListLlmTemplatesResponseBody& operator=(const ListLlmTemplatesResponseBody &) = default ;
    ListLlmTemplatesResponseBody& operator=(ListLlmTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreditMultiplier, creditMultiplier_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(InferenceMetadata, inferenceMetadata_);
        DARABONBA_PTR_TO_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_TO_JSON(LlmTemplateId, llmTemplateId_);
        DARABONBA_ANY_TO_JSON(ModelInfo, modelInfo_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Prices, prices_);
        DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
        DARABONBA_PTR_TO_JSON(PublishedTime, publishedTime_);
        DARABONBA_PTR_TO_JSON(RefScope, refScope_);
        DARABONBA_PTR_TO_JSON(RoutePolicyCount, routePolicyCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreditMultiplier, creditMultiplier_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(InferenceMetadata, inferenceMetadata_);
        DARABONBA_PTR_FROM_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_FROM_JSON(LlmTemplateId, llmTemplateId_);
        DARABONBA_ANY_FROM_JSON(ModelInfo, modelInfo_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Prices, prices_);
        DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
        DARABONBA_PTR_FROM_JSON(PublishedTime, publishedTime_);
        DARABONBA_PTR_FROM_JSON(RefScope, refScope_);
        DARABONBA_PTR_FROM_JSON(RoutePolicyCount, routePolicyCount_);
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
      class Prices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Prices& obj) { 
          DARABONBA_PTR_TO_JSON(Prices, prices_);
          DARABONBA_PTR_TO_JSON(RangeName, rangeName_);
        };
        friend void from_json(const Darabonba::Json& j, Prices& obj) { 
          DARABONBA_PTR_FROM_JSON(Prices, prices_);
          DARABONBA_PTR_FROM_JSON(RangeName, rangeName_);
        };
        Prices() = default ;
        Prices(const Prices &) = default ;
        Prices(Prices &&) = default ;
        Prices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Prices() = default ;
        Prices& operator=(const Prices &) = default ;
        Prices& operator=(Prices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PricesItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PricesItem& obj) { 
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(PriceName, priceName_);
            DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
          };
          friend void from_json(const Darabonba::Json& j, PricesItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(PriceName, priceName_);
            DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
          };
          PricesItem() = default ;
          PricesItem(const PricesItem &) = default ;
          PricesItem(PricesItem &&) = default ;
          PricesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PricesItem() = default ;
          PricesItem& operator=(const PricesItem &) = default ;
          PricesItem& operator=(PricesItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->price_ == nullptr
        && this->priceName_ == nullptr && this->priceUnit_ == nullptr; };
          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
          inline PricesItem& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // priceName Field Functions 
          bool hasPriceName() const { return this->priceName_ != nullptr;};
          void deletePriceName() { this->priceName_ = nullptr;};
          inline string getPriceName() const { DARABONBA_PTR_GET_DEFAULT(priceName_, "") };
          inline PricesItem& setPriceName(string priceName) { DARABONBA_PTR_SET_VALUE(priceName_, priceName) };


          // priceUnit Field Functions 
          bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
          void deletePriceUnit() { this->priceUnit_ = nullptr;};
          inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
          inline PricesItem& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


        protected:
          // The price in string format, such as 0.2.
          shared_ptr<string> price_ {};
          // The price name, such as Input, Output, or Image Generation.
          shared_ptr<string> priceName_ {};
          // The price unit, such as per image or per thousand tokens.
          shared_ptr<string> priceUnit_ {};
        };

        virtual bool empty() const override { return this->prices_ == nullptr
        && this->rangeName_ == nullptr; };
        // prices Field Functions 
        bool hasPrices() const { return this->prices_ != nullptr;};
        void deletePrices() { this->prices_ = nullptr;};
        inline const vector<Prices::PricesItem> & getPrices() const { DARABONBA_PTR_GET_CONST(prices_, vector<Prices::PricesItem>) };
        inline vector<Prices::PricesItem> getPrices() { DARABONBA_PTR_GET(prices_, vector<Prices::PricesItem>) };
        inline Prices& setPrices(const vector<Prices::PricesItem> & prices) { DARABONBA_PTR_SET_VALUE(prices_, prices) };
        inline Prices& setPrices(vector<Prices::PricesItem> && prices) { DARABONBA_PTR_SET_RVALUE(prices_, prices) };


        // rangeName Field Functions 
        bool hasRangeName() const { return this->rangeName_ != nullptr;};
        void deleteRangeName() { this->rangeName_ = nullptr;};
        inline string getRangeName() const { DARABONBA_PTR_GET_DEFAULT(rangeName_, "") };
        inline Prices& setRangeName(string rangeName) { DARABONBA_PTR_SET_VALUE(rangeName_, rangeName) };


      protected:
        // The list of prices within the range.
        shared_ptr<vector<Prices::PricesItem>> prices_ {};
        // The range name, such as Default or 0-1M tokens.
        shared_ptr<string> rangeName_ {};
      };

      class InferenceMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InferenceMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(RequestModality, requestModality_);
          DARABONBA_PTR_TO_JSON(ResponseModality, responseModality_);
        };
        friend void from_json(const Darabonba::Json& j, InferenceMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestModality, requestModality_);
          DARABONBA_PTR_FROM_JSON(ResponseModality, responseModality_);
        };
        InferenceMetadata() = default ;
        InferenceMetadata(const InferenceMetadata &) = default ;
        InferenceMetadata(InferenceMetadata &&) = default ;
        InferenceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InferenceMetadata() = default ;
        InferenceMetadata& operator=(const InferenceMetadata &) = default ;
        InferenceMetadata& operator=(InferenceMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestModality_ == nullptr
        && this->responseModality_ == nullptr; };
        // requestModality Field Functions 
        bool hasRequestModality() const { return this->requestModality_ != nullptr;};
        void deleteRequestModality() { this->requestModality_ = nullptr;};
        inline const vector<string> & getRequestModality() const { DARABONBA_PTR_GET_CONST(requestModality_, vector<string>) };
        inline vector<string> getRequestModality() { DARABONBA_PTR_GET(requestModality_, vector<string>) };
        inline InferenceMetadata& setRequestModality(const vector<string> & requestModality) { DARABONBA_PTR_SET_VALUE(requestModality_, requestModality) };
        inline InferenceMetadata& setRequestModality(vector<string> && requestModality) { DARABONBA_PTR_SET_RVALUE(requestModality_, requestModality) };


        // responseModality Field Functions 
        bool hasResponseModality() const { return this->responseModality_ != nullptr;};
        void deleteResponseModality() { this->responseModality_ = nullptr;};
        inline const vector<string> & getResponseModality() const { DARABONBA_PTR_GET_CONST(responseModality_, vector<string>) };
        inline vector<string> getResponseModality() { DARABONBA_PTR_GET(responseModality_, vector<string>) };
        inline InferenceMetadata& setResponseModality(const vector<string> & responseModality) { DARABONBA_PTR_SET_VALUE(responseModality_, responseModality) };
        inline InferenceMetadata& setResponseModality(vector<string> && responseModality) { DARABONBA_PTR_SET_RVALUE(responseModality_, responseModality) };


      protected:
        // The list of request modalities, such as Text, Image, and Audio.
        shared_ptr<vector<string>> requestModality_ {};
        // The list of response modalities, such as Text, Image, and Audio.
        shared_ptr<vector<string>> responseModality_ {};
      };

      class CreditMultiplier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreditMultiplier& obj) { 
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
        };
        friend void from_json(const Darabonba::Json& j, CreditMultiplier& obj) { 
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
        };
        CreditMultiplier() = default ;
        CreditMultiplier(const CreditMultiplier &) = default ;
        CreditMultiplier(CreditMultiplier &&) = default ;
        CreditMultiplier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreditMultiplier() = default ;
        CreditMultiplier& operator=(const CreditMultiplier &) = default ;
        CreditMultiplier& operator=(CreditMultiplier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr; };
        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline float getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
        inline CreditMultiplier& setMax(float max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline float getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
        inline CreditMultiplier& setMin(float min) { DARABONBA_PTR_SET_VALUE(min_, min) };


      protected:
        // The maximum multiplier. A null value indicates no upper limit. For example, Min=1 with Max as null is displayed as 1x and above.
        shared_ptr<float> max_ {};
        // The minimum multiplier. When equal to Max, it represents a fixed multiplier. For example, Min=Max=2 is displayed as 2x.
        shared_ptr<float> min_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->creditMultiplier_ == nullptr && this->description_ == nullptr && this->features_ == nullptr && this->inferenceMetadata_ == nullptr && this->isDefaultModel_ == nullptr
        && this->llmCode_ == nullptr && this->llmTemplateId_ == nullptr && this->modelInfo_ == nullptr && this->name_ == nullptr && this->prices_ == nullptr
        && this->providerTemplateId_ == nullptr && this->publishedTime_ == nullptr && this->refScope_ == nullptr && this->routePolicyCount_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // creditMultiplier Field Functions 
      bool hasCreditMultiplier() const { return this->creditMultiplier_ != nullptr;};
      void deleteCreditMultiplier() { this->creditMultiplier_ = nullptr;};
      inline const Data::CreditMultiplier & getCreditMultiplier() const { DARABONBA_PTR_GET_CONST(creditMultiplier_, Data::CreditMultiplier) };
      inline Data::CreditMultiplier getCreditMultiplier() { DARABONBA_PTR_GET(creditMultiplier_, Data::CreditMultiplier) };
      inline Data& setCreditMultiplier(const Data::CreditMultiplier & creditMultiplier) { DARABONBA_PTR_SET_VALUE(creditMultiplier_, creditMultiplier) };
      inline Data& setCreditMultiplier(Data::CreditMultiplier && creditMultiplier) { DARABONBA_PTR_SET_RVALUE(creditMultiplier_, creditMultiplier) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
      inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
      inline Data& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline Data& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // inferenceMetadata Field Functions 
      bool hasInferenceMetadata() const { return this->inferenceMetadata_ != nullptr;};
      void deleteInferenceMetadata() { this->inferenceMetadata_ = nullptr;};
      inline const Data::InferenceMetadata & getInferenceMetadata() const { DARABONBA_PTR_GET_CONST(inferenceMetadata_, Data::InferenceMetadata) };
      inline Data::InferenceMetadata getInferenceMetadata() { DARABONBA_PTR_GET(inferenceMetadata_, Data::InferenceMetadata) };
      inline Data& setInferenceMetadata(const Data::InferenceMetadata & inferenceMetadata) { DARABONBA_PTR_SET_VALUE(inferenceMetadata_, inferenceMetadata) };
      inline Data& setInferenceMetadata(Data::InferenceMetadata && inferenceMetadata) { DARABONBA_PTR_SET_RVALUE(inferenceMetadata_, inferenceMetadata) };


      // isDefaultModel Field Functions 
      bool hasIsDefaultModel() const { return this->isDefaultModel_ != nullptr;};
      void deleteIsDefaultModel() { this->isDefaultModel_ = nullptr;};
      inline bool getIsDefaultModel() const { DARABONBA_PTR_GET_DEFAULT(isDefaultModel_, false) };
      inline Data& setIsDefaultModel(bool isDefaultModel) { DARABONBA_PTR_SET_VALUE(isDefaultModel_, isDefaultModel) };


      // llmCode Field Functions 
      bool hasLlmCode() const { return this->llmCode_ != nullptr;};
      void deleteLlmCode() { this->llmCode_ = nullptr;};
      inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
      inline Data& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


      // llmTemplateId Field Functions 
      bool hasLlmTemplateId() const { return this->llmTemplateId_ != nullptr;};
      void deleteLlmTemplateId() { this->llmTemplateId_ = nullptr;};
      inline string getLlmTemplateId() const { DARABONBA_PTR_GET_DEFAULT(llmTemplateId_, "") };
      inline Data& setLlmTemplateId(string llmTemplateId) { DARABONBA_PTR_SET_VALUE(llmTemplateId_, llmTemplateId) };


      // modelInfo Field Functions 
      bool hasModelInfo() const { return this->modelInfo_ != nullptr;};
      void deleteModelInfo() { this->modelInfo_ = nullptr;};
      inline       const Darabonba::Json & getModelInfo() const { DARABONBA_GET(modelInfo_) };
      Darabonba::Json & getModelInfo() { DARABONBA_GET(modelInfo_) };
      inline Data& setModelInfo(const Darabonba::Json & modelInfo) { DARABONBA_SET_VALUE(modelInfo_, modelInfo) };
      inline Data& setModelInfo(Darabonba::Json && modelInfo) { DARABONBA_SET_RVALUE(modelInfo_, modelInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // prices Field Functions 
      bool hasPrices() const { return this->prices_ != nullptr;};
      void deletePrices() { this->prices_ = nullptr;};
      inline const vector<Data::Prices> & getPrices() const { DARABONBA_PTR_GET_CONST(prices_, vector<Data::Prices>) };
      inline vector<Data::Prices> getPrices() { DARABONBA_PTR_GET(prices_, vector<Data::Prices>) };
      inline Data& setPrices(const vector<Data::Prices> & prices) { DARABONBA_PTR_SET_VALUE(prices_, prices) };
      inline Data& setPrices(vector<Data::Prices> && prices) { DARABONBA_PTR_SET_RVALUE(prices_, prices) };


      // providerTemplateId Field Functions 
      bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
      void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
      inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
      inline Data& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


      // publishedTime Field Functions 
      bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
      void deletePublishedTime() { this->publishedTime_ = nullptr;};
      inline string getPublishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
      inline Data& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


      // refScope Field Functions 
      bool hasRefScope() const { return this->refScope_ != nullptr;};
      void deleteRefScope() { this->refScope_ = nullptr;};
      inline string getRefScope() const { DARABONBA_PTR_GET_DEFAULT(refScope_, "") };
      inline Data& setRefScope(string refScope) { DARABONBA_PTR_SET_VALUE(refScope_, refScope) };


      // routePolicyCount Field Functions 
      bool hasRoutePolicyCount() const { return this->routePolicyCount_ != nullptr;};
      void deleteRoutePolicyCount() { this->routePolicyCount_ = nullptr;};
      inline int32_t getRoutePolicyCount() const { DARABONBA_PTR_GET_DEFAULT(routePolicyCount_, 0) };
      inline Data& setRoutePolicyCount(int32_t routePolicyCount) { DARABONBA_PTR_SET_VALUE(routePolicyCount_, routePolicyCount) };


    protected:
      // The model configuration JSON object.
      shared_ptr<string> config_ {};
      // The credit consumption multiplier (rate). A null value indicates that the model does not participate in credit-based billing.
      shared_ptr<Data::CreditMultiplier> creditMultiplier_ {};
      // The template description.
      shared_ptr<string> description_ {};
      // The list of model features, such as function-calling, web-search, and structured-outputs.
      shared_ptr<vector<string>> features_ {};
      // The inference metadata, including request and response modalities.
      shared_ptr<Data::InferenceMetadata> inferenceMetadata_ {};
      // Indicates whether this is the default model under the associated model group.
      shared_ptr<bool> isDefaultModel_ {};
      // The model code.
      shared_ptr<string> llmCode_ {};
      // The model template ID.
      shared_ptr<string> llmTemplateId_ {};
      // The model information, including context window size and maximum input/output tokens.
      Darabonba::Json modelInfo_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The list of price information.
      shared_ptr<vector<Data::Prices>> prices_ {};
      // The ID of the model provider template.
      shared_ptr<string> providerTemplateId_ {};
      // The publish time in ISO 8601 format, such as 2026-03-04T06:25:17.000+00:00.
      shared_ptr<string> publishedTime_ {};
      // The authorization scope of the associated model group. Valid values: ALL_USER (all users), USER_MIXED (specified users and user groups), RESOURCE_MIXED (specified resources). Returned only when SmartModel is set to true.
      shared_ptr<string> refScope_ {};
      // The number of route policies configured under this model tier. Returned only when SmartModel is set to true. Returns 0 for tiers without configured policies.
      shared_ptr<int32_t> routePolicyCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListLlmTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListLlmTemplatesResponseBody::Data>) };
    inline vector<ListLlmTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListLlmTemplatesResponseBody::Data>) };
    inline ListLlmTemplatesResponseBody& setData(const vector<ListLlmTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLlmTemplatesResponseBody& setData(vector<ListLlmTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLlmTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLlmTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLlmTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLlmTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of returned data objects.
    shared_ptr<vector<ListLlmTemplatesResponseBody::Data>> data_ {};
    // The current page number of the query results.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of query results per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of query results.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
