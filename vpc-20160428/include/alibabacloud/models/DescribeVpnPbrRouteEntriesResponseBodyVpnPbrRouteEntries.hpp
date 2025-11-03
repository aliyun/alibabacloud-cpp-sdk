// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNPBRROUTEENTRIESRESPONSEBODYVPNPBRROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNPBRROUTEENTRIESRESPONSEBODYVPNPBRROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(VpnPbrRouteEntry, vpnPbrRouteEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(VpnPbrRouteEntry, vpnPbrRouteEntry_);
    };
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries() = default ;
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries(const DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries &) = default ;
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries(DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries &&) = default ;
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries() = default ;
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& operator=(const DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries &) = default ;
    DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& operator=(DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpnPbrRouteEntry_ == nullptr; };
    // vpnPbrRouteEntry Field Functions 
    bool hasVpnPbrRouteEntry() const { return this->vpnPbrRouteEntry_ != nullptr;};
    void deleteVpnPbrRouteEntry() { this->vpnPbrRouteEntry_ = nullptr;};
    inline const vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry> & vpnPbrRouteEntry() const { DARABONBA_PTR_GET_CONST(vpnPbrRouteEntry_, vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry>) };
    inline vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry> vpnPbrRouteEntry() { DARABONBA_PTR_GET(vpnPbrRouteEntry_, vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry>) };
    inline DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& setVpnPbrRouteEntry(const vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry> & vpnPbrRouteEntry) { DARABONBA_PTR_SET_VALUE(vpnPbrRouteEntry_, vpnPbrRouteEntry) };
    inline DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntries& setVpnPbrRouteEntry(vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry> && vpnPbrRouteEntry) { DARABONBA_PTR_SET_RVALUE(vpnPbrRouteEntry_, vpnPbrRouteEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnPbrRouteEntriesResponseBodyVpnPbrRouteEntriesVpnPbrRouteEntry>> vpnPbrRouteEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
