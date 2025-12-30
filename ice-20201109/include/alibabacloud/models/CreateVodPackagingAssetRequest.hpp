// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    CreateVodPackagingAssetRequest() = default ;
    CreateVodPackagingAssetRequest(const CreateVodPackagingAssetRequest &) = default ;
    CreateVodPackagingAssetRequest(CreateVodPackagingAssetRequest &&) = default ;
    CreateVodPackagingAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingAssetRequest() = default ;
    CreateVodPackagingAssetRequest& operator=(const CreateVodPackagingAssetRequest &) = default ;
    CreateVodPackagingAssetRequest& operator=(CreateVodPackagingAssetRequest &&) = default ;
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

    virtual bool empty() const override { return this->assetName_ == nullptr
        && this->contentId_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->input_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline CreateVodPackagingAssetRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline CreateVodPackagingAssetRequest& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingAssetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingAssetRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CreateVodPackagingAssetRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, CreateVodPackagingAssetRequest::Input) };
    inline CreateVodPackagingAssetRequest::Input getInput() { DARABONBA_PTR_GET(input_, CreateVodPackagingAssetRequest::Input) };
    inline CreateVodPackagingAssetRequest& setInput(const CreateVodPackagingAssetRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateVodPackagingAssetRequest& setInput(CreateVodPackagingAssetRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The name of the asset. The name must be unique and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    shared_ptr<string> assetName_ {};
    // The content ID in the digital rights management (DRM) system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
    shared_ptr<string> contentId_ {};
    // The asset description.
    shared_ptr<string> description_ {};
    // The name of the packaging group.
    shared_ptr<string> groupName_ {};
    // The asset input configurations.
    shared_ptr<CreateVodPackagingAssetRequest::Input> input_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
