// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedInstanceListResponseBodyExposedInstances.hpp>
#include <alibabacloud/models/DescribeExposedInstanceListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedInstances, exposedInstances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedInstances, exposedInstances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExposedInstanceListResponseBody() = default ;
    DescribeExposedInstanceListResponseBody(const DescribeExposedInstanceListResponseBody &) = default ;
    DescribeExposedInstanceListResponseBody(DescribeExposedInstanceListResponseBody &&) = default ;
    DescribeExposedInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceListResponseBody() = default ;
    DescribeExposedInstanceListResponseBody& operator=(const DescribeExposedInstanceListResponseBody &) = default ;
    DescribeExposedInstanceListResponseBody& operator=(DescribeExposedInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposedInstances_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // exposedInstances Field Functions 
    bool hasExposedInstances() const { return this->exposedInstances_ != nullptr;};
    void deleteExposedInstances() { this->exposedInstances_ = nullptr;};
    inline const vector<DescribeExposedInstanceListResponseBodyExposedInstances> & exposedInstances() const { DARABONBA_PTR_GET_CONST(exposedInstances_, vector<DescribeExposedInstanceListResponseBodyExposedInstances>) };
    inline vector<DescribeExposedInstanceListResponseBodyExposedInstances> exposedInstances() { DARABONBA_PTR_GET(exposedInstances_, vector<DescribeExposedInstanceListResponseBodyExposedInstances>) };
    inline DescribeExposedInstanceListResponseBody& setExposedInstances(const vector<DescribeExposedInstanceListResponseBodyExposedInstances> & exposedInstances) { DARABONBA_PTR_SET_VALUE(exposedInstances_, exposedInstances) };
    inline DescribeExposedInstanceListResponseBody& setExposedInstances(vector<DescribeExposedInstanceListResponseBodyExposedInstances> && exposedInstances) { DARABONBA_PTR_SET_RVALUE(exposedInstances_, exposedInstances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExposedInstanceListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExposedInstanceListResponseBodyPageInfo) };
    inline DescribeExposedInstanceListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExposedInstanceListResponseBodyPageInfo) };
    inline DescribeExposedInstanceListResponseBody& setPageInfo(const DescribeExposedInstanceListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExposedInstanceListResponseBody& setPageInfo(DescribeExposedInstanceListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the exposures.
    std::shared_ptr<vector<DescribeExposedInstanceListResponseBodyExposedInstances>> exposedInstances_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeExposedInstanceListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
