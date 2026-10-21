// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIZECHARTEXTRACTASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIZECHARTEXTRACTASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class SizeChartExtractAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SizeChartExtractAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LanguageModel, languageModel_);
    };
    friend void from_json(const Darabonba::Json& j, SizeChartExtractAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LanguageModel, languageModel_);
    };
    SizeChartExtractAsyncShrinkRequest() = default ;
    SizeChartExtractAsyncShrinkRequest(const SizeChartExtractAsyncShrinkRequest &) = default ;
    SizeChartExtractAsyncShrinkRequest(SizeChartExtractAsyncShrinkRequest &&) = default ;
    SizeChartExtractAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SizeChartExtractAsyncShrinkRequest() = default ;
    SizeChartExtractAsyncShrinkRequest& operator=(const SizeChartExtractAsyncShrinkRequest &) = default ;
    SizeChartExtractAsyncShrinkRequest& operator=(SizeChartExtractAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->columnNameListShrink_ == nullptr && this->imageUrl_ == nullptr && this->languageModel_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SizeChartExtractAsyncShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // columnNameListShrink Field Functions 
    bool hasColumnNameListShrink() const { return this->columnNameListShrink_ != nullptr;};
    void deleteColumnNameListShrink() { this->columnNameListShrink_ = nullptr;};
    inline string getColumnNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(columnNameListShrink_, "") };
    inline SizeChartExtractAsyncShrinkRequest& setColumnNameListShrink(string columnNameListShrink) { DARABONBA_PTR_SET_VALUE(columnNameListShrink_, columnNameListShrink) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SizeChartExtractAsyncShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // languageModel Field Functions 
    bool hasLanguageModel() const { return this->languageModel_ != nullptr;};
    void deleteLanguageModel() { this->languageModel_ = nullptr;};
    inline string getLanguageModel() const { DARABONBA_PTR_GET_DEFAULT(languageModel_, "") };
    inline SizeChartExtractAsyncShrinkRequest& setLanguageModel(string languageModel) { DARABONBA_PTR_SET_VALUE(languageModel_, languageModel) };


  protected:
    // The business order number of the caller. It is recorded when the request is accepted and returned as is when you query the asynchronous task result.
    shared_ptr<string> bizId_ {};
    // The list of column names to extract, such as Size, Bust, and Length.
    shared_ptr<string> columnNameListShrink_ {};
    // The image URL. The image must be in the JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 pixels and 3000 × 3000 pixels, and the file size cannot exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The output language format. If you do not specify this parameter, the original language is used. If the original image language is Chinese or English, specifying en outputs English, and specifying cn outputs Chinese.
    shared_ptr<string> languageModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
