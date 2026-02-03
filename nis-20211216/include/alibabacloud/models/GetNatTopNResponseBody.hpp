// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNatTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTopNOpen, isTopNOpen_);
      DARABONBA_PTR_TO_JSON(NatGatewayTopN, natGatewayTopN_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTopNOpen, isTopNOpen_);
      DARABONBA_PTR_FROM_JSON(NatGatewayTopN, natGatewayTopN_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNatTopNResponseBody() = default ;
    GetNatTopNResponseBody(const GetNatTopNResponseBody &) = default ;
    GetNatTopNResponseBody(GetNatTopNResponseBody &&) = default ;
    GetNatTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatTopNResponseBody() = default ;
    GetNatTopNResponseBody& operator=(const GetNatTopNResponseBody &) = default ;
    GetNatTopNResponseBody& operator=(GetNatTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatGatewayTopN : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGatewayTopN& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NatGatewayTopN& obj) { 
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
      NatGatewayTopN() = default ;
      NatGatewayTopN(const NatGatewayTopN &) = default ;
      NatGatewayTopN(NatGatewayTopN &&) = default ;
      NatGatewayTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGatewayTopN() = default ;
      NatGatewayTopN& operator=(const NatGatewayTopN &) = default ;
      NatGatewayTopN& operator=(NatGatewayTopN &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && this->inBps_ == nullptr && this->inFlowPerMinute_ == nullptr && this->inPps_ == nullptr && this->ip_ == nullptr && this->newSessionPerSecond_ == nullptr
        && this->outBps_ == nullptr && this->outFlowPerMinute_ == nullptr && this->outPps_ == nullptr; };
      // activeSessionCount Field Functions 
      bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
      void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
      inline float getActiveSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0.0) };
      inline NatGatewayTopN& setActiveSessionCount(float activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline float getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0.0) };
      inline NatGatewayTopN& setInBps(float inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // inFlowPerMinute Field Functions 
      bool hasInFlowPerMinute() const { return this->inFlowPerMinute_ != nullptr;};
      void deleteInFlowPerMinute() { this->inFlowPerMinute_ = nullptr;};
      inline float getInFlowPerMinute() const { DARABONBA_PTR_GET_DEFAULT(inFlowPerMinute_, 0.0) };
      inline NatGatewayTopN& setInFlowPerMinute(float inFlowPerMinute) { DARABONBA_PTR_SET_VALUE(inFlowPerMinute_, inFlowPerMinute) };


      // inPps Field Functions 
      bool hasInPps() const { return this->inPps_ != nullptr;};
      void deleteInPps() { this->inPps_ = nullptr;};
      inline float getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0.0) };
      inline NatGatewayTopN& setInPps(float inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline NatGatewayTopN& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // newSessionPerSecond Field Functions 
      bool hasNewSessionPerSecond() const { return this->newSessionPerSecond_ != nullptr;};
      void deleteNewSessionPerSecond() { this->newSessionPerSecond_ = nullptr;};
      inline float getNewSessionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newSessionPerSecond_, 0.0) };
      inline NatGatewayTopN& setNewSessionPerSecond(float newSessionPerSecond) { DARABONBA_PTR_SET_VALUE(newSessionPerSecond_, newSessionPerSecond) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline float getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0.0) };
      inline NatGatewayTopN& setOutBps(float outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // outFlowPerMinute Field Functions 
      bool hasOutFlowPerMinute() const { return this->outFlowPerMinute_ != nullptr;};
      void deleteOutFlowPerMinute() { this->outFlowPerMinute_ = nullptr;};
      inline float getOutFlowPerMinute() const { DARABONBA_PTR_GET_DEFAULT(outFlowPerMinute_, 0.0) };
      inline NatGatewayTopN& setOutFlowPerMinute(float outFlowPerMinute) { DARABONBA_PTR_SET_VALUE(outFlowPerMinute_, outFlowPerMinute) };


      // outPps Field Functions 
      bool hasOutPps() const { return this->outPps_ != nullptr;};
      void deleteOutPps() { this->outPps_ = nullptr;};
      inline float getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0.0) };
      inline NatGatewayTopN& setOutPps(float outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    protected:
      // The number of concurrent connections. Unit: connections.
      shared_ptr<float> activeSessionCount_ {};
      // The inbound data transfer. Unit: bit/s.
      shared_ptr<float> inBps_ {};
      // This field is reserved and not in use.
      shared_ptr<float> inFlowPerMinute_ {};
      // The inbound packet forwarding rate. Unit: packets per second.
      shared_ptr<float> inPps_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The new connection creation rate. Unit: connections per second.
      shared_ptr<float> newSessionPerSecond_ {};
      // The outbound data transfer. Unit: bit/s.
      shared_ptr<float> outBps_ {};
      // This field is reserved and not in use.
      shared_ptr<float> outFlowPerMinute_ {};
      // The outbound packet forwarding rate. Unit: packets per second.
      shared_ptr<float> outPps_ {};
    };

    virtual bool empty() const override { return this->isTopNOpen_ == nullptr
        && this->natGatewayTopN_ == nullptr && this->requestId_ == nullptr; };
    // isTopNOpen Field Functions 
    bool hasIsTopNOpen() const { return this->isTopNOpen_ != nullptr;};
    void deleteIsTopNOpen() { this->isTopNOpen_ = nullptr;};
    inline bool getIsTopNOpen() const { DARABONBA_PTR_GET_DEFAULT(isTopNOpen_, false) };
    inline GetNatTopNResponseBody& setIsTopNOpen(bool isTopNOpen) { DARABONBA_PTR_SET_VALUE(isTopNOpen_, isTopNOpen) };


    // natGatewayTopN Field Functions 
    bool hasNatGatewayTopN() const { return this->natGatewayTopN_ != nullptr;};
    void deleteNatGatewayTopN() { this->natGatewayTopN_ = nullptr;};
    inline const vector<GetNatTopNResponseBody::NatGatewayTopN> & getNatGatewayTopN() const { DARABONBA_PTR_GET_CONST(natGatewayTopN_, vector<GetNatTopNResponseBody::NatGatewayTopN>) };
    inline vector<GetNatTopNResponseBody::NatGatewayTopN> getNatGatewayTopN() { DARABONBA_PTR_GET(natGatewayTopN_, vector<GetNatTopNResponseBody::NatGatewayTopN>) };
    inline GetNatTopNResponseBody& setNatGatewayTopN(const vector<GetNatTopNResponseBody::NatGatewayTopN> & natGatewayTopN) { DARABONBA_PTR_SET_VALUE(natGatewayTopN_, natGatewayTopN) };
    inline GetNatTopNResponseBody& setNatGatewayTopN(vector<GetNatTopNResponseBody::NatGatewayTopN> && natGatewayTopN) { DARABONBA_PTR_SET_RVALUE(natGatewayTopN_, natGatewayTopN) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether Network Intelligence Service (NIS) is activated. The NatGatewayTopN parameter returns an empty array when NIS is not activated.
    // 
    // *   **true**: activated
    // *   **false**: not activated
    shared_ptr<bool> isTopNOpen_ {};
    // An array of statistics about real-time SNAT performance ranking.
    shared_ptr<vector<GetNatTopNResponseBody::NatGatewayTopN>> natGatewayTopN_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
