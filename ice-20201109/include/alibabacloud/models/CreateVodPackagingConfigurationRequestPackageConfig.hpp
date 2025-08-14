// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVodPackagingConfigurationRequestPackageConfigDrmProvider.hpp>
#include <alibabacloud/models/CreateVodPackagingConfigurationRequestPackageConfigStreamSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingConfigurationRequestPackageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationRequestPackageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DrmProvider, drmProvider_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_TO_JSON(StreamSelection, streamSelection_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationRequestPackageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DrmProvider, drmProvider_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_FROM_JSON(StreamSelection, streamSelection_);
    };
    CreateVodPackagingConfigurationRequestPackageConfig() = default ;
    CreateVodPackagingConfigurationRequestPackageConfig(const CreateVodPackagingConfigurationRequestPackageConfig &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfig(CreateVodPackagingConfigurationRequestPackageConfig &&) = default ;
    CreateVodPackagingConfigurationRequestPackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationRequestPackageConfig() = default ;
    CreateVodPackagingConfigurationRequestPackageConfig& operator=(const CreateVodPackagingConfigurationRequestPackageConfig &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfig& operator=(CreateVodPackagingConfigurationRequestPackageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drmProvider_ != nullptr
        && this->manifestName_ != nullptr && this->segmentDuration_ != nullptr && this->streamSelection_ != nullptr; };
    // drmProvider Field Functions 
    bool hasDrmProvider() const { return this->drmProvider_ != nullptr;};
    void deleteDrmProvider() { this->drmProvider_ = nullptr;};
    inline const Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider & drmProvider() const { DARABONBA_PTR_GET_CONST(drmProvider_, Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider) };
    inline Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider drmProvider() { DARABONBA_PTR_GET(drmProvider_, Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider) };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setDrmProvider(const Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider & drmProvider) { DARABONBA_PTR_SET_VALUE(drmProvider_, drmProvider) };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setDrmProvider(Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider && drmProvider) { DARABONBA_PTR_SET_RVALUE(drmProvider_, drmProvider) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int64_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0L) };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setSegmentDuration(int64_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // streamSelection Field Functions 
    bool hasStreamSelection() const { return this->streamSelection_ != nullptr;};
    void deleteStreamSelection() { this->streamSelection_ = nullptr;};
    inline const Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection & streamSelection() const { DARABONBA_PTR_GET_CONST(streamSelection_, Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection) };
    inline Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection streamSelection() { DARABONBA_PTR_GET(streamSelection_, Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection) };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setStreamSelection(const Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection & streamSelection) { DARABONBA_PTR_SET_VALUE(streamSelection_, streamSelection) };
    inline CreateVodPackagingConfigurationRequestPackageConfig& setStreamSelection(Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection && streamSelection) { DARABONBA_PTR_SET_RVALUE(streamSelection_, streamSelection) };


  protected:
    // The settings of digital rights management (DRM) encryption.
    std::shared_ptr<Models::CreateVodPackagingConfigurationRequestPackageConfigDrmProvider> drmProvider_ = nullptr;
    // The manifest name. The name can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> manifestName_ = nullptr;
    // The duration of each segment in a packaged stream. Unit: seconds. MediaPackage rounds segments to the nearest multiple of the input segment duration. Valid values: 1 to 30.
    std::shared_ptr<int64_t> segmentDuration_ = nullptr;
    // The settings of stream selection.
    std::shared_ptr<Models::CreateVodPackagingConfigurationRequestPackageConfigStreamSelection> streamSelection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
