// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCONFLICTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCONFLICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& obj) { 
      DARABONBA_PTR_TO_JSON(Conflict, conflict_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& obj) { 
      DARABONBA_PTR_FROM_JSON(Conflict, conflict_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& operator=(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& operator=(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conflict_ != nullptr; };
    // conflict Field Functions 
    bool hasConflict() const { return this->conflict_ != nullptr;};
    void deleteConflict() { this->conflict_ = nullptr;};
    inline const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict> & conflict() const { DARABONBA_PTR_GET_CONST(conflict_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict>) };
    inline vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict> conflict() { DARABONBA_PTR_GET(conflict_, vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict>) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& setConflict(const vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict> & conflict) { DARABONBA_PTR_SET_VALUE(conflict_, conflict) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts& setConflict(vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict> && conflict) { DARABONBA_PTR_SET_RVALUE(conflict_, conflict) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict>> conflict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
