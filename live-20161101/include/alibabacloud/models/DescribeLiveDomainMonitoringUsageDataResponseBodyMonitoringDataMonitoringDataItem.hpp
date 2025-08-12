// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODYMONITORINGDATAMONITORINGDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODYMONITORINGDATAMONITORINGDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem(const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem(DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem &&) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& operator=(const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& operator=(DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->duration_ != nullptr && this->instanceId_ != nullptr && this->region_ != nullptr && this->resolution_ != nullptr && this->timeStamp_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The domain name. This field is valid only when you specify domain for the **SplitBy** parameter.
    std::shared_ptr<string> domainName_ = nullptr;
    // The duration. Unit: minutes.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the monitoring session. This field is valid only when you specify instance for the **SplitBy** parameter.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region of the live center. This field is valid only when you specify Region for the **SplitBy** parameter.
    std::shared_ptr<string> region_ = nullptr;
    // The resolution. This field is valid only when you specify resolution for the **SplitBy** parameter.
    std::shared_ptr<string> resolution_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
