// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMBASICSALECONTROLMODULEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMBASICSALECONTROLMODULEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleMaxValue, moduleMaxValue_);
      DARABONBA_PTR_TO_JSON(ModuleMinValue, moduleMinValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleMaxValue, moduleMaxValue_);
      DARABONBA_PTR_FROM_JSON(ModuleMinValue, moduleMinValue_);
    };
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue &&) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& operator=(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& operator=(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleMaxValue_ == nullptr
        && return this->moduleMinValue_ == nullptr; };
    // moduleMaxValue Field Functions 
    bool hasModuleMaxValue() const { return this->moduleMaxValue_ != nullptr;};
    void deleteModuleMaxValue() { this->moduleMaxValue_ = nullptr;};
    inline string moduleMaxValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMaxValue_, "") };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& setModuleMaxValue(string moduleMaxValue) { DARABONBA_PTR_SET_VALUE(moduleMaxValue_, moduleMaxValue) };


    // moduleMinValue Field Functions 
    bool hasModuleMinValue() const { return this->moduleMinValue_ != nullptr;};
    void deleteModuleMinValue() { this->moduleMinValue_ = nullptr;};
    inline string moduleMinValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMinValue_, "") };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControlModuleValue& setModuleMinValue(string moduleMinValue) { DARABONBA_PTR_SET_VALUE(moduleMinValue_, moduleMinValue) };


  protected:
    std::shared_ptr<string> moduleMaxValue_ = nullptr;
    std::shared_ptr<string> moduleMinValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
