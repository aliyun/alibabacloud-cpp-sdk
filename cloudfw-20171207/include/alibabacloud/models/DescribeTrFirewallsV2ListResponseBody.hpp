// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2ListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcTrFirewalls, vpcTrFirewalls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcTrFirewalls, vpcTrFirewalls_);
    };
    DescribeTrFirewallsV2ListResponseBody() = default ;
    DescribeTrFirewallsV2ListResponseBody(const DescribeTrFirewallsV2ListResponseBody &) = default ;
    DescribeTrFirewallsV2ListResponseBody(DescribeTrFirewallsV2ListResponseBody &&) = default ;
    DescribeTrFirewallsV2ListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListResponseBody() = default ;
    DescribeTrFirewallsV2ListResponseBody& operator=(const DescribeTrFirewallsV2ListResponseBody &) = default ;
    DescribeTrFirewallsV2ListResponseBody& operator=(DescribeTrFirewallsV2ListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->vpcTrFirewalls_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2ListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTrFirewallsV2ListResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcTrFirewalls Field Functions 
    bool hasVpcTrFirewalls() const { return this->vpcTrFirewalls_ != nullptr;};
    void deleteVpcTrFirewalls() { this->vpcTrFirewalls_ = nullptr;};
    inline const vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls> & vpcTrFirewalls() const { DARABONBA_PTR_GET_CONST(vpcTrFirewalls_, vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls>) };
    inline vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls> vpcTrFirewalls() { DARABONBA_PTR_GET(vpcTrFirewalls_, vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls>) };
    inline DescribeTrFirewallsV2ListResponseBody& setVpcTrFirewalls(const vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls> & vpcTrFirewalls) { DARABONBA_PTR_SET_VALUE(vpcTrFirewalls_, vpcTrFirewalls) };
    inline DescribeTrFirewallsV2ListResponseBody& setVpcTrFirewalls(vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls> && vpcTrFirewalls) { DARABONBA_PTR_SET_RVALUE(vpcTrFirewalls_, vpcTrFirewalls) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The VPC firewalls.
    std::shared_ptr<vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls>> vpcTrFirewalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
