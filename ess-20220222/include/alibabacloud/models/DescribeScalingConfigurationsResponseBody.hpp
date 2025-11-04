// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurations, scalingConfigurations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurations, scalingConfigurations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingConfigurationsResponseBody() = default ;
    DescribeScalingConfigurationsResponseBody(const DescribeScalingConfigurationsResponseBody &) = default ;
    DescribeScalingConfigurationsResponseBody(DescribeScalingConfigurationsResponseBody &&) = default ;
    DescribeScalingConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBody() = default ;
    DescribeScalingConfigurationsResponseBody& operator=(const DescribeScalingConfigurationsResponseBody &) = default ;
    DescribeScalingConfigurationsResponseBody& operator=(DescribeScalingConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->scalingConfigurations_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfigurations Field Functions 
    bool hasScalingConfigurations() const { return this->scalingConfigurations_ != nullptr;};
    void deleteScalingConfigurations() { this->scalingConfigurations_ = nullptr;};
    inline const vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations> & scalingConfigurations() const { DARABONBA_PTR_GET_CONST(scalingConfigurations_, vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations>) };
    inline vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations> scalingConfigurations() { DARABONBA_PTR_GET(scalingConfigurations_, vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations>) };
    inline DescribeScalingConfigurationsResponseBody& setScalingConfigurations(const vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations> & scalingConfigurations) { DARABONBA_PTR_SET_VALUE(scalingConfigurations_, scalingConfigurations) };
    inline DescribeScalingConfigurationsResponseBody& setScalingConfigurations(vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations> && scalingConfigurations) { DARABONBA_PTR_SET_RVALUE(scalingConfigurations_, scalingConfigurations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scaling configurations.
    std::shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurations>> scalingConfigurations_ = nullptr;
    // The total number of scaling configurations.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
