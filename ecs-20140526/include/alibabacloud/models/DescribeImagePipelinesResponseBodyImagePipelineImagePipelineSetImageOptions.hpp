// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageFeatures, imageFeatures_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageTags, imageTags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageFeatures, imageFeatures_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageTags, imageTags_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->imageFamily_ != nullptr && this->imageFeatures_ != nullptr && this->imageName_ != nullptr && this->imageTags_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageFeatures Field Functions 
    bool hasImageFeatures() const { return this->imageFeatures_ != nullptr;};
    void deleteImageFeatures() { this->imageFeatures_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures & imageFeatures() const { DARABONBA_PTR_GET_CONST(imageFeatures_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures imageFeatures() { DARABONBA_PTR_GET(imageFeatures_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageFeatures(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures & imageFeatures) { DARABONBA_PTR_SET_VALUE(imageFeatures_, imageFeatures) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageFeatures(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures && imageFeatures) { DARABONBA_PTR_SET_RVALUE(imageFeatures_, imageFeatures) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageTags Field Functions 
    bool hasImageTags() const { return this->imageTags_ != nullptr;};
    void deleteImageTags() { this->imageTags_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags & imageTags() const { DARABONBA_PTR_GET_CONST(imageTags_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags imageTags() { DARABONBA_PTR_GET(imageTags_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageTags(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags & imageTags) { DARABONBA_PTR_SET_VALUE(imageTags_, imageTags) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions& setImageTags(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags && imageTags) { DARABONBA_PTR_SET_RVALUE(imageTags_, imageTags) };


  protected:
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The image family.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The feature attributes of the image.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageFeatures> imageFeatures_ = nullptr;
    // The prefix of the image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The tags of the image.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags> imageTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
