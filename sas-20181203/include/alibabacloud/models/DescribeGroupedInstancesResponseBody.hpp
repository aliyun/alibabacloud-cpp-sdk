// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupedInstancesResponseBodyInstances.hpp>
#include <alibabacloud/models/DescribeGroupedInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedInstancesResponseBody() = default ;
    DescribeGroupedInstancesResponseBody(const DescribeGroupedInstancesResponseBody &) = default ;
    DescribeGroupedInstancesResponseBody(DescribeGroupedInstancesResponseBody &&) = default ;
    DescribeGroupedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedInstancesResponseBody() = default ;
    DescribeGroupedInstancesResponseBody& operator=(const DescribeGroupedInstancesResponseBody &) = default ;
    DescribeGroupedInstancesResponseBody& operator=(DescribeGroupedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeGroupedInstancesResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeGroupedInstancesResponseBodyInstances>) };
    inline vector<DescribeGroupedInstancesResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<DescribeGroupedInstancesResponseBodyInstances>) };
    inline DescribeGroupedInstancesResponseBody& setInstances(const vector<DescribeGroupedInstancesResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGroupedInstancesResponseBody& setInstances(vector<DescribeGroupedInstancesResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedInstancesResponseBodyPageInfo) };
    inline DescribeGroupedInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedInstancesResponseBodyPageInfo) };
    inline DescribeGroupedInstancesResponseBody& setPageInfo(const DescribeGroupedInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedInstancesResponseBody& setPageInfo(DescribeGroupedInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the assets.
    std::shared_ptr<vector<DescribeGroupedInstancesResponseBodyInstances>> instances_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeGroupedInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
