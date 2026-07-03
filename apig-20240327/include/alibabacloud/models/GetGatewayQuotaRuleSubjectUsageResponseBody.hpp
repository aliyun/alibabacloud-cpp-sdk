// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULESUBJECTUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULESUBJECTUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayQuotaRuleSubjectUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayQuotaRuleSubjectUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayQuotaRuleSubjectUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayQuotaRuleSubjectUsageResponseBody() = default ;
    GetGatewayQuotaRuleSubjectUsageResponseBody(const GetGatewayQuotaRuleSubjectUsageResponseBody &) = default ;
    GetGatewayQuotaRuleSubjectUsageResponseBody(GetGatewayQuotaRuleSubjectUsageResponseBody &&) = default ;
    GetGatewayQuotaRuleSubjectUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayQuotaRuleSubjectUsageResponseBody() = default ;
    GetGatewayQuotaRuleSubjectUsageResponseBody& operator=(const GetGatewayQuotaRuleSubjectUsageResponseBody &) = default ;
    GetGatewayQuotaRuleSubjectUsageResponseBody& operator=(GetGatewayQuotaRuleSubjectUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cachedAmount, cachedAmount_);
        DARABONBA_PTR_TO_JSON(details, details_);
        DARABONBA_PTR_TO_JSON(inputAmount, inputAmount_);
        DARABONBA_PTR_TO_JSON(outputAmount, outputAmount_);
        DARABONBA_PTR_TO_JSON(overLimit, overLimit_);
        DARABONBA_PTR_TO_JSON(totalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(usedAmount, usedAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cachedAmount, cachedAmount_);
        DARABONBA_PTR_FROM_JSON(details, details_);
        DARABONBA_PTR_FROM_JSON(inputAmount, inputAmount_);
        DARABONBA_PTR_FROM_JSON(outputAmount, outputAmount_);
        DARABONBA_PTR_FROM_JSON(overLimit, overLimit_);
        DARABONBA_PTR_FROM_JSON(totalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(usedAmount, usedAmount_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(cachedAmount, cachedAmount_);
            DARABONBA_PTR_TO_JSON(inputAmount, inputAmount_);
            DARABONBA_PTR_TO_JSON(model, model_);
            DARABONBA_PTR_TO_JSON(outputAmount, outputAmount_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
            DARABONBA_PTR_TO_JSON(usedAmount, usedAmount_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(cachedAmount, cachedAmount_);
            DARABONBA_PTR_FROM_JSON(inputAmount, inputAmount_);
            DARABONBA_PTR_FROM_JSON(model, model_);
            DARABONBA_PTR_FROM_JSON(outputAmount, outputAmount_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
            DARABONBA_PTR_FROM_JSON(usedAmount, usedAmount_);
          };
          Items() = default ;
          Items(const Items &) = default ;
          Items(Items &&) = default ;
          Items(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Items() = default ;
          Items& operator=(const Items &) = default ;
          Items& operator=(Items &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cachedAmount_ == nullptr
        && this->inputAmount_ == nullptr && this->model_ == nullptr && this->outputAmount_ == nullptr && this->startTime_ == nullptr && this->usedAmount_ == nullptr; };
          // cachedAmount Field Functions 
          bool hasCachedAmount() const { return this->cachedAmount_ != nullptr;};
          void deleteCachedAmount() { this->cachedAmount_ = nullptr;};
          inline int64_t getCachedAmount() const { DARABONBA_PTR_GET_DEFAULT(cachedAmount_, 0L) };
          inline Items& setCachedAmount(int64_t cachedAmount) { DARABONBA_PTR_SET_VALUE(cachedAmount_, cachedAmount) };


          // inputAmount Field Functions 
          bool hasInputAmount() const { return this->inputAmount_ != nullptr;};
          void deleteInputAmount() { this->inputAmount_ = nullptr;};
          inline int64_t getInputAmount() const { DARABONBA_PTR_GET_DEFAULT(inputAmount_, 0L) };
          inline Items& setInputAmount(int64_t inputAmount) { DARABONBA_PTR_SET_VALUE(inputAmount_, inputAmount) };


          // model Field Functions 
          bool hasModel() const { return this->model_ != nullptr;};
          void deleteModel() { this->model_ = nullptr;};
          inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
          inline Items& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


          // outputAmount Field Functions 
          bool hasOutputAmount() const { return this->outputAmount_ != nullptr;};
          void deleteOutputAmount() { this->outputAmount_ = nullptr;};
          inline int64_t getOutputAmount() const { DARABONBA_PTR_GET_DEFAULT(outputAmount_, 0L) };
          inline Items& setOutputAmount(int64_t outputAmount) { DARABONBA_PTR_SET_VALUE(outputAmount_, outputAmount) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // usedAmount Field Functions 
          bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
          void deleteUsedAmount() { this->usedAmount_ = nullptr;};
          inline int64_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0L) };
          inline Items& setUsedAmount(int64_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


        protected:
          // The cached token consumption.
          shared_ptr<int64_t> cachedAmount_ {};
          // The input token consumption.
          shared_ptr<int64_t> inputAmount_ {};
          // The model name.
          shared_ptr<string> model_ {};
          // The output token consumption.
          shared_ptr<int64_t> outputAmount_ {};
          // The consumption (request) time.
          shared_ptr<string> startTime_ {};
          // The total consumption.
          shared_ptr<int64_t> usedAmount_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Details::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Details::Items>) };
        inline vector<Details::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Details::Items>) };
        inline Details& setItems(const vector<Details::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Details& setItems(vector<Details::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Details& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Details& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
        inline Details& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The list of usage details.
        shared_ptr<vector<Details::Items>> items_ {};
        // The current page number.
        shared_ptr<int32_t> pageNumber_ {};
        // The current page size.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of records.
        shared_ptr<int32_t> totalSize_ {};
      };

      virtual bool empty() const override { return this->cachedAmount_ == nullptr
        && this->details_ == nullptr && this->inputAmount_ == nullptr && this->outputAmount_ == nullptr && this->overLimit_ == nullptr && this->totalQuota_ == nullptr
        && this->usedAmount_ == nullptr; };
      // cachedAmount Field Functions 
      bool hasCachedAmount() const { return this->cachedAmount_ != nullptr;};
      void deleteCachedAmount() { this->cachedAmount_ = nullptr;};
      inline int64_t getCachedAmount() const { DARABONBA_PTR_GET_DEFAULT(cachedAmount_, 0L) };
      inline Data& setCachedAmount(int64_t cachedAmount) { DARABONBA_PTR_SET_VALUE(cachedAmount_, cachedAmount) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const Data::Details & getDetails() const { DARABONBA_PTR_GET_CONST(details_, Data::Details) };
      inline Data::Details getDetails() { DARABONBA_PTR_GET(details_, Data::Details) };
      inline Data& setDetails(const Data::Details & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(Data::Details && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // inputAmount Field Functions 
      bool hasInputAmount() const { return this->inputAmount_ != nullptr;};
      void deleteInputAmount() { this->inputAmount_ = nullptr;};
      inline int64_t getInputAmount() const { DARABONBA_PTR_GET_DEFAULT(inputAmount_, 0L) };
      inline Data& setInputAmount(int64_t inputAmount) { DARABONBA_PTR_SET_VALUE(inputAmount_, inputAmount) };


      // outputAmount Field Functions 
      bool hasOutputAmount() const { return this->outputAmount_ != nullptr;};
      void deleteOutputAmount() { this->outputAmount_ = nullptr;};
      inline int64_t getOutputAmount() const { DARABONBA_PTR_GET_DEFAULT(outputAmount_, 0L) };
      inline Data& setOutputAmount(int64_t outputAmount) { DARABONBA_PTR_SET_VALUE(outputAmount_, outputAmount) };


      // overLimit Field Functions 
      bool hasOverLimit() const { return this->overLimit_ != nullptr;};
      void deleteOverLimit() { this->overLimit_ = nullptr;};
      inline bool getOverLimit() const { DARABONBA_PTR_GET_DEFAULT(overLimit_, false) };
      inline Data& setOverLimit(bool overLimit) { DARABONBA_PTR_SET_VALUE(overLimit_, overLimit) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
      inline Data& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // usedAmount Field Functions 
      bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
      void deleteUsedAmount() { this->usedAmount_ = nullptr;};
      inline int64_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0L) };
      inline Data& setUsedAmount(int64_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


    protected:
      // The total cached token consumption.
      shared_ptr<int64_t> cachedAmount_ {};
      // The paginated consumption details.
      shared_ptr<Data::Details> details_ {};
      // The total input token consumption.
      shared_ptr<int64_t> inputAmount_ {};
      // The total output token consumption.
      shared_ptr<int64_t> outputAmount_ {};
      // Indicates whether the quota limit is exceeded.
      shared_ptr<bool> overLimit_ {};
      // The total quota of the subject.
      shared_ptr<int64_t> totalQuota_ {};
      // The total used amount of the subject.
      shared_ptr<int64_t> usedAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayQuotaRuleSubjectUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayQuotaRuleSubjectUsageResponseBody::Data) };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayQuotaRuleSubjectUsageResponseBody::Data) };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody& setData(const GetGatewayQuotaRuleSubjectUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody& setData(GetGatewayQuotaRuleSubjectUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayQuotaRuleSubjectUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetGatewayQuotaRuleSubjectUsageResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
