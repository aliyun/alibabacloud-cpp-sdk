// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(PublishedRouteEntry, publishedRouteEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(PublishedRouteEntry, publishedRouteEntry_);
    };
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries &&) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& operator=(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& operator=(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publishedRouteEntry_ != nullptr; };
    // publishedRouteEntry Field Functions 
    bool hasPublishedRouteEntry() const { return this->publishedRouteEntry_ != nullptr;};
    void deletePublishedRouteEntry() { this->publishedRouteEntry_ = nullptr;};
    inline const vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry> & publishedRouteEntry() const { DARABONBA_PTR_GET_CONST(publishedRouteEntry_, vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry>) };
    inline vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry> publishedRouteEntry() { DARABONBA_PTR_GET(publishedRouteEntry_, vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry>) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& setPublishedRouteEntry(const vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry> & publishedRouteEntry) { DARABONBA_PTR_SET_VALUE(publishedRouteEntry_, publishedRouteEntry) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries& setPublishedRouteEntry(vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry> && publishedRouteEntry) { DARABONBA_PTR_SET_RVALUE(publishedRouteEntry_, publishedRouteEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry>> publishedRouteEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
