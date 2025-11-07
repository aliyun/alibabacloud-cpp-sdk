// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNisNetworkMetricsRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_TO_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_TO_JSON(UseCrossAccount, useCrossAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ScanBy, scanBy_);
      DARABONBA_PTR_FROM_JSON(StepMinutes, stepMinutes_);
      DARABONBA_PTR_FROM_JSON(UseCrossAccount, useCrossAccount_);
    };
    GetNisNetworkMetricsRequest() = default ;
    GetNisNetworkMetricsRequest(const GetNisNetworkMetricsRequest &) = default ;
    GetNisNetworkMetricsRequest(GetNisNetworkMetricsRequest &&) = default ;
    GetNisNetworkMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkMetricsRequest() = default ;
    GetNisNetworkMetricsRequest& operator=(const GetNisNetworkMetricsRequest &) = default ;
    GetNisNetworkMetricsRequest& operator=(GetNisNetworkMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && return this->beginTime_ == nullptr && return this->dimensions_ == nullptr && return this->endTime_ == nullptr && return this->metricName_ == nullptr && return this->regionNo_ == nullptr
        && return this->resourceType_ == nullptr && return this->scanBy_ == nullptr && return this->stepMinutes_ == nullptr && return this->useCrossAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline GetNisNetworkMetricsRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetNisNetworkMetricsRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisNetworkMetricsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<GetNisNetworkMetricsRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<GetNisNetworkMetricsRequestDimensions>) };
    inline vector<GetNisNetworkMetricsRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<GetNisNetworkMetricsRequestDimensions>) };
    inline GetNisNetworkMetricsRequest& setDimensions(const vector<GetNisNetworkMetricsRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline GetNisNetworkMetricsRequest& setDimensions(vector<GetNisNetworkMetricsRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisNetworkMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetNisNetworkMetricsRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisNetworkMetricsRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetNisNetworkMetricsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scanBy Field Functions 
    bool hasScanBy() const { return this->scanBy_ != nullptr;};
    void deleteScanBy() { this->scanBy_ = nullptr;};
    inline string scanBy() const { DARABONBA_PTR_GET_DEFAULT(scanBy_, "") };
    inline GetNisNetworkMetricsRequest& setScanBy(string scanBy) { DARABONBA_PTR_SET_VALUE(scanBy_, scanBy) };


    // stepMinutes Field Functions 
    bool hasStepMinutes() const { return this->stepMinutes_ != nullptr;};
    void deleteStepMinutes() { this->stepMinutes_ = nullptr;};
    inline int32_t stepMinutes() const { DARABONBA_PTR_GET_DEFAULT(stepMinutes_, 0) };
    inline GetNisNetworkMetricsRequest& setStepMinutes(int32_t stepMinutes) { DARABONBA_PTR_SET_VALUE(stepMinutes_, stepMinutes) };


    // useCrossAccount Field Functions 
    bool hasUseCrossAccount() const { return this->useCrossAccount_ != nullptr;};
    void deleteUseCrossAccount() { this->useCrossAccount_ = nullptr;};
    inline bool useCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(useCrossAccount_, false) };
    inline GetNisNetworkMetricsRequest& setUseCrossAccount(bool useCrossAccount) { DARABONBA_PTR_SET_VALUE(useCrossAccount_, useCrossAccount) };


  protected:
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<GetNisNetworkMetricsRequestDimensions>> dimensions_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> scanBy_ = nullptr;
    std::shared_ptr<int32_t> stepMinutes_ = nullptr;
    std::shared_ptr<bool> useCrossAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
