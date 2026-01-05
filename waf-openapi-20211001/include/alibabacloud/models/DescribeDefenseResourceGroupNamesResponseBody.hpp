// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseResourceGroupNamesResponseBody() = default ;
    DescribeDefenseResourceGroupNamesResponseBody(const DescribeDefenseResourceGroupNamesResponseBody &) = default ;
    DescribeDefenseResourceGroupNamesResponseBody(DescribeDefenseResourceGroupNamesResponseBody &&) = default ;
    DescribeDefenseResourceGroupNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupNamesResponseBody() = default ;
    DescribeDefenseResourceGroupNamesResponseBody& operator=(const DescribeDefenseResourceGroupNamesResponseBody &) = default ;
    DescribeDefenseResourceGroupNamesResponseBody& operator=(DescribeDefenseResourceGroupNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupNames_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groupNames Field Functions 
    bool hasGroupNames() const { return this->groupNames_ != nullptr;};
    void deleteGroupNames() { this->groupNames_ = nullptr;};
    inline const vector<string> & getGroupNames() const { DARABONBA_PTR_GET_CONST(groupNames_, vector<string>) };
    inline vector<string> getGroupNames() { DARABONBA_PTR_GET(groupNames_, vector<string>) };
    inline DescribeDefenseResourceGroupNamesResponseBody& setGroupNames(const vector<string> & groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };
    inline DescribeDefenseResourceGroupNamesResponseBody& setGroupNames(vector<string> && groupNames) { DARABONBA_PTR_SET_RVALUE(groupNames_, groupNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceGroupNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseResourceGroupNamesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The names of the protected object groups.
    shared_ptr<vector<string>> groupNames_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
