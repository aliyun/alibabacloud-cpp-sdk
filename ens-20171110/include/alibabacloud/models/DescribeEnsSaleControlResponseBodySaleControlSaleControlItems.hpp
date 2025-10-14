// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControlSaleControlItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(SaleControlItem, saleControlItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(SaleControlItem, saleControlItem_);
    };
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItems &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems(DescribeEnsSaleControlResponseBodySaleControlSaleControlItems &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControlSaleControlItems() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& operator=(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItems &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& operator=(DescribeEnsSaleControlResponseBodySaleControlSaleControlItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleCode_ == nullptr
        && return this->saleControlItem_ == nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // saleControlItem Field Functions 
    bool hasSaleControlItem() const { return this->saleControlItem_ != nullptr;};
    void deleteSaleControlItem() { this->saleControlItem_ = nullptr;};
    inline const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem & saleControlItem() const { DARABONBA_PTR_GET_CONST(saleControlItem_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem) };
    inline Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem saleControlItem() { DARABONBA_PTR_GET(saleControlItem_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& setSaleControlItem(const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem & saleControlItem) { DARABONBA_PTR_SET_VALUE(saleControlItem_, saleControlItem) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItems& setSaleControlItem(Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem && saleControlItem) { DARABONBA_PTR_SET_RVALUE(saleControlItem_, saleControlItem) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem> saleControlItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
