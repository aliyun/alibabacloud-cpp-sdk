// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSPORTLAYERAPPLICATIONREQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSPORTLAYERAPPLICATIONREQUESTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateTransportLayerApplicationRequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransportLayerApplicationRequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransportLayerApplicationRequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdateTransportLayerApplicationRequestRules() = default ;
    UpdateTransportLayerApplicationRequestRules(const UpdateTransportLayerApplicationRequestRules &) = default ;
    UpdateTransportLayerApplicationRequestRules(UpdateTransportLayerApplicationRequestRules &&) = default ;
    UpdateTransportLayerApplicationRequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransportLayerApplicationRequestRules() = default ;
    UpdateTransportLayerApplicationRequestRules& operator=(const UpdateTransportLayerApplicationRequestRules &) = default ;
    UpdateTransportLayerApplicationRequestRules& operator=(UpdateTransportLayerApplicationRequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIPPassThroughMode_ == nullptr
        && return this->comment_ == nullptr && return this->edgePort_ == nullptr && return this->protocol_ == nullptr && return this->source_ == nullptr && return this->sourcePort_ == nullptr
        && return this->sourceType_ == nullptr; };
    // clientIPPassThroughMode Field Functions 
    bool hasClientIPPassThroughMode() const { return this->clientIPPassThroughMode_ != nullptr;};
    void deleteClientIPPassThroughMode() { this->clientIPPassThroughMode_ = nullptr;};
    inline string clientIPPassThroughMode() const { DARABONBA_PTR_GET_DEFAULT(clientIPPassThroughMode_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setClientIPPassThroughMode(string clientIPPassThroughMode) { DARABONBA_PTR_SET_VALUE(clientIPPassThroughMode_, clientIPPassThroughMode) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // edgePort Field Functions 
    bool hasEdgePort() const { return this->edgePort_ != nullptr;};
    void deleteEdgePort() { this->edgePort_ = nullptr;};
    inline string edgePort() const { DARABONBA_PTR_GET_DEFAULT(edgePort_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setEdgePort(string edgePort) { DARABONBA_PTR_SET_VALUE(edgePort_, edgePort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateTransportLayerApplicationRequestRules& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Client IP pass-through protocol, supports:
    // - **off**: No pass-through.
    // - **PPv1**: PROXY Protocol v1, supports client IP pass-through for TCP protocol.
    // - **PPv2**: PROXY Protocol v2, supports client IP pass-through for TCP and UDP protocols.
    // - **SPP**: Simple Proxy Protocol, supports client IP pass-through for UDP protocol.
    std::shared_ptr<string> clientIPPassThroughMode_ = nullptr;
    // Comment information for the rule.
    std::shared_ptr<string> comment_ = nullptr;
    // Edge port. Supports:
    // 
    // - A single port, e.g., 80.
    // - Port range, e.g., 81-85, representing ports 81, 82, 83, 84, 85.
    // - Combination of ports and port ranges, separated by commas, e.g., 80,81-85,90, representing ports 80, 81, 82, 83, 84, 85, 90.
    // - Edge ports within a single rule and between multiple rules must not overlap.
    std::shared_ptr<string> edgePort_ = nullptr;
    // Forwarding rule protocol, supports:
    // 
    // - TCP: TCP protocol.
    // - UDP: UDP protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // Specific value of the source.
    std::shared_ptr<string> source_ = nullptr;
    // Source port. Supports:
    // 
    // - A single port, when the source port is a single port, any valid edge port combination is supported.
    // - Port range, only when the edge port is a port range, the source port can be set as a port range, and the size of the range must match that of the edge port. For example, if the edge port is 90-93, the source port cannot be set to 81-85 because the source port range is 5 and the edge port range is 3, which do not match.
    std::shared_ptr<string> sourcePort_ = nullptr;
    // Source type, supports:
    // - **ip**: IP address.
    // - **domain**: Domain name.
    // - **OP**: Origin pool.
    // - **LB**: Load balancer.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
