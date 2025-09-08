// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageResultImageResult.hpp>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageResultTextResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(TextResult, textResult_);
      DARABONBA_PTR_TO_JSON(TextUrl, textUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(TextResult, textResult_);
      DARABONBA_PTR_FROM_JSON(TextUrl, textUrl_);
    };
    DescribeFileModerationResultResponseBodyDataPageResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResult(const DescribeFileModerationResultResponseBodyDataPageResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResult(DescribeFileModerationResultResponseBodyDataPageResult &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResult& operator=(const DescribeFileModerationResultResponseBodyDataPageResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResult& operator=(DescribeFileModerationResultResponseBodyDataPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageResult_ != nullptr
        && this->imageUrl_ != nullptr && this->pageNum_ != nullptr && this->textResult_ != nullptr && this->textUrl_ != nullptr; };
    // imageResult Field Functions 
    bool hasImageResult() const { return this->imageResult_ != nullptr;};
    void deleteImageResult() { this->imageResult_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult> & imageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult> imageResult() { DARABONBA_PTR_GET(imageResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult>) };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setImageResult(const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setImageResult(vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // textResult Field Functions 
    bool hasTextResult() const { return this->textResult_ != nullptr;};
    void deleteTextResult() { this->textResult_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult> & textResult() const { DARABONBA_PTR_GET_CONST(textResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult> textResult() { DARABONBA_PTR_GET(textResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult>) };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setTextResult(const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult> & textResult) { DARABONBA_PTR_SET_VALUE(textResult_, textResult) };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setTextResult(vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult> && textResult) { DARABONBA_PTR_SET_RVALUE(textResult_, textResult) };


    // textUrl Field Functions 
    bool hasTextUrl() const { return this->textUrl_ != nullptr;};
    void deleteTextUrl() { this->textUrl_ = nullptr;};
    inline string textUrl() const { DARABONBA_PTR_GET_DEFAULT(textUrl_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResult& setTextUrl(string textUrl) { DARABONBA_PTR_SET_VALUE(textUrl_, textUrl) };


  protected:
    // The image moderation results.
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResult>> imageResult_ = nullptr;
    // The image URL.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The text moderation results.
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageResultTextResult>> textResult_ = nullptr;
    // The text URL.
    std::shared_ptr<string> textUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
