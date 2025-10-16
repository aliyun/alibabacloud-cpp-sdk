// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CopyImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationDescription, destinationDescription_);
      DARABONBA_PTR_TO_JSON(DestinationImageName, destinationImageName_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationDescription, destinationDescription_);
      DARABONBA_PTR_FROM_JSON(DestinationImageName, destinationImageName_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CopyImageRequest() = default ;
    CopyImageRequest(const CopyImageRequest &) = default ;
    CopyImageRequest(CopyImageRequest &&) = default ;
    CopyImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyImageRequest() = default ;
    CopyImageRequest& operator=(const CopyImageRequest &) = default ;
    CopyImageRequest& operator=(CopyImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationDescription_ == nullptr
        && return this->destinationImageName_ == nullptr && return this->destinationRegionId_ == nullptr && return this->imageId_ == nullptr && return this->regionId_ == nullptr; };
    // destinationDescription Field Functions 
    bool hasDestinationDescription() const { return this->destinationDescription_ != nullptr;};
    void deleteDestinationDescription() { this->destinationDescription_ = nullptr;};
    inline string destinationDescription() const { DARABONBA_PTR_GET_DEFAULT(destinationDescription_, "") };
    inline CopyImageRequest& setDestinationDescription(string destinationDescription) { DARABONBA_PTR_SET_VALUE(destinationDescription_, destinationDescription) };


    // destinationImageName Field Functions 
    bool hasDestinationImageName() const { return this->destinationImageName_ != nullptr;};
    void deleteDestinationImageName() { this->destinationImageName_ = nullptr;};
    inline string destinationImageName() const { DARABONBA_PTR_GET_DEFAULT(destinationImageName_, "") };
    inline CopyImageRequest& setDestinationImageName(string destinationImageName) { DARABONBA_PTR_SET_VALUE(destinationImageName_, destinationImageName) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline CopyImageRequest& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CopyImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopyImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The description of the new image in the destination region. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> destinationDescription_ = nullptr;
    // The name of the new image. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationImageName_ = nullptr;
    // The ID of the destination region. The ID must be different from the current region ID of the image. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The ID of the image that is copied to the destination region.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
