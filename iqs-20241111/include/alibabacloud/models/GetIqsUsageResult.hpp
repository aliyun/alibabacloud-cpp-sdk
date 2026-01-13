// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIQSUSAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETIQSUSAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GetIqsUsageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIqsUsageResult& obj) { 
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, GetIqsUsageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    GetIqsUsageResult() = default ;
    GetIqsUsageResult(const GetIqsUsageResult &) = default ;
    GetIqsUsageResult(GetIqsUsageResult &&) = default ;
    GetIqsUsageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIqsUsageResult() = default ;
    GetIqsUsageResult& operator=(const GetIqsUsageResult &) = default ;
    GetIqsUsageResult& operator=(GetIqsUsageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(api, api_);
        DARABONBA_PTR_TO_JSON(billingQps, billingQps_);
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(engineType, engineType_);
        DARABONBA_PTR_TO_JSON(failedCalls, failedCalls_);
        DARABONBA_PTR_TO_JSON(ladderType, ladderType_);
        DARABONBA_PTR_TO_JSON(mainAccountId, mainAccountId_);
        DARABONBA_PTR_TO_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_TO_JSON(successCalls, successCalls_);
        DARABONBA_PTR_TO_JSON(totalCalls, totalCalls_);
        DARABONBA_PTR_TO_JSON(valueAddedAdvanced, valueAddedAdvanced_);
        DARABONBA_PTR_TO_JSON(valueAddedSummary, valueAddedSummary_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(api, api_);
        DARABONBA_PTR_FROM_JSON(billingQps, billingQps_);
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(engineType, engineType_);
        DARABONBA_PTR_FROM_JSON(failedCalls, failedCalls_);
        DARABONBA_PTR_FROM_JSON(ladderType, ladderType_);
        DARABONBA_PTR_FROM_JSON(mainAccountId, mainAccountId_);
        DARABONBA_PTR_FROM_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_FROM_JSON(successCalls, successCalls_);
        DARABONBA_PTR_FROM_JSON(totalCalls, totalCalls_);
        DARABONBA_PTR_FROM_JSON(valueAddedAdvanced, valueAddedAdvanced_);
        DARABONBA_PTR_FROM_JSON(valueAddedSummary, valueAddedSummary_);
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
      virtual bool empty() const override { return this->api_ == nullptr
        && this->billingQps_ == nullptr && this->date_ == nullptr && this->engineType_ == nullptr && this->failedCalls_ == nullptr && this->ladderType_ == nullptr
        && this->mainAccountId_ == nullptr && this->subAccountId_ == nullptr && this->successCalls_ == nullptr && this->totalCalls_ == nullptr && this->valueAddedAdvanced_ == nullptr
        && this->valueAddedSummary_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
      inline Records& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // billingQps Field Functions 
      bool hasBillingQps() const { return this->billingQps_ != nullptr;};
      void deleteBillingQps() { this->billingQps_ = nullptr;};
      inline int32_t getBillingQps() const { DARABONBA_PTR_GET_DEFAULT(billingQps_, 0) };
      inline Records& setBillingQps(int32_t billingQps) { DARABONBA_PTR_SET_VALUE(billingQps_, billingQps) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Records& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Records& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // failedCalls Field Functions 
      bool hasFailedCalls() const { return this->failedCalls_ != nullptr;};
      void deleteFailedCalls() { this->failedCalls_ = nullptr;};
      inline int32_t getFailedCalls() const { DARABONBA_PTR_GET_DEFAULT(failedCalls_, 0) };
      inline Records& setFailedCalls(int32_t failedCalls) { DARABONBA_PTR_SET_VALUE(failedCalls_, failedCalls) };


      // ladderType Field Functions 
      bool hasLadderType() const { return this->ladderType_ != nullptr;};
      void deleteLadderType() { this->ladderType_ = nullptr;};
      inline string getLadderType() const { DARABONBA_PTR_GET_DEFAULT(ladderType_, "") };
      inline Records& setLadderType(string ladderType) { DARABONBA_PTR_SET_VALUE(ladderType_, ladderType) };


      // mainAccountId Field Functions 
      bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
      void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
      inline string getMainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
      inline Records& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


      // subAccountId Field Functions 
      bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
      void deleteSubAccountId() { this->subAccountId_ = nullptr;};
      inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
      inline Records& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


      // successCalls Field Functions 
      bool hasSuccessCalls() const { return this->successCalls_ != nullptr;};
      void deleteSuccessCalls() { this->successCalls_ = nullptr;};
      inline int32_t getSuccessCalls() const { DARABONBA_PTR_GET_DEFAULT(successCalls_, 0) };
      inline Records& setSuccessCalls(int32_t successCalls) { DARABONBA_PTR_SET_VALUE(successCalls_, successCalls) };


      // totalCalls Field Functions 
      bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
      void deleteTotalCalls() { this->totalCalls_ = nullptr;};
      inline int32_t getTotalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0) };
      inline Records& setTotalCalls(int32_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


      // valueAddedAdvanced Field Functions 
      bool hasValueAddedAdvanced() const { return this->valueAddedAdvanced_ != nullptr;};
      void deleteValueAddedAdvanced() { this->valueAddedAdvanced_ = nullptr;};
      inline int32_t getValueAddedAdvanced() const { DARABONBA_PTR_GET_DEFAULT(valueAddedAdvanced_, 0) };
      inline Records& setValueAddedAdvanced(int32_t valueAddedAdvanced) { DARABONBA_PTR_SET_VALUE(valueAddedAdvanced_, valueAddedAdvanced) };


      // valueAddedSummary Field Functions 
      bool hasValueAddedSummary() const { return this->valueAddedSummary_ != nullptr;};
      void deleteValueAddedSummary() { this->valueAddedSummary_ = nullptr;};
      inline int32_t getValueAddedSummary() const { DARABONBA_PTR_GET_DEFAULT(valueAddedSummary_, 0) };
      inline Records& setValueAddedSummary(int32_t valueAddedSummary) { DARABONBA_PTR_SET_VALUE(valueAddedSummary_, valueAddedSummary) };


    protected:
      shared_ptr<string> api_ {};
      shared_ptr<int32_t> billingQps_ {};
      shared_ptr<string> date_ {};
      shared_ptr<string> engineType_ {};
      shared_ptr<int32_t> failedCalls_ {};
      shared_ptr<string> ladderType_ {};
      shared_ptr<string> mainAccountId_ {};
      shared_ptr<string> subAccountId_ {};
      shared_ptr<int32_t> successCalls_ {};
      shared_ptr<int32_t> totalCalls_ {};
      shared_ptr<int32_t> valueAddedAdvanced_ {};
      shared_ptr<int32_t> valueAddedSummary_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<GetIqsUsageResult::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<GetIqsUsageResult::Records>) };
    inline vector<GetIqsUsageResult::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<GetIqsUsageResult::Records>) };
    inline GetIqsUsageResult& setRecords(const vector<GetIqsUsageResult::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetIqsUsageResult& setRecords(vector<GetIqsUsageResult::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    shared_ptr<vector<GetIqsUsageResult::Records>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
