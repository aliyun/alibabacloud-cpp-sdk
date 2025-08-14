// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingConfigDrmProvider.hpp>
#include <alibabacloud/models/VodPackagingConfigStreamSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class VodPackagingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VodPackagingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DrmProvider, drmProvider_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_TO_JSON(StreamSelection, streamSelection_);
    };
    friend void from_json(const Darabonba::Json& j, VodPackagingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DrmProvider, drmProvider_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_FROM_JSON(StreamSelection, streamSelection_);
    };
    VodPackagingConfig() = default ;
    VodPackagingConfig(const VodPackagingConfig &) = default ;
    VodPackagingConfig(VodPackagingConfig &&) = default ;
    VodPackagingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VodPackagingConfig() = default ;
    VodPackagingConfig& operator=(const VodPackagingConfig &) = default ;
    VodPackagingConfig& operator=(VodPackagingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drmProvider_ != nullptr
        && this->manifestName_ != nullptr && this->segmentDuration_ != nullptr && this->streamSelection_ != nullptr; };
    // drmProvider Field Functions 
    bool hasDrmProvider() const { return this->drmProvider_ != nullptr;};
    void deleteDrmProvider() { this->drmProvider_ = nullptr;};
    inline const VodPackagingConfigDrmProvider & drmProvider() const { DARABONBA_PTR_GET_CONST(drmProvider_, VodPackagingConfigDrmProvider) };
    inline VodPackagingConfigDrmProvider drmProvider() { DARABONBA_PTR_GET(drmProvider_, VodPackagingConfigDrmProvider) };
    inline VodPackagingConfig& setDrmProvider(const VodPackagingConfigDrmProvider & drmProvider) { DARABONBA_PTR_SET_VALUE(drmProvider_, drmProvider) };
    inline VodPackagingConfig& setDrmProvider(VodPackagingConfigDrmProvider && drmProvider) { DARABONBA_PTR_SET_RVALUE(drmProvider_, drmProvider) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline VodPackagingConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int64_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0L) };
    inline VodPackagingConfig& setSegmentDuration(int64_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // streamSelection Field Functions 
    bool hasStreamSelection() const { return this->streamSelection_ != nullptr;};
    void deleteStreamSelection() { this->streamSelection_ = nullptr;};
    inline const VodPackagingConfigStreamSelection & streamSelection() const { DARABONBA_PTR_GET_CONST(streamSelection_, VodPackagingConfigStreamSelection) };
    inline VodPackagingConfigStreamSelection streamSelection() { DARABONBA_PTR_GET(streamSelection_, VodPackagingConfigStreamSelection) };
    inline VodPackagingConfig& setStreamSelection(const VodPackagingConfigStreamSelection & streamSelection) { DARABONBA_PTR_SET_VALUE(streamSelection_, streamSelection) };
    inline VodPackagingConfig& setStreamSelection(VodPackagingConfigStreamSelection && streamSelection) { DARABONBA_PTR_SET_RVALUE(streamSelection_, streamSelection) };


  protected:
    std::shared_ptr<VodPackagingConfigDrmProvider> drmProvider_ = nullptr;
    std::shared_ptr<string> manifestName_ = nullptr;
    std::shared_ptr<int64_t> segmentDuration_ = nullptr;
    std::shared_ptr<VodPackagingConfigStreamSelection> streamSelection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
