// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DescribeEnsSaleControlRequest() = default ;
    DescribeEnsSaleControlRequest(const DescribeEnsSaleControlRequest &) = default ;
    DescribeEnsSaleControlRequest(DescribeEnsSaleControlRequest &&) = default ;
    DescribeEnsSaleControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlRequest() = default ;
    DescribeEnsSaleControlRequest& operator=(const DescribeEnsSaleControlRequest &) = default ;
    DescribeEnsSaleControlRequest& operator=(DescribeEnsSaleControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUidAccount_ == nullptr
        && this->commodityCode_ == nullptr && this->customAccount_ == nullptr && this->moduleCode_ == nullptr && this->orderType_ == nullptr; };
    // aliUidAccount Field Functions 
    bool hasAliUidAccount() const { return this->aliUidAccount_ != nullptr;};
    void deleteAliUidAccount() { this->aliUidAccount_ = nullptr;};
    inline string getAliUidAccount() const { DARABONBA_PTR_GET_DEFAULT(aliUidAccount_, "") };
    inline DescribeEnsSaleControlRequest& setAliUidAccount(string aliUidAccount) { DARABONBA_PTR_SET_VALUE(aliUidAccount_, aliUidAccount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsSaleControlRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customAccount Field Functions 
    bool hasCustomAccount() const { return this->customAccount_ != nullptr;};
    void deleteCustomAccount() { this->customAccount_ = nullptr;};
    inline string getCustomAccount() const { DARABONBA_PTR_GET_DEFAULT(customAccount_, "") };
    inline DescribeEnsSaleControlRequest& setCustomAccount(string customAccount) { DARABONBA_PTR_SET_VALUE(customAccount_, customAccount) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeEnsSaleControlRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeEnsSaleControlRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    shared_ptr<string> aliUidAccount_ {};
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> customAccount_ {};
    shared_ptr<string> moduleCode_ {};
    shared_ptr<string> orderType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
