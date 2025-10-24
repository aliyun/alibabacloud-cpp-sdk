// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseResourceGroupsResponseBodyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseResourceGroupsResponseBody() = default ;
    DescribeDefenseResourceGroupsResponseBody(const DescribeDefenseResourceGroupsResponseBody &) = default ;
    DescribeDefenseResourceGroupsResponseBody(DescribeDefenseResourceGroupsResponseBody &&) = default ;
    DescribeDefenseResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupsResponseBody() = default ;
    DescribeDefenseResourceGroupsResponseBody& operator=(const DescribeDefenseResourceGroupsResponseBody &) = default ;
    DescribeDefenseResourceGroupsResponseBody& operator=(DescribeDefenseResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groups_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeDefenseResourceGroupsResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeDefenseResourceGroupsResponseBodyGroups>) };
    inline vector<DescribeDefenseResourceGroupsResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<DescribeDefenseResourceGroupsResponseBodyGroups>) };
    inline DescribeDefenseResourceGroupsResponseBody& setGroups(const vector<DescribeDefenseResourceGroupsResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeDefenseResourceGroupsResponseBody& setGroups(vector<DescribeDefenseResourceGroupsResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseResourceGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of protected object groups.
    std::shared_ptr<vector<DescribeDefenseResourceGroupsResponseBodyGroups>> groups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
