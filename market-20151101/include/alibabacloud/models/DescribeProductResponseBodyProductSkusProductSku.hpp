// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKU_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKU_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModules.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuOrderPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSku : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSku& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(Hidden, hidden_);
      DARABONBA_PTR_TO_JSON(Modules, modules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderPeriods, orderPeriods_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSku& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(Hidden, hidden_);
      DARABONBA_PTR_FROM_JSON(Modules, modules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderPeriods, orderPeriods_);
    };
    DescribeProductResponseBodyProductSkusProductSku() = default ;
    DescribeProductResponseBodyProductSkusProductSku(const DescribeProductResponseBodyProductSkusProductSku &) = default ;
    DescribeProductResponseBodyProductSkusProductSku(DescribeProductResponseBodyProductSkusProductSku &&) = default ;
    DescribeProductResponseBodyProductSkusProductSku(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSku() = default ;
    DescribeProductResponseBodyProductSkusProductSku& operator=(const DescribeProductResponseBodyProductSkusProductSku &) = default ;
    DescribeProductResponseBodyProductSkusProductSku& operator=(DescribeProductResponseBodyProductSkusProductSku &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->code_ != nullptr && this->constraints_ != nullptr && this->hidden_ != nullptr && this->modules_ != nullptr && this->name_ != nullptr
        && this->orderPeriods_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeProductResponseBodyProductSkusProductSku& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductResponseBodyProductSkusProductSku& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string constraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline DescribeProductResponseBodyProductSkusProductSku& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // hidden Field Functions 
    bool hasHidden() const { return this->hidden_ != nullptr;};
    void deleteHidden() { this->hidden_ = nullptr;};
    inline bool hidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, false) };
    inline DescribeProductResponseBodyProductSkusProductSku& setHidden(bool hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const Models::DescribeProductResponseBodyProductSkusProductSkuModules & modules() const { DARABONBA_PTR_GET_CONST(modules_, Models::DescribeProductResponseBodyProductSkusProductSkuModules) };
    inline Models::DescribeProductResponseBodyProductSkusProductSkuModules modules() { DARABONBA_PTR_GET(modules_, Models::DescribeProductResponseBodyProductSkusProductSkuModules) };
    inline DescribeProductResponseBodyProductSkusProductSku& setModules(const Models::DescribeProductResponseBodyProductSkusProductSkuModules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline DescribeProductResponseBodyProductSkusProductSku& setModules(Models::DescribeProductResponseBodyProductSkusProductSkuModules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBodyProductSkusProductSku& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderPeriods Field Functions 
    bool hasOrderPeriods() const { return this->orderPeriods_ != nullptr;};
    void deleteOrderPeriods() { this->orderPeriods_ = nullptr;};
    inline const Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods & orderPeriods() const { DARABONBA_PTR_GET_CONST(orderPeriods_, Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods) };
    inline Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods orderPeriods() { DARABONBA_PTR_GET(orderPeriods_, Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods) };
    inline DescribeProductResponseBodyProductSkusProductSku& setOrderPeriods(const Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods & orderPeriods) { DARABONBA_PTR_SET_VALUE(orderPeriods_, orderPeriods) };
    inline DescribeProductResponseBodyProductSkusProductSku& setOrderPeriods(Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods && orderPeriods) { DARABONBA_PTR_SET_RVALUE(orderPeriods_, orderPeriods) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> constraints_ = nullptr;
    std::shared_ptr<bool> hidden_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyProductSkusProductSkuModules> modules_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriods> orderPeriods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
