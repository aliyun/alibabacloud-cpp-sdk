// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVodPackagingAssetRequestInput.hpp>
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
    virtual bool empty() const override { return this->assetName_ == nullptr
        && return this->contentId_ == nullptr && return this->description_ == nullptr && return this->groupName_ == nullptr && return this->input_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline CreateVodPackagingAssetRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string contentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline CreateVodPackagingAssetRequest& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingAssetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingAssetRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CreateVodPackagingAssetRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, CreateVodPackagingAssetRequestInput) };
    inline CreateVodPackagingAssetRequestInput input() { DARABONBA_PTR_GET(input_, CreateVodPackagingAssetRequestInput) };
    inline CreateVodPackagingAssetRequest& setInput(const CreateVodPackagingAssetRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateVodPackagingAssetRequest& setInput(CreateVodPackagingAssetRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The name of the asset. The name must be unique and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> assetName_ = nullptr;
    // The content ID in the digital rights management (DRM) system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> contentId_ = nullptr;
    // The asset description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the packaging group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The asset input configurations.
    std::shared_ptr<CreateVodPackagingAssetRequestInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
