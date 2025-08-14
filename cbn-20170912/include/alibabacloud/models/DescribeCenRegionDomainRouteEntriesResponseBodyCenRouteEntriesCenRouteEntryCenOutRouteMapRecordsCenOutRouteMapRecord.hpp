// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENOUTROUTEMAPRECORDSCENOUTROUTEMAPRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENOUTROUTEMAPRECORDSCENOUTROUTEMAPRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->routeMapId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string routeMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


  protected:
    // The ID of the region where the routing policy is applied.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> routeMapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
