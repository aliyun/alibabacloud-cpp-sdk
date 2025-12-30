// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUEST_HPP_
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
  class CreateVodPackagingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    CreateVodPackagingConfigurationRequest() = default ;
    CreateVodPackagingConfigurationRequest(const CreateVodPackagingConfigurationRequest &) = default ;
    CreateVodPackagingConfigurationRequest(CreateVodPackagingConfigurationRequest &&) = default ;
    CreateVodPackagingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationRequest() = default ;
    CreateVodPackagingConfigurationRequest& operator=(const CreateVodPackagingConfigurationRequest &) = default ;
    CreateVodPackagingConfigurationRequest& operator=(CreateVodPackagingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DrmProvider, drmProvider_);
        DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
        DARABONBA_PTR_TO_JSON(StreamSelection, streamSelection_);
      };
      friend void from_json(const Darabonba::Json& j, PackageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DrmProvider, drmProvider_);
        DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
        DARABONBA_PTR_FROM_JSON(StreamSelection, streamSelection_);
      };
      PackageConfig() = default ;
      PackageConfig(const PackageConfig &) = default ;
      PackageConfig(PackageConfig &&) = default ;
      PackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageConfig() = default ;
      PackageConfig& operator=(const PackageConfig &) = default ;
      PackageConfig& operator=(PackageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamSelection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamSelection& obj) { 
          DARABONBA_PTR_TO_JSON(MaxVideoBitsPerSecond, maxVideoBitsPerSecond_);
          DARABONBA_PTR_TO_JSON(MinVideoBitsPerSecond, minVideoBitsPerSecond_);
          DARABONBA_PTR_TO_JSON(StreamOrder, streamOrder_);
        };
        friend void from_json(const Darabonba::Json& j, StreamSelection& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxVideoBitsPerSecond, maxVideoBitsPerSecond_);
          DARABONBA_PTR_FROM_JSON(MinVideoBitsPerSecond, minVideoBitsPerSecond_);
          DARABONBA_PTR_FROM_JSON(StreamOrder, streamOrder_);
        };
        StreamSelection() = default ;
        StreamSelection(const StreamSelection &) = default ;
        StreamSelection(StreamSelection &&) = default ;
        StreamSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamSelection() = default ;
        StreamSelection& operator=(const StreamSelection &) = default ;
        StreamSelection& operator=(StreamSelection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxVideoBitsPerSecond_ == nullptr
        && this->minVideoBitsPerSecond_ == nullptr && this->streamOrder_ == nullptr; };
        // maxVideoBitsPerSecond Field Functions 
        bool hasMaxVideoBitsPerSecond() const { return this->maxVideoBitsPerSecond_ != nullptr;};
        void deleteMaxVideoBitsPerSecond() { this->maxVideoBitsPerSecond_ = nullptr;};
        inline int64_t getMaxVideoBitsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxVideoBitsPerSecond_, 0L) };
        inline StreamSelection& setMaxVideoBitsPerSecond(int64_t maxVideoBitsPerSecond) { DARABONBA_PTR_SET_VALUE(maxVideoBitsPerSecond_, maxVideoBitsPerSecond) };


        // minVideoBitsPerSecond Field Functions 
        bool hasMinVideoBitsPerSecond() const { return this->minVideoBitsPerSecond_ != nullptr;};
        void deleteMinVideoBitsPerSecond() { this->minVideoBitsPerSecond_ = nullptr;};
        inline int64_t getMinVideoBitsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(minVideoBitsPerSecond_, 0L) };
        inline StreamSelection& setMinVideoBitsPerSecond(int64_t minVideoBitsPerSecond) { DARABONBA_PTR_SET_VALUE(minVideoBitsPerSecond_, minVideoBitsPerSecond) };


        // streamOrder Field Functions 
        bool hasStreamOrder() const { return this->streamOrder_ != nullptr;};
        void deleteStreamOrder() { this->streamOrder_ = nullptr;};
        inline string getStreamOrder() const { DARABONBA_PTR_GET_DEFAULT(streamOrder_, "") };
        inline StreamSelection& setStreamOrder(string streamOrder) { DARABONBA_PTR_SET_VALUE(streamOrder_, streamOrder) };


      protected:
        // The maximum bitrate of the video stream. Unit: bit/s.
        shared_ptr<int64_t> maxVideoBitsPerSecond_ {};
        // The minimum bitrate of the video stream. Unit: bit/s.
        shared_ptr<int64_t> minVideoBitsPerSecond_ {};
        // The order of manifest files in the master playlist. Valid values:
        // 
        // *   ORIGINAL: sorts the manifest files in the same order as the source.
        // *   VIDEO_BITRATE_ASCENDING: sorts the manifest files in ascending order of bitrates, from lowest to highest.
        // *   VIDEO_BITRATE_DESCENDING: sorts the manifest files in descending order of bitrates, from highest to lowest.
        shared_ptr<string> streamOrder_ {};
      };

      class DrmProvider : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DrmProvider& obj) { 
          DARABONBA_PTR_TO_JSON(EncryptionMethod, encryptionMethod_);
          DARABONBA_PTR_TO_JSON(IV, IV_);
          DARABONBA_PTR_TO_JSON(SystemIds, systemIds_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, DrmProvider& obj) { 
          DARABONBA_PTR_FROM_JSON(EncryptionMethod, encryptionMethod_);
          DARABONBA_PTR_FROM_JSON(IV, IV_);
          DARABONBA_PTR_FROM_JSON(SystemIds, systemIds_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        DrmProvider() = default ;
        DrmProvider(const DrmProvider &) = default ;
        DrmProvider(DrmProvider &&) = default ;
        DrmProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DrmProvider() = default ;
        DrmProvider& operator=(const DrmProvider &) = default ;
        DrmProvider& operator=(DrmProvider &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encryptionMethod_ == nullptr
        && this->IV_ == nullptr && this->systemIds_ == nullptr && this->url_ == nullptr; };
        // encryptionMethod Field Functions 
        bool hasEncryptionMethod() const { return this->encryptionMethod_ != nullptr;};
        void deleteEncryptionMethod() { this->encryptionMethod_ = nullptr;};
        inline string getEncryptionMethod() const { DARABONBA_PTR_GET_DEFAULT(encryptionMethod_, "") };
        inline DrmProvider& setEncryptionMethod(string encryptionMethod) { DARABONBA_PTR_SET_VALUE(encryptionMethod_, encryptionMethod) };


        // IV Field Functions 
        bool hasIV() const { return this->IV_ != nullptr;};
        void deleteIV() { this->IV_ = nullptr;};
        inline string getIV() const { DARABONBA_PTR_GET_DEFAULT(IV_, "") };
        inline DrmProvider& setIV(string IV) { DARABONBA_PTR_SET_VALUE(IV_, IV) };


        // systemIds Field Functions 
        bool hasSystemIds() const { return this->systemIds_ != nullptr;};
        void deleteSystemIds() { this->systemIds_ = nullptr;};
        inline const vector<string> & getSystemIds() const { DARABONBA_PTR_GET_CONST(systemIds_, vector<string>) };
        inline vector<string> getSystemIds() { DARABONBA_PTR_GET(systemIds_, vector<string>) };
        inline DrmProvider& setSystemIds(const vector<string> & systemIds) { DARABONBA_PTR_SET_VALUE(systemIds_, systemIds) };
        inline DrmProvider& setSystemIds(vector<string> && systemIds) { DARABONBA_PTR_SET_RVALUE(systemIds_, systemIds) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline DrmProvider& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The encryption method. Valid values:
        // 
        // *   AES_128: Advanced Encryption Standard (AES) with 128-bit key length.
        // *   SAMPLE_AES: an encryption method that encrypts individual media samples.
        shared_ptr<string> encryptionMethod_ {};
        // A 128-bit, 16-byte hex value represented by a 32-character string that is used with the key for encrypting data blocks. If you leave this parameter empty, MediaPackage creates a constant initialization vector (IV). If it is specified, the value is passed to the DRM service.
        shared_ptr<string> IV_ {};
        // The ID of the DRM system. The maximum number of system IDs allowed is determined by the protocol type. Limits:
        // 
        // *   DASH: 2
        // *   HLS: 1
        // *   HLS_CMAF: 2
        // 
        // Apple FairPlay, Google Widevine, and Microsoft PlayReady are supported. Their system IDs are as follows:
        // 
        // *   Apple FairPlay: 94ce86fb-07ff-4f43-adb8-93d2fa968ca2
        // *   Google Widevine: edef8ba9-79d6-4ace-a3c8-27dcd51d21e
        // *   Microsoft PlayReady: 9a04f079-9840-4286-ab92-e65be0885f95
        shared_ptr<vector<string>> systemIds_ {};
        // The URL of the DRM key provider.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->drmProvider_ == nullptr
        && this->manifestName_ == nullptr && this->segmentDuration_ == nullptr && this->streamSelection_ == nullptr; };
      // drmProvider Field Functions 
      bool hasDrmProvider() const { return this->drmProvider_ != nullptr;};
      void deleteDrmProvider() { this->drmProvider_ = nullptr;};
      inline const PackageConfig::DrmProvider & getDrmProvider() const { DARABONBA_PTR_GET_CONST(drmProvider_, PackageConfig::DrmProvider) };
      inline PackageConfig::DrmProvider getDrmProvider() { DARABONBA_PTR_GET(drmProvider_, PackageConfig::DrmProvider) };
      inline PackageConfig& setDrmProvider(const PackageConfig::DrmProvider & drmProvider) { DARABONBA_PTR_SET_VALUE(drmProvider_, drmProvider) };
      inline PackageConfig& setDrmProvider(PackageConfig::DrmProvider && drmProvider) { DARABONBA_PTR_SET_RVALUE(drmProvider_, drmProvider) };


      // manifestName Field Functions 
      bool hasManifestName() const { return this->manifestName_ != nullptr;};
      void deleteManifestName() { this->manifestName_ = nullptr;};
      inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
      inline PackageConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


      // segmentDuration Field Functions 
      bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
      void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
      inline int64_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0L) };
      inline PackageConfig& setSegmentDuration(int64_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


      // streamSelection Field Functions 
      bool hasStreamSelection() const { return this->streamSelection_ != nullptr;};
      void deleteStreamSelection() { this->streamSelection_ = nullptr;};
      inline const PackageConfig::StreamSelection & getStreamSelection() const { DARABONBA_PTR_GET_CONST(streamSelection_, PackageConfig::StreamSelection) };
      inline PackageConfig::StreamSelection getStreamSelection() { DARABONBA_PTR_GET(streamSelection_, PackageConfig::StreamSelection) };
      inline PackageConfig& setStreamSelection(const PackageConfig::StreamSelection & streamSelection) { DARABONBA_PTR_SET_VALUE(streamSelection_, streamSelection) };
      inline PackageConfig& setStreamSelection(PackageConfig::StreamSelection && streamSelection) { DARABONBA_PTR_SET_RVALUE(streamSelection_, streamSelection) };


    protected:
      // The settings of digital rights management (DRM) encryption.
      shared_ptr<PackageConfig::DrmProvider> drmProvider_ {};
      // The manifest name. The name can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
      shared_ptr<string> manifestName_ {};
      // The duration of each segment in a packaged stream. Unit: seconds. MediaPackage rounds segments to the nearest multiple of the input segment duration. Valid values: 1 to 30.
      shared_ptr<int64_t> segmentDuration_ {};
      // The settings of stream selection.
      shared_ptr<PackageConfig::StreamSelection> streamSelection_ {};
    };

    virtual bool empty() const override { return this->configurationName_ == nullptr
        && this->description_ == nullptr && this->groupName_ == nullptr && this->packageConfig_ == nullptr && this->protocol_ == nullptr; };
    // configurationName Field Functions 
    bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
    void deleteConfigurationName() { this->configurationName_ = nullptr;};
    inline string getConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
    inline CreateVodPackagingConfigurationRequest& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingConfigurationRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const CreateVodPackagingConfigurationRequest::PackageConfig & getPackageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, CreateVodPackagingConfigurationRequest::PackageConfig) };
    inline CreateVodPackagingConfigurationRequest::PackageConfig getPackageConfig() { DARABONBA_PTR_GET(packageConfig_, CreateVodPackagingConfigurationRequest::PackageConfig) };
    inline CreateVodPackagingConfigurationRequest& setPackageConfig(const CreateVodPackagingConfigurationRequest::PackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline CreateVodPackagingConfigurationRequest& setPackageConfig(CreateVodPackagingConfigurationRequest::PackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateVodPackagingConfigurationRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The name of the packaging configuration. The name must be unique in an account and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    shared_ptr<string> configurationName_ {};
    // The description of the packaging configuration.
    shared_ptr<string> description_ {};
    // The name of the packaging group. The name can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    shared_ptr<string> groupName_ {};
    // The packaging configuration.
    shared_ptr<CreateVodPackagingConfigurationRequest::PackageConfig> packageConfig_ {};
    // The package type.
    // 
    // *   HLS: packages content into TS segments for delivery over the HLS protocol.
    // *   HLS_CMAF: packages content into CMAF segments for delivery over the HLS protocol.
    // *   DASH: packages content for delivery over the DASH protocol.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
