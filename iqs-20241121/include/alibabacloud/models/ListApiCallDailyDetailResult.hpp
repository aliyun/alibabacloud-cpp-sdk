// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPICALLDAILYDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPICALLDAILYDETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListApiCallDailyDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiCallDailyDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(details, details_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiCallDailyDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(details, details_);
    };
    ListApiCallDailyDetailResult() = default ;
    ListApiCallDailyDetailResult(const ListApiCallDailyDetailResult &) = default ;
    ListApiCallDailyDetailResult(ListApiCallDailyDetailResult &&) = default ;
    ListApiCallDailyDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiCallDailyDetailResult() = default ;
    ListApiCallDailyDetailResult& operator=(const ListApiCallDailyDetailResult &) = default ;
    ListApiCallDailyDetailResult& operator=(ListApiCallDailyDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(avgLatency, avgLatency_);
        DARABONBA_PTR_TO_JSON(billDate, billDate_);
        DARABONBA_PTR_TO_JSON(engineType, engineType_);
        DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(p90Latency, p90Latency_);
        DARABONBA_PTR_TO_JSON(p95Latency, p95Latency_);
        DARABONBA_PTR_TO_JSON(requestMaxQps, requestMaxQps_);
        DARABONBA_PTR_TO_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(avgLatency, avgLatency_);
        DARABONBA_PTR_FROM_JSON(billDate, billDate_);
        DARABONBA_PTR_FROM_JSON(engineType, engineType_);
        DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(p90Latency, p90Latency_);
        DARABONBA_PTR_FROM_JSON(p95Latency, p95Latency_);
        DARABONBA_PTR_FROM_JSON(requestMaxQps, requestMaxQps_);
        DARABONBA_PTR_FROM_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
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
      virtual bool empty() const override { return this->apiName_ == nullptr
        && this->avgLatency_ == nullptr && this->billDate_ == nullptr && this->engineType_ == nullptr && this->failedCount_ == nullptr && this->p90Latency_ == nullptr
        && this->p95Latency_ == nullptr && this->requestMaxQps_ == nullptr && this->subAccountId_ == nullptr && this->successCount_ == nullptr; };
      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Details& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // avgLatency Field Functions 
      bool hasAvgLatency() const { return this->avgLatency_ != nullptr;};
      void deleteAvgLatency() { this->avgLatency_ = nullptr;};
      inline int32_t getAvgLatency() const { DARABONBA_PTR_GET_DEFAULT(avgLatency_, 0) };
      inline Details& setAvgLatency(int32_t avgLatency) { DARABONBA_PTR_SET_VALUE(avgLatency_, avgLatency) };


      // billDate Field Functions 
      bool hasBillDate() const { return this->billDate_ != nullptr;};
      void deleteBillDate() { this->billDate_ = nullptr;};
      inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
      inline Details& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Details& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Details& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // p90Latency Field Functions 
      bool hasP90Latency() const { return this->p90Latency_ != nullptr;};
      void deleteP90Latency() { this->p90Latency_ = nullptr;};
      inline int32_t getP90Latency() const { DARABONBA_PTR_GET_DEFAULT(p90Latency_, 0) };
      inline Details& setP90Latency(int32_t p90Latency) { DARABONBA_PTR_SET_VALUE(p90Latency_, p90Latency) };


      // p95Latency Field Functions 
      bool hasP95Latency() const { return this->p95Latency_ != nullptr;};
      void deleteP95Latency() { this->p95Latency_ = nullptr;};
      inline int32_t getP95Latency() const { DARABONBA_PTR_GET_DEFAULT(p95Latency_, 0) };
      inline Details& setP95Latency(int32_t p95Latency) { DARABONBA_PTR_SET_VALUE(p95Latency_, p95Latency) };


      // requestMaxQps Field Functions 
      bool hasRequestMaxQps() const { return this->requestMaxQps_ != nullptr;};
      void deleteRequestMaxQps() { this->requestMaxQps_ = nullptr;};
      inline int32_t getRequestMaxQps() const { DARABONBA_PTR_GET_DEFAULT(requestMaxQps_, 0) };
      inline Details& setRequestMaxQps(int32_t requestMaxQps) { DARABONBA_PTR_SET_VALUE(requestMaxQps_, requestMaxQps) };


      // subAccountId Field Functions 
      bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
      void deleteSubAccountId() { this->subAccountId_ = nullptr;};
      inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
      inline Details& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Details& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      shared_ptr<string> apiName_ {};
      shared_ptr<int32_t> avgLatency_ {};
      shared_ptr<string> billDate_ {};
      shared_ptr<string> engineType_ {};
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<int32_t> p90Latency_ {};
      shared_ptr<int32_t> p95Latency_ {};
      shared_ptr<int32_t> requestMaxQps_ {};
      shared_ptr<string> subAccountId_ {};
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<ListApiCallDailyDetailResult::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<ListApiCallDailyDetailResult::Details>) };
    inline vector<ListApiCallDailyDetailResult::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<ListApiCallDailyDetailResult::Details>) };
    inline ListApiCallDailyDetailResult& setDetails(const vector<ListApiCallDailyDetailResult::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ListApiCallDailyDetailResult& setDetails(vector<ListApiCallDailyDetailResult::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


  protected:
    shared_ptr<vector<ListApiCallDailyDetailResult::Details>> details_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
