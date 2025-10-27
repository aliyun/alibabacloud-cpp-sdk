// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIdcProbeScanResultListResponseBodyInstances.hpp>
#include <alibabacloud/models/DescribeIdcProbeScanResultListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcProbeScanResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeScanResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeScanResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIdcProbeScanResultListResponseBody() = default ;
    DescribeIdcProbeScanResultListResponseBody(const DescribeIdcProbeScanResultListResponseBody &) = default ;
    DescribeIdcProbeScanResultListResponseBody(DescribeIdcProbeScanResultListResponseBody &&) = default ;
    DescribeIdcProbeScanResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeScanResultListResponseBody() = default ;
    DescribeIdcProbeScanResultListResponseBody& operator=(const DescribeIdcProbeScanResultListResponseBody &) = default ;
    DescribeIdcProbeScanResultListResponseBody& operator=(DescribeIdcProbeScanResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeIdcProbeScanResultListResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeIdcProbeScanResultListResponseBodyInstances>) };
    inline vector<DescribeIdcProbeScanResultListResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<DescribeIdcProbeScanResultListResponseBodyInstances>) };
    inline DescribeIdcProbeScanResultListResponseBody& setInstances(const vector<DescribeIdcProbeScanResultListResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeIdcProbeScanResultListResponseBody& setInstances(vector<DescribeIdcProbeScanResultListResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeIdcProbeScanResultListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeIdcProbeScanResultListResponseBodyPageInfo) };
    inline DescribeIdcProbeScanResultListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeIdcProbeScanResultListResponseBodyPageInfo) };
    inline DescribeIdcProbeScanResultListResponseBody& setPageInfo(const DescribeIdcProbeScanResultListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeIdcProbeScanResultListResponseBody& setPageInfo(DescribeIdcProbeScanResultListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIdcProbeScanResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances.
    std::shared_ptr<vector<DescribeIdcProbeScanResultListResponseBodyInstances>> instances_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeIdcProbeScanResultListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
