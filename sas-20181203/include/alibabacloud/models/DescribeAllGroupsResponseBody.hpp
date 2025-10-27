// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllGroupsResponseBodyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllGroupsResponseBody() = default ;
    DescribeAllGroupsResponseBody(const DescribeAllGroupsResponseBody &) = default ;
    DescribeAllGroupsResponseBody(DescribeAllGroupsResponseBody &&) = default ;
    DescribeAllGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllGroupsResponseBody() = default ;
    DescribeAllGroupsResponseBody& operator=(const DescribeAllGroupsResponseBody &) = default ;
    DescribeAllGroupsResponseBody& operator=(DescribeAllGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->groups_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAllGroupsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeAllGroupsResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeAllGroupsResponseBodyGroups>) };
    inline vector<DescribeAllGroupsResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<DescribeAllGroupsResponseBodyGroups>) };
    inline DescribeAllGroupsResponseBody& setGroups(const vector<DescribeAllGroupsResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeAllGroupsResponseBody& setGroups(vector<DescribeAllGroupsResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of server groups.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The grouping information about the servers.
    std::shared_ptr<vector<DescribeAllGroupsResponseBodyGroups>> groups_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
