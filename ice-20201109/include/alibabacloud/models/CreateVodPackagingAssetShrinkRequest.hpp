// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingAssetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingAssetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingAssetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
    };
    CreateVodPackagingAssetShrinkRequest() = default ;
    CreateVodPackagingAssetShrinkRequest(const CreateVodPackagingAssetShrinkRequest &) = default ;
    CreateVodPackagingAssetShrinkRequest(CreateVodPackagingAssetShrinkRequest &&) = default ;
    CreateVodPackagingAssetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingAssetShrinkRequest() = default ;
    CreateVodPackagingAssetShrinkRequest& operator=(const CreateVodPackagingAssetShrinkRequest &) = default ;
    CreateVodPackagingAssetShrinkRequest& operator=(CreateVodPackagingAssetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && this->contentId_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->inputShrink_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline CreateVodPackagingAssetShrinkRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline CreateVodPackagingAssetShrinkRequest& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingAssetShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingAssetShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline CreateVodPackagingAssetShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


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
    shared_ptr<string> inputShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
