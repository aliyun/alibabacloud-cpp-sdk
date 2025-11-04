// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingActivitiesResponseBodyScalingActivities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingActivitiesResponseBody() = default ;
    DescribeScalingActivitiesResponseBody(const DescribeScalingActivitiesResponseBody &) = default ;
    DescribeScalingActivitiesResponseBody(DescribeScalingActivitiesResponseBody &&) = default ;
    DescribeScalingActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesResponseBody() = default ;
    DescribeScalingActivitiesResponseBody& operator=(const DescribeScalingActivitiesResponseBody &) = default ;
    DescribeScalingActivitiesResponseBody& operator=(DescribeScalingActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->scalingActivities_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingActivitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingActivitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivities Field Functions 
    bool hasScalingActivities() const { return this->scalingActivities_ != nullptr;};
    void deleteScalingActivities() { this->scalingActivities_ = nullptr;};
    inline const vector<DescribeScalingActivitiesResponseBodyScalingActivities> & scalingActivities() const { DARABONBA_PTR_GET_CONST(scalingActivities_, vector<DescribeScalingActivitiesResponseBodyScalingActivities>) };
    inline vector<DescribeScalingActivitiesResponseBodyScalingActivities> scalingActivities() { DARABONBA_PTR_GET(scalingActivities_, vector<DescribeScalingActivitiesResponseBodyScalingActivities>) };
    inline DescribeScalingActivitiesResponseBody& setScalingActivities(const vector<DescribeScalingActivitiesResponseBodyScalingActivities> & scalingActivities) { DARABONBA_PTR_SET_VALUE(scalingActivities_, scalingActivities) };
    inline DescribeScalingActivitiesResponseBody& setScalingActivities(vector<DescribeScalingActivitiesResponseBodyScalingActivities> && scalingActivities) { DARABONBA_PTR_SET_RVALUE(scalingActivities_, scalingActivities) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scaling activities.
    std::shared_ptr<vector<DescribeScalingActivitiesResponseBodyScalingActivities>> scalingActivities_ = nullptr;
    // The total number of scaling activities.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
