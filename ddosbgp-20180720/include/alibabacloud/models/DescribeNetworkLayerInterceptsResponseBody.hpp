// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKLAYERINTERCEPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKLAYERINTERCEPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeNetworkLayerInterceptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkLayerInterceptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionRecordCount, interceptionRecordCount_);
      DARABONBA_PTR_TO_JSON(InterceptionRecords, interceptionRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkLayerInterceptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionRecordCount, interceptionRecordCount_);
      DARABONBA_PTR_FROM_JSON(InterceptionRecords, interceptionRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeNetworkLayerInterceptsResponseBody() = default ;
    DescribeNetworkLayerInterceptsResponseBody(const DescribeNetworkLayerInterceptsResponseBody &) = default ;
    DescribeNetworkLayerInterceptsResponseBody(DescribeNetworkLayerInterceptsResponseBody &&) = default ;
    DescribeNetworkLayerInterceptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkLayerInterceptsResponseBody() = default ;
    DescribeNetworkLayerInterceptsResponseBody& operator=(const DescribeNetworkLayerInterceptsResponseBody &) = default ;
    DescribeNetworkLayerInterceptsResponseBody& operator=(DescribeNetworkLayerInterceptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InterceptionRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterceptionRecords& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationIp, destinationIp_);
        DARABONBA_PTR_TO_JSON(DestinationPort, destinationPort_);
        DARABONBA_PTR_TO_JSON(InterceptAction, interceptAction_);
        DARABONBA_PTR_TO_JSON(InterceptCount, interceptCount_);
        DARABONBA_PTR_TO_JSON(InterceptEndTime, interceptEndTime_);
        DARABONBA_PTR_TO_JSON(InterceptModule, interceptModule_);
        DARABONBA_PTR_TO_JSON(InterceptStartTime, interceptStartTime_);
        DARABONBA_PTR_TO_JSON(NetworkProtocol, networkProtocol_);
        DARABONBA_PTR_TO_JSON(ProtocolNumber, protocolNumber_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      };
      friend void from_json(const Darabonba::Json& j, InterceptionRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationIp, destinationIp_);
        DARABONBA_PTR_FROM_JSON(DestinationPort, destinationPort_);
        DARABONBA_PTR_FROM_JSON(InterceptAction, interceptAction_);
        DARABONBA_PTR_FROM_JSON(InterceptCount, interceptCount_);
        DARABONBA_PTR_FROM_JSON(InterceptEndTime, interceptEndTime_);
        DARABONBA_PTR_FROM_JSON(InterceptModule, interceptModule_);
        DARABONBA_PTR_FROM_JSON(InterceptStartTime, interceptStartTime_);
        DARABONBA_PTR_FROM_JSON(NetworkProtocol, networkProtocol_);
        DARABONBA_PTR_FROM_JSON(ProtocolNumber, protocolNumber_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      };
      InterceptionRecords() = default ;
      InterceptionRecords(const InterceptionRecords &) = default ;
      InterceptionRecords(InterceptionRecords &&) = default ;
      InterceptionRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterceptionRecords() = default ;
      InterceptionRecords& operator=(const InterceptionRecords &) = default ;
      InterceptionRecords& operator=(InterceptionRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationIp_ == nullptr
        && this->destinationPort_ == nullptr && this->interceptAction_ == nullptr && this->interceptCount_ == nullptr && this->interceptEndTime_ == nullptr && this->interceptModule_ == nullptr
        && this->interceptStartTime_ == nullptr && this->networkProtocol_ == nullptr && this->protocolNumber_ == nullptr && this->sourceIp_ == nullptr && this->sourcePort_ == nullptr; };
      // destinationIp Field Functions 
      bool hasDestinationIp() const { return this->destinationIp_ != nullptr;};
      void deleteDestinationIp() { this->destinationIp_ = nullptr;};
      inline string getDestinationIp() const { DARABONBA_PTR_GET_DEFAULT(destinationIp_, "") };
      inline InterceptionRecords& setDestinationIp(string destinationIp) { DARABONBA_PTR_SET_VALUE(destinationIp_, destinationIp) };


      // destinationPort Field Functions 
      bool hasDestinationPort() const { return this->destinationPort_ != nullptr;};
      void deleteDestinationPort() { this->destinationPort_ = nullptr;};
      inline string getDestinationPort() const { DARABONBA_PTR_GET_DEFAULT(destinationPort_, "") };
      inline InterceptionRecords& setDestinationPort(string destinationPort) { DARABONBA_PTR_SET_VALUE(destinationPort_, destinationPort) };


      // interceptAction Field Functions 
      bool hasInterceptAction() const { return this->interceptAction_ != nullptr;};
      void deleteInterceptAction() { this->interceptAction_ = nullptr;};
      inline string getInterceptAction() const { DARABONBA_PTR_GET_DEFAULT(interceptAction_, "") };
      inline InterceptionRecords& setInterceptAction(string interceptAction) { DARABONBA_PTR_SET_VALUE(interceptAction_, interceptAction) };


      // interceptCount Field Functions 
      bool hasInterceptCount() const { return this->interceptCount_ != nullptr;};
      void deleteInterceptCount() { this->interceptCount_ = nullptr;};
      inline int64_t getInterceptCount() const { DARABONBA_PTR_GET_DEFAULT(interceptCount_, 0L) };
      inline InterceptionRecords& setInterceptCount(int64_t interceptCount) { DARABONBA_PTR_SET_VALUE(interceptCount_, interceptCount) };


      // interceptEndTime Field Functions 
      bool hasInterceptEndTime() const { return this->interceptEndTime_ != nullptr;};
      void deleteInterceptEndTime() { this->interceptEndTime_ = nullptr;};
      inline int64_t getInterceptEndTime() const { DARABONBA_PTR_GET_DEFAULT(interceptEndTime_, 0L) };
      inline InterceptionRecords& setInterceptEndTime(int64_t interceptEndTime) { DARABONBA_PTR_SET_VALUE(interceptEndTime_, interceptEndTime) };


      // interceptModule Field Functions 
      bool hasInterceptModule() const { return this->interceptModule_ != nullptr;};
      void deleteInterceptModule() { this->interceptModule_ = nullptr;};
      inline string getInterceptModule() const { DARABONBA_PTR_GET_DEFAULT(interceptModule_, "") };
      inline InterceptionRecords& setInterceptModule(string interceptModule) { DARABONBA_PTR_SET_VALUE(interceptModule_, interceptModule) };


      // interceptStartTime Field Functions 
      bool hasInterceptStartTime() const { return this->interceptStartTime_ != nullptr;};
      void deleteInterceptStartTime() { this->interceptStartTime_ = nullptr;};
      inline int64_t getInterceptStartTime() const { DARABONBA_PTR_GET_DEFAULT(interceptStartTime_, 0L) };
      inline InterceptionRecords& setInterceptStartTime(int64_t interceptStartTime) { DARABONBA_PTR_SET_VALUE(interceptStartTime_, interceptStartTime) };


      // networkProtocol Field Functions 
      bool hasNetworkProtocol() const { return this->networkProtocol_ != nullptr;};
      void deleteNetworkProtocol() { this->networkProtocol_ = nullptr;};
      inline string getNetworkProtocol() const { DARABONBA_PTR_GET_DEFAULT(networkProtocol_, "") };
      inline InterceptionRecords& setNetworkProtocol(string networkProtocol) { DARABONBA_PTR_SET_VALUE(networkProtocol_, networkProtocol) };


      // protocolNumber Field Functions 
      bool hasProtocolNumber() const { return this->protocolNumber_ != nullptr;};
      void deleteProtocolNumber() { this->protocolNumber_ = nullptr;};
      inline string getProtocolNumber() const { DARABONBA_PTR_GET_DEFAULT(protocolNumber_, "") };
      inline InterceptionRecords& setProtocolNumber(string protocolNumber) { DARABONBA_PTR_SET_VALUE(protocolNumber_, protocolNumber) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline InterceptionRecords& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline string getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
      inline InterceptionRecords& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    protected:
      // The destination IP address.
      shared_ptr<string> destinationIp_ {};
      // The destination port in the interception log.
      shared_ptr<string> destinationPort_ {};
      // The interception action.
      shared_ptr<string> interceptAction_ {};
      // The number of interceptions within the specified time range.
      shared_ptr<int64_t> interceptCount_ {};
      // The end time of the interception.
      //  > The value is a Unix/POSIX timestamp. Unit: seconds.
      shared_ptr<int64_t> interceptEndTime_ {};
      // The packet interception module.
      shared_ptr<string> interceptModule_ {};
      // The start time of the interception.
      // > The value is a Unix/POSIX timestamp. Unit: seconds.
      shared_ptr<int64_t> interceptStartTime_ {};
      // The network protocol.
      shared_ptr<string> networkProtocol_ {};
      // The network protocol number. This is a standard network protocol number.
      shared_ptr<string> protocolNumber_ {};
      // The source IP address.
      shared_ptr<string> sourceIp_ {};
      // The source port in the interception log.
      shared_ptr<string> sourcePort_ {};
    };

    virtual bool empty() const override { return this->interceptionRecordCount_ == nullptr
        && this->interceptionRecords_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // interceptionRecordCount Field Functions 
    bool hasInterceptionRecordCount() const { return this->interceptionRecordCount_ != nullptr;};
    void deleteInterceptionRecordCount() { this->interceptionRecordCount_ = nullptr;};
    inline int64_t getInterceptionRecordCount() const { DARABONBA_PTR_GET_DEFAULT(interceptionRecordCount_, 0L) };
    inline DescribeNetworkLayerInterceptsResponseBody& setInterceptionRecordCount(int64_t interceptionRecordCount) { DARABONBA_PTR_SET_VALUE(interceptionRecordCount_, interceptionRecordCount) };


    // interceptionRecords Field Functions 
    bool hasInterceptionRecords() const { return this->interceptionRecords_ != nullptr;};
    void deleteInterceptionRecords() { this->interceptionRecords_ = nullptr;};
    inline const vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords> & getInterceptionRecords() const { DARABONBA_PTR_GET_CONST(interceptionRecords_, vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords>) };
    inline vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords> getInterceptionRecords() { DARABONBA_PTR_GET(interceptionRecords_, vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords>) };
    inline DescribeNetworkLayerInterceptsResponseBody& setInterceptionRecords(const vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords> & interceptionRecords) { DARABONBA_PTR_SET_VALUE(interceptionRecords_, interceptionRecords) };
    inline DescribeNetworkLayerInterceptsResponseBody& setInterceptionRecords(vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords> && interceptionRecords) { DARABONBA_PTR_SET_RVALUE(interceptionRecords_, interceptionRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkLayerInterceptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline string getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, "") };
    inline DescribeNetworkLayerInterceptsResponseBody& setTotalCnt(string totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    // The number of interception log records.
    shared_ptr<int64_t> interceptionRecordCount_ {};
    // The interception record details.
    shared_ptr<vector<DescribeNetworkLayerInterceptsResponseBody::InterceptionRecords>> interceptionRecords_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of interception logs that match the current filter conditions.
    shared_ptr<string> totalCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
