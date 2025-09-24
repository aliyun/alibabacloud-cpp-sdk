// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERORIGINALMODULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERORIGINALMODULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(originalModuleConfig, originalModuleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(originalModuleConfig, originalModuleConfig_);
    };
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig(const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig(GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& operator=(const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& operator=(GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originalModuleConfig_ != nullptr; };
    // originalModuleConfig Field Functions 
    bool hasOriginalModuleConfig() const { return this->originalModuleConfig_ != nullptr;};
    void deleteOriginalModuleConfig() { this->originalModuleConfig_ = nullptr;};
    inline const vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig> & originalModuleConfig() const { DARABONBA_PTR_GET_CONST(originalModuleConfig_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig>) };
    inline vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig> originalModuleConfig() { DARABONBA_PTR_GET(originalModuleConfig_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig>) };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& setOriginalModuleConfig(const vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig> & originalModuleConfig) { DARABONBA_PTR_SET_VALUE(originalModuleConfig_, originalModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig& setOriginalModuleConfig(vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig> && originalModuleConfig) { DARABONBA_PTR_SET_RVALUE(originalModuleConfig_, originalModuleConfig) };


  protected:
    std::shared_ptr<vector<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig>> originalModuleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
