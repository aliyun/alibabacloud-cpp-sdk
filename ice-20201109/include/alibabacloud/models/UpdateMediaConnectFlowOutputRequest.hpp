// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaConnectFlowOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
      DARABONBA_PTR_TO_JSON(OutputToUrl, outputToUrl_);
      DARABONBA_PTR_TO_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_TO_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
      DARABONBA_PTR_FROM_JSON(OutputToUrl, outputToUrl_);
      DARABONBA_PTR_FROM_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_FROM_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    UpdateMediaConnectFlowOutputRequest() = default ;
    UpdateMediaConnectFlowOutputRequest(const UpdateMediaConnectFlowOutputRequest &) = default ;
    UpdateMediaConnectFlowOutputRequest(UpdateMediaConnectFlowOutputRequest &&) = default ;
    UpdateMediaConnectFlowOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaConnectFlowOutputRequest() = default ;
    UpdateMediaConnectFlowOutputRequest& operator=(const UpdateMediaConnectFlowOutputRequest &) = default ;
    UpdateMediaConnectFlowOutputRequest& operator=(UpdateMediaConnectFlowOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrs_ == nullptr
        && return this->flowId_ == nullptr && return this->outputName_ == nullptr && return this->outputToUrl_ == nullptr && return this->playerLimit_ == nullptr && return this->srtLatency_ == nullptr
        && return this->srtPassphrase_ == nullptr && return this->srtPbkeyLen_ == nullptr; };
    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline string cidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


    // outputToUrl Field Functions 
    bool hasOutputToUrl() const { return this->outputToUrl_ != nullptr;};
    void deleteOutputToUrl() { this->outputToUrl_ = nullptr;};
    inline string outputToUrl() const { DARABONBA_PTR_GET_DEFAULT(outputToUrl_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setOutputToUrl(string outputToUrl) { DARABONBA_PTR_SET_VALUE(outputToUrl_, outputToUrl) };


    // playerLimit Field Functions 
    bool hasPlayerLimit() const { return this->playerLimit_ != nullptr;};
    void deletePlayerLimit() { this->playerLimit_ = nullptr;};
    inline string playerLimit() const { DARABONBA_PTR_GET_DEFAULT(playerLimit_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setPlayerLimit(string playerLimit) { DARABONBA_PTR_SET_VALUE(playerLimit_, playerLimit) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline string srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setSrtLatency(string srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbkeyLen Field Functions 
    bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
    void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
    inline string srtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, "") };
    inline UpdateMediaConnectFlowOutputRequest& setSrtPbkeyLen(string srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


  protected:
    // The IP address whitelist.
    std::shared_ptr<string> cidrs_ = nullptr;
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
    // The output name.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputName_ = nullptr;
    // The output URL. You can modify this parameter only when the output type is RTMP-PUSH or SRT-Caller.
    std::shared_ptr<string> outputToUrl_ = nullptr;
    // The maximum number of viewers.
    std::shared_ptr<string> playerLimit_ = nullptr;
    // The latency for the SRT stream. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtLatency_ = nullptr;
    // The SRT key. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPassphrase_ = nullptr;
    // The encryption key length. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPbkeyLen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
