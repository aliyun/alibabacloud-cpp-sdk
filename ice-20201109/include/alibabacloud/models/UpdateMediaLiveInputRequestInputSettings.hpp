// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUESTINPUTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUESTINPUTSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputRequestInputSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputRequestInputSettings& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowOutputName, flowOutputName_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_TO_JSON(SrtMaxBitrate, srtMaxBitrate_);
      DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_TO_JSON(SrtPbKeyLen, srtPbKeyLen_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputRequestInputSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowOutputName, flowOutputName_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_FROM_JSON(SrtMaxBitrate, srtMaxBitrate_);
      DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_FROM_JSON(SrtPbKeyLen, srtPbKeyLen_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    UpdateMediaLiveInputRequestInputSettings() = default ;
    UpdateMediaLiveInputRequestInputSettings(const UpdateMediaLiveInputRequestInputSettings &) = default ;
    UpdateMediaLiveInputRequestInputSettings(UpdateMediaLiveInputRequestInputSettings &&) = default ;
    UpdateMediaLiveInputRequestInputSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputRequestInputSettings() = default ;
    UpdateMediaLiveInputRequestInputSettings& operator=(const UpdateMediaLiveInputRequestInputSettings &) = default ;
    UpdateMediaLiveInputRequestInputSettings& operator=(UpdateMediaLiveInputRequestInputSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowId_ != nullptr
        && this->flowOutputName_ != nullptr && this->sourceUrl_ != nullptr && this->srtLatency_ != nullptr && this->srtMaxBitrate_ != nullptr && this->srtPassphrase_ != nullptr
        && this->srtPbKeyLen_ != nullptr && this->streamName_ != nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline UpdateMediaLiveInputRequestInputSettings& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowOutputName Field Functions 
    bool hasFlowOutputName() const { return this->flowOutputName_ != nullptr;};
    void deleteFlowOutputName() { this->flowOutputName_ = nullptr;};
    inline string flowOutputName() const { DARABONBA_PTR_GET_DEFAULT(flowOutputName_, "") };
    inline UpdateMediaLiveInputRequestInputSettings& setFlowOutputName(string flowOutputName) { DARABONBA_PTR_SET_VALUE(flowOutputName_, flowOutputName) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline UpdateMediaLiveInputRequestInputSettings& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline int32_t srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
    inline UpdateMediaLiveInputRequestInputSettings& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtMaxBitrate Field Functions 
    bool hasSrtMaxBitrate() const { return this->srtMaxBitrate_ != nullptr;};
    void deleteSrtMaxBitrate() { this->srtMaxBitrate_ = nullptr;};
    inline int32_t srtMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(srtMaxBitrate_, 0) };
    inline UpdateMediaLiveInputRequestInputSettings& setSrtMaxBitrate(int32_t srtMaxBitrate) { DARABONBA_PTR_SET_VALUE(srtMaxBitrate_, srtMaxBitrate) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline UpdateMediaLiveInputRequestInputSettings& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbKeyLen Field Functions 
    bool hasSrtPbKeyLen() const { return this->srtPbKeyLen_ != nullptr;};
    void deleteSrtPbKeyLen() { this->srtPbKeyLen_ = nullptr;};
    inline int32_t srtPbKeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbKeyLen_, 0) };
    inline UpdateMediaLiveInputRequestInputSettings& setSrtPbKeyLen(int32_t srtPbKeyLen) { DARABONBA_PTR_SET_VALUE(srtPbKeyLen_, srtPbKeyLen) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline UpdateMediaLiveInputRequestInputSettings& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The ID of the flow from MediaConnect. This parameter is required when Type is set to MEDIA_CONNECT.
    std::shared_ptr<string> flowId_ = nullptr;
    // The output name of the MediaConnect flow. This parameter is required when Type is set to MEDIA_CONNECT.
    std::shared_ptr<string> flowOutputName_ = nullptr;
    // The source URL from which the stream is pulled. This parameter is required for PULL inputs.
    std::shared_ptr<string> sourceUrl_ = nullptr;
    std::shared_ptr<int32_t> srtLatency_ = nullptr;
    std::shared_ptr<int32_t> srtMaxBitrate_ = nullptr;
    std::shared_ptr<string> srtPassphrase_ = nullptr;
    std::shared_ptr<int32_t> srtPbKeyLen_ = nullptr;
    // The name of the pushed stream. This parameter is required for PUSH inputs. It can be up to 255 characters in length.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
