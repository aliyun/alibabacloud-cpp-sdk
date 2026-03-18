// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAIDRESOURCEDTO_HPP_
#define ALIBABACLOUD_MODELS_PAIDRESOURCEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class PaidResourceDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PaidResourceDTO& obj) { 
      DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(remainQuantity, remainQuantity_);
      DARABONBA_PTR_TO_JSON(resourceCatalogCode, resourceCatalogCode_);
      DARABONBA_PTR_TO_JSON(resourceCatalogName, resourceCatalogName_);
      DARABONBA_PTR_TO_JSON(resourcePackageCode, resourcePackageCode_);
      DARABONBA_PTR_TO_JSON(resourcePackageName, resourcePackageName_);
      DARABONBA_PTR_TO_JSON(resourceStatus, resourceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PaidResourceDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(remainQuantity, remainQuantity_);
      DARABONBA_PTR_FROM_JSON(resourceCatalogCode, resourceCatalogCode_);
      DARABONBA_PTR_FROM_JSON(resourceCatalogName, resourceCatalogName_);
      DARABONBA_PTR_FROM_JSON(resourcePackageCode, resourcePackageCode_);
      DARABONBA_PTR_FROM_JSON(resourcePackageName, resourcePackageName_);
      DARABONBA_PTR_FROM_JSON(resourceStatus, resourceStatus_);
    };
    PaidResourceDTO() = default ;
    PaidResourceDTO(const PaidResourceDTO &) = default ;
    PaidResourceDTO(PaidResourceDTO &&) = default ;
    PaidResourceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PaidResourceDTO() = default ;
    PaidResourceDTO& operator=(const PaidResourceDTO &) = default ;
    PaidResourceDTO& operator=(PaidResourceDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveTime_ == nullptr
        && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->quantity_ == nullptr && this->remainQuantity_ == nullptr && this->resourceCatalogCode_ == nullptr
        && this->resourceCatalogName_ == nullptr && this->resourcePackageCode_ == nullptr && this->resourcePackageName_ == nullptr && this->resourceStatus_ == nullptr; };
    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline PaidResourceDTO& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline PaidResourceDTO& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PaidResourceDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline PaidResourceDTO& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // remainQuantity Field Functions 
    bool hasRemainQuantity() const { return this->remainQuantity_ != nullptr;};
    void deleteRemainQuantity() { this->remainQuantity_ = nullptr;};
    inline int32_t getRemainQuantity() const { DARABONBA_PTR_GET_DEFAULT(remainQuantity_, 0) };
    inline PaidResourceDTO& setRemainQuantity(int32_t remainQuantity) { DARABONBA_PTR_SET_VALUE(remainQuantity_, remainQuantity) };


    // resourceCatalogCode Field Functions 
    bool hasResourceCatalogCode() const { return this->resourceCatalogCode_ != nullptr;};
    void deleteResourceCatalogCode() { this->resourceCatalogCode_ = nullptr;};
    inline string getResourceCatalogCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCatalogCode_, "") };
    inline PaidResourceDTO& setResourceCatalogCode(string resourceCatalogCode) { DARABONBA_PTR_SET_VALUE(resourceCatalogCode_, resourceCatalogCode) };


    // resourceCatalogName Field Functions 
    bool hasResourceCatalogName() const { return this->resourceCatalogName_ != nullptr;};
    void deleteResourceCatalogName() { this->resourceCatalogName_ = nullptr;};
    inline string getResourceCatalogName() const { DARABONBA_PTR_GET_DEFAULT(resourceCatalogName_, "") };
    inline PaidResourceDTO& setResourceCatalogName(string resourceCatalogName) { DARABONBA_PTR_SET_VALUE(resourceCatalogName_, resourceCatalogName) };


    // resourcePackageCode Field Functions 
    bool hasResourcePackageCode() const { return this->resourcePackageCode_ != nullptr;};
    void deleteResourcePackageCode() { this->resourcePackageCode_ = nullptr;};
    inline string getResourcePackageCode() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageCode_, "") };
    inline PaidResourceDTO& setResourcePackageCode(string resourcePackageCode) { DARABONBA_PTR_SET_VALUE(resourcePackageCode_, resourcePackageCode) };


    // resourcePackageName Field Functions 
    bool hasResourcePackageName() const { return this->resourcePackageName_ != nullptr;};
    void deleteResourcePackageName() { this->resourcePackageName_ = nullptr;};
    inline string getResourcePackageName() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageName_, "") };
    inline PaidResourceDTO& setResourcePackageName(string resourcePackageName) { DARABONBA_PTR_SET_VALUE(resourcePackageName_, resourcePackageName) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline PaidResourceDTO& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


  protected:
    shared_ptr<string> effectiveTime_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> quantity_ {};
    shared_ptr<int32_t> remainQuantity_ {};
    shared_ptr<string> resourceCatalogCode_ {};
    shared_ptr<string> resourceCatalogName_ {};
    shared_ptr<string> resourcePackageCode_ {};
    shared_ptr<string> resourcePackageName_ {};
    shared_ptr<string> resourceStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
