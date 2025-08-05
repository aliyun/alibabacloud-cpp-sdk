// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallIPSWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
    };
    DescribeVpcFirewallIPSWhitelistResponseBody() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(const DescribeVpcFirewallIPSWhitelistResponseBody &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(DescribeVpcFirewallIPSWhitelistResponseBody &&) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallIPSWhitelistResponseBody() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody& operator=(const DescribeVpcFirewallIPSWhitelistResponseBody &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody& operator=(DescribeVpcFirewallIPSWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->whitelists_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whitelists Field Functions 
    bool hasWhitelists() const { return this->whitelists_ != nullptr;};
    void deleteWhitelists() { this->whitelists_ = nullptr;};
    inline const vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists> & whitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists>) };
    inline vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists> whitelists() { DARABONBA_PTR_GET(whitelists_, vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists>) };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setWhitelists(const vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setWhitelists(vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the IPS whitelist of the VPC firewall.
    std::shared_ptr<vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists>> whitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
