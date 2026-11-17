// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEBINDINGSOFNUMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEBINDINGSOFNUMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateInstanceBindingsOfNumberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceBindingsOfNumberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceBindingsOfNumberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    UpdateInstanceBindingsOfNumberShrinkRequest() = default ;
    UpdateInstanceBindingsOfNumberShrinkRequest(const UpdateInstanceBindingsOfNumberShrinkRequest &) = default ;
    UpdateInstanceBindingsOfNumberShrinkRequest(UpdateInstanceBindingsOfNumberShrinkRequest &&) = default ;
    UpdateInstanceBindingsOfNumberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceBindingsOfNumberShrinkRequest() = default ;
    UpdateInstanceBindingsOfNumberShrinkRequest& operator=(const UpdateInstanceBindingsOfNumberShrinkRequest &) = default ;
    UpdateInstanceBindingsOfNumberShrinkRequest& operator=(UpdateInstanceBindingsOfNumberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && this->number_ == nullptr && this->tenantId_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline UpdateInstanceBindingsOfNumberShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline UpdateInstanceBindingsOfNumberShrinkRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateInstanceBindingsOfNumberShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The list of instance IDs.
    shared_ptr<string> instanceIdsShrink_ {};
    // The bound number.
    // 
    // This parameter is required.
    shared_ptr<string> number_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
