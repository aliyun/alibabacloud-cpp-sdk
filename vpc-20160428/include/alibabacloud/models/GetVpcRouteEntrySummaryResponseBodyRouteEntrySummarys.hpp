// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODYROUTEENTRYSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODYROUTEENTRYSUMMARYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& obj) { 
      DARABONBA_PTR_TO_JSON(EntrySummarys, entrySummarys_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(EntrySummarys, entrySummarys_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys() = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys(const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys &) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys(GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys &&) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys() = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& operator=(const GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys &) = default ;
    GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& operator=(GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entrySummarys_ == nullptr
        && return this->routeTableId_ == nullptr; };
    // entrySummarys Field Functions 
    bool hasEntrySummarys() const { return this->entrySummarys_ != nullptr;};
    void deleteEntrySummarys() { this->entrySummarys_ = nullptr;};
    inline const vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys> & entrySummarys() const { DARABONBA_PTR_GET_CONST(entrySummarys_, vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys>) };
    inline vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys> entrySummarys() { DARABONBA_PTR_GET(entrySummarys_, vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys>) };
    inline GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& setEntrySummarys(const vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys> & entrySummarys) { DARABONBA_PTR_SET_VALUE(entrySummarys_, entrySummarys) };
    inline GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& setEntrySummarys(vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys> && entrySummarys) { DARABONBA_PTR_SET_RVALUE(entrySummarys_, entrySummarys) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The information about the routes of different types in one route table.
    std::shared_ptr<vector<Models::GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarysEntrySummarys>> entrySummarys_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
