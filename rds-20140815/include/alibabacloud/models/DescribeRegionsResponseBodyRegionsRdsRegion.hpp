// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSRDSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSRDSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRDSRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRDSRegion& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRDSRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeRegionsResponseBodyRegionsRDSRegion() = default ;
    DescribeRegionsResponseBodyRegionsRDSRegion(const DescribeRegionsResponseBodyRegionsRDSRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRDSRegion(DescribeRegionsResponseBodyRegionsRDSRegion &&) = default ;
    DescribeRegionsResponseBodyRegionsRDSRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRDSRegion() = default ;
    DescribeRegionsResponseBodyRegionsRDSRegion& operator=(const DescribeRegionsResponseBodyRegionsRDSRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRDSRegion& operator=(DescribeRegionsResponseBodyRegionsRDSRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->regionEndpoint_ == nullptr && return this->regionId_ == nullptr && return this->zoneId_ == nullptr && return this->zoneName_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyRegionsRDSRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline DescribeRegionsResponseBodyRegionsRDSRegion& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionsRDSRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRegionsResponseBodyRegionsRDSRegion& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeRegionsResponseBodyRegionsRDSRegion& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The region name. The return value of this parameter is in the language that is specified by the **AcceptLanguage** parameter. For example, if the value of the RegionId parameter in the response is cn-hangzhou, the following values are returned for the LocalName parameter:
    // 
    // *   If the value of the **AcceptLanguage** parameter is **zh-CN**, the value  1()is returned for the LocalName parameter.
    // *   If the value of the **AcceptLanguage** parameter is **en-US**, the value China (Hangzhou) is returned for the LocalName parameter.
    std::shared_ptr<string> localName_ = nullptr;
    // The endpoint that is used to connect to Alibaba Cloud services in the region. For more information, see [Endpoints](https://help.aliyun.com/document_detail/610370.html).
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone name. The return value of this parameter is in the language that is specified by the **AcceptLanguage** parameter. For example, if the value of the ZoneId parameter in the response is cn-hangzhou-j, the following values are returned for the ZoneName parameter:
    // 
    // *   If the value of the **AcceptLanguage** parameter is **zh-CN**, the value   J is returned for the ZoneName parameter.
    // *   If the value of the **AcceptLanguage** parameter is **en-US**, the value Hangzhou Zone J is returned for the ZoneName parameter.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
