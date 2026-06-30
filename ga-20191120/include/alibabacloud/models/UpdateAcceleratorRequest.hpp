// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCELERATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    UpdateAcceleratorRequest() = default ;
    UpdateAcceleratorRequest(const UpdateAcceleratorRequest &) = default ;
    UpdateAcceleratorRequest(UpdateAcceleratorRequest &&) = default ;
    UpdateAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAcceleratorRequest() = default ;
    UpdateAcceleratorRequest& operator=(const UpdateAcceleratorRequest &) = default ;
    UpdateAcceleratorRequest& operator=(UpdateAcceleratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->autoPay_ == nullptr && this->autoUseCoupon_ == nullptr && this->bandwidth_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->spec_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline UpdateAcceleratorRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpdateAcceleratorRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline UpdateAcceleratorRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline UpdateAcceleratorRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAcceleratorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAcceleratorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAcceleratorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateAcceleratorRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **false** (default): Disables automatic payment. After an order is generated, you must go to the [Order Hub](https://usercenter2-intl.aliyun.com/order/list) to complete the payment.
    // 
    // - **true**: Enables automatic payment. The system automatically pays the bill.
    // 
    // > This parameter is valid only for upgrade orders.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to automatically use a coupon to pay for the bill. Valid values:
    // 
    // - **true**: Use a coupon.
    // 
    // - **false** (default): Do not use a coupon.
    // 
    // > This parameter is valid only if **AutoPay** is set to **true**.
    shared_ptr<bool> autoUseCoupon_ {};
    // The bandwidth of the standard GA instance. Unit: **Mbps**.
    // 
    // Valid values: 200 to 5000.
    // 
    // > This parameter is valid only when the access mode of the acceleration area is Anycast.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the GA instance. The description can be up to 200 characters in length.
    shared_ptr<string> description_ {};
    // The name of the GA instance.
    // 
    // The name must be 1 to 128 characters in length, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
    // The specification of the GA instance. Valid values:
    // 
    // - **1**: Small I
    // 
    // - **2**: Small II
    // 
    // - **3**: Small III
    // 
    // - **5**: Medium I
    // 
    // - **8**: Medium II
    // 
    // - **10**: Medium III
    // 
    // - **20**: Large I
    // 
    // - **30**: Large II
    // 
    // - **40**: Large III
    // 
    // - **50**: Large IV
    // 
    // - **60**: Large V
    // 
    // - **70**: Large VI
    // 
    // - **80**: Large VII
    // 
    // - **90**: Large VIII
    // 
    // - **100**: Ultra-large I
    // 
    // - **200**: Ultra-large II
    // 
    // > Large III and higher specifications are available only to whitelisted users. To use these specifications, contact your account manager.
    // 
    // The definitions of instance types vary. For more information, see [Instance types](https://help.aliyun.com/document_detail/153127.html).
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
