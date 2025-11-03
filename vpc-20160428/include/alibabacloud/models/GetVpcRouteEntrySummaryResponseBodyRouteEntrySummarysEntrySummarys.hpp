// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODYROUTEENTRYSUMMARYSENTRYSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODYROUTEENTRYSUMMARYSENTRYSUMMARYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
    };
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys() = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys(const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys &) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys(GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys &&) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys() = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& operator=(const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys &) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& operator=(GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->routeEntryType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // routeEntryType Field Functions 
    bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
    void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
    inline string routeEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
    inline GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


  protected:
    // The number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The type of the route. Valid values:
    // 
    // *   **All**: all route types
    // *   **Custom**: a custom route
    // *   **System**: a system route
    // *   **BGP**: a BGP route
    // *   **CEN**: a CEN route
    std::shared_ptr<string> routeEntryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
