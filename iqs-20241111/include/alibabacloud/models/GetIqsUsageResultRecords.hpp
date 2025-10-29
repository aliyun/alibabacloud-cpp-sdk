// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIQSUSAGERESULTRECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETIQSUSAGERESULTRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GetIqsUsageResultRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIqsUsageResultRecords& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetIqsUsageResultRecords& obj) { 
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
    GetIqsUsageResultRecords() = default ;
    GetIqsUsageResultRecords(const GetIqsUsageResultRecords &) = default ;
    GetIqsUsageResultRecords(GetIqsUsageResultRecords &&) = default ;
    GetIqsUsageResultRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIqsUsageResultRecords() = default ;
    GetIqsUsageResultRecords& operator=(const GetIqsUsageResultRecords &) = default ;
    GetIqsUsageResultRecords& operator=(GetIqsUsageResultRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->billingQps_ == nullptr && return this->date_ == nullptr && return this->engineType_ == nullptr && return this->failedCalls_ == nullptr && return this->ladderType_ == nullptr
        && return this->mainAccountId_ == nullptr && return this->subAccountId_ == nullptr && return this->successCalls_ == nullptr && return this->totalCalls_ == nullptr && return this->valueAddedAdvanced_ == nullptr
        && return this->valueAddedSummary_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GetIqsUsageResultRecords& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // billingQps Field Functions 
    bool hasBillingQps() const { return this->billingQps_ != nullptr;};
    void deleteBillingQps() { this->billingQps_ = nullptr;};
    inline int32_t billingQps() const { DARABONBA_PTR_GET_DEFAULT(billingQps_, 0) };
    inline GetIqsUsageResultRecords& setBillingQps(int32_t billingQps) { DARABONBA_PTR_SET_VALUE(billingQps_, billingQps) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetIqsUsageResultRecords& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline GetIqsUsageResultRecords& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // failedCalls Field Functions 
    bool hasFailedCalls() const { return this->failedCalls_ != nullptr;};
    void deleteFailedCalls() { this->failedCalls_ = nullptr;};
    inline int32_t failedCalls() const { DARABONBA_PTR_GET_DEFAULT(failedCalls_, 0) };
    inline GetIqsUsageResultRecords& setFailedCalls(int32_t failedCalls) { DARABONBA_PTR_SET_VALUE(failedCalls_, failedCalls) };


    // ladderType Field Functions 
    bool hasLadderType() const { return this->ladderType_ != nullptr;};
    void deleteLadderType() { this->ladderType_ = nullptr;};
    inline string ladderType() const { DARABONBA_PTR_GET_DEFAULT(ladderType_, "") };
    inline GetIqsUsageResultRecords& setLadderType(string ladderType) { DARABONBA_PTR_SET_VALUE(ladderType_, ladderType) };


    // mainAccountId Field Functions 
    bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
    void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
    inline string mainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
    inline GetIqsUsageResultRecords& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


    // subAccountId Field Functions 
    bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
    void deleteSubAccountId() { this->subAccountId_ = nullptr;};
    inline string subAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
    inline GetIqsUsageResultRecords& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


    // successCalls Field Functions 
    bool hasSuccessCalls() const { return this->successCalls_ != nullptr;};
    void deleteSuccessCalls() { this->successCalls_ = nullptr;};
    inline int32_t successCalls() const { DARABONBA_PTR_GET_DEFAULT(successCalls_, 0) };
    inline GetIqsUsageResultRecords& setSuccessCalls(int32_t successCalls) { DARABONBA_PTR_SET_VALUE(successCalls_, successCalls) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int32_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0) };
    inline GetIqsUsageResultRecords& setTotalCalls(int32_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


    // valueAddedAdvanced Field Functions 
    bool hasValueAddedAdvanced() const { return this->valueAddedAdvanced_ != nullptr;};
    void deleteValueAddedAdvanced() { this->valueAddedAdvanced_ = nullptr;};
    inline int32_t valueAddedAdvanced() const { DARABONBA_PTR_GET_DEFAULT(valueAddedAdvanced_, 0) };
    inline GetIqsUsageResultRecords& setValueAddedAdvanced(int32_t valueAddedAdvanced) { DARABONBA_PTR_SET_VALUE(valueAddedAdvanced_, valueAddedAdvanced) };


    // valueAddedSummary Field Functions 
    bool hasValueAddedSummary() const { return this->valueAddedSummary_ != nullptr;};
    void deleteValueAddedSummary() { this->valueAddedSummary_ = nullptr;};
    inline int32_t valueAddedSummary() const { DARABONBA_PTR_GET_DEFAULT(valueAddedSummary_, 0) };
    inline GetIqsUsageResultRecords& setValueAddedSummary(int32_t valueAddedSummary) { DARABONBA_PTR_SET_VALUE(valueAddedSummary_, valueAddedSummary) };


  protected:
    std::shared_ptr<string> api_ = nullptr;
    std::shared_ptr<int32_t> billingQps_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<int32_t> failedCalls_ = nullptr;
    std::shared_ptr<string> ladderType_ = nullptr;
    std::shared_ptr<string> mainAccountId_ = nullptr;
    std::shared_ptr<string> subAccountId_ = nullptr;
    std::shared_ptr<int32_t> successCalls_ = nullptr;
    std::shared_ptr<int32_t> totalCalls_ = nullptr;
    std::shared_ptr<int32_t> valueAddedAdvanced_ = nullptr;
    std::shared_ptr<int32_t> valueAddedSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
