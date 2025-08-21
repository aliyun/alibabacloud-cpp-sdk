// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(SaleControlItem, saleControlItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(SaleControlItem, saleControlItem_);
    };
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems &&) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& operator=(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& operator=(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleCode_ != nullptr
        && this->saleControlItem_ != nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // saleControlItem Field Functions 
    bool hasSaleControlItem() const { return this->saleControlItem_ != nullptr;};
    void deleteSaleControlItem() { this->saleControlItem_ = nullptr;};
    inline const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem & saleControlItem() const { DARABONBA_PTR_GET_CONST(saleControlItem_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem) };
    inline Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem saleControlItem() { DARABONBA_PTR_GET(saleControlItem_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& setSaleControlItem(const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem & saleControlItem) { DARABONBA_PTR_SET_VALUE(saleControlItem_, saleControlItem) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItems& setSaleControlItem(Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem && saleControlItem) { DARABONBA_PTR_SET_RVALUE(saleControlItem_, saleControlItem) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem> saleControlItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
