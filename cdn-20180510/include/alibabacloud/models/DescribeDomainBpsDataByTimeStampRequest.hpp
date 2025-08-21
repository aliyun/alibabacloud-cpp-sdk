// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByTimeStampRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByTimeStampRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IspNames, ispNames_);
      DARABONBA_PTR_TO_JSON(LocationNames, locationNames_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByTimeStampRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IspNames, ispNames_);
      DARABONBA_PTR_FROM_JSON(LocationNames, locationNames_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    DescribeDomainBpsDataByTimeStampRequest() = default ;
    DescribeDomainBpsDataByTimeStampRequest(const DescribeDomainBpsDataByTimeStampRequest &) = default ;
    DescribeDomainBpsDataByTimeStampRequest(DescribeDomainBpsDataByTimeStampRequest &&) = default ;
    DescribeDomainBpsDataByTimeStampRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByTimeStampRequest() = default ;
    DescribeDomainBpsDataByTimeStampRequest& operator=(const DescribeDomainBpsDataByTimeStampRequest &) = default ;
    DescribeDomainBpsDataByTimeStampRequest& operator=(DescribeDomainBpsDataByTimeStampRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ispNames_ != nullptr && this->locationNames_ != nullptr && this->timePoint_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainBpsDataByTimeStampRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ispNames Field Functions 
    bool hasIspNames() const { return this->ispNames_ != nullptr;};
    void deleteIspNames() { this->ispNames_ = nullptr;};
    inline string ispNames() const { DARABONBA_PTR_GET_DEFAULT(ispNames_, "") };
    inline DescribeDomainBpsDataByTimeStampRequest& setIspNames(string ispNames) { DARABONBA_PTR_SET_VALUE(ispNames_, ispNames) };


    // locationNames Field Functions 
    bool hasLocationNames() const { return this->locationNames_ != nullptr;};
    void deleteLocationNames() { this->locationNames_ = nullptr;};
    inline string locationNames() const { DARABONBA_PTR_GET_DEFAULT(locationNames_, "") };
    inline DescribeDomainBpsDataByTimeStampRequest& setLocationNames(string locationNames) { DARABONBA_PTR_SET_VALUE(locationNames_, locationNames) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline DescribeDomainBpsDataByTimeStampRequest& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The names of the Internet service providers (ISPs). Separate multiple ISPs with commas (,).
    // 
    // You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> ispNames_ = nullptr;
    // The regions. Separate multiple regions with commas (,).
    // 
    // You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> locationNames_ = nullptr;
    // The point in time to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The data is collected every 5 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
