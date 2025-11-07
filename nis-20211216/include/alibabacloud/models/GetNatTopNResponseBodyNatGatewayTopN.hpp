// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODYNATGATEWAYTOPN_HPP_
#define ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODYNATGATEWAYTOPN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNatTopNResponseBodyNatGatewayTopN : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatTopNResponseBodyNatGatewayTopN& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_TO_JSON(InBps, inBps_);
      DARABONBA_PTR_TO_JSON(InFlowPerMinute, inFlowPerMinute_);
      DARABONBA_PTR_TO_JSON(InPps, inPps_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NewSessionPerSecond, newSessionPerSecond_);
      DARABONBA_PTR_TO_JSON(OutBps, outBps_);
      DARABONBA_PTR_TO_JSON(OutFlowPerMinute, outFlowPerMinute_);
      DARABONBA_PTR_TO_JSON(OutPps, outPps_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatTopNResponseBodyNatGatewayTopN& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_FROM_JSON(InBps, inBps_);
      DARABONBA_PTR_FROM_JSON(InFlowPerMinute, inFlowPerMinute_);
      DARABONBA_PTR_FROM_JSON(InPps, inPps_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NewSessionPerSecond, newSessionPerSecond_);
      DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
      DARABONBA_PTR_FROM_JSON(OutFlowPerMinute, outFlowPerMinute_);
      DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
    };
    GetNatTopNResponseBodyNatGatewayTopN() = default ;
    GetNatTopNResponseBodyNatGatewayTopN(const GetNatTopNResponseBodyNatGatewayTopN &) = default ;
    GetNatTopNResponseBodyNatGatewayTopN(GetNatTopNResponseBodyNatGatewayTopN &&) = default ;
    GetNatTopNResponseBodyNatGatewayTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatTopNResponseBodyNatGatewayTopN() = default ;
    GetNatTopNResponseBodyNatGatewayTopN& operator=(const GetNatTopNResponseBodyNatGatewayTopN &) = default ;
    GetNatTopNResponseBodyNatGatewayTopN& operator=(GetNatTopNResponseBodyNatGatewayTopN &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && return this->inBps_ == nullptr && return this->inFlowPerMinute_ == nullptr && return this->inPps_ == nullptr && return this->ip_ == nullptr && return this->newSessionPerSecond_ == nullptr
        && return this->outBps_ == nullptr && return this->outFlowPerMinute_ == nullptr && return this->outPps_ == nullptr; };
    // activeSessionCount Field Functions 
    bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
    void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
    inline float activeSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setActiveSessionCount(float activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline float inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setInBps(float inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inFlowPerMinute Field Functions 
    bool hasInFlowPerMinute() const { return this->inFlowPerMinute_ != nullptr;};
    void deleteInFlowPerMinute() { this->inFlowPerMinute_ = nullptr;};
    inline float inFlowPerMinute() const { DARABONBA_PTR_GET_DEFAULT(inFlowPerMinute_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setInFlowPerMinute(float inFlowPerMinute) { DARABONBA_PTR_SET_VALUE(inFlowPerMinute_, inFlowPerMinute) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline float inPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setInPps(float inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetNatTopNResponseBodyNatGatewayTopN& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // newSessionPerSecond Field Functions 
    bool hasNewSessionPerSecond() const { return this->newSessionPerSecond_ != nullptr;};
    void deleteNewSessionPerSecond() { this->newSessionPerSecond_ = nullptr;};
    inline float newSessionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newSessionPerSecond_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setNewSessionPerSecond(float newSessionPerSecond) { DARABONBA_PTR_SET_VALUE(newSessionPerSecond_, newSessionPerSecond) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline float outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setOutBps(float outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outFlowPerMinute Field Functions 
    bool hasOutFlowPerMinute() const { return this->outFlowPerMinute_ != nullptr;};
    void deleteOutFlowPerMinute() { this->outFlowPerMinute_ = nullptr;};
    inline float outFlowPerMinute() const { DARABONBA_PTR_GET_DEFAULT(outFlowPerMinute_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setOutFlowPerMinute(float outFlowPerMinute) { DARABONBA_PTR_SET_VALUE(outFlowPerMinute_, outFlowPerMinute) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline float outPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0.0) };
    inline GetNatTopNResponseBodyNatGatewayTopN& setOutPps(float outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


  protected:
    // The number of concurrent connections. Unit: connections.
    std::shared_ptr<float> activeSessionCount_ = nullptr;
    // The inbound data transfer. Unit: bit/s.
    std::shared_ptr<float> inBps_ = nullptr;
    // This field is reserved and not in use.
    std::shared_ptr<float> inFlowPerMinute_ = nullptr;
    // The inbound packet forwarding rate. Unit: packets per second.
    std::shared_ptr<float> inPps_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The new connection creation rate. Unit: connections per second.
    std::shared_ptr<float> newSessionPerSecond_ = nullptr;
    // The outbound data transfer. Unit: bit/s.
    std::shared_ptr<float> outBps_ = nullptr;
    // This field is reserved and not in use.
    std::shared_ptr<float> outFlowPerMinute_ = nullptr;
    // The outbound packet forwarding rate. Unit: packets per second.
    std::shared_ptr<float> outPps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
