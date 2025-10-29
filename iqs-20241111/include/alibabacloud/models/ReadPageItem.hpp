// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_READPAGEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageItem& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(html, html_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(rawHtml, rawHtml_);
      DARABONBA_PTR_TO_JSON(screenshot, screenshot_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(html, html_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(rawHtml, rawHtml_);
      DARABONBA_PTR_FROM_JSON(screenshot, screenshot_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    ReadPageItem() = default ;
    ReadPageItem(const ReadPageItem &) = default ;
    ReadPageItem(ReadPageItem &&) = default ;
    ReadPageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageItem() = default ;
    ReadPageItem& operator=(const ReadPageItem &) = default ;
    ReadPageItem& operator=(ReadPageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->html_ == nullptr && return this->markdown_ == nullptr && return this->rawHtml_ == nullptr && return this->screenshot_ == nullptr && return this->statusCode_ == nullptr
        && return this->text_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ReadPageItem& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string html() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline ReadPageItem& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline string markdown() const { DARABONBA_PTR_GET_DEFAULT(markdown_, "") };
    inline ReadPageItem& setMarkdown(string markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };


    // rawHtml Field Functions 
    bool hasRawHtml() const { return this->rawHtml_ != nullptr;};
    void deleteRawHtml() { this->rawHtml_ = nullptr;};
    inline string rawHtml() const { DARABONBA_PTR_GET_DEFAULT(rawHtml_, "") };
    inline ReadPageItem& setRawHtml(string rawHtml) { DARABONBA_PTR_SET_VALUE(rawHtml_, rawHtml) };


    // screenshot Field Functions 
    bool hasScreenshot() const { return this->screenshot_ != nullptr;};
    void deleteScreenshot() { this->screenshot_ = nullptr;};
    inline string screenshot() const { DARABONBA_PTR_GET_DEFAULT(screenshot_, "") };
    inline ReadPageItem& setScreenshot(string screenshot) { DARABONBA_PTR_SET_VALUE(screenshot_, screenshot) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ReadPageItem& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ReadPageItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> html_ = nullptr;
    std::shared_ptr<string> markdown_ = nullptr;
    std::shared_ptr<string> rawHtml_ = nullptr;
    std::shared_ptr<string> screenshot_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
