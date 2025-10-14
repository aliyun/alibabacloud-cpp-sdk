// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAICIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAICIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAICImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAICImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidVersion, androidVersion_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAICImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidVersion, androidVersion_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeAICImagesResponseBodyImages() = default ;
    DescribeAICImagesResponseBodyImages(const DescribeAICImagesResponseBodyImages &) = default ;
    DescribeAICImagesResponseBodyImages(DescribeAICImagesResponseBodyImages &&) = default ;
    DescribeAICImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAICImagesResponseBodyImages() = default ;
    DescribeAICImagesResponseBodyImages& operator=(const DescribeAICImagesResponseBodyImages &) = default ;
    DescribeAICImagesResponseBodyImages& operator=(DescribeAICImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidVersion_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->imageId_ == nullptr && return this->imageUrl_ == nullptr && return this->status_ == nullptr
        && return this->user_ == nullptr; };
    // androidVersion Field Functions 
    bool hasAndroidVersion() const { return this->androidVersion_ != nullptr;};
    void deleteAndroidVersion() { this->androidVersion_ = nullptr;};
    inline string androidVersion() const { DARABONBA_PTR_GET_DEFAULT(androidVersion_, "") };
    inline DescribeAICImagesResponseBodyImages& setAndroidVersion(string androidVersion) { DARABONBA_PTR_SET_VALUE(androidVersion_, androidVersion) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAICImagesResponseBodyImages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAICImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAICImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeAICImagesResponseBodyImages& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAICImagesResponseBodyImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeAICImagesResponseBodyImages& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> androidVersion_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The image ID of the AIC instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The URL of the AIC image repository.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The status of the image. **Available** is returned for this parameter. Available indicates that the image is available.
    std::shared_ptr<string> status_ = nullptr;
    // The username of the image repository.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
