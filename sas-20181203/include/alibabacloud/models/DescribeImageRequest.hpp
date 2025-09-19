// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInstanceId, imageInstanceId_);
      DARABONBA_PTR_TO_JSON(ImageRegionId, imageRegionId_);
      DARABONBA_PTR_TO_JSON(ImageRepoId, imageRepoId_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInstanceId, imageInstanceId_);
      DARABONBA_PTR_FROM_JSON(ImageRegionId, imageRegionId_);
      DARABONBA_PTR_FROM_JSON(ImageRepoId, imageRepoId_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
    };
    DescribeImageRequest() = default ;
    DescribeImageRequest(const DescribeImageRequest &) = default ;
    DescribeImageRequest(DescribeImageRequest &&) = default ;
    DescribeImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRequest() = default ;
    DescribeImageRequest& operator=(const DescribeImageRequest &) = default ;
    DescribeImageRequest& operator=(DescribeImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageInstanceId_ != nullptr
        && this->imageRegionId_ != nullptr && this->imageRepoId_ != nullptr && this->imageTag_ != nullptr; };
    // imageInstanceId Field Functions 
    bool hasImageInstanceId() const { return this->imageInstanceId_ != nullptr;};
    void deleteImageInstanceId() { this->imageInstanceId_ = nullptr;};
    inline string imageInstanceId() const { DARABONBA_PTR_GET_DEFAULT(imageInstanceId_, "") };
    inline DescribeImageRequest& setImageInstanceId(string imageInstanceId) { DARABONBA_PTR_SET_VALUE(imageInstanceId_, imageInstanceId) };


    // imageRegionId Field Functions 
    bool hasImageRegionId() const { return this->imageRegionId_ != nullptr;};
    void deleteImageRegionId() { this->imageRegionId_ = nullptr;};
    inline string imageRegionId() const { DARABONBA_PTR_GET_DEFAULT(imageRegionId_, "") };
    inline DescribeImageRequest& setImageRegionId(string imageRegionId) { DARABONBA_PTR_SET_VALUE(imageRegionId_, imageRegionId) };


    // imageRepoId Field Functions 
    bool hasImageRepoId() const { return this->imageRepoId_ != nullptr;};
    void deleteImageRepoId() { this->imageRepoId_ = nullptr;};
    inline string imageRepoId() const { DARABONBA_PTR_GET_DEFAULT(imageRepoId_, "") };
    inline DescribeImageRequest& setImageRepoId(string imageRepoId) { DARABONBA_PTR_SET_VALUE(imageRepoId_, imageRepoId) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeImageRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


  protected:
    // The instance ID of the image.
    // 
    // >  You can call the [DescribeImageInstances](~~DescribeImageInstances~~) operation to query the IDs of instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageInstanceId_ = nullptr;
    // The region ID of the image.
    // 
    // >  You can call the [DescribeImageInstances](~~DescribeImageInstances~~) operation to query the IDs of regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageRegionId_ = nullptr;
    // The ID of the image repository.
    // 
    // >  You can call the [DescribeImageInstances](~~DescribeImageInstances~~) operation to query the IDs of image repositories.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageRepoId_ = nullptr;
    // The tag that is added to the image.
    // 
    // >  You can call the [DescribeImageInstances](~~DescribeImageInstances~~) operation to query tags.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
