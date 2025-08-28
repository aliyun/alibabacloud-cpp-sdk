// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTECOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTECOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnRouteEntriesResponseBodyVpnRouteCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& obj) { 
      DARABONBA_PTR_TO_JSON(VpnRouteCount, vpnRouteCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(VpnRouteCount, vpnRouteCount_);
    };
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts(const DescribeVpnRouteEntriesResponseBodyVpnRouteCounts &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts(DescribeVpnRouteEntriesResponseBodyVpnRouteCounts &&) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBodyVpnRouteCounts() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& operator=(const DescribeVpnRouteEntriesResponseBodyVpnRouteCounts &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& operator=(DescribeVpnRouteEntriesResponseBodyVpnRouteCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpnRouteCount_ != nullptr; };
    // vpnRouteCount Field Functions 
    bool hasVpnRouteCount() const { return this->vpnRouteCount_ != nullptr;};
    void deleteVpnRouteCount() { this->vpnRouteCount_ = nullptr;};
    inline const vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount> & vpnRouteCount() const { DARABONBA_PTR_GET_CONST(vpnRouteCount_, vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount>) };
    inline vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount> vpnRouteCount() { DARABONBA_PTR_GET(vpnRouteCount_, vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount>) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& setVpnRouteCount(const vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount> & vpnRouteCount) { DARABONBA_PTR_SET_VALUE(vpnRouteCount_, vpnRouteCount) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCounts& setVpnRouteCount(vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount> && vpnRouteCount) { DARABONBA_PTR_SET_RVALUE(vpnRouteCount_, vpnRouteCount) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount>> vpnRouteCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
