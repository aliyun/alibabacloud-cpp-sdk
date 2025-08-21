// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENSSALECONTROLREQUESTSALECONTROLS_HPP_
#define ALIBABACLOUD_MODELS_DELETEENSSALECONTROLREQUESTSALECONTROLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteEnsSaleControlRequestSaleControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnsSaleControlRequestSaleControls& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnsSaleControlRequestSaleControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DeleteEnsSaleControlRequestSaleControls() = default ;
    DeleteEnsSaleControlRequestSaleControls(const DeleteEnsSaleControlRequestSaleControls &) = default ;
    DeleteEnsSaleControlRequestSaleControls(DeleteEnsSaleControlRequestSaleControls &&) = default ;
    DeleteEnsSaleControlRequestSaleControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnsSaleControlRequestSaleControls() = default ;
    DeleteEnsSaleControlRequestSaleControls& operator=(const DeleteEnsSaleControlRequestSaleControls &) = default ;
    DeleteEnsSaleControlRequestSaleControls& operator=(DeleteEnsSaleControlRequestSaleControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleCode_ != nullptr
        && this->orderType_ != nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DeleteEnsSaleControlRequestSaleControls& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DeleteEnsSaleControlRequestSaleControls& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
