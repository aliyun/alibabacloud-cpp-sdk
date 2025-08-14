// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENROUTEMAPRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENROUTEMAPRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteMapRecord, cenRouteMapRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteMapRecord, cenRouteMapRecord_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenRouteMapRecord_ != nullptr; };
    // cenRouteMapRecord Field Functions 
    bool hasCenRouteMapRecord() const { return this->cenRouteMapRecord_ != nullptr;};
    void deleteCenRouteMapRecord() { this->cenRouteMapRecord_ = nullptr;};
    inline const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> & cenRouteMapRecord() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecord_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>) };
    inline vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> cenRouteMapRecord() { DARABONBA_PTR_GET(cenRouteMapRecord_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& setCenRouteMapRecord(const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> & cenRouteMapRecord) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecord_, cenRouteMapRecord) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& setCenRouteMapRecord(vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> && cenRouteMapRecord) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecord_, cenRouteMapRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>> cenRouteMapRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
