// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnRouteEntriesResponseBodyVpnRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(VpnRouteEntry, vpnRouteEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(VpnRouteEntry, vpnRouteEntry_);
    };
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries(const DescribeVpnRouteEntriesResponseBodyVpnRouteEntries &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries(DescribeVpnRouteEntriesResponseBodyVpnRouteEntries &&) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBodyVpnRouteEntries() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& operator=(const DescribeVpnRouteEntriesResponseBodyVpnRouteEntries &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& operator=(DescribeVpnRouteEntriesResponseBodyVpnRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpnRouteEntry_ == nullptr; };
    // vpnRouteEntry Field Functions 
    bool hasVpnRouteEntry() const { return this->vpnRouteEntry_ != nullptr;};
    void deleteVpnRouteEntry() { this->vpnRouteEntry_ = nullptr;};
    inline const vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry> & vpnRouteEntry() const { DARABONBA_PTR_GET_CONST(vpnRouteEntry_, vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry>) };
    inline vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry> vpnRouteEntry() { DARABONBA_PTR_GET(vpnRouteEntry_, vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry>) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& setVpnRouteEntry(const vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry> & vpnRouteEntry) { DARABONBA_PTR_SET_VALUE(vpnRouteEntry_, vpnRouteEntry) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntries& setVpnRouteEntry(vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry> && vpnRouteEntry) { DARABONBA_PTR_SET_RVALUE(vpnRouteEntry_, vpnRouteEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry>> vpnRouteEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
