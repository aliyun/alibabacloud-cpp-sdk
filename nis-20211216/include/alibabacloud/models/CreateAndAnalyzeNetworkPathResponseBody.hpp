// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDANALYZENETWORKPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDANALYZENETWORKPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateAndAnalyzeNetworkPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndAnalyzeNetworkPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetIpAddress, targetIpAddress_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndAnalyzeNetworkPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetIpAddress, targetIpAddress_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateAndAnalyzeNetworkPathResponseBody() = default ;
    CreateAndAnalyzeNetworkPathResponseBody(const CreateAndAnalyzeNetworkPathResponseBody &) = default ;
    CreateAndAnalyzeNetworkPathResponseBody(CreateAndAnalyzeNetworkPathResponseBody &&) = default ;
    CreateAndAnalyzeNetworkPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndAnalyzeNetworkPathResponseBody() = default ;
    CreateAndAnalyzeNetworkPathResponseBody& operator=(const CreateAndAnalyzeNetworkPathResponseBody &) = default ;
    CreateAndAnalyzeNetworkPathResponseBody& operator=(CreateAndAnalyzeNetworkPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkReachableAnalysisId_ == nullptr
        && return this->protocol_ == nullptr && return this->requestId_ == nullptr && return this->sourceId_ == nullptr && return this->sourceIpAddress_ == nullptr && return this->sourcePort_ == nullptr
        && return this->sourceType_ == nullptr && return this->targetId_ == nullptr && return this->targetIpAddress_ == nullptr && return this->targetPort_ == nullptr && return this->targetType_ == nullptr; };
    // networkReachableAnalysisId Field Functions 
    bool hasNetworkReachableAnalysisId() const { return this->networkReachableAnalysisId_ != nullptr;};
    void deleteNetworkReachableAnalysisId() { this->networkReachableAnalysisId_ = nullptr;};
    inline string networkReachableAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisId_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setNetworkReachableAnalysisId(string networkReachableAnalysisId) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisId_, networkReachableAnalysisId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetIpAddress Field Functions 
    bool hasTargetIpAddress() const { return this->targetIpAddress_ != nullptr;};
    void deleteTargetIpAddress() { this->targetIpAddress_ = nullptr;};
    inline string targetIpAddress() const { DARABONBA_PTR_GET_DEFAULT(targetIpAddress_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setTargetIpAddress(string targetIpAddress) { DARABONBA_PTR_SET_VALUE(targetIpAddress_, targetIpAddress) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateAndAnalyzeNetworkPathResponseBody& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the task for analyzing network reachability that you initiated.
    std::shared_ptr<string> networkReachableAnalysisId_ = nullptr;
    // The protocol type.
    std::shared_ptr<string> protocol_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the source resource.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The source port.
    std::shared_ptr<string> sourcePort_ = nullptr;
    // The type of the source resource.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The ID of the destination resource.
    std::shared_ptr<string> targetId_ = nullptr;
    // The destination IP address.
    std::shared_ptr<string> targetIpAddress_ = nullptr;
    // The destination port.
    std::shared_ptr<string> targetPort_ = nullptr;
    // The type of the destination resource.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
