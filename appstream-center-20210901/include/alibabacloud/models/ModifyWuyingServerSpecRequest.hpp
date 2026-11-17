// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyWuyingServerSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWuyingServerSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterStatus, afterStatus_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWuyingServerSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterStatus, afterStatus_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    ModifyWuyingServerSpecRequest() = default ;
    ModifyWuyingServerSpecRequest(const ModifyWuyingServerSpecRequest &) = default ;
    ModifyWuyingServerSpecRequest(ModifyWuyingServerSpecRequest &&) = default ;
    ModifyWuyingServerSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWuyingServerSpecRequest() = default ;
    ModifyWuyingServerSpecRequest& operator=(const ModifyWuyingServerSpecRequest &) = default ;
    ModifyWuyingServerSpecRequest& operator=(ModifyWuyingServerSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterStatus_ == nullptr
        && this->productType_ == nullptr && this->promotionId_ == nullptr && this->serverInstanceType_ == nullptr && this->wuyingServerId_ == nullptr; };
    // afterStatus Field Functions 
    bool hasAfterStatus() const { return this->afterStatus_ != nullptr;};
    void deleteAfterStatus() { this->afterStatus_ = nullptr;};
    inline string getAfterStatus() const { DARABONBA_PTR_GET_DEFAULT(afterStatus_, "") };
    inline ModifyWuyingServerSpecRequest& setAfterStatus(string afterStatus) { DARABONBA_PTR_SET_VALUE(afterStatus_, afterStatus) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyWuyingServerSpecRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyWuyingServerSpecRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // serverInstanceType Field Functions 
    bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
    void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
    inline string getServerInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
    inline ModifyWuyingServerSpecRequest& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline ModifyWuyingServerSpecRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // The status after the specification change is complete.
    // 
    // - `stopped`: Shuts down the workstation after the specification change is complete.
    // 
    // This option applies to Enterprise Edition or container workstations that support this setting.
    shared_ptr<string> afterStatus_ {};
    // The product type of the target workstation. It must match the actual type of the resource. For Enterprise Edition workstations, use `WuyingServer`. If this parameter is omitted, `WuyingServer` is used by default.
    shared_ptr<string> productType_ {};
    // The ID of the promotion. It is used to identify a promotional event or coupon.
    shared_ptr<string> promotionId_ {};
    // The ID of the target workstation specification. This parameter is required when you call the operation. Select a specification that is available in the region where the workstation is located and compatible with existing resources.
    // 
    // **Limits:** Conversion between CPU specifications and GPU specifications is not supported.
    shared_ptr<string> serverInstanceType_ {};
    // The ID of the workstation whose specifications you want to change. This parameter is required.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
