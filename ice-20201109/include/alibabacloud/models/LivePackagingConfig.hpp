// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LiveManifestConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class LivePackagingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LivePackagingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DrmConfig, drmConfig_);
      DARABONBA_PTR_TO_JSON(LiveManifestConfigs, liveManifestConfigs_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_TO_JSON(UseAudioRenditionGroups, useAudioRenditionGroups_);
    };
    friend void from_json(const Darabonba::Json& j, LivePackagingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DrmConfig, drmConfig_);
      DARABONBA_PTR_FROM_JSON(LiveManifestConfigs, liveManifestConfigs_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_FROM_JSON(UseAudioRenditionGroups, useAudioRenditionGroups_);
    };
    LivePackagingConfig() = default ;
    LivePackagingConfig(const LivePackagingConfig &) = default ;
    LivePackagingConfig(LivePackagingConfig &&) = default ;
    LivePackagingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LivePackagingConfig() = default ;
    LivePackagingConfig& operator=(const LivePackagingConfig &) = default ;
    LivePackagingConfig& operator=(LivePackagingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DrmConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DrmConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ContentId, contentId_);
        DARABONBA_PTR_TO_JSON(EncryptionMethod, encryptionMethod_);
        DARABONBA_PTR_TO_JSON(IV, IV_);
        DARABONBA_PTR_TO_JSON(RotatePeriod, rotatePeriod_);
        DARABONBA_PTR_TO_JSON(SystemIds, systemIds_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, DrmConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
        DARABONBA_PTR_FROM_JSON(EncryptionMethod, encryptionMethod_);
        DARABONBA_PTR_FROM_JSON(IV, IV_);
        DARABONBA_PTR_FROM_JSON(RotatePeriod, rotatePeriod_);
        DARABONBA_PTR_FROM_JSON(SystemIds, systemIds_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      DrmConfig() = default ;
      DrmConfig(const DrmConfig &) = default ;
      DrmConfig(DrmConfig &&) = default ;
      DrmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DrmConfig() = default ;
      DrmConfig& operator=(const DrmConfig &) = default ;
      DrmConfig& operator=(DrmConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentId_ == nullptr
        && this->encryptionMethod_ == nullptr && this->IV_ == nullptr && this->rotatePeriod_ == nullptr && this->systemIds_ == nullptr && this->url_ == nullptr; };
      // contentId Field Functions 
      bool hasContentId() const { return this->contentId_ != nullptr;};
      void deleteContentId() { this->contentId_ = nullptr;};
      inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
      inline DrmConfig& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


      // encryptionMethod Field Functions 
      bool hasEncryptionMethod() const { return this->encryptionMethod_ != nullptr;};
      void deleteEncryptionMethod() { this->encryptionMethod_ = nullptr;};
      inline string getEncryptionMethod() const { DARABONBA_PTR_GET_DEFAULT(encryptionMethod_, "") };
      inline DrmConfig& setEncryptionMethod(string encryptionMethod) { DARABONBA_PTR_SET_VALUE(encryptionMethod_, encryptionMethod) };


      // IV Field Functions 
      bool hasIV() const { return this->IV_ != nullptr;};
      void deleteIV() { this->IV_ = nullptr;};
      inline string getIV() const { DARABONBA_PTR_GET_DEFAULT(IV_, "") };
      inline DrmConfig& setIV(string IV) { DARABONBA_PTR_SET_VALUE(IV_, IV) };


      // rotatePeriod Field Functions 
      bool hasRotatePeriod() const { return this->rotatePeriod_ != nullptr;};
      void deleteRotatePeriod() { this->rotatePeriod_ = nullptr;};
      inline int32_t getRotatePeriod() const { DARABONBA_PTR_GET_DEFAULT(rotatePeriod_, 0) };
      inline DrmConfig& setRotatePeriod(int32_t rotatePeriod) { DARABONBA_PTR_SET_VALUE(rotatePeriod_, rotatePeriod) };


      // systemIds Field Functions 
      bool hasSystemIds() const { return this->systemIds_ != nullptr;};
      void deleteSystemIds() { this->systemIds_ = nullptr;};
      inline const vector<string> & getSystemIds() const { DARABONBA_PTR_GET_CONST(systemIds_, vector<string>) };
      inline vector<string> getSystemIds() { DARABONBA_PTR_GET(systemIds_, vector<string>) };
      inline DrmConfig& setSystemIds(const vector<string> & systemIds) { DARABONBA_PTR_SET_VALUE(systemIds_, systemIds) };
      inline DrmConfig& setSystemIds(vector<string> && systemIds) { DARABONBA_PTR_SET_RVALUE(systemIds_, systemIds) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline DrmConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> contentId_ {};
      shared_ptr<string> encryptionMethod_ {};
      shared_ptr<string> IV_ {};
      shared_ptr<int32_t> rotatePeriod_ {};
      shared_ptr<vector<string>> systemIds_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->drmConfig_ == nullptr
        && this->liveManifestConfigs_ == nullptr && this->segmentDuration_ == nullptr && this->useAudioRenditionGroups_ == nullptr; };
    // drmConfig Field Functions 
    bool hasDrmConfig() const { return this->drmConfig_ != nullptr;};
    void deleteDrmConfig() { this->drmConfig_ = nullptr;};
    inline const LivePackagingConfig::DrmConfig & getDrmConfig() const { DARABONBA_PTR_GET_CONST(drmConfig_, LivePackagingConfig::DrmConfig) };
    inline LivePackagingConfig::DrmConfig getDrmConfig() { DARABONBA_PTR_GET(drmConfig_, LivePackagingConfig::DrmConfig) };
    inline LivePackagingConfig& setDrmConfig(const LivePackagingConfig::DrmConfig & drmConfig) { DARABONBA_PTR_SET_VALUE(drmConfig_, drmConfig) };
    inline LivePackagingConfig& setDrmConfig(LivePackagingConfig::DrmConfig && drmConfig) { DARABONBA_PTR_SET_RVALUE(drmConfig_, drmConfig) };


    // liveManifestConfigs Field Functions 
    bool hasLiveManifestConfigs() const { return this->liveManifestConfigs_ != nullptr;};
    void deleteLiveManifestConfigs() { this->liveManifestConfigs_ = nullptr;};
    inline const vector<LiveManifestConfig> & getLiveManifestConfigs() const { DARABONBA_PTR_GET_CONST(liveManifestConfigs_, vector<LiveManifestConfig>) };
    inline vector<LiveManifestConfig> getLiveManifestConfigs() { DARABONBA_PTR_GET(liveManifestConfigs_, vector<LiveManifestConfig>) };
    inline LivePackagingConfig& setLiveManifestConfigs(const vector<LiveManifestConfig> & liveManifestConfigs) { DARABONBA_PTR_SET_VALUE(liveManifestConfigs_, liveManifestConfigs) };
    inline LivePackagingConfig& setLiveManifestConfigs(vector<LiveManifestConfig> && liveManifestConfigs) { DARABONBA_PTR_SET_RVALUE(liveManifestConfigs_, liveManifestConfigs) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline LivePackagingConfig& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // useAudioRenditionGroups Field Functions 
    bool hasUseAudioRenditionGroups() const { return this->useAudioRenditionGroups_ != nullptr;};
    void deleteUseAudioRenditionGroups() { this->useAudioRenditionGroups_ = nullptr;};
    inline bool getUseAudioRenditionGroups() const { DARABONBA_PTR_GET_DEFAULT(useAudioRenditionGroups_, false) };
    inline LivePackagingConfig& setUseAudioRenditionGroups(bool useAudioRenditionGroups) { DARABONBA_PTR_SET_VALUE(useAudioRenditionGroups_, useAudioRenditionGroups) };


  protected:
    shared_ptr<LivePackagingConfig::DrmConfig> drmConfig_ {};
    shared_ptr<vector<LiveManifestConfig>> liveManifestConfigs_ {};
    shared_ptr<int32_t> segmentDuration_ {};
    shared_ptr<bool> useAudioRenditionGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
