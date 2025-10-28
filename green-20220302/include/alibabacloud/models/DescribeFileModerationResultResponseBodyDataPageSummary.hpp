// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary.hpp>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ImageSummary, imageSummary_);
      DARABONBA_PTR_TO_JSON(PageSum, pageSum_);
      DARABONBA_PTR_TO_JSON(TextSummary, textSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageSummary, imageSummary_);
      DARABONBA_PTR_FROM_JSON(PageSum, pageSum_);
      DARABONBA_PTR_FROM_JSON(TextSummary, textSummary_);
    };
    DescribeFileModerationResultResponseBodyDataPageSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummary(const DescribeFileModerationResultResponseBodyDataPageSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummary(DescribeFileModerationResultResponseBodyDataPageSummary &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummary& operator=(const DescribeFileModerationResultResponseBodyDataPageSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummary& operator=(DescribeFileModerationResultResponseBodyDataPageSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageSummary_ == nullptr
        && return this->pageSum_ == nullptr && return this->textSummary_ == nullptr; };
    // imageSummary Field Functions 
    bool hasImageSummary() const { return this->imageSummary_ != nullptr;};
    void deleteImageSummary() { this->imageSummary_ = nullptr;};
    inline const Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary & imageSummary() const { DARABONBA_PTR_GET_CONST(imageSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary) };
    inline Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary imageSummary() { DARABONBA_PTR_GET(imageSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary) };
    inline DescribeFileModerationResultResponseBodyDataPageSummary& setImageSummary(const Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary & imageSummary) { DARABONBA_PTR_SET_VALUE(imageSummary_, imageSummary) };
    inline DescribeFileModerationResultResponseBodyDataPageSummary& setImageSummary(Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary && imageSummary) { DARABONBA_PTR_SET_RVALUE(imageSummary_, imageSummary) };


    // pageSum Field Functions 
    bool hasPageSum() const { return this->pageSum_ != nullptr;};
    void deletePageSum() { this->pageSum_ = nullptr;};
    inline int32_t pageSum() const { DARABONBA_PTR_GET_DEFAULT(pageSum_, 0) };
    inline DescribeFileModerationResultResponseBodyDataPageSummary& setPageSum(int32_t pageSum) { DARABONBA_PTR_SET_VALUE(pageSum_, pageSum) };


    // textSummary Field Functions 
    bool hasTextSummary() const { return this->textSummary_ != nullptr;};
    void deleteTextSummary() { this->textSummary_ = nullptr;};
    inline const Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary & textSummary() const { DARABONBA_PTR_GET_CONST(textSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary) };
    inline Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary textSummary() { DARABONBA_PTR_GET(textSummary_, Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary) };
    inline DescribeFileModerationResultResponseBodyDataPageSummary& setTextSummary(const Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary & textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };
    inline DescribeFileModerationResultResponseBodyDataPageSummary& setTextSummary(Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary && textSummary) { DARABONBA_PTR_SET_RVALUE(textSummary_, textSummary) };


  protected:
    // Image Results Summary
    std::shared_ptr<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary> imageSummary_ = nullptr;
    // Number of pages
    std::shared_ptr<int32_t> pageSum_ = nullptr;
    // Text Results Summary
    std::shared_ptr<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary> textSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
