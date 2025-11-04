// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LivePackagingConfigDrmConfig.hpp>
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
    virtual bool empty() const override { return this->drmConfig_ == nullptr
        && return this->liveManifestConfigs_ == nullptr && return this->segmentDuration_ == nullptr && return this->useAudioRenditionGroups_ == nullptr; };
    // drmConfig Field Functions 
    bool hasDrmConfig() const { return this->drmConfig_ != nullptr;};
    void deleteDrmConfig() { this->drmConfig_ = nullptr;};
    inline const LivePackagingConfigDrmConfig & drmConfig() const { DARABONBA_PTR_GET_CONST(drmConfig_, LivePackagingConfigDrmConfig) };
    inline LivePackagingConfigDrmConfig drmConfig() { DARABONBA_PTR_GET(drmConfig_, LivePackagingConfigDrmConfig) };
    inline LivePackagingConfig& setDrmConfig(const LivePackagingConfigDrmConfig & drmConfig) { DARABONBA_PTR_SET_VALUE(drmConfig_, drmConfig) };
    inline LivePackagingConfig& setDrmConfig(LivePackagingConfigDrmConfig && drmConfig) { DARABONBA_PTR_SET_RVALUE(drmConfig_, drmConfig) };


    // liveManifestConfigs Field Functions 
    bool hasLiveManifestConfigs() const { return this->liveManifestConfigs_ != nullptr;};
    void deleteLiveManifestConfigs() { this->liveManifestConfigs_ = nullptr;};
    inline const vector<LiveManifestConfig> & liveManifestConfigs() const { DARABONBA_PTR_GET_CONST(liveManifestConfigs_, vector<LiveManifestConfig>) };
    inline vector<LiveManifestConfig> liveManifestConfigs() { DARABONBA_PTR_GET(liveManifestConfigs_, vector<LiveManifestConfig>) };
    inline LivePackagingConfig& setLiveManifestConfigs(const vector<LiveManifestConfig> & liveManifestConfigs) { DARABONBA_PTR_SET_VALUE(liveManifestConfigs_, liveManifestConfigs) };
    inline LivePackagingConfig& setLiveManifestConfigs(vector<LiveManifestConfig> && liveManifestConfigs) { DARABONBA_PTR_SET_RVALUE(liveManifestConfigs_, liveManifestConfigs) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline LivePackagingConfig& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // useAudioRenditionGroups Field Functions 
    bool hasUseAudioRenditionGroups() const { return this->useAudioRenditionGroups_ != nullptr;};
    void deleteUseAudioRenditionGroups() { this->useAudioRenditionGroups_ = nullptr;};
    inline bool useAudioRenditionGroups() const { DARABONBA_PTR_GET_DEFAULT(useAudioRenditionGroups_, false) };
    inline LivePackagingConfig& setUseAudioRenditionGroups(bool useAudioRenditionGroups) { DARABONBA_PTR_SET_VALUE(useAudioRenditionGroups_, useAudioRenditionGroups) };


  protected:
    std::shared_ptr<LivePackagingConfigDrmConfig> drmConfig_ = nullptr;
    std::shared_ptr<vector<LiveManifestConfig>> liveManifestConfigs_ = nullptr;
    std::shared_ptr<int32_t> segmentDuration_ = nullptr;
    std::shared_ptr<bool> useAudioRenditionGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
