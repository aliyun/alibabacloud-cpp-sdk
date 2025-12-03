// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePluginGroupsResponseBodyGroupSummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupSummarys, groupSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupSummarys, groupSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginGroupsResponseBody() = default ;
    DescribePluginGroupsResponseBody(const DescribePluginGroupsResponseBody &) = default ;
    DescribePluginGroupsResponseBody(DescribePluginGroupsResponseBody &&) = default ;
    DescribePluginGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginGroupsResponseBody() = default ;
    DescribePluginGroupsResponseBody& operator=(const DescribePluginGroupsResponseBody &) = default ;
    DescribePluginGroupsResponseBody& operator=(DescribePluginGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupSummarys_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // groupSummarys Field Functions 
    bool hasGroupSummarys() const { return this->groupSummarys_ != nullptr;};
    void deleteGroupSummarys() { this->groupSummarys_ = nullptr;};
    inline const DescribePluginGroupsResponseBodyGroupSummarys & groupSummarys() const { DARABONBA_PTR_GET_CONST(groupSummarys_, DescribePluginGroupsResponseBodyGroupSummarys) };
    inline DescribePluginGroupsResponseBodyGroupSummarys groupSummarys() { DARABONBA_PTR_GET(groupSummarys_, DescribePluginGroupsResponseBodyGroupSummarys) };
    inline DescribePluginGroupsResponseBody& setGroupSummarys(const DescribePluginGroupsResponseBodyGroupSummarys & groupSummarys) { DARABONBA_PTR_SET_VALUE(groupSummarys_, groupSummarys) };
    inline DescribePluginGroupsResponseBody& setGroupSummarys(DescribePluginGroupsResponseBodyGroupSummarys && groupSummarys) { DARABONBA_PTR_SET_RVALUE(groupSummarys_, groupSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Collection of group information
    std::shared_ptr<DescribePluginGroupsResponseBodyGroupSummarys> groupSummarys_ = nullptr;
    // Pagination parameter: current page number
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Pagination parameter: number of items per page, default value 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of returned results
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
