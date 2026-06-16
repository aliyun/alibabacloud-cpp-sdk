// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIZECHARTEXTRACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIZECHARTEXTRACTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class SizeChartExtractShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SizeChartExtractShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LanguageModel, languageModel_);
    };
    friend void from_json(const Darabonba::Json& j, SizeChartExtractShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LanguageModel, languageModel_);
    };
    SizeChartExtractShrinkRequest() = default ;
    SizeChartExtractShrinkRequest(const SizeChartExtractShrinkRequest &) = default ;
    SizeChartExtractShrinkRequest(SizeChartExtractShrinkRequest &&) = default ;
    SizeChartExtractShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SizeChartExtractShrinkRequest() = default ;
    SizeChartExtractShrinkRequest& operator=(const SizeChartExtractShrinkRequest &) = default ;
    SizeChartExtractShrinkRequest& operator=(SizeChartExtractShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnNameListShrink_ == nullptr
        && this->imageUrl_ == nullptr && this->languageModel_ == nullptr; };
    // columnNameListShrink Field Functions 
    bool hasColumnNameListShrink() const { return this->columnNameListShrink_ != nullptr;};
    void deleteColumnNameListShrink() { this->columnNameListShrink_ = nullptr;};
    inline string getColumnNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(columnNameListShrink_, "") };
    inline SizeChartExtractShrinkRequest& setColumnNameListShrink(string columnNameListShrink) { DARABONBA_PTR_SET_VALUE(columnNameListShrink_, columnNameListShrink) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SizeChartExtractShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // languageModel Field Functions 
    bool hasLanguageModel() const { return this->languageModel_ != nullptr;};
    void deleteLanguageModel() { this->languageModel_ = nullptr;};
    inline string getLanguageModel() const { DARABONBA_PTR_GET_DEFAULT(languageModel_, "") };
    inline SizeChartExtractShrinkRequest& setLanguageModel(string languageModel) { DARABONBA_PTR_SET_VALUE(languageModel_, languageModel) };


  protected:
    // The list of column names to extract, such as Size, Bust, and Length.
    shared_ptr<string> columnNameListShrink_ {};
    // The URL of the size chart image to extract.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The language model that controls the output language, such as en and cn.
    shared_ptr<string> languageModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
