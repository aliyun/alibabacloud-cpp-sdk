// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGEDETAILRESPONSEBODY_HPP_
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
  class DescribeMOTokenUsageDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMOTokenUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMOTokenUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMOTokenUsageDetailResponseBody() = default ;
    DescribeMOTokenUsageDetailResponseBody(const DescribeMOTokenUsageDetailResponseBody &) = default ;
    DescribeMOTokenUsageDetailResponseBody(DescribeMOTokenUsageDetailResponseBody &&) = default ;
    DescribeMOTokenUsageDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMOTokenUsageDetailResponseBody() = default ;
    DescribeMOTokenUsageDetailResponseBody& operator=(const DescribeMOTokenUsageDetailResponseBody &) = default ;
    DescribeMOTokenUsageDetailResponseBody& operator=(DescribeMOTokenUsageDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumerName, consumerName_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumerName, consumerName_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
      virtual bool empty() const override { return this->consumerName_ == nullptr
        && this->inputTokens_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->outputTokens_ == nullptr && this->region_ == nullptr
        && this->requestTime_ == nullptr && this->totalTokens_ == nullptr; };
      // consumerName Field Functions 
      bool hasConsumerName() const { return this->consumerName_ != nullptr;};
      void deleteConsumerName() { this->consumerName_ = nullptr;};
      inline string getConsumerName() const { DARABONBA_PTR_GET_DEFAULT(consumerName_, "") };
      inline Records& setConsumerName(string consumerName) { DARABONBA_PTR_SET_VALUE(consumerName_, consumerName) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline double getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0.0) };
      inline Records& setInputTokens(double inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Records& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Records& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // requestTime Field Functions 
      bool hasRequestTime() const { return this->requestTime_ != nullptr;};
      void deleteRequestTime() { this->requestTime_ = nullptr;};
      inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
      inline Records& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline double getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0.0) };
      inline Records& setTotalTokens(double totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    protected:
      shared_ptr<string> consumerName_ {};
      shared_ptr<double> inputTokens_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> model_ {};
      shared_ptr<double> outputTokens_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> requestTime_ {};
      shared_ptr<double> totalTokens_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeMOTokenUsageDetailResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMOTokenUsageDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeMOTokenUsageDetailResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeMOTokenUsageDetailResponseBody::Records>) };
    inline vector<DescribeMOTokenUsageDetailResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeMOTokenUsageDetailResponseBody::Records>) };
    inline DescribeMOTokenUsageDetailResponseBody& setRecords(const vector<DescribeMOTokenUsageDetailResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeMOTokenUsageDetailResponseBody& setRecords(vector<DescribeMOTokenUsageDetailResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMOTokenUsageDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMOTokenUsageDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<DescribeMOTokenUsageDetailResponseBody::Records>> records_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
