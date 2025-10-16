// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODYIMAGEMODIFIEDRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODYIMAGEMODIFIEDRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImageModifiedRecordsResponseBodyImageModifiedRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(NewImageId, newImageId_);
      DARABONBA_PTR_TO_JSON(NewImageName, newImageName_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(NewImageId, newImageId_);
      DARABONBA_PTR_FROM_JSON(NewImageName, newImageName_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords() = default ;
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords(const DescribeImageModifiedRecordsResponseBodyImageModifiedRecords &) = default ;
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords(DescribeImageModifiedRecordsResponseBodyImageModifiedRecords &&) = default ;
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageModifiedRecordsResponseBodyImageModifiedRecords() = default ;
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& operator=(const DescribeImageModifiedRecordsResponseBodyImageModifiedRecords &) = default ;
    DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& operator=(DescribeImageModifiedRecordsResponseBodyImageModifiedRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->imageName_ == nullptr && return this->newImageId_ == nullptr && return this->newImageName_ == nullptr && return this->reason_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // newImageId Field Functions 
    bool hasNewImageId() const { return this->newImageId_ != nullptr;};
    void deleteNewImageId() { this->newImageId_ = nullptr;};
    inline string newImageId() const { DARABONBA_PTR_GET_DEFAULT(newImageId_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setNewImageId(string newImageId) { DARABONBA_PTR_SET_VALUE(newImageId_, newImageId) };


    // newImageName Field Functions 
    bool hasNewImageName() const { return this->newImageName_ != nullptr;};
    void deleteNewImageName() { this->newImageName_ = nullptr;};
    inline string newImageName() const { DARABONBA_PTR_GET_DEFAULT(newImageName_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setNewImageName(string newImageName) { DARABONBA_PTR_SET_VALUE(newImageName_, newImageName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeImageModifiedRecordsResponseBodyImageModifiedRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the original image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the original image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the new image after the image was modified.
    std::shared_ptr<string> newImageId_ = nullptr;
    // The name of the new image after the image was modified.
    std::shared_ptr<string> newImageName_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the image modification.
    // 
    // Valid values:
    // 
    // *   0: The image is being modified.
    // 
    // *   1: The image is successfully modified.
    // 
    // *   2: The image fails to be modified.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The time when the image was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
