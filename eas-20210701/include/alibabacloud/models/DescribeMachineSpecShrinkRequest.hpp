// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeMachineSpecShrinkRequest() = default ;
    DescribeMachineSpecShrinkRequest(const DescribeMachineSpecShrinkRequest &) = default ;
    DescribeMachineSpecShrinkRequest(DescribeMachineSpecShrinkRequest &&) = default ;
    DescribeMachineSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecShrinkRequest() = default ;
    DescribeMachineSpecShrinkRequest& operator=(const DescribeMachineSpecShrinkRequest &) = default ;
    DescribeMachineSpecShrinkRequest& operator=(DescribeMachineSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->instanceTypesShrink_ == nullptr && this->resourceType_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeMachineSpecShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceTypesShrink Field Functions 
    bool hasInstanceTypesShrink() const { return this->instanceTypesShrink_ != nullptr;};
    void deleteInstanceTypesShrink() { this->instanceTypesShrink_ = nullptr;};
    inline string getInstanceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceTypesShrink_, "") };
    inline DescribeMachineSpecShrinkRequest& setInstanceTypesShrink(string instanceTypesShrink) { DARABONBA_PTR_SET_VALUE(instanceTypesShrink_, instanceTypesShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeMachineSpecShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<string> chargeType_ {};
    // This parameter is deprecated.
    shared_ptr<string> instanceTypesShrink_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
