// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class BridgeWebCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    BridgeWebCallRequest() = default ;
    BridgeWebCallRequest(const BridgeWebCallRequest &) = default ;
    BridgeWebCallRequest(BridgeWebCallRequest &&) = default ;
    BridgeWebCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BridgeWebCallRequest() = default ;
    BridgeWebCallRequest& operator=(const BridgeWebCallRequest &) = default ;
    BridgeWebCallRequest& operator=(BridgeWebCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->caller_ == nullptr && this->deviceId_ == nullptr && this->draftVersion_ == nullptr && this->instanceId_ == nullptr
        && this->sampleRate_ == nullptr && this->scriptId_ == nullptr && this->tags_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline BridgeWebCallRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline BridgeWebCallRequest& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline BridgeWebCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BridgeWebCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline BridgeWebCallRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BridgeWebCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline BridgeWebCallRequest& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BridgeWebCallRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BridgeWebCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BridgeWebCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    shared_ptr<string> accessChannelId_ {};
    shared_ptr<string> accessChannelType_ {};
    shared_ptr<string> caller_ {};
    shared_ptr<string> deviceId_ {};
    shared_ptr<bool> draftVersion_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> sampleRate_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> tags_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
