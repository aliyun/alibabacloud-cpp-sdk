// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUICKSALECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUICKSALECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeQuickSaleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQuickSaleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_ANY_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQuickSaleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_ANY_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQuickSaleConfigResponseBody() = default ;
    DescribeQuickSaleConfigResponseBody(const DescribeQuickSaleConfigResponseBody &) = default ;
    DescribeQuickSaleConfigResponseBody(DescribeQuickSaleConfigResponseBody &&) = default ;
    DescribeQuickSaleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQuickSaleConfigResponseBody() = default ;
    DescribeQuickSaleConfigResponseBody& operator=(const DescribeQuickSaleConfigResponseBody &) = default ;
    DescribeQuickSaleConfigResponseBody& operator=(DescribeQuickSaleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodity_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr; };
    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline string getCommodity() const { DARABONBA_PTR_GET_DEFAULT(commodity_, "") };
    inline DescribeQuickSaleConfigResponseBody& setCommodity(string commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline     const Darabonba::Json & getItems() const { DARABONBA_GET(items_) };
    Darabonba::Json & getItems() { DARABONBA_GET(items_) };
    inline DescribeQuickSaleConfigResponseBody& setItems(const Darabonba::Json & items) { DARABONBA_SET_VALUE(items_, items) };
    inline DescribeQuickSaleConfigResponseBody& setItems(Darabonba::Json && items) { DARABONBA_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQuickSaleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The product code. Valid values:
    // 
    // *   rds: The instance is a subscription instance.
    // *   bards: The instance is a pay-as-you-go instance.
    shared_ptr<string> commodity_ {};
    // The configuration details of the product.
    Darabonba::Json items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
