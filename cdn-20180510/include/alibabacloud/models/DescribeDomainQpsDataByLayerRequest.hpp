// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainQpsDataByLayerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsDataByLayerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsDataByLayerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainQpsDataByLayerRequest() = default ;
    DescribeDomainQpsDataByLayerRequest(const DescribeDomainQpsDataByLayerRequest &) = default ;
    DescribeDomainQpsDataByLayerRequest(DescribeDomainQpsDataByLayerRequest &&) = default ;
    DescribeDomainQpsDataByLayerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsDataByLayerRequest() = default ;
    DescribeDomainQpsDataByLayerRequest& operator=(const DescribeDomainQpsDataByLayerRequest &) = default ;
    DescribeDomainQpsDataByLayerRequest& operator=(DescribeDomainQpsDataByLayerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->ispNameEn_ != nullptr && this->layer_ != nullptr && this->locationNameEn_ != nullptr
        && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainQpsDataByLayerRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. You can specify a maximum of 500 domain names in a request. Separate multiple domain names with commas (,).
    // 
    // By default, this operation queries the QPS of all accelerated domain names that belong to your Alibaba Cloud account.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format in the ISO 8601 standard. The time is displayed in UTC.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time interval between the data entries to return. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 300 (5 minutes), 3600 (1 hour), and 86400 (1 day). For more information, see **Description**.
    std::shared_ptr<string> interval_ = nullptr;
    // The name of the Internet service provider (ISP) for your Alibaba Cloud CDN service. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query ISPs. If you do not set this parameter, all ISPs are queried.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The layers at which you want to query the number of queries per second. Valid values:
    // 
    // *   **Network layer**: **IPv4**and **IPv6**.
    // *   **Application layer**: **http**, **https**, and **quic**.
    // *   **all**: The default value. Both the network and application layers are included.
    std::shared_ptr<string> layer_ = nullptr;
    // The name of the region. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query the most recent region list. If you do not set this parameter, all regions are queried.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format in the ISO 8601 standard. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
