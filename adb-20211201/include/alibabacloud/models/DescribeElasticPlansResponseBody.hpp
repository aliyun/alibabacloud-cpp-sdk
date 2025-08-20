// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticPlansResponseBodyElasticPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlans, elasticPlans_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlans, elasticPlans_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticPlansResponseBody() = default ;
    DescribeElasticPlansResponseBody(const DescribeElasticPlansResponseBody &) = default ;
    DescribeElasticPlansResponseBody(DescribeElasticPlansResponseBody &&) = default ;
    DescribeElasticPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlansResponseBody() = default ;
    DescribeElasticPlansResponseBody& operator=(const DescribeElasticPlansResponseBody &) = default ;
    DescribeElasticPlansResponseBody& operator=(DescribeElasticPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticPlans_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // elasticPlans Field Functions 
    bool hasElasticPlans() const { return this->elasticPlans_ != nullptr;};
    void deleteElasticPlans() { this->elasticPlans_ = nullptr;};
    inline const vector<DescribeElasticPlansResponseBodyElasticPlans> & elasticPlans() const { DARABONBA_PTR_GET_CONST(elasticPlans_, vector<DescribeElasticPlansResponseBodyElasticPlans>) };
    inline vector<DescribeElasticPlansResponseBodyElasticPlans> elasticPlans() { DARABONBA_PTR_GET(elasticPlans_, vector<DescribeElasticPlansResponseBodyElasticPlans>) };
    inline DescribeElasticPlansResponseBody& setElasticPlans(const vector<DescribeElasticPlansResponseBodyElasticPlans> & elasticPlans) { DARABONBA_PTR_SET_VALUE(elasticPlans_, elasticPlans) };
    inline DescribeElasticPlansResponseBody& setElasticPlans(vector<DescribeElasticPlansResponseBodyElasticPlans> && elasticPlans) { DARABONBA_PTR_SET_RVALUE(elasticPlans_, elasticPlans) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeElasticPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeElasticPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticPlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried scaling plans.
    std::shared_ptr<vector<DescribeElasticPlansResponseBodyElasticPlans>> elasticPlans_ = nullptr;
    // The page number.
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
} // namespace Adb20211201
#endif
