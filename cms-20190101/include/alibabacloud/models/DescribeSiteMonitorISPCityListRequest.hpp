// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorISPCityListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(IPV4, IPV4_);
      DARABONBA_PTR_TO_JSON(IPV6, IPV6_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ViewAll, viewAll_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(IPV4, IPV4_);
      DARABONBA_PTR_FROM_JSON(IPV6, IPV6_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ViewAll, viewAll_);
    };
    DescribeSiteMonitorISPCityListRequest() = default ;
    DescribeSiteMonitorISPCityListRequest(const DescribeSiteMonitorISPCityListRequest &) = default ;
    DescribeSiteMonitorISPCityListRequest(DescribeSiteMonitorISPCityListRequest &&) = default ;
    DescribeSiteMonitorISPCityListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListRequest() = default ;
    DescribeSiteMonitorISPCityListRequest& operator=(const DescribeSiteMonitorISPCityListRequest &) = default ;
    DescribeSiteMonitorISPCityListRequest& operator=(DescribeSiteMonitorISPCityListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && this->IPV4_ == nullptr && this->IPV6_ == nullptr && this->isp_ == nullptr && this->regionId_ == nullptr && this->viewAll_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSiteMonitorISPCityListRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // IPV4 Field Functions 
    bool hasIPV4() const { return this->IPV4_ != nullptr;};
    void deleteIPV4() { this->IPV4_ = nullptr;};
    inline bool getIPV4() const { DARABONBA_PTR_GET_DEFAULT(IPV4_, false) };
    inline DescribeSiteMonitorISPCityListRequest& setIPV4(bool IPV4) { DARABONBA_PTR_SET_VALUE(IPV4_, IPV4) };


    // IPV6 Field Functions 
    bool hasIPV6() const { return this->IPV6_ != nullptr;};
    void deleteIPV6() { this->IPV6_ = nullptr;};
    inline bool getIPV6() const { DARABONBA_PTR_GET_DEFAULT(IPV6_, false) };
    inline DescribeSiteMonitorISPCityListRequest& setIPV6(bool IPV6) { DARABONBA_PTR_SET_VALUE(IPV6_, IPV6) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSiteMonitorISPCityListRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorISPCityListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // viewAll Field Functions 
    bool hasViewAll() const { return this->viewAll_ != nullptr;};
    void deleteViewAll() { this->viewAll_ = nullptr;};
    inline bool getViewAll() const { DARABONBA_PTR_GET_DEFAULT(viewAll_, false) };
    inline DescribeSiteMonitorISPCityListRequest& setViewAll(bool viewAll) { DARABONBA_PTR_SET_VALUE(viewAll_, viewAll) };


  protected:
    // The name or ID of the city.
    // 
    // > City names support fuzzy match.
    shared_ptr<string> city_ {};
    // Specifies whether to query IPv4 probes. Valid values:
    // 
    // *   true (default): IPv4 probes are queried.
    // *   false: IPv4 probes are not queried.
    shared_ptr<bool> IPV4_ {};
    // Specifies whether to query IPv6 probes. Valid values:
    // 
    // *   true (default): IPv6 probes are queried.
    // *   false: IPv6 probes are not queried.
    shared_ptr<bool> IPV6_ {};
    // The name or ID of the carrier.
    // 
    // > Carrier names support fuzzy match.
    shared_ptr<string> isp_ {};
    shared_ptr<string> regionId_ {};
    // Specifies whether to return all detection points. Valid values:
    // 
    // *   true (default): returns all detection points.
    // *   false: returns only available detection points.
    shared_ptr<bool> viewAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
