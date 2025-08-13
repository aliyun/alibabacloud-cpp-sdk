// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTINTERNETSLB_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTINTERNETSLB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultInternetSlb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultInternetSlb& obj) { 
      DARABONBA_PTR_TO_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_TO_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_TO_JSON(InternetNetworkFlow, internetNetworkFlow_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultInternetSlb& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_FROM_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_FROM_JSON(InternetNetworkFlow, internetNetworkFlow_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayResponseBodyDataResultInternetSlb() = default ;
    ListGatewayResponseBodyDataResultInternetSlb(const ListGatewayResponseBodyDataResultInternetSlb &) = default ;
    ListGatewayResponseBodyDataResultInternetSlb(ListGatewayResponseBodyDataResultInternetSlb &&) = default ;
    ListGatewayResponseBodyDataResultInternetSlb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultInternetSlb() = default ;
    ListGatewayResponseBodyDataResultInternetSlb& operator=(const ListGatewayResponseBodyDataResultInternetSlb &) = default ;
    ListGatewayResponseBodyDataResultInternetSlb& operator=(ListGatewayResponseBodyDataResultInternetSlb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewaySlbMode_ != nullptr
        && this->gatewaySlbStatus_ != nullptr && this->internetNetworkFlow_ != nullptr && this->slbId_ != nullptr && this->slbIp_ != nullptr && this->slbPort_ != nullptr
        && this->slbSpec_ != nullptr && this->statusDesc_ != nullptr && this->type_ != nullptr; };
    // gatewaySlbMode Field Functions 
    bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
    void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
    inline string gatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


    // gatewaySlbStatus Field Functions 
    bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
    void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
    inline string gatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


    // internetNetworkFlow Field Functions 
    bool hasInternetNetworkFlow() const { return this->internetNetworkFlow_ != nullptr;};
    void deleteInternetNetworkFlow() { this->internetNetworkFlow_ = nullptr;};
    inline string internetNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(internetNetworkFlow_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setInternetNetworkFlow(string internetNetworkFlow) { DARABONBA_PTR_SET_VALUE(internetNetworkFlow_, internetNetworkFlow) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline string slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // slbSpec Field Functions 
    bool hasSlbSpec() const { return this->slbSpec_ != nullptr;};
    void deleteSlbSpec() { this->slbSpec_ = nullptr;};
    inline string slbSpec() const { DARABONBA_PTR_GET_DEFAULT(slbSpec_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setSlbSpec(string slbSpec) { DARABONBA_PTR_SET_VALUE(slbSpec_, slbSpec) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayResponseBodyDataResultInternetSlb& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mode of the SLB instance.
    std::shared_ptr<string> gatewaySlbMode_ = nullptr;
    // The state of the SLB instance.
    std::shared_ptr<string> gatewaySlbStatus_ = nullptr;
    // The traffic of the gateway.
    std::shared_ptr<string> internetNetworkFlow_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The IP address of the SLB instance.
    std::shared_ptr<string> slbIp_ = nullptr;
    // The port number of the SLB instance.
    std::shared_ptr<string> slbPort_ = nullptr;
    // The specifications of the SLB instance.
    std::shared_ptr<string> slbSpec_ = nullptr;
    // The description of the state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The type of the SLB instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
