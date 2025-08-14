// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIGSTREAMSELECTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIGSTREAMSELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingConfigurationRequestPackageConfigStreamSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& obj) { 
      DARABONBA_PTR_TO_JSON(MaxVideoBitsPerSecond, maxVideoBitsPerSecond_);
      DARABONBA_PTR_TO_JSON(MinVideoBitsPerSecond, minVideoBitsPerSecond_);
      DARABONBA_PTR_TO_JSON(StreamOrder, streamOrder_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxVideoBitsPerSecond, maxVideoBitsPerSecond_);
      DARABONBA_PTR_FROM_JSON(MinVideoBitsPerSecond, minVideoBitsPerSecond_);
      DARABONBA_PTR_FROM_JSON(StreamOrder, streamOrder_);
    };
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection() = default ;
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection(const CreateVodPackagingConfigurationRequestPackageConfigStreamSelection &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection(CreateVodPackagingConfigurationRequestPackageConfigStreamSelection &&) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationRequestPackageConfigStreamSelection() = default ;
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& operator=(const CreateVodPackagingConfigurationRequestPackageConfigStreamSelection &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& operator=(CreateVodPackagingConfigurationRequestPackageConfigStreamSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxVideoBitsPerSecond_ != nullptr
        && this->minVideoBitsPerSecond_ != nullptr && this->streamOrder_ != nullptr; };
    // maxVideoBitsPerSecond Field Functions 
    bool hasMaxVideoBitsPerSecond() const { return this->maxVideoBitsPerSecond_ != nullptr;};
    void deleteMaxVideoBitsPerSecond() { this->maxVideoBitsPerSecond_ = nullptr;};
    inline int64_t maxVideoBitsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxVideoBitsPerSecond_, 0L) };
    inline CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& setMaxVideoBitsPerSecond(int64_t maxVideoBitsPerSecond) { DARABONBA_PTR_SET_VALUE(maxVideoBitsPerSecond_, maxVideoBitsPerSecond) };


    // minVideoBitsPerSecond Field Functions 
    bool hasMinVideoBitsPerSecond() const { return this->minVideoBitsPerSecond_ != nullptr;};
    void deleteMinVideoBitsPerSecond() { this->minVideoBitsPerSecond_ = nullptr;};
    inline int64_t minVideoBitsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(minVideoBitsPerSecond_, 0L) };
    inline CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& setMinVideoBitsPerSecond(int64_t minVideoBitsPerSecond) { DARABONBA_PTR_SET_VALUE(minVideoBitsPerSecond_, minVideoBitsPerSecond) };


    // streamOrder Field Functions 
    bool hasStreamOrder() const { return this->streamOrder_ != nullptr;};
    void deleteStreamOrder() { this->streamOrder_ = nullptr;};
    inline string streamOrder() const { DARABONBA_PTR_GET_DEFAULT(streamOrder_, "") };
    inline CreateVodPackagingConfigurationRequestPackageConfigStreamSelection& setStreamOrder(string streamOrder) { DARABONBA_PTR_SET_VALUE(streamOrder_, streamOrder) };


  protected:
    // The maximum bitrate of the video stream. Unit: bit/s.
    std::shared_ptr<int64_t> maxVideoBitsPerSecond_ = nullptr;
    // The minimum bitrate of the video stream. Unit: bit/s.
    std::shared_ptr<int64_t> minVideoBitsPerSecond_ = nullptr;
    // The order of manifest files in the master playlist. Valid values:
    // 
    // *   ORIGINAL: sorts the manifest files in the same order as the source.
    // *   VIDEO_BITRATE_ASCENDING: sorts the manifest files in ascending order of bitrates, from lowest to highest.
    // *   VIDEO_BITRATE_DESCENDING: sorts the manifest files in descending order of bitrates, from highest to lowest.
    std::shared_ptr<string> streamOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
