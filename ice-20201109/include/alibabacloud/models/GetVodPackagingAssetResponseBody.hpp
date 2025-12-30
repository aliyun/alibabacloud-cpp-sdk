// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODY_HPP_
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
  class GetVodPackagingAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVodPackagingAssetResponseBody() = default ;
    GetVodPackagingAssetResponseBody(const GetVodPackagingAssetResponseBody &) = default ;
    GetVodPackagingAssetResponseBody(GetVodPackagingAssetResponseBody &&) = default ;
    GetVodPackagingAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingAssetResponseBody() = default ;
    GetVodPackagingAssetResponseBody& operator=(const GetVodPackagingAssetResponseBody &) = default ;
    GetVodPackagingAssetResponseBody& operator=(GetVodPackagingAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Asset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Asset& obj) { 
        DARABONBA_PTR_TO_JSON(AssetName, assetName_);
        DARABONBA_PTR_TO_JSON(ContentId, contentId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EgressEndpoints, egressEndpoints_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Input, input_);
      };
      friend void from_json(const Darabonba::Json& j, Asset& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
        DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EgressEndpoints, egressEndpoints_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
      };
      Asset() = default ;
      Asset(const Asset &) = default ;
      Asset(Asset &&) = default ;
      Asset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Asset() = default ;
      Asset& operator=(const Asset &) = default ;
      Asset& operator=(Asset &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The URL of the media file. Only M3U8 files stored in OSS are supported.
        shared_ptr<string> media_ {};
        // The input type. Only Object Storage Service (OSS) is supported.
        shared_ptr<string> type_ {};
      };

      class EgressEndpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EgressEndpoints& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, EgressEndpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        EgressEndpoints() = default ;
        EgressEndpoints(const EgressEndpoints &) = default ;
        EgressEndpoints(EgressEndpoints &&) = default ;
        EgressEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EgressEndpoints() = default ;
        EgressEndpoints& operator=(const EgressEndpoints &) = default ;
        EgressEndpoints& operator=(EgressEndpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configurationName_ == nullptr
        && this->status_ == nullptr && this->url_ == nullptr; };
        // configurationName Field Functions 
        bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
        void deleteConfigurationName() { this->configurationName_ = nullptr;};
        inline string getConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
        inline EgressEndpoints& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EgressEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline EgressEndpoints& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The name of the packaging configuration.
        shared_ptr<string> configurationName_ {};
        // The asset status. Valid values:
        // 
        // *   Queuing: The asset is waiting for packaging.
        // *   Playable: The asset is packaged and playable.
        // *   Failed: The asset fails to be packaged.
        shared_ptr<string> status_ {};
        // The playback URL. If the asset fails to be packaged, no playback URL is returned.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->assetName_ == nullptr
        && this->contentId_ == nullptr && this->createTime_ == nullptr && this->egressEndpoints_ == nullptr && this->groupName_ == nullptr && this->input_ == nullptr; };
      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline Asset& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // contentId Field Functions 
      bool hasContentId() const { return this->contentId_ != nullptr;};
      void deleteContentId() { this->contentId_ = nullptr;};
      inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
      inline Asset& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Asset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // egressEndpoints Field Functions 
      bool hasEgressEndpoints() const { return this->egressEndpoints_ != nullptr;};
      void deleteEgressEndpoints() { this->egressEndpoints_ = nullptr;};
      inline const vector<Asset::EgressEndpoints> & getEgressEndpoints() const { DARABONBA_PTR_GET_CONST(egressEndpoints_, vector<Asset::EgressEndpoints>) };
      inline vector<Asset::EgressEndpoints> getEgressEndpoints() { DARABONBA_PTR_GET(egressEndpoints_, vector<Asset::EgressEndpoints>) };
      inline Asset& setEgressEndpoints(const vector<Asset::EgressEndpoints> & egressEndpoints) { DARABONBA_PTR_SET_VALUE(egressEndpoints_, egressEndpoints) };
      inline Asset& setEgressEndpoints(vector<Asset::EgressEndpoints> && egressEndpoints) { DARABONBA_PTR_SET_RVALUE(egressEndpoints_, egressEndpoints) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Asset& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Asset::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Asset::Input) };
      inline Asset::Input getInput() { DARABONBA_PTR_GET(input_, Asset::Input) };
      inline Asset& setInput(const Asset::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Asset& setInput(Asset::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    protected:
      // The name of the asset.
      shared_ptr<string> assetName_ {};
      // The content ID in the DRM system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
      shared_ptr<string> contentId_ {};
      // The time when the asset was created. It follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The egress endpoints, each corresponding to a packaging configuration.
      shared_ptr<vector<Asset::EgressEndpoints>> egressEndpoints_ {};
      // The name of the packaging group.
      shared_ptr<string> groupName_ {};
      // The asset input configurations.
      shared_ptr<Asset::Input> input_ {};
    };

    virtual bool empty() const override { return this->asset_ == nullptr
        && this->requestId_ == nullptr; };
    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline const GetVodPackagingAssetResponseBody::Asset & getAsset() const { DARABONBA_PTR_GET_CONST(asset_, GetVodPackagingAssetResponseBody::Asset) };
    inline GetVodPackagingAssetResponseBody::Asset getAsset() { DARABONBA_PTR_GET(asset_, GetVodPackagingAssetResponseBody::Asset) };
    inline GetVodPackagingAssetResponseBody& setAsset(const GetVodPackagingAssetResponseBody::Asset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
    inline GetVodPackagingAssetResponseBody& setAsset(GetVodPackagingAssetResponseBody::Asset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodPackagingAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the asset.
    shared_ptr<GetVodPackagingAssetResponseBody::Asset> asset_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
