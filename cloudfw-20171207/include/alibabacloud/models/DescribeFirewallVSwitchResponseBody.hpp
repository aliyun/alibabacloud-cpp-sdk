// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFirewallVSwitchResponseBodyVswitchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VswitchList, vswitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VswitchList, vswitchList_);
    };
    DescribeFirewallVSwitchResponseBody() = default ;
    DescribeFirewallVSwitchResponseBody(const DescribeFirewallVSwitchResponseBody &) = default ;
    DescribeFirewallVSwitchResponseBody(DescribeFirewallVSwitchResponseBody &&) = default ;
    DescribeFirewallVSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVSwitchResponseBody() = default ;
    DescribeFirewallVSwitchResponseBody& operator=(const DescribeFirewallVSwitchResponseBody &) = default ;
    DescribeFirewallVSwitchResponseBody& operator=(DescribeFirewallVSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->vswitchList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallVSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFirewallVSwitchResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vswitchList Field Functions 
    bool hasVswitchList() const { return this->vswitchList_ != nullptr;};
    void deleteVswitchList() { this->vswitchList_ = nullptr;};
    inline const vector<DescribeFirewallVSwitchResponseBodyVswitchList> & vswitchList() const { DARABONBA_PTR_GET_CONST(vswitchList_, vector<DescribeFirewallVSwitchResponseBodyVswitchList>) };
    inline vector<DescribeFirewallVSwitchResponseBodyVswitchList> vswitchList() { DARABONBA_PTR_GET(vswitchList_, vector<DescribeFirewallVSwitchResponseBodyVswitchList>) };
    inline DescribeFirewallVSwitchResponseBody& setVswitchList(const vector<DescribeFirewallVSwitchResponseBodyVswitchList> & vswitchList) { DARABONBA_PTR_SET_VALUE(vswitchList_, vswitchList) };
    inline DescribeFirewallVSwitchResponseBody& setVswitchList(vector<DescribeFirewallVSwitchResponseBodyVswitchList> && vswitchList) { DARABONBA_PTR_SET_RVALUE(vswitchList_, vswitchList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeFirewallVSwitchResponseBodyVswitchList>> vswitchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
