// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteEntry, cenRouteEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteEntry, cenRouteEntry_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& operator=(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& operator=(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenRouteEntry_ != nullptr; };
    // cenRouteEntry Field Functions 
    bool hasCenRouteEntry() const { return this->cenRouteEntry_ != nullptr;};
    void deleteCenRouteEntry() { this->cenRouteEntry_ = nullptr;};
    inline const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> & cenRouteEntry() const { DARABONBA_PTR_GET_CONST(cenRouteEntry_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>) };
    inline vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> cenRouteEntry() { DARABONBA_PTR_GET(cenRouteEntry_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& setCenRouteEntry(const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> & cenRouteEntry) { DARABONBA_PTR_SET_VALUE(cenRouteEntry_, cenRouteEntry) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries& setCenRouteEntry(vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> && cenRouteEntry) { DARABONBA_PTR_SET_RVALUE(cenRouteEntry_, cenRouteEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>> cenRouteEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
