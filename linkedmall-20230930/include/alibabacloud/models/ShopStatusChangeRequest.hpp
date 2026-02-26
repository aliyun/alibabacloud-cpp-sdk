// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPSTATUSCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHOPSTATUSCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ShopStatusChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShopStatusChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(shopStatus, shopStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ShopStatusChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(shopStatus, shopStatus_);
    };
    ShopStatusChangeRequest() = default ;
    ShopStatusChangeRequest(const ShopStatusChangeRequest &) = default ;
    ShopStatusChangeRequest(ShopStatusChangeRequest &&) = default ;
    ShopStatusChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShopStatusChangeRequest() = default ;
    ShopStatusChangeRequest& operator=(const ShopStatusChangeRequest &) = default ;
    ShopStatusChangeRequest& operator=(ShopStatusChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shopId_ == nullptr
        && this->shopStatus_ == nullptr; };
    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline ShopStatusChangeRequest& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // shopStatus Field Functions 
    bool hasShopStatus() const { return this->shopStatus_ != nullptr;};
    void deleteShopStatus() { this->shopStatus_ = nullptr;};
    inline string getShopStatus() const { DARABONBA_PTR_GET_DEFAULT(shopStatus_, "") };
    inline ShopStatusChangeRequest& setShopStatus(string shopStatus) { DARABONBA_PTR_SET_VALUE(shopStatus_, shopStatus) };


  protected:
    // This parameter is required.
    shared_ptr<string> shopId_ {};
    // This parameter is required.
    shared_ptr<string> shopStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
