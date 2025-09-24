// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIGBILLMODULECONFIGBILLMODULEPROPERTIESBILLMODULEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIGBILLMODULECONFIGBILLMODULEPROPERTIESBILLMODULEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& obj) { 
      DARABONBA_PTR_TO_JSON(AttrApiCode, attrApiCode_);
      DARABONBA_PTR_TO_JSON(ModuleApiCode, moduleApiCode_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(AttrApiCode, attrApiCode_);
      DARABONBA_PTR_FROM_JSON(ModuleApiCode, moduleApiCode_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& operator=(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& operator=(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attrApiCode_ != nullptr
        && this->moduleApiCode_ != nullptr && this->value_ != nullptr; };
    // attrApiCode Field Functions 
    bool hasAttrApiCode() const { return this->attrApiCode_ != nullptr;};
    void deleteAttrApiCode() { this->attrApiCode_ = nullptr;};
    inline string attrApiCode() const { DARABONBA_PTR_GET_DEFAULT(attrApiCode_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& setAttrApiCode(string attrApiCode) { DARABONBA_PTR_SET_VALUE(attrApiCode_, attrApiCode) };


    // moduleApiCode Field Functions 
    bool hasModuleApiCode() const { return this->moduleApiCode_ != nullptr;};
    void deleteModuleApiCode() { this->moduleApiCode_ = nullptr;};
    inline string moduleApiCode() const { DARABONBA_PTR_GET_DEFAULT(moduleApiCode_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& setModuleApiCode(string moduleApiCode) { DARABONBA_PTR_SET_VALUE(moduleApiCode_, moduleApiCode) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The attribute code of the configured item.
    std::shared_ptr<string> attrApiCode_ = nullptr;
    // The API code of the configured item.
    std::shared_ptr<string> moduleApiCode_ = nullptr;
    // The attribute value of the configuration item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
