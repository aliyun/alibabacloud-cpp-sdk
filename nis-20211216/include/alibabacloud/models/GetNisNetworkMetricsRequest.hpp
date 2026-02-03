// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Dimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Dimensions() = default ;
      Dimensions(const Dimensions &) = default ;
      Dimensions(Dimensions &&) = default ;
      Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dimensions() = default ;
      Dimensions& operator=(const Dimensions &) = default ;
      Dimensions& operator=(Dimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Dimensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->beginTime_ == nullptr && this->dimensions_ == nullptr && this->endTime_ == nullptr && this->metricName_ == nullptr && this->regionNo_ == nullptr
        && this->resourceType_ == nullptr && this->scanBy_ == nullptr && this->stepMinutes_ == nullptr && this->useCrossAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline GetNisNetworkMetricsRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetNisNetworkMetricsRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisNetworkMetricsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<GetNisNetworkMetricsRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<GetNisNetworkMetricsRequest::Dimensions>) };
    inline vector<GetNisNetworkMetricsRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<GetNisNetworkMetricsRequest::Dimensions>) };
    inline GetNisNetworkMetricsRequest& setDimensions(const vector<GetNisNetworkMetricsRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline GetNisNetworkMetricsRequest& setDimensions(vector<GetNisNetworkMetricsRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisNetworkMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetNisNetworkMetricsRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisNetworkMetricsRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetNisNetworkMetricsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scanBy Field Functions 
    bool hasScanBy() const { return this->scanBy_ != nullptr;};
    void deleteScanBy() { this->scanBy_ = nullptr;};
    inline string getScanBy() const { DARABONBA_PTR_GET_DEFAULT(scanBy_, "") };
    inline GetNisNetworkMetricsRequest& setScanBy(string scanBy) { DARABONBA_PTR_SET_VALUE(scanBy_, scanBy) };


    // stepMinutes Field Functions 
    bool hasStepMinutes() const { return this->stepMinutes_ != nullptr;};
    void deleteStepMinutes() { this->stepMinutes_ = nullptr;};
    inline int32_t getStepMinutes() const { DARABONBA_PTR_GET_DEFAULT(stepMinutes_, 0) };
    inline GetNisNetworkMetricsRequest& setStepMinutes(int32_t stepMinutes) { DARABONBA_PTR_SET_VALUE(stepMinutes_, stepMinutes) };


    // useCrossAccount Field Functions 
    bool hasUseCrossAccount() const { return this->useCrossAccount_ != nullptr;};
    void deleteUseCrossAccount() { this->useCrossAccount_ = nullptr;};
    inline bool getUseCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(useCrossAccount_, false) };
    inline GetNisNetworkMetricsRequest& setUseCrossAccount(bool useCrossAccount) { DARABONBA_PTR_SET_VALUE(useCrossAccount_, useCrossAccount) };


  protected:
    shared_ptr<vector<string>> accountIds_ {};
    shared_ptr<int64_t> beginTime_ {};
    // This parameter is required.
    shared_ptr<vector<GetNisNetworkMetricsRequest::Dimensions>> dimensions_ {};
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> scanBy_ {};
    shared_ptr<int32_t> stepMinutes_ {};
    shared_ptr<bool> useCrossAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
