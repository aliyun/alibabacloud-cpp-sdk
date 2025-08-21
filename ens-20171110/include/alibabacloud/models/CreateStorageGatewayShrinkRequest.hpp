// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageGatewayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetailsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetailsShrink_);
    };
    CreateStorageGatewayShrinkRequest() = default ;
    CreateStorageGatewayShrinkRequest(const CreateStorageGatewayShrinkRequest &) = default ;
    CreateStorageGatewayShrinkRequest(CreateStorageGatewayShrinkRequest &&) = default ;
    CreateStorageGatewayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageGatewayShrinkRequest() = default ;
    CreateStorageGatewayShrinkRequest& operator=(const CreateStorageGatewayShrinkRequest &) = default ;
    CreateStorageGatewayShrinkRequest& operator=(CreateStorageGatewayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderDetailsShrink_ != nullptr; };
    // orderDetailsShrink Field Functions 
    bool hasOrderDetailsShrink() const { return this->orderDetailsShrink_ != nullptr;};
    void deleteOrderDetailsShrink() { this->orderDetailsShrink_ = nullptr;};
    inline string orderDetailsShrink() const { DARABONBA_PTR_GET_DEFAULT(orderDetailsShrink_, "") };
    inline CreateStorageGatewayShrinkRequest& setOrderDetailsShrink(string orderDetailsShrink) { DARABONBA_PTR_SET_VALUE(orderDetailsShrink_, orderDetailsShrink) };


  protected:
    // The array of orders.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderDetailsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
