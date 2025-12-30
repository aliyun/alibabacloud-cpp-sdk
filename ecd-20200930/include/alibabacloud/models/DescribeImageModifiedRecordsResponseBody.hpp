// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImageModifiedRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageModifiedRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageModifiedRecords, imageModifiedRecords_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageModifiedRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageModifiedRecords, imageModifiedRecords_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageModifiedRecordsResponseBody() = default ;
    DescribeImageModifiedRecordsResponseBody(const DescribeImageModifiedRecordsResponseBody &) = default ;
    DescribeImageModifiedRecordsResponseBody(DescribeImageModifiedRecordsResponseBody &&) = default ;
    DescribeImageModifiedRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageModifiedRecordsResponseBody() = default ;
    DescribeImageModifiedRecordsResponseBody& operator=(const DescribeImageModifiedRecordsResponseBody &) = default ;
    DescribeImageModifiedRecordsResponseBody& operator=(DescribeImageModifiedRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageModifiedRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageModifiedRecords& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(NewImageId, newImageId_);
        DARABONBA_PTR_TO_JSON(NewImageName, newImageName_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ImageModifiedRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(NewImageId, newImageId_);
        DARABONBA_PTR_FROM_JSON(NewImageName, newImageName_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ImageModifiedRecords() = default ;
      ImageModifiedRecords(const ImageModifiedRecords &) = default ;
      ImageModifiedRecords(ImageModifiedRecords &&) = default ;
      ImageModifiedRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageModifiedRecords() = default ;
      ImageModifiedRecords& operator=(const ImageModifiedRecords &) = default ;
      ImageModifiedRecords& operator=(ImageModifiedRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->newImageId_ == nullptr && this->newImageName_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageModifiedRecords& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline ImageModifiedRecords& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // newImageId Field Functions 
      bool hasNewImageId() const { return this->newImageId_ != nullptr;};
      void deleteNewImageId() { this->newImageId_ = nullptr;};
      inline string getNewImageId() const { DARABONBA_PTR_GET_DEFAULT(newImageId_, "") };
      inline ImageModifiedRecords& setNewImageId(string newImageId) { DARABONBA_PTR_SET_VALUE(newImageId_, newImageId) };


      // newImageName Field Functions 
      bool hasNewImageName() const { return this->newImageName_ != nullptr;};
      void deleteNewImageName() { this->newImageName_ = nullptr;};
      inline string getNewImageName() const { DARABONBA_PTR_GET_DEFAULT(newImageName_, "") };
      inline ImageModifiedRecords& setNewImageName(string newImageName) { DARABONBA_PTR_SET_VALUE(newImageName_, newImageName) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ImageModifiedRecords& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ImageModifiedRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ImageModifiedRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the original image.
      shared_ptr<string> imageId_ {};
      // The name of the original image.
      shared_ptr<string> imageName_ {};
      // The ID of the new image after the image was modified.
      shared_ptr<string> newImageId_ {};
      // The name of the new image after the image was modified.
      shared_ptr<string> newImageName_ {};
      shared_ptr<string> reason_ {};
      // The status of the image modification.
      // 
      // Valid values:
      // 
      // *   0: The image is being modified.
      // 
      // *   1: The image is successfully modified.
      // 
      // *   2: The image fails to be modified.
      shared_ptr<int32_t> status_ {};
      // The time when the image was last modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->imageModifiedRecords_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imageModifiedRecords Field Functions 
    bool hasImageModifiedRecords() const { return this->imageModifiedRecords_ != nullptr;};
    void deleteImageModifiedRecords() { this->imageModifiedRecords_ = nullptr;};
    inline const vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords> & getImageModifiedRecords() const { DARABONBA_PTR_GET_CONST(imageModifiedRecords_, vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords>) };
    inline vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords> getImageModifiedRecords() { DARABONBA_PTR_GET(imageModifiedRecords_, vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords>) };
    inline DescribeImageModifiedRecordsResponseBody& setImageModifiedRecords(const vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords> & imageModifiedRecords) { DARABONBA_PTR_SET_VALUE(imageModifiedRecords_, imageModifiedRecords) };
    inline DescribeImageModifiedRecordsResponseBody& setImageModifiedRecords(vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords> && imageModifiedRecords) { DARABONBA_PTR_SET_RVALUE(imageModifiedRecords_, imageModifiedRecords) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageModifiedRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageModifiedRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageModifiedRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The image change records.
    shared_ptr<vector<DescribeImageModifiedRecordsResponseBody::ImageModifiedRecords>> imageModifiedRecords_ {};
    // If the NextToken parameter is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of image modification records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
