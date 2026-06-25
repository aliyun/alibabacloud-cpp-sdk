// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(DistinctProductId, distinctProductId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SearchImageByNameRequest() = default ;
    SearchImageByNameRequest(const SearchImageByNameRequest &) = default ;
    SearchImageByNameRequest(SearchImageByNameRequest &&) = default ;
    SearchImageByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByNameRequest() = default ;
    SearchImageByNameRequest& operator=(const SearchImageByNameRequest &) = default ;
    SearchImageByNameRequest& operator=(SearchImageByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->distinctProductId_ == nullptr && this->filter_ == nullptr && this->instanceName_ == nullptr && this->num_ == nullptr && this->picName_ == nullptr
        && this->productId_ == nullptr && this->scoreThreshold_ == nullptr && this->start_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline SearchImageByNameRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // distinctProductId Field Functions 
    bool hasDistinctProductId() const { return this->distinctProductId_ != nullptr;};
    void deleteDistinctProductId() { this->distinctProductId_ = nullptr;};
    inline bool getDistinctProductId() const { DARABONBA_PTR_GET_DEFAULT(distinctProductId_, false) };
    inline SearchImageByNameRequest& setDistinctProductId(bool distinctProductId) { DARABONBA_PTR_SET_VALUE(distinctProductId_, distinctProductId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline SearchImageByNameRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchImageByNameRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline SearchImageByNameRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline SearchImageByNameRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline SearchImageByNameRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline string getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, "") };
    inline SearchImageByNameRequest& setScoreThreshold(string scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageByNameRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The product category. For more information, see [Category reference](https://help.aliyun.com/document_detail/179184.html).
    //  - For product image search, if you specify a category, the specified category is used. If you do not specify a category, the system predicts the category. You can obtain the predicted category from the response.
    // <props="china">
    //  - For fabric, trademark, generic, home furnishing, and industrial hardware searches, the system sets the category to 88888888 regardless of whether you specify a category.
    // 
    // <props="intl">
    // - For generic image search, the system sets the category to 88888888 regardless of whether you specify a category..
    shared_ptr<int32_t> categoryId_ {};
    // Specifies whether to deduplicate results based on ProductId.
    // > Set this parameter to true to enable deduplication.
    shared_ptr<bool> distinctProductId_ {};
    // The filter condition. The int_attr field supports the following operators: in, not in, greater than (>), greater than or equal to (>=), less than (<), less than or equal to (<=), and equal to (=). The str_attr field supports the following operators: in, not in, equal to (=), and not equal to (!=). Multiple conditions can be connected by using AND and OR.
    // Examples:
    // - int_attr>=100.
    // - str_attr!="value1".
    // - int_attr=1000 AND str_attr="value1".
    // 
    // >The maximum length is 4,096 characters.
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Make sure you distinguish between them.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The number of results to return. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> num_ {};
    // The image name.
    // 
    // This parameter is required.
    shared_ptr<string> picName_ {};
    // The product ID.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The similarity score threshold. If you specify this parameter, only images with a similarity score greater than or equal to the threshold are returned. Valid values: 0.00 to 1.00. Up to two decimal places are supported. Default value: 0.00.
    shared_ptr<string> scoreThreshold_ {};
    // The start position of the results to return. Valid values: 0 to 499. Default value: 0.
    shared_ptr<int32_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
