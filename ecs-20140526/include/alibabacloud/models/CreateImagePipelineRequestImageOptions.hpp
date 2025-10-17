// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImagePipelineRequestImageOptionsImageFeatures.hpp>
#include <vector>
#include <alibabacloud/models/CreateImagePipelineRequestImageOptionsImageTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequestImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequestImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageFeatures, imageFeatures_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageTags, imageTags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequestImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageFeatures, imageFeatures_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageTags, imageTags_);
    };
    CreateImagePipelineRequestImageOptions() = default ;
    CreateImagePipelineRequestImageOptions(const CreateImagePipelineRequestImageOptions &) = default ;
    CreateImagePipelineRequestImageOptions(CreateImagePipelineRequestImageOptions &&) = default ;
    CreateImagePipelineRequestImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequestImageOptions() = default ;
    CreateImagePipelineRequestImageOptions& operator=(const CreateImagePipelineRequestImageOptions &) = default ;
    CreateImagePipelineRequestImageOptions& operator=(CreateImagePipelineRequestImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->imageFamily_ == nullptr && return this->imageFeatures_ == nullptr && return this->imageName_ == nullptr && return this->imageTags_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImagePipelineRequestImageOptions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateImagePipelineRequestImageOptions& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageFeatures Field Functions 
    bool hasImageFeatures() const { return this->imageFeatures_ != nullptr;};
    void deleteImageFeatures() { this->imageFeatures_ = nullptr;};
    inline const Models::CreateImagePipelineRequestImageOptionsImageFeatures & imageFeatures() const { DARABONBA_PTR_GET_CONST(imageFeatures_, Models::CreateImagePipelineRequestImageOptionsImageFeatures) };
    inline Models::CreateImagePipelineRequestImageOptionsImageFeatures imageFeatures() { DARABONBA_PTR_GET(imageFeatures_, Models::CreateImagePipelineRequestImageOptionsImageFeatures) };
    inline CreateImagePipelineRequestImageOptions& setImageFeatures(const Models::CreateImagePipelineRequestImageOptionsImageFeatures & imageFeatures) { DARABONBA_PTR_SET_VALUE(imageFeatures_, imageFeatures) };
    inline CreateImagePipelineRequestImageOptions& setImageFeatures(Models::CreateImagePipelineRequestImageOptionsImageFeatures && imageFeatures) { DARABONBA_PTR_SET_RVALUE(imageFeatures_, imageFeatures) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImagePipelineRequestImageOptions& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageTags Field Functions 
    bool hasImageTags() const { return this->imageTags_ != nullptr;};
    void deleteImageTags() { this->imageTags_ = nullptr;};
    inline const vector<Models::CreateImagePipelineRequestImageOptionsImageTags> & imageTags() const { DARABONBA_PTR_GET_CONST(imageTags_, vector<Models::CreateImagePipelineRequestImageOptionsImageTags>) };
    inline vector<Models::CreateImagePipelineRequestImageOptionsImageTags> imageTags() { DARABONBA_PTR_GET(imageTags_, vector<Models::CreateImagePipelineRequestImageOptionsImageTags>) };
    inline CreateImagePipelineRequestImageOptions& setImageTags(const vector<Models::CreateImagePipelineRequestImageOptionsImageTags> & imageTags) { DARABONBA_PTR_SET_VALUE(imageTags_, imageTags) };
    inline CreateImagePipelineRequestImageOptions& setImageTags(vector<Models::CreateImagePipelineRequestImageOptionsImageTags> && imageTags) { DARABONBA_PTR_SET_RVALUE(imageTags_, imageTags) };


  protected:
    // The description of the image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The image family. The image family name must be 2 to 128 characters in length. The name must start with a letter and cannot start with acs: or aliyun. The name cannot contain http:// or https:// and can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The feature attributes of the image.
    std::shared_ptr<Models::CreateImagePipelineRequestImageOptionsImageFeatures> imageFeatures_ = nullptr;
    // The prefix of the image name. The prefix must be 2 to 64 characters in length. The prefix must start with a letter and cannot start with `http://` or `https://`. The prefix can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // The system generates the final image name that consists of the specified prefix and the ID of the build task (`ExecutionId`) in the format of `{ImageName}_{ExecutionId}`.
    std::shared_ptr<string> imageName_ = nullptr;
    // The tags to add to the image.
    std::shared_ptr<vector<Models::CreateImagePipelineRequestImageOptionsImageTags>> imageTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
