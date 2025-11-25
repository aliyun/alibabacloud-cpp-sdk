// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallAclGroupListResponseBodyNatFirewalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallAclGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatFirewalls, natFirewalls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatFirewalls, natFirewalls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallAclGroupListResponseBody() = default ;
    DescribeNatFirewallAclGroupListResponseBody(const DescribeNatFirewallAclGroupListResponseBody &) = default ;
    DescribeNatFirewallAclGroupListResponseBody(DescribeNatFirewallAclGroupListResponseBody &&) = default ;
    DescribeNatFirewallAclGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallAclGroupListResponseBody() = default ;
    DescribeNatFirewallAclGroupListResponseBody& operator=(const DescribeNatFirewallAclGroupListResponseBody &) = default ;
    DescribeNatFirewallAclGroupListResponseBody& operator=(DescribeNatFirewallAclGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natFirewalls_ == nullptr
        && return this->requestId_ == nullptr; };
    // natFirewalls Field Functions 
    bool hasNatFirewalls() const { return this->natFirewalls_ != nullptr;};
    void deleteNatFirewalls() { this->natFirewalls_ = nullptr;};
    inline const vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls> & natFirewalls() const { DARABONBA_PTR_GET_CONST(natFirewalls_, vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls>) };
    inline vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls> natFirewalls() { DARABONBA_PTR_GET(natFirewalls_, vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls>) };
    inline DescribeNatFirewallAclGroupListResponseBody& setNatFirewalls(const vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls> & natFirewalls) { DARABONBA_PTR_SET_VALUE(natFirewalls_, natFirewalls) };
    inline DescribeNatFirewallAclGroupListResponseBody& setNatFirewalls(vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls> && natFirewalls) { DARABONBA_PTR_SET_RVALUE(natFirewalls_, natFirewalls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallAclGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeNatFirewallAclGroupListResponseBodyNatFirewalls>> natFirewalls_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
