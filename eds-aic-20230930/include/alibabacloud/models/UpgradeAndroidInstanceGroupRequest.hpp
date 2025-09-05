// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEANDROIDINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEANDROIDINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class UpgradeAndroidInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(IncreaseNumberOfInstance, increaseNumberOfInstance_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(IncreaseNumberOfInstance, increaseNumberOfInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    UpgradeAndroidInstanceGroupRequest() = default ;
    UpgradeAndroidInstanceGroupRequest(const UpgradeAndroidInstanceGroupRequest &) = default ;
    UpgradeAndroidInstanceGroupRequest(UpgradeAndroidInstanceGroupRequest &&) = default ;
    UpgradeAndroidInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAndroidInstanceGroupRequest() = default ;
    UpgradeAndroidInstanceGroupRequest& operator=(const UpgradeAndroidInstanceGroupRequest &) = default ;
    UpgradeAndroidInstanceGroupRequest& operator=(UpgradeAndroidInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->increaseNumberOfInstance_ != nullptr && this->instanceGroupId_ != nullptr && this->promotionId_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpgradeAndroidInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // increaseNumberOfInstance Field Functions 
    bool hasIncreaseNumberOfInstance() const { return this->increaseNumberOfInstance_ != nullptr;};
    void deleteIncreaseNumberOfInstance() { this->increaseNumberOfInstance_ = nullptr;};
    inline int32_t increaseNumberOfInstance() const { DARABONBA_PTR_GET_DEFAULT(increaseNumberOfInstance_, 0) };
    inline UpgradeAndroidInstanceGroupRequest& setIncreaseNumberOfInstance(int32_t increaseNumberOfInstance) { DARABONBA_PTR_SET_VALUE(increaseNumberOfInstance_, increaseNumberOfInstance) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline UpgradeAndroidInstanceGroupRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline UpgradeAndroidInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // Specifies whether to enable the auto-payment feature.
    // 
    // Valid values:
    // 
    // *   true: enables the auto-payment feature. Make sure that your Alibaba Cloud account has sufficient balance.
    // *   false: disables the auto-payment feature. You need to manually complete the payment process.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The number of instances that you want to increase.
    std::shared_ptr<int32_t> increaseNumberOfInstance_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
