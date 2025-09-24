// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERBILLMODULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(billModuleConfig, billModuleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(billModuleConfig, billModuleConfig_);
    };
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& operator=(const GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& operator=(GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billModuleConfig_ != nullptr; };
    // billModuleConfig Field Functions 
    bool hasBillModuleConfig() const { return this->billModuleConfig_ != nullptr;};
    void deleteBillModuleConfig() { this->billModuleConfig_ = nullptr;};
    inline const vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig> & billModuleConfig() const { DARABONBA_PTR_GET_CONST(billModuleConfig_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig>) };
    inline vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig> billModuleConfig() { DARABONBA_PTR_GET(billModuleConfig_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig>) };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& setBillModuleConfig(const vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig> & billModuleConfig) { DARABONBA_PTR_SET_VALUE(billModuleConfig_, billModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig& setBillModuleConfig(vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig> && billModuleConfig) { DARABONBA_PTR_SET_RVALUE(billModuleConfig_, billModuleConfig) };


  protected:
    std::shared_ptr<vector<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig>> billModuleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
