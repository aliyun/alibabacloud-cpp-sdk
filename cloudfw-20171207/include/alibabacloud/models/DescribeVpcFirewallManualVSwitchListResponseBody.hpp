// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLMANUALVSWITCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLMANUALVSWITCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallManualVSwitchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallManualVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchList, vSwitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallManualVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchList, vSwitchList_);
    };
    DescribeVpcFirewallManualVSwitchListResponseBody() = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(const DescribeVpcFirewallManualVSwitchListResponseBody &) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(DescribeVpcFirewallManualVSwitchListResponseBody &&) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallManualVSwitchListResponseBody() = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody& operator=(const DescribeVpcFirewallManualVSwitchListResponseBody &) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody& operator=(DescribeVpcFirewallManualVSwitchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->vSwitchList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchList Field Functions 
    bool hasVSwitchList() const { return this->vSwitchList_ != nullptr;};
    void deleteVSwitchList() { this->vSwitchList_ = nullptr;};
    inline const vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList> & vSwitchList() const { DARABONBA_PTR_GET_CONST(vSwitchList_, vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList>) };
    inline vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList> vSwitchList() { DARABONBA_PTR_GET(vSwitchList_, vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList>) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setVSwitchList(const vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList> & vSwitchList) { DARABONBA_PTR_SET_VALUE(vSwitchList_, vSwitchList) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setVSwitchList(vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList> && vSwitchList) { DARABONBA_PTR_SET_RVALUE(vSwitchList_, vSwitchList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeVpcFirewallManualVSwitchListResponseBodyVSwitchList>> vSwitchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
