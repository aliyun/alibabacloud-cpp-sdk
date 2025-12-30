// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUEST_HPP_
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
  class BatchCreateVodPackagingAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    BatchCreateVodPackagingAssetRequest() = default ;
    BatchCreateVodPackagingAssetRequest(const BatchCreateVodPackagingAssetRequest &) = default ;
    BatchCreateVodPackagingAssetRequest(BatchCreateVodPackagingAssetRequest &&) = default ;
    BatchCreateVodPackagingAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetRequest() = default ;
    BatchCreateVodPackagingAssetRequest& operator=(const BatchCreateVodPackagingAssetRequest &) = default ;
    BatchCreateVodPackagingAssetRequest& operator=(BatchCreateVodPackagingAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(AssetName, assetName_);
        DARABONBA_PTR_TO_JSON(ContentId, contentId_);
        DARABONBA_PTR_TO_JSON(Input, input_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
        DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
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
        // The URL of the media file. You can only specify a M3U8 file stored in Object Storage Service (OSS).
        shared_ptr<string> media_ {};
        // The input type. Only OSS is supported.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->assetName_ == nullptr
        && this->contentId_ == nullptr && this->input_ == nullptr; };
      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline Assets& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // contentId Field Functions 
      bool hasContentId() const { return this->contentId_ != nullptr;};
      void deleteContentId() { this->contentId_ = nullptr;};
      inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
      inline Assets& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Assets::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Assets::Input) };
      inline Assets::Input getInput() { DARABONBA_PTR_GET(input_, Assets::Input) };
      inline Assets& setInput(const Assets::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Assets& setInput(Assets::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    protected:
      // The name of the asset. The name must be unique and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
      shared_ptr<string> assetName_ {};
      // The content ID in the digital rights management (DRM) system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
      shared_ptr<string> contentId_ {};
      // The asset input configurations.
      shared_ptr<Assets::Input> input_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->groupName_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<BatchCreateVodPackagingAssetRequest::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<BatchCreateVodPackagingAssetRequest::Assets>) };
    inline vector<BatchCreateVodPackagingAssetRequest::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<BatchCreateVodPackagingAssetRequest::Assets>) };
    inline BatchCreateVodPackagingAssetRequest& setAssets(const vector<BatchCreateVodPackagingAssetRequest::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline BatchCreateVodPackagingAssetRequest& setAssets(vector<BatchCreateVodPackagingAssetRequest::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BatchCreateVodPackagingAssetRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The assets that you want to ingest.
    shared_ptr<vector<BatchCreateVodPackagingAssetRequest::Assets>> assets_ {};
    // The name of the packaging group.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
