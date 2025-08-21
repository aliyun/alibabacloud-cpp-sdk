// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMBASICSALECONTROL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMBASICSALECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& operator=(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& operator=(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->moduleValue_ != nullptr && this->operator_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleValue Field Functions 
    bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
    void deleteModuleValue() { this->moduleValue_ = nullptr;};
    inline const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue & moduleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue) };
    inline Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue moduleValue() { DARABONBA_PTR_GET(moduleValue_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& setModuleValue(const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& setModuleValue(Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue> moduleValue_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
