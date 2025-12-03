// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisWithStageNameIntegratedByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisWithStageNameIntegratedByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisWithStageNameIntegratedByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisWithStageNameIntegratedByAppResponseBody() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(const DescribeApisWithStageNameIntegratedByAppResponseBody &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(DescribeApisWithStageNameIntegratedByAppResponseBody &&) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisWithStageNameIntegratedByAppResponseBody() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody& operator=(const DescribeApisWithStageNameIntegratedByAppResponseBody &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody& operator=(DescribeApisWithStageNameIntegratedByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appApiRelationInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // appApiRelationInfos Field Functions 
    bool hasAppApiRelationInfos() const { return this->appApiRelationInfos_ != nullptr;};
    void deleteAppApiRelationInfos() { this->appApiRelationInfos_ = nullptr;};
    inline const DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos & appApiRelationInfos() const { DARABONBA_PTR_GET_CONST(appApiRelationInfos_, DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos appApiRelationInfos() { DARABONBA_PTR_GET(appApiRelationInfos_, DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setAppApiRelationInfos(const DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos & appApiRelationInfos) { DARABONBA_PTR_SET_VALUE(appApiRelationInfos_, appApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setAppApiRelationInfos(DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos && appApiRelationInfos) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfos_, appApiRelationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorization information of the API.
    std::shared_ptr<DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos> appApiRelationInfos_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
