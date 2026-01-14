// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SearchImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ImageResponse, imageResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ImageResponse, imageResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchImageResponseBody() = default ;
    SearchImageResponseBody(const SearchImageResponseBody &) = default ;
    SearchImageResponseBody(SearchImageResponseBody &&) = default ;
    SearchImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageResponseBody() = default ;
    SearchImageResponseBody& operator=(const SearchImageResponseBody &) = default ;
    SearchImageResponseBody& operator=(SearchImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageResponse& obj) { 
        DARABONBA_PTR_TO_JSON(ImageList, imageList_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, ImageResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      ImageResponse() = default ;
      ImageResponse(const ImageResponse &) = default ;
      ImageResponse(ImageResponse &&) = default ;
      ImageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageResponse() = default ;
      ImageResponse& operator=(const ImageResponse &) = default ;
      ImageResponse& operator=(ImageResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageList& obj) { 
          DARABONBA_PTR_TO_JSON(DescriptiveTones, descriptiveTones_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
          DARABONBA_PTR_TO_JSON(ImageRatio, imageRatio_);
          DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(QuantitativePalette, quantitativePalette_);
          DARABONBA_PTR_TO_JSON(TagsFromImage, tagsFromImage_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, ImageList& obj) { 
          DARABONBA_PTR_FROM_JSON(DescriptiveTones, descriptiveTones_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
          DARABONBA_PTR_FROM_JSON(ImageRatio, imageRatio_);
          DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(QuantitativePalette, quantitativePalette_);
          DARABONBA_PTR_FROM_JSON(TagsFromImage, tagsFromImage_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        ImageList() = default ;
        ImageList(const ImageList &) = default ;
        ImageList(ImageList &&) = default ;
        ImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageList() = default ;
        ImageList& operator=(const ImageList &) = default ;
        ImageList& operator=(ImageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->descriptiveTones_ == nullptr
        && this->height_ == nullptr && this->imageCategory_ == nullptr && this->imageRatio_ == nullptr && this->imageUuid_ == nullptr && this->ossKey_ == nullptr
        && this->quantitativePalette_ == nullptr && this->tagsFromImage_ == nullptr && this->url_ == nullptr && this->width_ == nullptr; };
        // descriptiveTones Field Functions 
        bool hasDescriptiveTones() const { return this->descriptiveTones_ != nullptr;};
        void deleteDescriptiveTones() { this->descriptiveTones_ = nullptr;};
        inline string getDescriptiveTones() const { DARABONBA_PTR_GET_DEFAULT(descriptiveTones_, "") };
        inline ImageList& setDescriptiveTones(string descriptiveTones) { DARABONBA_PTR_SET_VALUE(descriptiveTones_, descriptiveTones) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline ImageList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // imageCategory Field Functions 
        bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
        void deleteImageCategory() { this->imageCategory_ = nullptr;};
        inline string getImageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
        inline ImageList& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


        // imageRatio Field Functions 
        bool hasImageRatio() const { return this->imageRatio_ != nullptr;};
        void deleteImageRatio() { this->imageRatio_ = nullptr;};
        inline string getImageRatio() const { DARABONBA_PTR_GET_DEFAULT(imageRatio_, "") };
        inline ImageList& setImageRatio(string imageRatio) { DARABONBA_PTR_SET_VALUE(imageRatio_, imageRatio) };


        // imageUuid Field Functions 
        bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
        void deleteImageUuid() { this->imageUuid_ = nullptr;};
        inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
        inline ImageList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline ImageList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // quantitativePalette Field Functions 
        bool hasQuantitativePalette() const { return this->quantitativePalette_ != nullptr;};
        void deleteQuantitativePalette() { this->quantitativePalette_ = nullptr;};
        inline string getQuantitativePalette() const { DARABONBA_PTR_GET_DEFAULT(quantitativePalette_, "") };
        inline ImageList& setQuantitativePalette(string quantitativePalette) { DARABONBA_PTR_SET_VALUE(quantitativePalette_, quantitativePalette) };


        // tagsFromImage Field Functions 
        bool hasTagsFromImage() const { return this->tagsFromImage_ != nullptr;};
        void deleteTagsFromImage() { this->tagsFromImage_ = nullptr;};
        inline string getTagsFromImage() const { DARABONBA_PTR_GET_DEFAULT(tagsFromImage_, "") };
        inline ImageList& setTagsFromImage(string tagsFromImage) { DARABONBA_PTR_SET_VALUE(tagsFromImage_, tagsFromImage) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ImageList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline ImageList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<string> descriptiveTones_ {};
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> imageCategory_ {};
        shared_ptr<string> imageRatio_ {};
        shared_ptr<string> imageUuid_ {};
        // oss key
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> quantitativePalette_ {};
        shared_ptr<string> tagsFromImage_ {};
        shared_ptr<string> url_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->imageList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // imageList Field Functions 
      bool hasImageList() const { return this->imageList_ != nullptr;};
      void deleteImageList() { this->imageList_ = nullptr;};
      inline const vector<ImageResponse::ImageList> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<ImageResponse::ImageList>) };
      inline vector<ImageResponse::ImageList> getImageList() { DARABONBA_PTR_GET(imageList_, vector<ImageResponse::ImageList>) };
      inline ImageResponse& setImageList(const vector<ImageResponse::ImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
      inline ImageResponse& setImageList(vector<ImageResponse::ImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline ImageResponse& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline ImageResponse& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      shared_ptr<vector<ImageResponse::ImageList>> imageList_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->imageResponse_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchImageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SearchImageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // imageResponse Field Functions 
    bool hasImageResponse() const { return this->imageResponse_ != nullptr;};
    void deleteImageResponse() { this->imageResponse_ = nullptr;};
    inline const SearchImageResponseBody::ImageResponse & getImageResponse() const { DARABONBA_PTR_GET_CONST(imageResponse_, SearchImageResponseBody::ImageResponse) };
    inline SearchImageResponseBody::ImageResponse getImageResponse() { DARABONBA_PTR_GET(imageResponse_, SearchImageResponseBody::ImageResponse) };
    inline SearchImageResponseBody& setImageResponse(const SearchImageResponseBody::ImageResponse & imageResponse) { DARABONBA_PTR_SET_VALUE(imageResponse_, imageResponse) };
    inline SearchImageResponseBody& setImageResponse(SearchImageResponseBody::ImageResponse && imageResponse) { DARABONBA_PTR_SET_RVALUE(imageResponse_, imageResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchImageResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<SearchImageResponseBody::ImageResponse> imageResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
