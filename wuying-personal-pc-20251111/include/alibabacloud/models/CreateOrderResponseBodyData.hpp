// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrderResponseBodyDataOrderDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetailList, orderDetailList_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PayLink, payLink_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetailList, orderDetailList_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PayLink, payLink_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CreateOrderResponseBodyData() = default ;
    CreateOrderResponseBodyData(const CreateOrderResponseBodyData &) = default ;
    CreateOrderResponseBodyData(CreateOrderResponseBodyData &&) = default ;
    CreateOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderResponseBodyData() = default ;
    CreateOrderResponseBodyData& operator=(const CreateOrderResponseBodyData &) = default ;
    CreateOrderResponseBodyData& operator=(CreateOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderDetailList_ == nullptr
        && return this->orderId_ == nullptr && return this->payLink_ == nullptr && return this->resourceId_ == nullptr; };
    // orderDetailList Field Functions 
    bool hasOrderDetailList() const { return this->orderDetailList_ != nullptr;};
    void deleteOrderDetailList() { this->orderDetailList_ = nullptr;};
    inline const vector<Models::CreateOrderResponseBodyDataOrderDetailList> & orderDetailList() const { DARABONBA_PTR_GET_CONST(orderDetailList_, vector<Models::CreateOrderResponseBodyDataOrderDetailList>) };
    inline vector<Models::CreateOrderResponseBodyDataOrderDetailList> orderDetailList() { DARABONBA_PTR_GET(orderDetailList_, vector<Models::CreateOrderResponseBodyDataOrderDetailList>) };
    inline CreateOrderResponseBodyData& setOrderDetailList(const vector<Models::CreateOrderResponseBodyDataOrderDetailList> & orderDetailList) { DARABONBA_PTR_SET_VALUE(orderDetailList_, orderDetailList) };
    inline CreateOrderResponseBodyData& setOrderDetailList(vector<Models::CreateOrderResponseBodyDataOrderDetailList> && orderDetailList) { DARABONBA_PTR_SET_RVALUE(orderDetailList_, orderDetailList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateOrderResponseBodyData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payLink Field Functions 
    bool hasPayLink() const { return this->payLink_ != nullptr;};
    void deletePayLink() { this->payLink_ = nullptr;};
    inline string payLink() const { DARABONBA_PTR_GET_DEFAULT(payLink_, "") };
    inline CreateOrderResponseBodyData& setPayLink(string payLink) { DARABONBA_PTR_SET_VALUE(payLink_, payLink) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateOrderResponseBodyData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<vector<Models::CreateOrderResponseBodyDataOrderDetailList>> orderDetailList_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> payLink_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
