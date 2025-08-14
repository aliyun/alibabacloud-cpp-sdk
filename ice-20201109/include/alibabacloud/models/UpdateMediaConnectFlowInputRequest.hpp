// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaConnectFlowInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(InputFromUrl, inputFromUrl_);
      DARABONBA_PTR_TO_JSON(InputName, inputName_);
      DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_TO_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(InputFromUrl, inputFromUrl_);
      DARABONBA_PTR_FROM_JSON(InputName, inputName_);
      DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_FROM_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    UpdateMediaConnectFlowInputRequest() = default ;
    UpdateMediaConnectFlowInputRequest(const UpdateMediaConnectFlowInputRequest &) = default ;
    UpdateMediaConnectFlowInputRequest(UpdateMediaConnectFlowInputRequest &&) = default ;
    UpdateMediaConnectFlowInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaConnectFlowInputRequest() = default ;
    UpdateMediaConnectFlowInputRequest& operator=(const UpdateMediaConnectFlowInputRequest &) = default ;
    UpdateMediaConnectFlowInputRequest& operator=(UpdateMediaConnectFlowInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrs_ != nullptr
        && this->flowId_ != nullptr && this->inputFromUrl_ != nullptr && this->inputName_ != nullptr && this->maxBitrate_ != nullptr && this->srtLatency_ != nullptr
        && this->srtPassphrase_ != nullptr && this->srtPbkeyLen_ != nullptr; };
    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline string cidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
    inline UpdateMediaConnectFlowInputRequest& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline UpdateMediaConnectFlowInputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // inputFromUrl Field Functions 
    bool hasInputFromUrl() const { return this->inputFromUrl_ != nullptr;};
    void deleteInputFromUrl() { this->inputFromUrl_ = nullptr;};
    inline string inputFromUrl() const { DARABONBA_PTR_GET_DEFAULT(inputFromUrl_, "") };
    inline UpdateMediaConnectFlowInputRequest& setInputFromUrl(string inputFromUrl) { DARABONBA_PTR_SET_VALUE(inputFromUrl_, inputFromUrl) };


    // inputName Field Functions 
    bool hasInputName() const { return this->inputName_ != nullptr;};
    void deleteInputName() { this->inputName_ = nullptr;};
    inline string inputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
    inline UpdateMediaConnectFlowInputRequest& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


    // maxBitrate Field Functions 
    bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
    void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
    inline int32_t maxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
    inline UpdateMediaConnectFlowInputRequest& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline int32_t srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
    inline UpdateMediaConnectFlowInputRequest& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline UpdateMediaConnectFlowInputRequest& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbkeyLen Field Functions 
    bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
    void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
    inline int32_t srtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, 0) };
    inline UpdateMediaConnectFlowInputRequest& setSrtPbkeyLen(int32_t srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


  protected:
    // The IP address whitelist.
    std::shared_ptr<string> cidrs_ = nullptr;
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
    // The source URL. You can modify this parameter only when the source type is RTMP-PULL or SRT-Listener.
    std::shared_ptr<string> inputFromUrl_ = nullptr;
    std::shared_ptr<string> inputName_ = nullptr;
    // The maximum bitrate. Unit: bit/s.
    std::shared_ptr<int32_t> maxBitrate_ = nullptr;
    // The latency for the SRT stream. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<int32_t> srtLatency_ = nullptr;
    // The SRT key. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPassphrase_ = nullptr;
    // The encryption key length. You can modify this parameter only when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<int32_t> srtPbkeyLen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
