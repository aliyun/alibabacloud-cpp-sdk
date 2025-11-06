// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAFLOWMIRROR_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAFLOWMIRROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataFlowMirror : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataFlowMirror& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetServiceId, targetServiceId_);
      DARABONBA_PTR_TO_JSON(TargetServiceName, targetServiceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataFlowMirror& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetServiceId, targetServiceId_);
      DARABONBA_PTR_FROM_JSON(TargetServiceName, targetServiceName_);
    };
    GetGatewayRouteDetailResponseBodyDataFlowMirror() = default ;
    GetGatewayRouteDetailResponseBodyDataFlowMirror(const GetGatewayRouteDetailResponseBodyDataFlowMirror &) = default ;
    GetGatewayRouteDetailResponseBodyDataFlowMirror(GetGatewayRouteDetailResponseBodyDataFlowMirror &&) = default ;
    GetGatewayRouteDetailResponseBodyDataFlowMirror(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataFlowMirror() = default ;
    GetGatewayRouteDetailResponseBodyDataFlowMirror& operator=(const GetGatewayRouteDetailResponseBodyDataFlowMirror &) = default ;
    GetGatewayRouteDetailResponseBodyDataFlowMirror& operator=(GetGatewayRouteDetailResponseBodyDataFlowMirror &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->percentage_ == nullptr
        && return this->port_ == nullptr && return this->status_ == nullptr && return this->targetServiceId_ == nullptr && return this->targetServiceName_ == nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataFlowMirror& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataFlowMirror& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGatewayRouteDetailResponseBodyDataFlowMirror& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetServiceId Field Functions 
    bool hasTargetServiceId() const { return this->targetServiceId_ != nullptr;};
    void deleteTargetServiceId() { this->targetServiceId_ = nullptr;};
    inline int64_t targetServiceId() const { DARABONBA_PTR_GET_DEFAULT(targetServiceId_, 0L) };
    inline GetGatewayRouteDetailResponseBodyDataFlowMirror& setTargetServiceId(int64_t targetServiceId) { DARABONBA_PTR_SET_VALUE(targetServiceId_, targetServiceId) };


    // targetServiceName Field Functions 
    bool hasTargetServiceName() const { return this->targetServiceName_ != nullptr;};
    void deleteTargetServiceName() { this->targetServiceName_ = nullptr;};
    inline string targetServiceName() const { DARABONBA_PTR_GET_DEFAULT(targetServiceName_, "") };
    inline GetGatewayRouteDetailResponseBodyDataFlowMirror& setTargetServiceName(string targetServiceName) { DARABONBA_PTR_SET_VALUE(targetServiceName_, targetServiceName) };


  protected:
    // 流量复制比例（%），取值0-100。
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // 目标服务端口。
    std::shared_ptr<int32_t> port_ = nullptr;
    // 开启状态，取值：
    // 
    // - on：开启
    // - off：关闭
    std::shared_ptr<string> status_ = nullptr;
    // 目标服务ID。
    std::shared_ptr<int64_t> targetServiceId_ = nullptr;
    // 目标服务名称。
    std::shared_ptr<string> targetServiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
