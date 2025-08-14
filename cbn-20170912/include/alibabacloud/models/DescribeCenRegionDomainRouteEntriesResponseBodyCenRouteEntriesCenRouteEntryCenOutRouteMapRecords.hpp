// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENOUTROUTEMAPRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENOUTROUTEMAPRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CenOutRouteMapRecord, cenOutRouteMapRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CenOutRouteMapRecord, cenOutRouteMapRecord_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenOutRouteMapRecord_ != nullptr; };
    // cenOutRouteMapRecord Field Functions 
    bool hasCenOutRouteMapRecord() const { return this->cenOutRouteMapRecord_ != nullptr;};
    void deleteCenOutRouteMapRecord() { this->cenOutRouteMapRecord_ = nullptr;};
    inline const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord> & cenOutRouteMapRecord() const { DARABONBA_PTR_GET_CONST(cenOutRouteMapRecord_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord>) };
    inline vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord> cenOutRouteMapRecord() { DARABONBA_PTR_GET(cenOutRouteMapRecord_, vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord>) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& setCenOutRouteMapRecord(const vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord> & cenOutRouteMapRecord) { DARABONBA_PTR_SET_VALUE(cenOutRouteMapRecord_, cenOutRouteMapRecord) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords& setCenOutRouteMapRecord(vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord> && cenOutRouteMapRecord) { DARABONBA_PTR_SET_RVALUE(cenOutRouteMapRecord_, cenOutRouteMapRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord>> cenOutRouteMapRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
