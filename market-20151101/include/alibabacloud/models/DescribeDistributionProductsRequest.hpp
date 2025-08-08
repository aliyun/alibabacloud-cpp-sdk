// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDistributionProductsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeDistributionProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeDistributionProductsRequest() = default ;
    DescribeDistributionProductsRequest(const DescribeDistributionProductsRequest &) = default ;
    DescribeDistributionProductsRequest(DescribeDistributionProductsRequest &&) = default ;
    DescribeDistributionProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsRequest() = default ;
    DescribeDistributionProductsRequest& operator=(const DescribeDistributionProductsRequest &) = default ;
    DescribeDistributionProductsRequest& operator=(DescribeDistributionProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeDistributionProductsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeDistributionProductsRequestFilter>) };
    inline vector<DescribeDistributionProductsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<DescribeDistributionProductsRequestFilter>) };
    inline DescribeDistributionProductsRequest& setFilter(const vector<DescribeDistributionProductsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeDistributionProductsRequest& setFilter(vector<DescribeDistributionProductsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDistributionProductsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDistributionProductsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<vector<DescribeDistributionProductsRequestFilter>> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
