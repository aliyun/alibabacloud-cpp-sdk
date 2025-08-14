// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENROUTEMAPRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCENROUTEMAPRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteMapRecord, cenRouteMapRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteMapRecord, cenRouteMapRecord_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& operator=(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& operator=(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenRouteMapRecord_ != nullptr; };
    // cenRouteMapRecord Field Functions 
    bool hasCenRouteMapRecord() const { return this->cenRouteMapRecord_ != nullptr;};
    void deleteCenRouteMapRecord() { this->cenRouteMapRecord_ = nullptr;};
    inline const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> & cenRouteMapRecord() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecord_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>) };
    inline vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> cenRouteMapRecord() { DARABONBA_PTR_GET(cenRouteMapRecord_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& setCenRouteMapRecord(const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> & cenRouteMapRecord) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecord_, cenRouteMapRecord) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords& setCenRouteMapRecord(vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> && cenRouteMapRecord) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecord_, cenRouteMapRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>> cenRouteMapRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
