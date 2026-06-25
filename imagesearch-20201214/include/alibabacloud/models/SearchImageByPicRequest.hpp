// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByPicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByPicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(PicContent, picContent_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByPicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(PicContent, picContent_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SearchImageByPicRequest() = default ;
    SearchImageByPicRequest(const SearchImageByPicRequest &) = default ;
    SearchImageByPicRequest(SearchImageByPicRequest &&) = default ;
    SearchImageByPicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByPicRequest() = default ;
    SearchImageByPicRequest& operator=(const SearchImageByPicRequest &) = default ;
    SearchImageByPicRequest& operator=(SearchImageByPicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->crop_ == nullptr && this->distinctProductId_ == nullptr && this->filter_ == nullptr && this->instanceName_ == nullptr && this->num_ == nullptr
        && this->picContent_ == nullptr && this->region_ == nullptr && this->scoreThreshold_ == nullptr && this->start_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline SearchImageByPicRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline bool getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, false) };
    inline SearchImageByPicRequest& setCrop(bool crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // distinctProductId Field Functions 
    bool hasDistinctProductId() const { return this->distinctProductId_ != nullptr;};
    void deleteDistinctProductId() { this->distinctProductId_ = nullptr;};
    inline bool getDistinctProductId() const { DARABONBA_PTR_GET_DEFAULT(distinctProductId_, false) };
    inline SearchImageByPicRequest& setDistinctProductId(bool distinctProductId) { DARABONBA_PTR_SET_VALUE(distinctProductId_, distinctProductId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline SearchImageByPicRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchImageByPicRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline SearchImageByPicRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // picContent Field Functions 
    bool hasPicContent() const { return this->picContent_ != nullptr;};
    void deletePicContent() { this->picContent_ = nullptr;};
    inline string getPicContent() const { DARABONBA_PTR_GET_DEFAULT(picContent_, "") };
    inline SearchImageByPicRequest& setPicContent(string picContent) { DARABONBA_PTR_SET_VALUE(picContent_, picContent) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SearchImageByPicRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline string getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, "") };
    inline SearchImageByPicRequest& setScoreThreshold(string scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageByPicRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The product category. For more information, see [Category reference](https://help.aliyun.com/document_detail/179184.html).
    //  - For product image search, if you specify a category, the specified category is used. If you do not specify a category, the system predicts the category. You can obtain the predicted category from the response.
    // <props="china">
    //  - For fabric, trademark, generic furniture, and industrial hardware image search, the system sets the category to 88888888 regardless of whether you specify a category.
    // 
    // <props="intl">
    //  - For generic image search, the system sets the category to 88888888 regardless of whether you specify a category.
    // .
    shared_ptr<int32_t> categoryId_ {};
    // Specifies whether to perform subject identification. Default value: true.
    //  - If this parameter is set to true, the system performs subject identification and searches based on the identified subject. You can obtain the subject identification result from the response.
    //  - If this parameter is set to false, the system does not perform subject identification and searches based on the entire image.
    // <props="china">
    // - For fabric image search, this parameter is ignored and the system searches based on the entire image.
    // .
    shared_ptr<bool> crop_ {};
    // Specifies whether to deduplicate results based on the ProductId field during the search. If this parameter is set to true, deduplication is performed.
    shared_ptr<bool> distinctProductId_ {};
    // The filter condition. The int_attr field supports the following operators: in, not in, greater than (>), greater than or equal to (>=), less than (<), less than or equal to (<=), and equal to (=). The str_attr field supports the following operators: in, not in, equal to (=), and not equal to (!=). Multiple conditions can be connected by using AND and OR.
    // Examples:
    // - int_attr >= 100.
    // - str_attr != "value1".
    // - int_attr = 1000 AND str_attr = "value1".
    // 
    // >A maximum of 4096 characters are supported.
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, see [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Make sure that you distinguish between them.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The number of results to return. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> num_ {};
    // The image content.
    //  - The image size cannot exceed 4 MB.
    //  - Image formats: PNG, JPG, JPEG, BMP, GIF, WEBP, TIFF, and PPM.
    //  - The transmission wait time cannot exceed 5 seconds.
    // <props="china">
    //  - For product image search, generic image search, furniture image search, and industrial hardware image search, the image width and height must be greater than or equal to 100 px and less than or equal to 4096 px.
    // For trademark image search, the image width and height must be greater than or equal to 200 px and less than 4096 px.
    // For fabric image search, the image width and height must be greater than or equal to 448 px and less than or equal to 4096 px.
    // 
    // <props="intl">
    //  - For product image search and generic image search, the image width and height must be greater than or equal to 100 px and less than or equal to 4096 px.
    // 
    // - The image cannot contain rotation information.
    // 
    // > - **Call by using the SDK:**
    //   - If you use the V3 SDK, you do not need to specify the PicContent field. The SDK encapsulates this field as PicContentObject and automatically converts it to Base64 encoding. For specific examples, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
    //   - The SDK does not support directly passing an image URL. The V3 SDK provides an alternative method to upload images by URL. For specific examples, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
    // - **Call by using the Alibaba Cloud OpenAPI platform:**
    //   - If you use the **2019-03-25** version, set the **PicContent** field to the **Base64**-encoded string of the image.
    //   - If you use the **2020-12-14** version, click the upload button in the **PicContent** field to upload the image.
    // 
    // This parameter is required.
    shared_ptr<string> picContent_ {};
    // The subject region of the image, in the format of `x1,x2,y1,y2`, where `x1,y1` is the upper-left point and `x2,y2` is the lower-right point.
    // > - If you specify Region, the system searches based on the specified Region regardless of the value of the Crop parameter.
    // <props="china">
    // - For fabric image search, this parameter is ignored and the system searches based on the entire image.
    // .
    shared_ptr<string> region_ {};
    // The similarity score threshold. After you specify this threshold, only images with a similarity score greater than or equal to the threshold are returned. Valid values: 0.00 to 1.00. Up to two decimal places are supported. Default value: 0.00.
    shared_ptr<string> scoreThreshold_ {};
    // The start position of the results to return. Valid values: 0 to 499. Default value: 0.
    shared_ptr<int32_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
