// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetTransportLayerApplicationResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransportLayerApplicationResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransportLayerApplicationResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EdgePort, edgePort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    GetTransportLayerApplicationResponseBodyRules() = default ;
    GetTransportLayerApplicationResponseBodyRules(const GetTransportLayerApplicationResponseBodyRules &) = default ;
    GetTransportLayerApplicationResponseBodyRules(GetTransportLayerApplicationResponseBodyRules &&) = default ;
    GetTransportLayerApplicationResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransportLayerApplicationResponseBodyRules() = default ;
    GetTransportLayerApplicationResponseBodyRules& operator=(const GetTransportLayerApplicationResponseBodyRules &) = default ;
    GetTransportLayerApplicationResponseBodyRules& operator=(GetTransportLayerApplicationResponseBodyRules &&) = default ;
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
    inline GetTransportLayerApplicationResponseBodyRules& setClientIPPassThroughMode(string clientIPPassThroughMode) { DARABONBA_PTR_SET_VALUE(clientIPPassThroughMode_, clientIPPassThroughMode) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // edgePort Field Functions 
    bool hasEdgePort() const { return this->edgePort_ != nullptr;};
    void deleteEdgePort() { this->edgePort_ = nullptr;};
    inline string edgePort() const { DARABONBA_PTR_GET_DEFAULT(edgePort_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setEdgePort(string edgePort) { DARABONBA_PTR_SET_VALUE(edgePort_, edgePort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetTransportLayerApplicationResponseBodyRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetTransportLayerApplicationResponseBodyRules& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> clientIPPassThroughMode_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> edgePort_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePort_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
