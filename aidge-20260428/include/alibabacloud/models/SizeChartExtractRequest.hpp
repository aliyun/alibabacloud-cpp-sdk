// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIZECHARTEXTRACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIZECHARTEXTRACTREQUEST_HPP_
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
  class SizeChartExtractRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SizeChartExtractRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNameList, columnNameList_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LanguageModel, languageModel_);
    };
    friend void from_json(const Darabonba::Json& j, SizeChartExtractRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNameList, columnNameList_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LanguageModel, languageModel_);
    };
    SizeChartExtractRequest() = default ;
    SizeChartExtractRequest(const SizeChartExtractRequest &) = default ;
    SizeChartExtractRequest(SizeChartExtractRequest &&) = default ;
    SizeChartExtractRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SizeChartExtractRequest() = default ;
    SizeChartExtractRequest& operator=(const SizeChartExtractRequest &) = default ;
    SizeChartExtractRequest& operator=(SizeChartExtractRequest &&) = default ;
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
    inline SizeChartExtractRequest& setColumnNameList(const vector<string> & columnNameList) { DARABONBA_PTR_SET_VALUE(columnNameList_, columnNameList) };
    inline SizeChartExtractRequest& setColumnNameList(vector<string> && columnNameList) { DARABONBA_PTR_SET_RVALUE(columnNameList_, columnNameList) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SizeChartExtractRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // languageModel Field Functions 
    bool hasLanguageModel() const { return this->languageModel_ != nullptr;};
    void deleteLanguageModel() { this->languageModel_ = nullptr;};
    inline string getLanguageModel() const { DARABONBA_PTR_GET_DEFAULT(languageModel_, "") };
    inline SizeChartExtractRequest& setLanguageModel(string languageModel) { DARABONBA_PTR_SET_VALUE(languageModel_, languageModel) };


  protected:
    // The list of column names to extract, such as Size, Bust, and Length.
    shared_ptr<vector<string>> columnNameList_ {};
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
