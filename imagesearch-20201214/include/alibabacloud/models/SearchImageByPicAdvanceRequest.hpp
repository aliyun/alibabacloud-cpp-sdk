// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYPICADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYPICADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByPicAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByPicAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      // picContentObject_ is stream
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByPicAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      // picContentObject_ is stream
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SearchImageByPicAdvanceRequest() = default ;
    SearchImageByPicAdvanceRequest(const SearchImageByPicAdvanceRequest &) = default ;
    SearchImageByPicAdvanceRequest(SearchImageByPicAdvanceRequest &&) = default ;
    SearchImageByPicAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByPicAdvanceRequest() = default ;
    SearchImageByPicAdvanceRequest& operator=(const SearchImageByPicAdvanceRequest &) = default ;
    SearchImageByPicAdvanceRequest& operator=(SearchImageByPicAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->crop_ == nullptr && this->distinctProductId_ == nullptr && this->filter_ == nullptr && this->instanceName_ == nullptr && this->num_ == nullptr
        && this->picContentObject_ == nullptr && this->region_ == nullptr && this->scoreThreshold_ == nullptr && this->start_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline SearchImageByPicAdvanceRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline bool getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, false) };
    inline SearchImageByPicAdvanceRequest& setCrop(bool crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // distinctProductId Field Functions 
    bool hasDistinctProductId() const { return this->distinctProductId_ != nullptr;};
    void deleteDistinctProductId() { this->distinctProductId_ = nullptr;};
    inline bool getDistinctProductId() const { DARABONBA_PTR_GET_DEFAULT(distinctProductId_, false) };
    inline SearchImageByPicAdvanceRequest& setDistinctProductId(bool distinctProductId) { DARABONBA_PTR_SET_VALUE(distinctProductId_, distinctProductId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline SearchImageByPicAdvanceRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchImageByPicAdvanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline SearchImageByPicAdvanceRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // picContentObject Field Functions 
    bool hasPicContentObject() const { return this->picContentObject_ != nullptr;};
    void deletePicContentObject() { this->picContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getPicContentObject() const { DARABONBA_GET(picContentObject_) };
    inline SearchImageByPicAdvanceRequest& setPicContentObject(shared_ptr<Darabonba::IStream> picContentObject) { DARABONBA_SET_VALUE(picContentObject_, picContentObject) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SearchImageByPicAdvanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline string getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, "") };
    inline SearchImageByPicAdvanceRequest& setScoreThreshold(string scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageByPicAdvanceRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The category of the product. For more information, see [Category references](https://help.aliyun.com/document_detail/179184.html).
    // 
    // *   For product search: If a category is specified, the specified category prevails. If no category is specified, the system estimates and selects a category. The category selected by the system is included in the response.
    // *   For generic search: The parameter value is set to 88888888 regardless of whether a category is specified.
    shared_ptr<int32_t> categoryId_ {};
    // Specifies whether to recognize the subject in the image and search for images based on the recognized subject. Valid values: true and false. Default value: true.
    // 
    // *   true: The system recognizes the subject in the image, and searches for images based on the recognized subject. The recognition result is included in the response.
    // *   false: The system does not recognize the subject of the image, and searches for images based on the entire image.
    shared_ptr<bool> crop_ {};
    shared_ptr<bool> distinctProductId_ {};
    // The filter conditions. int_attr supports the following operators: >, >=, <, <=, and =. str_attr supports the following operators: = and !=. You can set the logical operator between conditions to AND or OR.
    // 
    // Examples:
    // 
    // *   int_attr>=100
    // *   str_attr!="value1"
    // *   Example: int_attr=1000 AND str_attr="value1"
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The number of images to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> num_ {};
    // The image file. The image file is encoded in Base64.
    // 
    // *   The file size of the image cannot exceed 4 MB.
    // *   The following image formats are supported: PNG, JPG, JPEG, BMP, GIF, WebP, TIFF, and PPM.
    // *   The transmission timeout period cannot exceed 5 seconds.
    // *   For brand image searches, the length and the width of the image must range from 200 pixels to 4,096 pixels.
    // *   For cloth image searches, the length and the width of the image must range from 448 pixels to 4,096 pixels.
    // *   For product and generic image searches, the length and the width of the image must range from 100 pixels to 4,096 pixels.
    // *   The image cannot contain rotation settings.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> picContentObject_ {};
    // The subject area of the image. Specify the subject area in the following format: `x1,x2,y1,y2`. `x1 and y1` represent the upper-left corner pixel. `x2 and y2` represent the lower-right corner pixel.
    // 
    // >*   If you set the Region parameter, the system searches for images based on the value of Region regardless of the value of the Crop parameter.
    shared_ptr<string> region_ {};
    shared_ptr<string> scoreThreshold_ {};
    // The number of the image to return. Valid values: 0 to 499. Default value: 0.
    shared_ptr<int32_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
