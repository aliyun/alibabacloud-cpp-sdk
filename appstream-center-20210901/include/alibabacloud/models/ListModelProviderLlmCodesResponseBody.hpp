// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERLLMCODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERLLMCODESRESPONSEBODY_HPP_
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
  class ListModelProviderLlmCodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderLlmCodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderLlmCodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelProviderLlmCodesResponseBody() = default ;
    ListModelProviderLlmCodesResponseBody(const ListModelProviderLlmCodesResponseBody &) = default ;
    ListModelProviderLlmCodesResponseBody(ListModelProviderLlmCodesResponseBody &&) = default ;
    ListModelProviderLlmCodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderLlmCodesResponseBody() = default ;
    ListModelProviderLlmCodesResponseBody& operator=(const ListModelProviderLlmCodesResponseBody &) = default ;
    ListModelProviderLlmCodesResponseBody& operator=(ListModelProviderLlmCodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LlmInfoList, llmInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LlmInfoList, llmInfoList_);
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
      class LlmInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(CreditMultiplier, creditMultiplier_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(InferenceMetadata, inferenceMetadata_);
          DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
          DARABONBA_PTR_TO_JSON(ModelBrand, modelBrand_);
          DARABONBA_ANY_TO_JSON(ModelInfo, modelInfo_);
          DARABONBA_PTR_TO_JSON(ModelSeries, modelSeries_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Prices, prices_);
          DARABONBA_PTR_TO_JSON(PublishedTime, publishedTime_);
          DARABONBA_PTR_TO_JSON(Recommended, recommended_);
          DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        };
        friend void from_json(const Darabonba::Json& j, LlmInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreditMultiplier, creditMultiplier_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(InferenceMetadata, inferenceMetadata_);
          DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
          DARABONBA_PTR_FROM_JSON(ModelBrand, modelBrand_);
          DARABONBA_ANY_FROM_JSON(ModelInfo, modelInfo_);
          DARABONBA_PTR_FROM_JSON(ModelSeries, modelSeries_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Prices, prices_);
          DARABONBA_PTR_FROM_JSON(PublishedTime, publishedTime_);
          DARABONBA_PTR_FROM_JSON(Recommended, recommended_);
          DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        };
        LlmInfoList() = default ;
        LlmInfoList(const LlmInfoList &) = default ;
        LlmInfoList(LlmInfoList &&) = default ;
        LlmInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmInfoList() = default ;
        LlmInfoList& operator=(const LlmInfoList &) = default ;
        LlmInfoList& operator=(LlmInfoList &&) = default ;
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
            // The name of the price item, such as input, output, or image generation.
            shared_ptr<string> priceName_ {};
            // The price unit, such as per image or per 1,000 tokens.
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
          // The name of the range, such as Default or 0-1M tokens.
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
          // The upper limit of the multiplier. An empty value indicates no upper limit. For example, if the minimum value is 1 and the maximum value is empty, it is displayed as starting from 1x.
          shared_ptr<float> max_ {};
          // The lower limit of the multiplier. If this value is equal to the maximum value, the multiplier is fixed. For example, if both the minimum and maximum values are 2, it is displayed as 2x.
          shared_ptr<float> min_ {};
        };

        virtual bool empty() const override { return this->creditMultiplier_ == nullptr
        && this->description_ == nullptr && this->features_ == nullptr && this->inferenceMetadata_ == nullptr && this->llmCode_ == nullptr && this->modelBrand_ == nullptr
        && this->modelInfo_ == nullptr && this->modelSeries_ == nullptr && this->name_ == nullptr && this->prices_ == nullptr && this->publishedTime_ == nullptr
        && this->recommended_ == nullptr && this->riskType_ == nullptr; };
        // creditMultiplier Field Functions 
        bool hasCreditMultiplier() const { return this->creditMultiplier_ != nullptr;};
        void deleteCreditMultiplier() { this->creditMultiplier_ = nullptr;};
        inline const LlmInfoList::CreditMultiplier & getCreditMultiplier() const { DARABONBA_PTR_GET_CONST(creditMultiplier_, LlmInfoList::CreditMultiplier) };
        inline LlmInfoList::CreditMultiplier getCreditMultiplier() { DARABONBA_PTR_GET(creditMultiplier_, LlmInfoList::CreditMultiplier) };
        inline LlmInfoList& setCreditMultiplier(const LlmInfoList::CreditMultiplier & creditMultiplier) { DARABONBA_PTR_SET_VALUE(creditMultiplier_, creditMultiplier) };
        inline LlmInfoList& setCreditMultiplier(LlmInfoList::CreditMultiplier && creditMultiplier) { DARABONBA_PTR_SET_RVALUE(creditMultiplier_, creditMultiplier) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LlmInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
        inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
        inline LlmInfoList& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
        inline LlmInfoList& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


        // inferenceMetadata Field Functions 
        bool hasInferenceMetadata() const { return this->inferenceMetadata_ != nullptr;};
        void deleteInferenceMetadata() { this->inferenceMetadata_ = nullptr;};
        inline const LlmInfoList::InferenceMetadata & getInferenceMetadata() const { DARABONBA_PTR_GET_CONST(inferenceMetadata_, LlmInfoList::InferenceMetadata) };
        inline LlmInfoList::InferenceMetadata getInferenceMetadata() { DARABONBA_PTR_GET(inferenceMetadata_, LlmInfoList::InferenceMetadata) };
        inline LlmInfoList& setInferenceMetadata(const LlmInfoList::InferenceMetadata & inferenceMetadata) { DARABONBA_PTR_SET_VALUE(inferenceMetadata_, inferenceMetadata) };
        inline LlmInfoList& setInferenceMetadata(LlmInfoList::InferenceMetadata && inferenceMetadata) { DARABONBA_PTR_SET_RVALUE(inferenceMetadata_, inferenceMetadata) };


        // llmCode Field Functions 
        bool hasLlmCode() const { return this->llmCode_ != nullptr;};
        void deleteLlmCode() { this->llmCode_ = nullptr;};
        inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
        inline LlmInfoList& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


        // modelBrand Field Functions 
        bool hasModelBrand() const { return this->modelBrand_ != nullptr;};
        void deleteModelBrand() { this->modelBrand_ = nullptr;};
        inline string getModelBrand() const { DARABONBA_PTR_GET_DEFAULT(modelBrand_, "") };
        inline LlmInfoList& setModelBrand(string modelBrand) { DARABONBA_PTR_SET_VALUE(modelBrand_, modelBrand) };


        // modelInfo Field Functions 
        bool hasModelInfo() const { return this->modelInfo_ != nullptr;};
        void deleteModelInfo() { this->modelInfo_ = nullptr;};
        inline         const Darabonba::Json & getModelInfo() const { DARABONBA_GET(modelInfo_) };
        Darabonba::Json & getModelInfo() { DARABONBA_GET(modelInfo_) };
        inline LlmInfoList& setModelInfo(const Darabonba::Json & modelInfo) { DARABONBA_SET_VALUE(modelInfo_, modelInfo) };
        inline LlmInfoList& setModelInfo(Darabonba::Json && modelInfo) { DARABONBA_SET_RVALUE(modelInfo_, modelInfo) };


        // modelSeries Field Functions 
        bool hasModelSeries() const { return this->modelSeries_ != nullptr;};
        void deleteModelSeries() { this->modelSeries_ = nullptr;};
        inline string getModelSeries() const { DARABONBA_PTR_GET_DEFAULT(modelSeries_, "") };
        inline LlmInfoList& setModelSeries(string modelSeries) { DARABONBA_PTR_SET_VALUE(modelSeries_, modelSeries) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LlmInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // prices Field Functions 
        bool hasPrices() const { return this->prices_ != nullptr;};
        void deletePrices() { this->prices_ = nullptr;};
        inline const vector<LlmInfoList::Prices> & getPrices() const { DARABONBA_PTR_GET_CONST(prices_, vector<LlmInfoList::Prices>) };
        inline vector<LlmInfoList::Prices> getPrices() { DARABONBA_PTR_GET(prices_, vector<LlmInfoList::Prices>) };
        inline LlmInfoList& setPrices(const vector<LlmInfoList::Prices> & prices) { DARABONBA_PTR_SET_VALUE(prices_, prices) };
        inline LlmInfoList& setPrices(vector<LlmInfoList::Prices> && prices) { DARABONBA_PTR_SET_RVALUE(prices_, prices) };


        // publishedTime Field Functions 
        bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
        void deletePublishedTime() { this->publishedTime_ = nullptr;};
        inline string getPublishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
        inline LlmInfoList& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


        // recommended Field Functions 
        bool hasRecommended() const { return this->recommended_ != nullptr;};
        void deleteRecommended() { this->recommended_ = nullptr;};
        inline bool getRecommended() const { DARABONBA_PTR_GET_DEFAULT(recommended_, false) };
        inline LlmInfoList& setRecommended(bool recommended) { DARABONBA_PTR_SET_VALUE(recommended_, recommended) };


        // riskType Field Functions 
        bool hasRiskType() const { return this->riskType_ != nullptr;};
        void deleteRiskType() { this->riskType_ = nullptr;};
        inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
        inline LlmInfoList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      protected:
        // The credit consumption multiplier. An empty value indicates that the model does not participate in credit billing.
        shared_ptr<LlmInfoList::CreditMultiplier> creditMultiplier_ {};
        // The model description.
        shared_ptr<string> description_ {};
        // The list of model features, such as function-calling, web-search, and structured-outputs.
        shared_ptr<vector<string>> features_ {};
        // The inference metadata, including request and response modalities.
        shared_ptr<LlmInfoList::InferenceMetadata> inferenceMetadata_ {};
        // The LLM code, such as qwen-image-2.0.
        shared_ptr<string> llmCode_ {};
        // The model brand, such as Qwen, Wanx, or DeepSeek. This parameter is returned only for models annotated in the platform-side model pool.
        shared_ptr<string> modelBrand_ {};
        // The model information, such as context window size and maximum input/output tokens.
        Darabonba::Json modelInfo_ {};
        // The model series, such as Qwen-Max or DeepSeek. This parameter is returned only for the wuying-credit provider.
        shared_ptr<string> modelSeries_ {};
        // The model name, such as Qwen-Image-2.0.
        shared_ptr<string> name_ {};
        // The list of price information.
        shared_ptr<vector<LlmInfoList::Prices>> prices_ {};
        // The time when the model was published, in ISO 8601 format, such as 2026-03-04T06:25:17.000+00:00.
        shared_ptr<string> publishedTime_ {};
        // Indicates whether the model is recommended. This is a tri-state value: true indicates that the model is recommended for display, false indicates that the model is explicitly not recommended, and null indicates that the status is not applicable, such as for non-Bailian models or unannotated models.
        shared_ptr<bool> recommended_ {};
        // The model risk type. This parameter is returned only when includeRiskInfo is set to true.
        shared_ptr<string> riskType_ {};
      };

      virtual bool empty() const override { return this->llmInfoList_ == nullptr; };
      // llmInfoList Field Functions 
      bool hasLlmInfoList() const { return this->llmInfoList_ != nullptr;};
      void deleteLlmInfoList() { this->llmInfoList_ = nullptr;};
      inline const vector<Data::LlmInfoList> & getLlmInfoList() const { DARABONBA_PTR_GET_CONST(llmInfoList_, vector<Data::LlmInfoList>) };
      inline vector<Data::LlmInfoList> getLlmInfoList() { DARABONBA_PTR_GET(llmInfoList_, vector<Data::LlmInfoList>) };
      inline Data& setLlmInfoList(const vector<Data::LlmInfoList> & llmInfoList) { DARABONBA_PTR_SET_VALUE(llmInfoList_, llmInfoList) };
      inline Data& setLlmInfoList(vector<Data::LlmInfoList> && llmInfoList) { DARABONBA_PTR_SET_RVALUE(llmInfoList_, llmInfoList) };


    protected:
      // The LLM information list.
      shared_ptr<vector<Data::LlmInfoList>> llmInfoList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListModelProviderLlmCodesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListModelProviderLlmCodesResponseBody::Data) };
    inline ListModelProviderLlmCodesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListModelProviderLlmCodesResponseBody::Data) };
    inline ListModelProviderLlmCodesResponseBody& setData(const ListModelProviderLlmCodesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelProviderLlmCodesResponseBody& setData(ListModelProviderLlmCodesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelProviderLlmCodesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelProviderLlmCodesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelProviderLlmCodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListModelProviderLlmCodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The paginated data object that contains a list of LLM information.
    shared_ptr<ListModelProviderLlmCodesResponseBody::Data> data_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of records after filtering.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
