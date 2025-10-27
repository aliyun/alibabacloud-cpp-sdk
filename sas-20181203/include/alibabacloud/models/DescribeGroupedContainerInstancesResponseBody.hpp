// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList.hpp>
#include <alibabacloud/models/DescribeGroupedContainerInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedContainerInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedContainerInstanceList, groupedContainerInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedContainerInstanceList, groupedContainerInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedContainerInstancesResponseBody() = default ;
    DescribeGroupedContainerInstancesResponseBody(const DescribeGroupedContainerInstancesResponseBody &) = default ;
    DescribeGroupedContainerInstancesResponseBody(DescribeGroupedContainerInstancesResponseBody &&) = default ;
    DescribeGroupedContainerInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedContainerInstancesResponseBody() = default ;
    DescribeGroupedContainerInstancesResponseBody& operator=(const DescribeGroupedContainerInstancesResponseBody &) = default ;
    DescribeGroupedContainerInstancesResponseBody& operator=(DescribeGroupedContainerInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupedContainerInstanceList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // groupedContainerInstanceList Field Functions 
    bool hasGroupedContainerInstanceList() const { return this->groupedContainerInstanceList_ != nullptr;};
    void deleteGroupedContainerInstanceList() { this->groupedContainerInstanceList_ = nullptr;};
    inline const vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList> & groupedContainerInstanceList() const { DARABONBA_PTR_GET_CONST(groupedContainerInstanceList_, vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList>) };
    inline vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList> groupedContainerInstanceList() { DARABONBA_PTR_GET(groupedContainerInstanceList_, vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList>) };
    inline DescribeGroupedContainerInstancesResponseBody& setGroupedContainerInstanceList(const vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList> & groupedContainerInstanceList) { DARABONBA_PTR_SET_VALUE(groupedContainerInstanceList_, groupedContainerInstanceList) };
    inline DescribeGroupedContainerInstancesResponseBody& setGroupedContainerInstanceList(vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList> && groupedContainerInstanceList) { DARABONBA_PTR_SET_RVALUE(groupedContainerInstanceList_, groupedContainerInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedContainerInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedContainerInstancesResponseBodyPageInfo) };
    inline DescribeGroupedContainerInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedContainerInstancesResponseBodyPageInfo) };
    inline DescribeGroupedContainerInstancesResponseBody& setPageInfo(const DescribeGroupedContainerInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedContainerInstancesResponseBody& setPageInfo(DescribeGroupedContainerInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedContainerInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the container.
    std::shared_ptr<vector<DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList>> groupedContainerInstanceList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeGroupedContainerInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
