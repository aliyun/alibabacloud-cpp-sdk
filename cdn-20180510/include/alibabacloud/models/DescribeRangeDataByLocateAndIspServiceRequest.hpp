// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERANGEDATABYLOCATEANDISPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERANGEDATABYLOCATEANDISPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRangeDataByLocateAndIspServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRangeDataByLocateAndIspServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IspNames, ispNames_);
      DARABONBA_PTR_TO_JSON(LocationNames, locationNames_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRangeDataByLocateAndIspServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IspNames, ispNames_);
      DARABONBA_PTR_FROM_JSON(LocationNames, locationNames_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRangeDataByLocateAndIspServiceRequest() = default ;
    DescribeRangeDataByLocateAndIspServiceRequest(const DescribeRangeDataByLocateAndIspServiceRequest &) = default ;
    DescribeRangeDataByLocateAndIspServiceRequest(DescribeRangeDataByLocateAndIspServiceRequest &&) = default ;
    DescribeRangeDataByLocateAndIspServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRangeDataByLocateAndIspServiceRequest() = default ;
    DescribeRangeDataByLocateAndIspServiceRequest& operator=(const DescribeRangeDataByLocateAndIspServiceRequest &) = default ;
    DescribeRangeDataByLocateAndIspServiceRequest& operator=(DescribeRangeDataByLocateAndIspServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->endTime_ != nullptr && this->ispNames_ != nullptr && this->locationNames_ != nullptr && this->startTime_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline DescribeRangeDataByLocateAndIspServiceRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRangeDataByLocateAndIspServiceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ispNames Field Functions 
    bool hasIspNames() const { return this->ispNames_ != nullptr;};
    void deleteIspNames() { this->ispNames_ = nullptr;};
    inline string ispNames() const { DARABONBA_PTR_GET_DEFAULT(ispNames_, "") };
    inline DescribeRangeDataByLocateAndIspServiceRequest& setIspNames(string ispNames) { DARABONBA_PTR_SET_VALUE(ispNames_, ispNames) };


    // locationNames Field Functions 
    bool hasLocationNames() const { return this->locationNames_ != nullptr;};
    void deleteLocationNames() { this->locationNames_ = nullptr;};
    inline string locationNames() const { DARABONBA_PTR_GET_DEFAULT(locationNames_, "") };
    inline DescribeRangeDataByLocateAndIspServiceRequest& setLocationNames(string locationNames) { DARABONBA_PTR_SET_VALUE(locationNames_, locationNames) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRangeDataByLocateAndIspServiceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time. The maximum time range that can be specified is 1 hour.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the ISP. You can specify only one ISP name in each call.
    // 
    // You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query ISPs.
    std::shared_ptr<string> ispNames_ = nullptr;
    // The names of the regions. Separate multiple region names with commas (,).
    // 
    // You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query the most recent region list.
    std::shared_ptr<string> locationNames_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
