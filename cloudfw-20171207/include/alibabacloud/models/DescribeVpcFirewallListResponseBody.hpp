// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcFirewalls, vpcFirewalls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcFirewalls, vpcFirewalls_);
    };
    DescribeVpcFirewallListResponseBody() = default ;
    DescribeVpcFirewallListResponseBody(const DescribeVpcFirewallListResponseBody &) = default ;
    DescribeVpcFirewallListResponseBody(DescribeVpcFirewallListResponseBody &&) = default ;
    DescribeVpcFirewallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBody() = default ;
    DescribeVpcFirewallListResponseBody& operator=(const DescribeVpcFirewallListResponseBody &) = default ;
    DescribeVpcFirewallListResponseBody& operator=(DescribeVpcFirewallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->vpcFirewalls_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcFirewalls Field Functions 
    bool hasVpcFirewalls() const { return this->vpcFirewalls_ != nullptr;};
    void deleteVpcFirewalls() { this->vpcFirewalls_ = nullptr;};
    inline const vector<DescribeVpcFirewallListResponseBodyVpcFirewalls> & vpcFirewalls() const { DARABONBA_PTR_GET_CONST(vpcFirewalls_, vector<DescribeVpcFirewallListResponseBodyVpcFirewalls>) };
    inline vector<DescribeVpcFirewallListResponseBodyVpcFirewalls> vpcFirewalls() { DARABONBA_PTR_GET(vpcFirewalls_, vector<DescribeVpcFirewallListResponseBodyVpcFirewalls>) };
    inline DescribeVpcFirewallListResponseBody& setVpcFirewalls(const vector<DescribeVpcFirewallListResponseBodyVpcFirewalls> & vpcFirewalls) { DARABONBA_PTR_SET_VALUE(vpcFirewalls_, vpcFirewalls) };
    inline DescribeVpcFirewallListResponseBody& setVpcFirewalls(vector<DescribeVpcFirewallListResponseBodyVpcFirewalls> && vpcFirewalls) { DARABONBA_PTR_SET_RVALUE(vpcFirewalls_, vpcFirewalls) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of VPC firewalls.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the VPC firewalls.
    std::shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewalls>> vpcFirewalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
