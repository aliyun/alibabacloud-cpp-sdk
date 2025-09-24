// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIGBILLMODULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIGBILLMODULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCode, apiCode_);
      DARABONBA_PTR_TO_JSON(BillModuleProperties, billModuleProperties_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCode, apiCode_);
      DARABONBA_PTR_FROM_JSON(BillModuleProperties, billModuleProperties_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& operator=(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& operator=(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiCode_ != nullptr
        && this->billModuleProperties_ != nullptr && this->code_ != nullptr && this->name_ != nullptr; };
    // apiCode Field Functions 
    bool hasApiCode() const { return this->apiCode_ != nullptr;};
    void deleteApiCode() { this->apiCode_ = nullptr;};
    inline string apiCode() const { DARABONBA_PTR_GET_DEFAULT(apiCode_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& setApiCode(string apiCode) { DARABONBA_PTR_SET_VALUE(apiCode_, apiCode) };


    // billModuleProperties Field Functions 
    bool hasBillModuleProperties() const { return this->billModuleProperties_ != nullptr;};
    void deleteBillModuleProperties() { this->billModuleProperties_ = nullptr;};
    inline const Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties & billModuleProperties() const { DARABONBA_PTR_GET_CONST(billModuleProperties_, Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties) };
    inline Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties billModuleProperties() { DARABONBA_PTR_GET(billModuleProperties_, Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties) };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& setBillModuleProperties(const Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties & billModuleProperties) { DARABONBA_PTR_SET_VALUE(billModuleProperties_, billModuleProperties) };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& setBillModuleProperties(Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties && billModuleProperties) { DARABONBA_PTR_SET_RVALUE(billModuleProperties_, billModuleProperties) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The API code of the configuration item.
    std::shared_ptr<string> apiCode_ = nullptr;
    // The attributes of the configured item.
    std::shared_ptr<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties> billModuleProperties_ = nullptr;
    // The code of the configuration item.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the configuration item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
