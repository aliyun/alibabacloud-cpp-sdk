// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateNumberBindingsOfInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNumberBindingsOfInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNumberBindingsOfInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    UpdateNumberBindingsOfInstanceShrinkRequest() = default ;
    UpdateNumberBindingsOfInstanceShrinkRequest(const UpdateNumberBindingsOfInstanceShrinkRequest &) = default ;
    UpdateNumberBindingsOfInstanceShrinkRequest(UpdateNumberBindingsOfInstanceShrinkRequest &&) = default ;
    UpdateNumberBindingsOfInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNumberBindingsOfInstanceShrinkRequest() = default ;
    UpdateNumberBindingsOfInstanceShrinkRequest& operator=(const UpdateNumberBindingsOfInstanceShrinkRequest &) = default ;
    UpdateNumberBindingsOfInstanceShrinkRequest& operator=(UpdateNumberBindingsOfInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->numbersShrink_ == nullptr && this->tenantId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNumberBindingsOfInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numbersShrink Field Functions 
    bool hasNumbersShrink() const { return this->numbersShrink_ != nullptr;};
    void deleteNumbersShrink() { this->numbersShrink_ = nullptr;};
    inline string getNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(numbersShrink_, "") };
    inline UpdateNumberBindingsOfInstanceShrinkRequest& setNumbersShrink(string numbersShrink) { DARABONBA_PTR_SET_VALUE(numbersShrink_, numbersShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateNumberBindingsOfInstanceShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of phone numbers.
    shared_ptr<string> numbersShrink_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
