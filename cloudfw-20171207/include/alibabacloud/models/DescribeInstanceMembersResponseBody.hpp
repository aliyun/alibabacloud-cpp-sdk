// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceMembersResponseBodyMembers.hpp>
#include <alibabacloud/models/DescribeInstanceMembersResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceMembersResponseBody() = default ;
    DescribeInstanceMembersResponseBody(const DescribeInstanceMembersResponseBody &) = default ;
    DescribeInstanceMembersResponseBody(DescribeInstanceMembersResponseBody &&) = default ;
    DescribeInstanceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMembersResponseBody() = default ;
    DescribeInstanceMembersResponseBody& operator=(const DescribeInstanceMembersResponseBody &) = default ;
    DescribeInstanceMembersResponseBody& operator=(DescribeInstanceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DescribeInstanceMembersResponseBodyMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<DescribeInstanceMembersResponseBodyMembers>) };
    inline vector<DescribeInstanceMembersResponseBodyMembers> members() { DARABONBA_PTR_GET(members_, vector<DescribeInstanceMembersResponseBodyMembers>) };
    inline DescribeInstanceMembersResponseBody& setMembers(const vector<DescribeInstanceMembersResponseBodyMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DescribeInstanceMembersResponseBody& setMembers(vector<DescribeInstanceMembersResponseBodyMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInstanceMembersResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInstanceMembersResponseBodyPageInfo) };
    inline DescribeInstanceMembersResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInstanceMembersResponseBodyPageInfo) };
    inline DescribeInstanceMembersResponseBody& setPageInfo(const DescribeInstanceMembersResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInstanceMembersResponseBody& setPageInfo(DescribeInstanceMembersResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the member.
    std::shared_ptr<vector<DescribeInstanceMembersResponseBodyMembers>> members_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeInstanceMembersResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
