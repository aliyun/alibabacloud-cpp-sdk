// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataImageRegionDistributeMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeImageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageListResponseBody() = default ;
    DescribeImageListResponseBody(const DescribeImageListResponseBody &) = default ;
    DescribeImageListResponseBody(DescribeImageListResponseBody &&) = default ;
    DescribeImageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListResponseBody() = default ;
    DescribeImageListResponseBody& operator=(const DescribeImageListResponseBody &) = default ;
    DescribeImageListResponseBody& operator=(DescribeImageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageBizTags, imageBizTags_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageRegionDistributeMap, imageRegionDistributeMap_);
        DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_TO_JSON(ImageType, imageType_);
        DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageBizTags, imageBizTags_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageRegionDistributeMap, imageRegionDistributeMap_);
        DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
        DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageBizTags_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageRegionDistributeMap_ == nullptr && this->imageRegionList_ == nullptr && this->imageType_ == nullptr && this->imageVersion_ == nullptr
        && this->language_ == nullptr && this->releaseTime_ == nullptr && this->renderingType_ == nullptr && this->status_ == nullptr && this->systemType_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageBizTags Field Functions 
      bool hasImageBizTags() const { return this->imageBizTags_ != nullptr;};
      void deleteImageBizTags() { this->imageBizTags_ = nullptr;};
      inline const vector<Data::ImageBizTags> & getImageBizTags() const { DARABONBA_PTR_GET_CONST(imageBizTags_, vector<Data::ImageBizTags>) };
      inline vector<Data::ImageBizTags> getImageBizTags() { DARABONBA_PTR_GET(imageBizTags_, vector<Data::ImageBizTags>) };
      inline Data& setImageBizTags(const vector<Data::ImageBizTags> & imageBizTags) { DARABONBA_PTR_SET_VALUE(imageBizTags_, imageBizTags) };
      inline Data& setImageBizTags(vector<Data::ImageBizTags> && imageBizTags) { DARABONBA_PTR_SET_RVALUE(imageBizTags_, imageBizTags) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageRegionDistributeMap Field Functions 
      bool hasImageRegionDistributeMap() const { return this->imageRegionDistributeMap_ != nullptr;};
      void deleteImageRegionDistributeMap() { this->imageRegionDistributeMap_ = nullptr;};
      inline const map<string, DataImageRegionDistributeMapValue> & getImageRegionDistributeMap() const { DARABONBA_PTR_GET_CONST(imageRegionDistributeMap_, map<string, DataImageRegionDistributeMapValue>) };
      inline map<string, DataImageRegionDistributeMapValue> getImageRegionDistributeMap() { DARABONBA_PTR_GET(imageRegionDistributeMap_, map<string, DataImageRegionDistributeMapValue>) };
      inline Data& setImageRegionDistributeMap(const map<string, DataImageRegionDistributeMapValue> & imageRegionDistributeMap) { DARABONBA_PTR_SET_VALUE(imageRegionDistributeMap_, imageRegionDistributeMap) };
      inline Data& setImageRegionDistributeMap(map<string, DataImageRegionDistributeMapValue> && imageRegionDistributeMap) { DARABONBA_PTR_SET_RVALUE(imageRegionDistributeMap_, imageRegionDistributeMap) };


      // imageRegionList Field Functions 
      bool hasImageRegionList() const { return this->imageRegionList_ != nullptr;};
      void deleteImageRegionList() { this->imageRegionList_ = nullptr;};
      inline const vector<string> & getImageRegionList() const { DARABONBA_PTR_GET_CONST(imageRegionList_, vector<string>) };
      inline vector<string> getImageRegionList() { DARABONBA_PTR_GET(imageRegionList_, vector<string>) };
      inline Data& setImageRegionList(const vector<string> & imageRegionList) { DARABONBA_PTR_SET_VALUE(imageRegionList_, imageRegionList) };
      inline Data& setImageRegionList(vector<string> && imageRegionList) { DARABONBA_PTR_SET_RVALUE(imageRegionList_, imageRegionList) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Data& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline Data& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
      inline Data& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // renderingType Field Functions 
      bool hasRenderingType() const { return this->renderingType_ != nullptr;};
      void deleteRenderingType() { this->renderingType_ = nullptr;};
      inline string getRenderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
      inline Data& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemType Field Functions 
      bool hasSystemType() const { return this->systemType_ != nullptr;};
      void deleteSystemType() { this->systemType_ = nullptr;};
      inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
      inline Data& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // The time when the image was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the image was last modified.
      shared_ptr<string> gmtModified_ {};
      shared_ptr<vector<Data::ImageBizTags>> imageBizTags_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The name of the image.
      shared_ptr<string> imageName_ {};
      // The region where the image is distributed. The key is the region and the value is the distribution information.
      shared_ptr<map<string, DataImageRegionDistributeMapValue>> imageRegionDistributeMap_ {};
      // The list of regions.
      shared_ptr<vector<string>> imageRegionList_ {};
      // The type of the image.
      // 
      // Valid values:
      // 
      // *   User: custom images.
      // *   System: system images.
      shared_ptr<string> imageType_ {};
      shared_ptr<string> imageVersion_ {};
      // The language of the image.
      shared_ptr<string> language_ {};
      // The time when the image was published.
      shared_ptr<string> releaseTime_ {};
      // The rendering type.
      // 
      // Valid values:
      // 
      // *   GPURemote
      // *   CPU
      // *   GPULocal
      shared_ptr<string> renderingType_ {};
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
      // The OS type of the image.
      shared_ptr<string> systemType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeImageListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeImageListResponseBody::Data>) };
    inline vector<DescribeImageListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeImageListResponseBody::Data>) };
    inline DescribeImageListResponseBody& setData(const vector<DescribeImageListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageListResponseBody& setData(vector<DescribeImageListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The images.
    shared_ptr<vector<DescribeImageListResponseBody::Data>> data_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
