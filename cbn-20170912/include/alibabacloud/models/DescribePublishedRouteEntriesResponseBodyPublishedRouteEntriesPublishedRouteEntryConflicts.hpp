// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRYCONFLICTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRYCONFLICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& obj) { 
      DARABONBA_PTR_TO_JSON(Conflict, conflict_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& obj) { 
      DARABONBA_PTR_FROM_JSON(Conflict, conflict_);
    };
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts &&) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& operator=(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& operator=(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conflict_ != nullptr; };
    // conflict Field Functions 
    bool hasConflict() const { return this->conflict_ != nullptr;};
    void deleteConflict() { this->conflict_ = nullptr;};
    inline const vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict> & conflict() const { DARABONBA_PTR_GET_CONST(conflict_, vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict>) };
    inline vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict> conflict() { DARABONBA_PTR_GET(conflict_, vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict>) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& setConflict(const vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict> & conflict) { DARABONBA_PTR_SET_VALUE(conflict_, conflict) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts& setConflict(vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict> && conflict) { DARABONBA_PTR_SET_RVALUE(conflict_, conflict) };


  protected:
    std::shared_ptr<vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict>> conflict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
