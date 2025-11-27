// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCurrentModifyOrderResponseBodyModifyOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCurrentModifyOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCurrentModifyOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyOrder, modifyOrder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCurrentModifyOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyOrder, modifyOrder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCurrentModifyOrderResponseBody() = default ;
    DescribeCurrentModifyOrderResponseBody(const DescribeCurrentModifyOrderResponseBody &) = default ;
    DescribeCurrentModifyOrderResponseBody(DescribeCurrentModifyOrderResponseBody &&) = default ;
    DescribeCurrentModifyOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCurrentModifyOrderResponseBody() = default ;
    DescribeCurrentModifyOrderResponseBody& operator=(const DescribeCurrentModifyOrderResponseBody &) = default ;
    DescribeCurrentModifyOrderResponseBody& operator=(DescribeCurrentModifyOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyOrder_ == nullptr
        && return this->requestId_ == nullptr; };
    // modifyOrder Field Functions 
    bool hasModifyOrder() const { return this->modifyOrder_ != nullptr;};
    void deleteModifyOrder() { this->modifyOrder_ = nullptr;};
    inline const vector<DescribeCurrentModifyOrderResponseBodyModifyOrder> & modifyOrder() const { DARABONBA_PTR_GET_CONST(modifyOrder_, vector<DescribeCurrentModifyOrderResponseBodyModifyOrder>) };
    inline vector<DescribeCurrentModifyOrderResponseBodyModifyOrder> modifyOrder() { DARABONBA_PTR_GET(modifyOrder_, vector<DescribeCurrentModifyOrderResponseBodyModifyOrder>) };
    inline DescribeCurrentModifyOrderResponseBody& setModifyOrder(const vector<DescribeCurrentModifyOrderResponseBodyModifyOrder> & modifyOrder) { DARABONBA_PTR_SET_VALUE(modifyOrder_, modifyOrder) };
    inline DescribeCurrentModifyOrderResponseBody& setModifyOrder(vector<DescribeCurrentModifyOrderResponseBodyModifyOrder> && modifyOrder) { DARABONBA_PTR_SET_RVALUE(modifyOrder_, modifyOrder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCurrentModifyOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The specification change order.
    std::shared_ptr<vector<DescribeCurrentModifyOrderResponseBodyModifyOrder>> modifyOrder_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
