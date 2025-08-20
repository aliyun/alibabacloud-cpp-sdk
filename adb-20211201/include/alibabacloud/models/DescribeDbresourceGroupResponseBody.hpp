// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyGroupsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody(DescribeDBResourceGroupResponseBody &&) = default ;
    DescribeDBResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody& operator=(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody& operator=(DescribeDBResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupsInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // groupsInfo Field Functions 
    bool hasGroupsInfo() const { return this->groupsInfo_ != nullptr;};
    void deleteGroupsInfo() { this->groupsInfo_ = nullptr;};
    inline const vector<DescribeDBResourceGroupResponseBodyGroupsInfo> & groupsInfo() const { DARABONBA_PTR_GET_CONST(groupsInfo_, vector<DescribeDBResourceGroupResponseBodyGroupsInfo>) };
    inline vector<DescribeDBResourceGroupResponseBodyGroupsInfo> groupsInfo() { DARABONBA_PTR_GET(groupsInfo_, vector<DescribeDBResourceGroupResponseBodyGroupsInfo>) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(const vector<DescribeDBResourceGroupResponseBodyGroupsInfo> & groupsInfo) { DARABONBA_PTR_SET_VALUE(groupsInfo_, groupsInfo) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(vector<DescribeDBResourceGroupResponseBodyGroupsInfo> && groupsInfo) { DARABONBA_PTR_SET_RVALUE(groupsInfo_, groupsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried resource groups.
    std::shared_ptr<vector<DescribeDBResourceGroupResponseBodyGroupsInfo>> groupsInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
