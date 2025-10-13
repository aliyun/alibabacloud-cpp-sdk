// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetAvailabilityMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailabilityMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableAutoscale, enableAutoscale_);
      DARABONBA_PTR_TO_JSON(ErrorInstances, errorInstances_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Runnings, runnings_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailabilityMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableAutoscale, enableAutoscale_);
      DARABONBA_PTR_FROM_JSON(ErrorInstances, errorInstances_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Runnings, runnings_);
    };
    GetAvailabilityMetricResponseBodyData() = default ;
    GetAvailabilityMetricResponseBodyData(const GetAvailabilityMetricResponseBodyData &) = default ;
    GetAvailabilityMetricResponseBodyData(GetAvailabilityMetricResponseBodyData &&) = default ;
    GetAvailabilityMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailabilityMetricResponseBodyData() = default ;
    GetAvailabilityMetricResponseBodyData& operator=(const GetAvailabilityMetricResponseBodyData &) = default ;
    GetAvailabilityMetricResponseBodyData& operator=(GetAvailabilityMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->enableAutoscale_ == nullptr && return this->errorInstances_ == nullptr && return this->instances_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->runnings_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAvailabilityMetricResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableAutoscale Field Functions 
    bool hasEnableAutoscale() const { return this->enableAutoscale_ != nullptr;};
    void deleteEnableAutoscale() { this->enableAutoscale_ = nullptr;};
    inline int64_t enableAutoscale() const { DARABONBA_PTR_GET_DEFAULT(enableAutoscale_, 0L) };
    inline GetAvailabilityMetricResponseBodyData& setEnableAutoscale(int64_t enableAutoscale) { DARABONBA_PTR_SET_VALUE(enableAutoscale_, enableAutoscale) };


    // errorInstances Field Functions 
    bool hasErrorInstances() const { return this->errorInstances_ != nullptr;};
    void deleteErrorInstances() { this->errorInstances_ = nullptr;};
    inline int64_t errorInstances() const { DARABONBA_PTR_GET_DEFAULT(errorInstances_, 0L) };
    inline GetAvailabilityMetricResponseBodyData& setErrorInstances(int64_t errorInstances) { DARABONBA_PTR_SET_VALUE(errorInstances_, errorInstances) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int64_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0L) };
    inline GetAvailabilityMetricResponseBodyData& setInstances(int64_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAvailabilityMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAvailabilityMetricResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runnings Field Functions 
    bool hasRunnings() const { return this->runnings_ != nullptr;};
    void deleteRunnings() { this->runnings_ = nullptr;};
    inline int64_t runnings() const { DARABONBA_PTR_GET_DEFAULT(runnings_, 0L) };
    inline GetAvailabilityMetricResponseBodyData& setRunnings(int64_t runnings) { DARABONBA_PTR_SET_VALUE(runnings_, runnings) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // Indicates whether an auto scaling policy is enabled. Valid values:
    // 
    // *   **1**: An auto scaling policy is enabled.
    // *   **0**: No auto scaling policy is enabled.
    std::shared_ptr<int64_t> enableAutoscale_ = nullptr;
    // The number of abnormal instances.
    std::shared_ptr<int64_t> errorInstances_ = nullptr;
    // The expected number of instances.
    std::shared_ptr<int64_t> instances_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The current number of instances.
    std::shared_ptr<int64_t> runnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
