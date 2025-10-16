// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallAclGroupListResponseBodyAclGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAclGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclGroupList, aclGroupList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclGroupList, aclGroupList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallAclGroupListResponseBody() = default ;
    DescribeVpcFirewallAclGroupListResponseBody(const DescribeVpcFirewallAclGroupListResponseBody &) = default ;
    DescribeVpcFirewallAclGroupListResponseBody(DescribeVpcFirewallAclGroupListResponseBody &&) = default ;
    DescribeVpcFirewallAclGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAclGroupListResponseBody() = default ;
    DescribeVpcFirewallAclGroupListResponseBody& operator=(const DescribeVpcFirewallAclGroupListResponseBody &) = default ;
    DescribeVpcFirewallAclGroupListResponseBody& operator=(DescribeVpcFirewallAclGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclGroupList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // aclGroupList Field Functions 
    bool hasAclGroupList() const { return this->aclGroupList_ != nullptr;};
    void deleteAclGroupList() { this->aclGroupList_ = nullptr;};
    inline const vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList> & aclGroupList() const { DARABONBA_PTR_GET_CONST(aclGroupList_, vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList>) };
    inline vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList> aclGroupList() { DARABONBA_PTR_GET(aclGroupList_, vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList>) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setAclGroupList(const vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList> & aclGroupList) { DARABONBA_PTR_SET_VALUE(aclGroupList_, aclGroupList) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setAclGroupList(vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList> && aclGroupList) { DARABONBA_PTR_SET_RVALUE(aclGroupList_, aclGroupList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallAclGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access control policy groups.
    std::shared_ptr<vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList>> aclGroupList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the policy groups that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
