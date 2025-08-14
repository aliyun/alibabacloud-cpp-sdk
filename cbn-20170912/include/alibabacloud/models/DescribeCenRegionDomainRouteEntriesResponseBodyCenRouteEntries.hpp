// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteEntry, cenRouteEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteEntry, cenRouteEntry_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenRouteEntry_ != nullptr; };
    // cenRouteEntry Field Functions 
    bool hasCenRouteEntry() const { return this->cenRouteEntry_ != nullptr;};
    void deleteCenRouteEntry() { this->cenRouteEntry_ = nullptr;};
    inline const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> & cenRouteEntry() const { DARABONBA_PTR_GET_CONST(cenRouteEntry_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>) };
    inline vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> cenRouteEntry() { DARABONBA_PTR_GET(cenRouteEntry_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& setCenRouteEntry(const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> & cenRouteEntry) { DARABONBA_PTR_SET_VALUE(cenRouteEntry_, cenRouteEntry) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries& setCenRouteEntry(vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> && cenRouteEntry) { DARABONBA_PTR_SET_RVALUE(cenRouteEntry_, cenRouteEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>> cenRouteEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
