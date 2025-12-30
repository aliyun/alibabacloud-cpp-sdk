// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    UpdateMediaLiveInputRequest() = default ;
    UpdateMediaLiveInputRequest(const UpdateMediaLiveInputRequest &) = default ;
    UpdateMediaLiveInputRequest(UpdateMediaLiveInputRequest &&) = default ;
    UpdateMediaLiveInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputRequest() = default ;
    UpdateMediaLiveInputRequest& operator=(const UpdateMediaLiveInputRequest &) = default ;
    UpdateMediaLiveInputRequest& operator=(UpdateMediaLiveInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InputSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputSettings& obj) { 
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowOutputName, flowOutputName_);
        DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
        DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
        DARABONBA_PTR_TO_JSON(SrtMaxBitrate, srtMaxBitrate_);
        DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
        DARABONBA_PTR_TO_JSON(SrtPbKeyLen, srtPbKeyLen_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      };
      friend void from_json(const Darabonba::Json& j, InputSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowOutputName, flowOutputName_);
        DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
        DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
        DARABONBA_PTR_FROM_JSON(SrtMaxBitrate, srtMaxBitrate_);
        DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
        DARABONBA_PTR_FROM_JSON(SrtPbKeyLen, srtPbKeyLen_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      };
      InputSettings() = default ;
      InputSettings(const InputSettings &) = default ;
      InputSettings(InputSettings &&) = default ;
      InputSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputSettings() = default ;
      InputSettings& operator=(const InputSettings &) = default ;
      InputSettings& operator=(InputSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowId_ == nullptr
        && this->flowOutputName_ == nullptr && this->sourceUrl_ == nullptr && this->srtLatency_ == nullptr && this->srtMaxBitrate_ == nullptr && this->srtPassphrase_ == nullptr
        && this->srtPbKeyLen_ == nullptr && this->streamName_ == nullptr; };
      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline InputSettings& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowOutputName Field Functions 
      bool hasFlowOutputName() const { return this->flowOutputName_ != nullptr;};
      void deleteFlowOutputName() { this->flowOutputName_ = nullptr;};
      inline string getFlowOutputName() const { DARABONBA_PTR_GET_DEFAULT(flowOutputName_, "") };
      inline InputSettings& setFlowOutputName(string flowOutputName) { DARABONBA_PTR_SET_VALUE(flowOutputName_, flowOutputName) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline InputSettings& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // srtLatency Field Functions 
      bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
      void deleteSrtLatency() { this->srtLatency_ = nullptr;};
      inline int32_t getSrtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
      inline InputSettings& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


      // srtMaxBitrate Field Functions 
      bool hasSrtMaxBitrate() const { return this->srtMaxBitrate_ != nullptr;};
      void deleteSrtMaxBitrate() { this->srtMaxBitrate_ = nullptr;};
      inline int32_t getSrtMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(srtMaxBitrate_, 0) };
      inline InputSettings& setSrtMaxBitrate(int32_t srtMaxBitrate) { DARABONBA_PTR_SET_VALUE(srtMaxBitrate_, srtMaxBitrate) };


      // srtPassphrase Field Functions 
      bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
      void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
      inline string getSrtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
      inline InputSettings& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


      // srtPbKeyLen Field Functions 
      bool hasSrtPbKeyLen() const { return this->srtPbKeyLen_ != nullptr;};
      void deleteSrtPbKeyLen() { this->srtPbKeyLen_ = nullptr;};
      inline int32_t getSrtPbKeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbKeyLen_, 0) };
      inline InputSettings& setSrtPbKeyLen(int32_t srtPbKeyLen) { DARABONBA_PTR_SET_VALUE(srtPbKeyLen_, srtPbKeyLen) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline InputSettings& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    protected:
      // The ID of the flow from MediaConnect. This parameter is required when Type is set to MEDIA_CONNECT.
      shared_ptr<string> flowId_ {};
      // The output name of the MediaConnect flow. This parameter is required when Type is set to MEDIA_CONNECT.
      shared_ptr<string> flowOutputName_ {};
      // The source URL from which the stream is pulled. This parameter is required for PULL inputs.
      shared_ptr<string> sourceUrl_ {};
      shared_ptr<int32_t> srtLatency_ {};
      shared_ptr<int32_t> srtMaxBitrate_ {};
      shared_ptr<string> srtPassphrase_ {};
      shared_ptr<int32_t> srtPbKeyLen_ {};
      // The name of the pushed stream. This parameter is required for PUSH inputs. It can be up to 255 characters in length.
      shared_ptr<string> streamName_ {};
    };

    virtual bool empty() const override { return this->inputId_ == nullptr
        && this->inputSettings_ == nullptr && this->name_ == nullptr && this->securityGroupIds_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline UpdateMediaLiveInputRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputSettings Field Functions 
    bool hasInputSettings() const { return this->inputSettings_ != nullptr;};
    void deleteInputSettings() { this->inputSettings_ = nullptr;};
    inline const vector<UpdateMediaLiveInputRequest::InputSettings> & getInputSettings() const { DARABONBA_PTR_GET_CONST(inputSettings_, vector<UpdateMediaLiveInputRequest::InputSettings>) };
    inline vector<UpdateMediaLiveInputRequest::InputSettings> getInputSettings() { DARABONBA_PTR_GET(inputSettings_, vector<UpdateMediaLiveInputRequest::InputSettings>) };
    inline UpdateMediaLiveInputRequest& setInputSettings(const vector<UpdateMediaLiveInputRequest::InputSettings> & inputSettings) { DARABONBA_PTR_SET_VALUE(inputSettings_, inputSettings) };
    inline UpdateMediaLiveInputRequest& setInputSettings(vector<UpdateMediaLiveInputRequest::InputSettings> && inputSettings) { DARABONBA_PTR_SET_RVALUE(inputSettings_, inputSettings) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveInputRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline UpdateMediaLiveInputRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline UpdateMediaLiveInputRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // The ID of the input.
    // 
    // This parameter is required.
    shared_ptr<string> inputId_ {};
    // The input settings. An input can have up to two sources: primary and backup sources.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateMediaLiveInputRequest::InputSettings>> inputSettings_ {};
    // The name of the input. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The IDs of the security groups to be associated with the input. This parameter is required for PUSH inputs.
    shared_ptr<vector<string>> securityGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
