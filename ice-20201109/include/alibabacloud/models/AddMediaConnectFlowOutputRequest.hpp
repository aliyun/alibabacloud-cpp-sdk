// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddMediaConnectFlowOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
      DARABONBA_PTR_TO_JSON(OutputProtocol, outputProtocol_);
      DARABONBA_PTR_TO_JSON(OutputToUrl, outputToUrl_);
      DARABONBA_PTR_TO_JSON(PairFlowId, pairFlowId_);
      DARABONBA_PTR_TO_JSON(PairInputName, pairInputName_);
      DARABONBA_PTR_TO_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_TO_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
      DARABONBA_PTR_FROM_JSON(OutputProtocol, outputProtocol_);
      DARABONBA_PTR_FROM_JSON(OutputToUrl, outputToUrl_);
      DARABONBA_PTR_FROM_JSON(PairFlowId, pairFlowId_);
      DARABONBA_PTR_FROM_JSON(PairInputName, pairInputName_);
      DARABONBA_PTR_FROM_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_FROM_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    AddMediaConnectFlowOutputRequest() = default ;
    AddMediaConnectFlowOutputRequest(const AddMediaConnectFlowOutputRequest &) = default ;
    AddMediaConnectFlowOutputRequest(AddMediaConnectFlowOutputRequest &&) = default ;
    AddMediaConnectFlowOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaConnectFlowOutputRequest() = default ;
    AddMediaConnectFlowOutputRequest& operator=(const AddMediaConnectFlowOutputRequest &) = default ;
    AddMediaConnectFlowOutputRequest& operator=(AddMediaConnectFlowOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrs_ != nullptr
        && this->flowId_ != nullptr && this->outputName_ != nullptr && this->outputProtocol_ != nullptr && this->outputToUrl_ != nullptr && this->pairFlowId_ != nullptr
        && this->pairInputName_ != nullptr && this->playerLimit_ != nullptr && this->srtLatency_ != nullptr && this->srtPassphrase_ != nullptr && this->srtPbkeyLen_ != nullptr; };
    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline string cidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
    inline AddMediaConnectFlowOutputRequest& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline AddMediaConnectFlowOutputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline AddMediaConnectFlowOutputRequest& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


    // outputProtocol Field Functions 
    bool hasOutputProtocol() const { return this->outputProtocol_ != nullptr;};
    void deleteOutputProtocol() { this->outputProtocol_ = nullptr;};
    inline string outputProtocol() const { DARABONBA_PTR_GET_DEFAULT(outputProtocol_, "") };
    inline AddMediaConnectFlowOutputRequest& setOutputProtocol(string outputProtocol) { DARABONBA_PTR_SET_VALUE(outputProtocol_, outputProtocol) };


    // outputToUrl Field Functions 
    bool hasOutputToUrl() const { return this->outputToUrl_ != nullptr;};
    void deleteOutputToUrl() { this->outputToUrl_ = nullptr;};
    inline string outputToUrl() const { DARABONBA_PTR_GET_DEFAULT(outputToUrl_, "") };
    inline AddMediaConnectFlowOutputRequest& setOutputToUrl(string outputToUrl) { DARABONBA_PTR_SET_VALUE(outputToUrl_, outputToUrl) };


    // pairFlowId Field Functions 
    bool hasPairFlowId() const { return this->pairFlowId_ != nullptr;};
    void deletePairFlowId() { this->pairFlowId_ = nullptr;};
    inline string pairFlowId() const { DARABONBA_PTR_GET_DEFAULT(pairFlowId_, "") };
    inline AddMediaConnectFlowOutputRequest& setPairFlowId(string pairFlowId) { DARABONBA_PTR_SET_VALUE(pairFlowId_, pairFlowId) };


    // pairInputName Field Functions 
    bool hasPairInputName() const { return this->pairInputName_ != nullptr;};
    void deletePairInputName() { this->pairInputName_ = nullptr;};
    inline string pairInputName() const { DARABONBA_PTR_GET_DEFAULT(pairInputName_, "") };
    inline AddMediaConnectFlowOutputRequest& setPairInputName(string pairInputName) { DARABONBA_PTR_SET_VALUE(pairInputName_, pairInputName) };


    // playerLimit Field Functions 
    bool hasPlayerLimit() const { return this->playerLimit_ != nullptr;};
    void deletePlayerLimit() { this->playerLimit_ = nullptr;};
    inline int32_t playerLimit() const { DARABONBA_PTR_GET_DEFAULT(playerLimit_, 0) };
    inline AddMediaConnectFlowOutputRequest& setPlayerLimit(int32_t playerLimit) { DARABONBA_PTR_SET_VALUE(playerLimit_, playerLimit) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline int32_t srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
    inline AddMediaConnectFlowOutputRequest& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline AddMediaConnectFlowOutputRequest& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbkeyLen Field Functions 
    bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
    void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
    inline string srtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, "") };
    inline AddMediaConnectFlowOutputRequest& setSrtPbkeyLen(string srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


  protected:
    // The IP address whitelist in CIDR format. Separate multiple CIDR blocks with commas (,).
    std::shared_ptr<string> cidrs_ = nullptr;
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
    // The output name.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputName_ = nullptr;
    // The output type.
    // 
    // Valid values:
    // 
    // *   RTMP-PUSH
    // *   SRT-Caller
    // *   RTMP-PULL
    // *   SRT-Listener
    // *   Flow
    // 
    // This parameter is required.
    std::shared_ptr<string> outputProtocol_ = nullptr;
    // The output URL. This parameter is required when OutputProtocol is set to RTMP-PUSH or SRT-Caller.
    std::shared_ptr<string> outputToUrl_ = nullptr;
    // The ID of the destination flow. This parameter is required when OutputProtocol is set to Flow.
    std::shared_ptr<string> pairFlowId_ = nullptr;
    // The source name of the destination flow. This parameter is required when OutputProtocol is set to Flow.
    std::shared_ptr<string> pairInputName_ = nullptr;
    // The maximum number of viewers.
    std::shared_ptr<int32_t> playerLimit_ = nullptr;
    // The latency for the SRT stream. This parameter is required when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<int32_t> srtLatency_ = nullptr;
    // The SRT key. This parameter is required when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPassphrase_ = nullptr;
    // The encryption key length. This parameter is required when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPbkeyLen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
