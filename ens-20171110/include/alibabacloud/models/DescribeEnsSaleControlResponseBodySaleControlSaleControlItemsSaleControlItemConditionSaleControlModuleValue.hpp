// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROLMODULEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROLMODULEVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleMaxValue, moduleMaxValue_);
      DARABONBA_PTR_TO_JSON(ModuleMinValue, moduleMinValue_);
      DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleMaxValue, moduleMaxValue_);
      DARABONBA_PTR_FROM_JSON(ModuleMinValue, moduleMinValue_);
      DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
    };
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& operator=(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& operator=(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleMaxValue_ == nullptr
        && return this->moduleMinValue_ == nullptr && return this->moduleValue_ == nullptr; };
    // moduleMaxValue Field Functions 
    bool hasModuleMaxValue() const { return this->moduleMaxValue_ != nullptr;};
    void deleteModuleMaxValue() { this->moduleMaxValue_ = nullptr;};
    inline string moduleMaxValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMaxValue_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& setModuleMaxValue(string moduleMaxValue) { DARABONBA_PTR_SET_VALUE(moduleMaxValue_, moduleMaxValue) };


    // moduleMinValue Field Functions 
    bool hasModuleMinValue() const { return this->moduleMinValue_ != nullptr;};
    void deleteModuleMinValue() { this->moduleMinValue_ = nullptr;};
    inline string moduleMinValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMinValue_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& setModuleMinValue(string moduleMinValue) { DARABONBA_PTR_SET_VALUE(moduleMinValue_, moduleMinValue) };


    // moduleValue Field Functions 
    bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
    void deleteModuleValue() { this->moduleValue_ = nullptr;};
    inline const vector<string> & moduleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, vector<string>) };
    inline vector<string> moduleValue() { DARABONBA_PTR_GET(moduleValue_, vector<string>) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& setModuleValue(const vector<string> & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue& setModuleValue(vector<string> && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


  protected:
    std::shared_ptr<string> moduleMaxValue_ = nullptr;
    std::shared_ptr<string> moduleMinValue_ = nullptr;
    std::shared_ptr<vector<string>> moduleValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
