// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContainerInstancesResponseBodyContainerInstanceList.hpp>
#include <alibabacloud/models/DescribeContainerInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerInstanceList, containerInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerInstanceList, containerInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerInstancesResponseBody() = default ;
    DescribeContainerInstancesResponseBody(const DescribeContainerInstancesResponseBody &) = default ;
    DescribeContainerInstancesResponseBody(DescribeContainerInstancesResponseBody &&) = default ;
    DescribeContainerInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerInstancesResponseBody() = default ;
    DescribeContainerInstancesResponseBody& operator=(const DescribeContainerInstancesResponseBody &) = default ;
    DescribeContainerInstancesResponseBody& operator=(DescribeContainerInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerInstanceList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // containerInstanceList Field Functions 
    bool hasContainerInstanceList() const { return this->containerInstanceList_ != nullptr;};
    void deleteContainerInstanceList() { this->containerInstanceList_ = nullptr;};
    inline const vector<DescribeContainerInstancesResponseBodyContainerInstanceList> & containerInstanceList() const { DARABONBA_PTR_GET_CONST(containerInstanceList_, vector<DescribeContainerInstancesResponseBodyContainerInstanceList>) };
    inline vector<DescribeContainerInstancesResponseBodyContainerInstanceList> containerInstanceList() { DARABONBA_PTR_GET(containerInstanceList_, vector<DescribeContainerInstancesResponseBodyContainerInstanceList>) };
    inline DescribeContainerInstancesResponseBody& setContainerInstanceList(const vector<DescribeContainerInstancesResponseBodyContainerInstanceList> & containerInstanceList) { DARABONBA_PTR_SET_VALUE(containerInstanceList_, containerInstanceList) };
    inline DescribeContainerInstancesResponseBody& setContainerInstanceList(vector<DescribeContainerInstancesResponseBodyContainerInstanceList> && containerInstanceList) { DARABONBA_PTR_SET_RVALUE(containerInstanceList_, containerInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeContainerInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeContainerInstancesResponseBodyPageInfo) };
    inline DescribeContainerInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeContainerInstancesResponseBodyPageInfo) };
    inline DescribeContainerInstancesResponseBody& setPageInfo(const DescribeContainerInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeContainerInstancesResponseBody& setPageInfo(DescribeContainerInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the container asset.
    std::shared_ptr<vector<DescribeContainerInstancesResponseBodyContainerInstanceList>> containerInstanceList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeContainerInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
