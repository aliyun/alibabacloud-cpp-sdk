// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONSRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListTransportLayerApplicationsResponseBodyApplicationsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransportLayerApplicationsResponseBodyApplicationsRules& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransportLayerApplicationsResponseBodyApplicationsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListTransportLayerApplicationsResponseBodyApplicationsRules() = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsRules(const ListTransportLayerApplicationsResponseBodyApplicationsRules &) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsRules(ListTransportLayerApplicationsResponseBodyApplicationsRules &&) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransportLayerApplicationsResponseBodyApplicationsRules() = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsRules& operator=(const ListTransportLayerApplicationsResponseBodyApplicationsRules &) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsRules& operator=(ListTransportLayerApplicationsResponseBodyApplicationsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIPPassThroughMode_ != nullptr
        && this->comment_ != nullptr && this->edgePort_ != nullptr && this->protocol_ != nullptr && this->ruleId_ != nullptr && this->source_ != nullptr
        && this->sourcePort_ != nullptr && this->sourceType_ != nullptr; };
    // clientIPPassThroughMode Field Functions 
    bool hasClientIPPassThroughMode() const { return this->clientIPPassThroughMode_ != nullptr;};
    void deleteClientIPPassThroughMode() { this->clientIPPassThroughMode_ = nullptr;};
    inline string clientIPPassThroughMode() const { DARABONBA_PTR_GET_DEFAULT(clientIPPassThroughMode_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setClientIPPassThroughMode(string clientIPPassThroughMode) { DARABONBA_PTR_SET_VALUE(clientIPPassThroughMode_, clientIPPassThroughMode) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // edgePort Field Functions 
    bool hasEdgePort() const { return this->edgePort_ != nullptr;};
    void deleteEdgePort() { this->edgePort_ = nullptr;};
    inline string edgePort() const { DARABONBA_PTR_GET_DEFAULT(edgePort_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setEdgePort(string edgePort) { DARABONBA_PTR_SET_VALUE(edgePort_, edgePort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsRules& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


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
    std::shared_ptr<string> edgePort_ = nullptr;
    // Forwarding rule protocol, with values:
    // 
    // - TCP: TCP protocol.
    // - UDP: UDP protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // Layer 4 acceleration rule ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // Specific value of the source, which needs to match the source type.
    std::shared_ptr<string> source_ = nullptr;
    // Source port. Supports:
    // 
    // - A single port, when the source port is a single port, any valid combination of edge ports is supported.
    // - Port range, only when the edge port is a port range, the source port can be set to a port range, and the range size must be consistent with the edge port. For example, if the edge port is 90-93, the source port cannot be set to 81-85 because the source port range is 5 and the edge port range is 3, which are inconsistent.
    std::shared_ptr<string> sourcePort_ = nullptr;
    // Source type, supports:
    // - **ip**: IP.
    // - **domain**: Domain name.
    // - **OP**: Origin pool.
    // - **LB**: Load balancer.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
