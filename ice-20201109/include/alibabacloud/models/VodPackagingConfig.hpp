// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGCONFIG_HPP_
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
      shared_ptr<int64_t> maxVideoBitsPerSecond_ {};
      shared_ptr<int64_t> minVideoBitsPerSecond_ {};
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
      shared_ptr<string> encryptionMethod_ {};
      shared_ptr<string> IV_ {};
      shared_ptr<vector<string>> systemIds_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->drmProvider_ == nullptr
        && this->manifestName_ == nullptr && this->segmentDuration_ == nullptr && this->streamSelection_ == nullptr; };
    // drmProvider Field Functions 
    bool hasDrmProvider() const { return this->drmProvider_ != nullptr;};
    void deleteDrmProvider() { this->drmProvider_ = nullptr;};
    inline const VodPackagingConfig::DrmProvider & getDrmProvider() const { DARABONBA_PTR_GET_CONST(drmProvider_, VodPackagingConfig::DrmProvider) };
    inline VodPackagingConfig::DrmProvider getDrmProvider() { DARABONBA_PTR_GET(drmProvider_, VodPackagingConfig::DrmProvider) };
    inline VodPackagingConfig& setDrmProvider(const VodPackagingConfig::DrmProvider & drmProvider) { DARABONBA_PTR_SET_VALUE(drmProvider_, drmProvider) };
    inline VodPackagingConfig& setDrmProvider(VodPackagingConfig::DrmProvider && drmProvider) { DARABONBA_PTR_SET_RVALUE(drmProvider_, drmProvider) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline VodPackagingConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int64_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0L) };
    inline VodPackagingConfig& setSegmentDuration(int64_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // streamSelection Field Functions 
    bool hasStreamSelection() const { return this->streamSelection_ != nullptr;};
    void deleteStreamSelection() { this->streamSelection_ = nullptr;};
    inline const VodPackagingConfig::StreamSelection & getStreamSelection() const { DARABONBA_PTR_GET_CONST(streamSelection_, VodPackagingConfig::StreamSelection) };
    inline VodPackagingConfig::StreamSelection getStreamSelection() { DARABONBA_PTR_GET(streamSelection_, VodPackagingConfig::StreamSelection) };
    inline VodPackagingConfig& setStreamSelection(const VodPackagingConfig::StreamSelection & streamSelection) { DARABONBA_PTR_SET_VALUE(streamSelection_, streamSelection) };
    inline VodPackagingConfig& setStreamSelection(VodPackagingConfig::StreamSelection && streamSelection) { DARABONBA_PTR_SET_RVALUE(streamSelection_, streamSelection) };


  protected:
    shared_ptr<VodPackagingConfig::DrmProvider> drmProvider_ {};
    shared_ptr<string> manifestName_ {};
    shared_ptr<int64_t> segmentDuration_ {};
    shared_ptr<VodPackagingConfig::StreamSelection> streamSelection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
