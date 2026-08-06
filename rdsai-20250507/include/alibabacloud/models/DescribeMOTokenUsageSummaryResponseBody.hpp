// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMOTokenUsageSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMOTokenUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMOTokenUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
    };
    DescribeMOTokenUsageSummaryResponseBody() = default ;
    DescribeMOTokenUsageSummaryResponseBody(const DescribeMOTokenUsageSummaryResponseBody &) = default ;
    DescribeMOTokenUsageSummaryResponseBody(DescribeMOTokenUsageSummaryResponseBody &&) = default ;
    DescribeMOTokenUsageSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMOTokenUsageSummaryResponseBody() = default ;
    DescribeMOTokenUsageSummaryResponseBody& operator=(const DescribeMOTokenUsageSummaryResponseBody &) = default ;
    DescribeMOTokenUsageSummaryResponseBody& operator=(DescribeMOTokenUsageSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(CacheTokens, cacheTokens_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(CacheTokens, cacheTokens_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cacheTokens_ == nullptr
        && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
      // cacheTokens Field Functions 
      bool hasCacheTokens() const { return this->cacheTokens_ != nullptr;};
      void deleteCacheTokens() { this->cacheTokens_ = nullptr;};
      inline double getCacheTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheTokens_, 0.0) };
      inline Summary& setCacheTokens(double cacheTokens) { DARABONBA_PTR_SET_VALUE(cacheTokens_, cacheTokens) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline double getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0.0) };
      inline Summary& setInputTokens(double inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline double getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0.0) };
      inline Summary& setOutputTokens(double outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline double getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0.0) };
      inline Summary& setTotalTokens(double totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    protected:
      shared_ptr<double> cacheTokens_ {};
      shared_ptr<double> inputTokens_ {};
      shared_ptr<double> outputTokens_ {};
      shared_ptr<double> totalTokens_ {};
    };

    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(CacheTokens, cacheTokens_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(UsageType, usageType_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(CacheTokens, cacheTokens_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->cacheTokens_ == nullptr && this->date_ == nullptr && this->inputTokens_ == nullptr && this->keyName_ == nullptr && this->model_ == nullptr
        && this->outputTokens_ == nullptr && this->requestCount_ == nullptr && this->totalTokens_ == nullptr && this->usageType_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Records& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // cacheTokens Field Functions 
      bool hasCacheTokens() const { return this->cacheTokens_ != nullptr;};
      void deleteCacheTokens() { this->cacheTokens_ = nullptr;};
      inline double getCacheTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheTokens_, 0.0) };
      inline Records& setCacheTokens(double cacheTokens) { DARABONBA_PTR_SET_VALUE(cacheTokens_, cacheTokens) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Records& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline double getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0.0) };
      inline Records& setInputTokens(double inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline Records& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Records& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline double getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0.0) };
      inline Records& setOutputTokens(double outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // requestCount Field Functions 
      bool hasRequestCount() const { return this->requestCount_ != nullptr;};
      void deleteRequestCount() { this->requestCount_ = nullptr;};
      inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
      inline Records& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline double getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0.0) };
      inline Records& setTotalTokens(double totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // usageType Field Functions 
      bool hasUsageType() const { return this->usageType_ != nullptr;};
      void deleteUsageType() { this->usageType_ = nullptr;};
      inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
      inline Records& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<double> cacheTokens_ {};
      shared_ptr<string> date_ {};
      shared_ptr<double> inputTokens_ {};
      shared_ptr<string> keyName_ {};
      shared_ptr<string> model_ {};
      shared_ptr<double> outputTokens_ {};
      shared_ptr<int64_t> requestCount_ {};
      shared_ptr<double> totalTokens_ {};
      shared_ptr<string> usageType_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->records_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->summary_ == nullptr && this->usageType_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMOTokenUsageSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeMOTokenUsageSummaryResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeMOTokenUsageSummaryResponseBody::Records>) };
    inline vector<DescribeMOTokenUsageSummaryResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeMOTokenUsageSummaryResponseBody::Records>) };
    inline DescribeMOTokenUsageSummaryResponseBody& setRecords(const vector<DescribeMOTokenUsageSummaryResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeMOTokenUsageSummaryResponseBody& setRecords(vector<DescribeMOTokenUsageSummaryResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMOTokenUsageSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMOTokenUsageSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const DescribeMOTokenUsageSummaryResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DescribeMOTokenUsageSummaryResponseBody::Summary) };
    inline DescribeMOTokenUsageSummaryResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, DescribeMOTokenUsageSummaryResponseBody::Summary) };
    inline DescribeMOTokenUsageSummaryResponseBody& setSummary(const DescribeMOTokenUsageSummaryResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DescribeMOTokenUsageSummaryResponseBody& setSummary(DescribeMOTokenUsageSummaryResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline DescribeMOTokenUsageSummaryResponseBody& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<vector<DescribeMOTokenUsageSummaryResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<DescribeMOTokenUsageSummaryResponseBody::Summary> summary_ {};
    shared_ptr<string> usageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
