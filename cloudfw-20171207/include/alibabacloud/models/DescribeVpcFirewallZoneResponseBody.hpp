// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneList, zoneList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneList, zoneList_);
    };
    DescribeVpcFirewallZoneResponseBody() = default ;
    DescribeVpcFirewallZoneResponseBody(const DescribeVpcFirewallZoneResponseBody &) = default ;
    DescribeVpcFirewallZoneResponseBody(DescribeVpcFirewallZoneResponseBody &&) = default ;
    DescribeVpcFirewallZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallZoneResponseBody() = default ;
    DescribeVpcFirewallZoneResponseBody& operator=(const DescribeVpcFirewallZoneResponseBody &) = default ;
    DescribeVpcFirewallZoneResponseBody& operator=(DescribeVpcFirewallZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zoneList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>> & getZoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>>) };
    inline vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>> getZoneList() { DARABONBA_PTR_GET(zoneList_, vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>>) };
    inline DescribeVpcFirewallZoneResponseBody& setZoneList(const vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline DescribeVpcFirewallZoneResponseBody& setZoneList(vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<vector<DescribeVpcFirewallZoneResponseBody::ZoneList>>> zoneList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
