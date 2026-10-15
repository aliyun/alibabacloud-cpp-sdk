// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIZECHARTEXTRACTASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIZECHARTEXTRACTASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class SizeChartExtractAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SizeChartExtractAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNameList, columnNameList_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LanguageModel, languageModel_);
    };
    friend void from_json(const Darabonba::Json& j, SizeChartExtractAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNameList, columnNameList_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LanguageModel, languageModel_);
    };
    SizeChartExtractAsyncRequest() = default ;
    SizeChartExtractAsyncRequest(const SizeChartExtractAsyncRequest &) = default ;
    SizeChartExtractAsyncRequest(SizeChartExtractAsyncRequest &&) = default ;
    SizeChartExtractAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SizeChartExtractAsyncRequest() = default ;
    SizeChartExtractAsyncRequest& operator=(const SizeChartExtractAsyncRequest &) = default ;
    SizeChartExtractAsyncRequest& operator=(SizeChartExtractAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnNameList_ == nullptr
        && this->imageUrl_ == nullptr && this->languageModel_ == nullptr; };
    // columnNameList Field Functions 
    bool hasColumnNameList() const { return this->columnNameList_ != nullptr;};
    void deleteColumnNameList() { this->columnNameList_ = nullptr;};
    inline const vector<string> & getColumnNameList() const { DARABONBA_PTR_GET_CONST(columnNameList_, vector<string>) };
    inline vector<string> getColumnNameList() { DARABONBA_PTR_GET(columnNameList_, vector<string>) };
    inline SizeChartExtractAsyncRequest& setColumnNameList(const vector<string> & columnNameList) { DARABONBA_PTR_SET_VALUE(columnNameList_, columnNameList) };
    inline SizeChartExtractAsyncRequest& setColumnNameList(vector<string> && columnNameList) { DARABONBA_PTR_SET_RVALUE(columnNameList_, columnNameList) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SizeChartExtractAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // languageModel Field Functions 
    bool hasLanguageModel() const { return this->languageModel_ != nullptr;};
    void deleteLanguageModel() { this->languageModel_ = nullptr;};
    inline string getLanguageModel() const { DARABONBA_PTR_GET_DEFAULT(languageModel_, "") };
    inline SizeChartExtractAsyncRequest& setLanguageModel(string languageModel) { DARABONBA_PTR_SET_VALUE(languageModel_, languageModel) };


  protected:
    // The list of column names to extract, such as Size, Bust, and Length.
    shared_ptr<vector<string>> columnNameList_ {};
    // The image URL. The image must be in the JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 pixels and 3000 × 3000 pixels. The file size cannot exceed 10 MB.
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
