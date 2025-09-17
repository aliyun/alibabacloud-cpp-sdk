// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourceTypeResponseBodyResourceTypeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBodyResourceTypeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(deliveryScope, deliveryScope_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBodyResourceTypeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(deliveryScope, deliveryScope_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GetResourceTypeResponseBodyResourceTypeInfo() = default ;
    GetResourceTypeResponseBodyResourceTypeInfo(const GetResourceTypeResponseBodyResourceTypeInfo &) = default ;
    GetResourceTypeResponseBodyResourceTypeInfo(GetResourceTypeResponseBodyResourceTypeInfo &&) = default ;
    GetResourceTypeResponseBodyResourceTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBodyResourceTypeInfo() = default ;
    GetResourceTypeResponseBodyResourceTypeInfo& operator=(const GetResourceTypeResponseBodyResourceTypeInfo &) = default ;
    GetResourceTypeResponseBodyResourceTypeInfo& operator=(GetResourceTypeResponseBodyResourceTypeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->deliveryScope_ != nullptr && this->description_ != nullptr && this->title_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetResourceTypeResponseBodyResourceTypeInfo& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // deliveryScope Field Functions 
    bool hasDeliveryScope() const { return this->deliveryScope_ != nullptr;};
    void deleteDeliveryScope() { this->deliveryScope_ = nullptr;};
    inline string deliveryScope() const { DARABONBA_PTR_GET_DEFAULT(deliveryScope_, "") };
    inline GetResourceTypeResponseBodyResourceTypeInfo& setDeliveryScope(string deliveryScope) { DARABONBA_PTR_SET_VALUE(deliveryScope_, deliveryScope) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetResourceTypeResponseBodyResourceTypeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetResourceTypeResponseBodyResourceTypeInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The payment form. Valid values:
    // 
    // paid free
    std::shared_ptr<string> chargeType_ = nullptr;
    // The delivery level. Valid values:
    // 
    // center
    // 
    // region
    // 
    // zone
    std::shared_ptr<string> deliveryScope_ = nullptr;
    // The description of the resource type.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the resource type.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
