// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeImageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBizTags, imageBizTags_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImagePackageType, imagePackageType_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBizTags, imageBizTags_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImagePackageType, imagePackageType_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    DescribeImageListRequest() = default ;
    DescribeImageListRequest(const DescribeImageListRequest &) = default ;
    DescribeImageListRequest(DescribeImageListRequest &&) = default ;
    DescribeImageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListRequest() = default ;
    DescribeImageListRequest& operator=(const DescribeImageListRequest &) = default ;
    DescribeImageListRequest& operator=(DescribeImageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageBizTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageBizTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ImageBizTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ImageBizTags() = default ;
      ImageBizTags(const ImageBizTags &) = default ;
      ImageBizTags(ImageBizTags &&) = default ;
      ImageBizTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageBizTags() = default ;
      ImageBizTags& operator=(const ImageBizTags &) = default ;
      ImageBizTags& operator=(ImageBizTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ImageBizTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ImageBizTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->imageBizTags_ == nullptr
        && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imagePackageType_ == nullptr && this->imageType_ == nullptr && this->instanceType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->status_ == nullptr && this->systemType_ == nullptr; };
    // imageBizTags Field Functions 
    bool hasImageBizTags() const { return this->imageBizTags_ != nullptr;};
    void deleteImageBizTags() { this->imageBizTags_ = nullptr;};
    inline const vector<DescribeImageListRequest::ImageBizTags> & getImageBizTags() const { DARABONBA_PTR_GET_CONST(imageBizTags_, vector<DescribeImageListRequest::ImageBizTags>) };
    inline vector<DescribeImageListRequest::ImageBizTags> getImageBizTags() { DARABONBA_PTR_GET(imageBizTags_, vector<DescribeImageListRequest::ImageBizTags>) };
    inline DescribeImageListRequest& setImageBizTags(const vector<DescribeImageListRequest::ImageBizTags> & imageBizTags) { DARABONBA_PTR_SET_VALUE(imageBizTags_, imageBizTags) };
    inline DescribeImageListRequest& setImageBizTags(vector<DescribeImageListRequest::ImageBizTags> && imageBizTags) { DARABONBA_PTR_SET_RVALUE(imageBizTags_, imageBizTags) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageListRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImageListRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imagePackageType Field Functions 
    bool hasImagePackageType() const { return this->imagePackageType_ != nullptr;};
    void deleteImagePackageType() { this->imagePackageType_ = nullptr;};
    inline string getImagePackageType() const { DARABONBA_PTR_GET_DEFAULT(imagePackageType_, "") };
    inline DescribeImageListRequest& setImagePackageType(string imagePackageType) { DARABONBA_PTR_SET_VALUE(imagePackageType_, imagePackageType) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeImageListRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeImageListRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImageListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline DescribeImageListRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    shared_ptr<vector<DescribeImageListRequest::ImageBizTags>> imageBizTags_ {};
    // The ID of the image.
    shared_ptr<string> imageId_ {};
    // The name of the image.
    shared_ptr<string> imageName_ {};
    // Image package type.
    shared_ptr<string> imagePackageType_ {};
    // The type of the image.
    // 
    // Valid values:
    // 
    // *   User: custom images.
    // *   System: system images.
    // 
    // This parameter is required.
    shared_ptr<string> imageType_ {};
    shared_ptr<string> instanceType_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    shared_ptr<string> nextToken_ {};
    // The state of the image.
    // 
    // Valid values:
    // 
    // *   AVAILABLE: The image is available.
    // *   DELETE: The image is deleted.
    // *   INIT: The image is being initialized.
    // *   CREATE_FAILED: The image failed to be created.
    // *   CREATING: The image is being created.
    shared_ptr<string> status_ {};
    shared_ptr<string> systemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
