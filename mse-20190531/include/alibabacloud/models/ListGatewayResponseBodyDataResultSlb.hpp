// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTSLB_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTSLB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultSlb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultSlb& obj) { 
      DARABONBA_PTR_TO_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_TO_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultSlb& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_FROM_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayResponseBodyDataResultSlb() = default ;
    ListGatewayResponseBodyDataResultSlb(const ListGatewayResponseBodyDataResultSlb &) = default ;
    ListGatewayResponseBodyDataResultSlb(ListGatewayResponseBodyDataResultSlb &&) = default ;
    ListGatewayResponseBodyDataResultSlb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultSlb() = default ;
    ListGatewayResponseBodyDataResultSlb& operator=(const ListGatewayResponseBodyDataResultSlb &) = default ;
    ListGatewayResponseBodyDataResultSlb& operator=(ListGatewayResponseBodyDataResultSlb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewaySlbMode_ == nullptr
        && return this->gatewaySlbStatus_ == nullptr && return this->slbId_ == nullptr && return this->slbIp_ == nullptr && return this->slbPort_ == nullptr && return this->slbSpec_ == nullptr
        && return this->statusDesc_ == nullptr && return this->type_ == nullptr; };
    // gatewaySlbMode Field Functions 
    bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
    void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
    inline string gatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


    // gatewaySlbStatus Field Functions 
    bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
    void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
    inline string gatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline string slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // slbSpec Field Functions 
    bool hasSlbSpec() const { return this->slbSpec_ != nullptr;};
    void deleteSlbSpec() { this->slbSpec_ = nullptr;};
    inline string slbSpec() const { DARABONBA_PTR_GET_DEFAULT(slbSpec_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setSlbSpec(string slbSpec) { DARABONBA_PTR_SET_VALUE(slbSpec_, slbSpec) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayResponseBodyDataResultSlb& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mode of the SLB instance.
    std::shared_ptr<string> gatewaySlbMode_ = nullptr;
    // The state of the SLB instance.
    std::shared_ptr<string> gatewaySlbStatus_ = nullptr;
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
    // The network type. Valid values:
    // 
    // *   PUB_NET
    // *   PRIVATE_NET
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
