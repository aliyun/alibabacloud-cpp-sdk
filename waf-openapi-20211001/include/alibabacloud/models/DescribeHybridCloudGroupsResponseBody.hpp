// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudGroupsResponseBodyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudGroupsResponseBody() = default ;
    DescribeHybridCloudGroupsResponseBody(const DescribeHybridCloudGroupsResponseBody &) = default ;
    DescribeHybridCloudGroupsResponseBody(DescribeHybridCloudGroupsResponseBody &&) = default ;
    DescribeHybridCloudGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudGroupsResponseBody() = default ;
    DescribeHybridCloudGroupsResponseBody& operator=(const DescribeHybridCloudGroupsResponseBody &) = default ;
    DescribeHybridCloudGroupsResponseBody& operator=(DescribeHybridCloudGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groups_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeHybridCloudGroupsResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeHybridCloudGroupsResponseBodyGroups>) };
    inline vector<DescribeHybridCloudGroupsResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<DescribeHybridCloudGroupsResponseBodyGroups>) };
    inline DescribeHybridCloudGroupsResponseBody& setGroups(const vector<DescribeHybridCloudGroupsResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeHybridCloudGroupsResponseBody& setGroups(vector<DescribeHybridCloudGroupsResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The node groups.
    std::shared_ptr<vector<DescribeHybridCloudGroupsResponseBodyGroups>> groups_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
