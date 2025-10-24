// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductInstancesResponseBodyProductInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductInstances, productInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductInstances, productInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProductInstancesResponseBody() = default ;
    DescribeProductInstancesResponseBody(const DescribeProductInstancesResponseBody &) = default ;
    DescribeProductInstancesResponseBody(DescribeProductInstancesResponseBody &&) = default ;
    DescribeProductInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBody() = default ;
    DescribeProductInstancesResponseBody& operator=(const DescribeProductInstancesResponseBody &) = default ;
    DescribeProductInstancesResponseBody& operator=(DescribeProductInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productInstances_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // productInstances Field Functions 
    bool hasProductInstances() const { return this->productInstances_ != nullptr;};
    void deleteProductInstances() { this->productInstances_ = nullptr;};
    inline const vector<DescribeProductInstancesResponseBodyProductInstances> & productInstances() const { DARABONBA_PTR_GET_CONST(productInstances_, vector<DescribeProductInstancesResponseBodyProductInstances>) };
    inline vector<DescribeProductInstancesResponseBodyProductInstances> productInstances() { DARABONBA_PTR_GET(productInstances_, vector<DescribeProductInstancesResponseBodyProductInstances>) };
    inline DescribeProductInstancesResponseBody& setProductInstances(const vector<DescribeProductInstancesResponseBodyProductInstances> & productInstances) { DARABONBA_PTR_SET_VALUE(productInstances_, productInstances) };
    inline DescribeProductInstancesResponseBody& setProductInstances(vector<DescribeProductInstancesResponseBodyProductInstances> && productInstances) { DARABONBA_PTR_SET_RVALUE(productInstances_, productInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeProductInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the instances.
    std::shared_ptr<vector<DescribeProductInstancesResponseBodyProductInstances>> productInstances_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
