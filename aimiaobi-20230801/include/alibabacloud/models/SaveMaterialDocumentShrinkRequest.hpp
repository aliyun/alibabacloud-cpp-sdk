// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMATERIALDOCUMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEMATERIALDOCUMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveMaterialDocumentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMaterialDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(BothSavePrivateAndShare, bothSavePrivateAndShare_);
      DARABONBA_PTR_TO_JSON(DocKeywords, docKeywordsShrink_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_TO_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TextContent, textContent_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMaterialDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(BothSavePrivateAndShare, bothSavePrivateAndShare_);
      DARABONBA_PTR_FROM_JSON(DocKeywords, docKeywordsShrink_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_FROM_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TextContent, textContent_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SaveMaterialDocumentShrinkRequest() = default ;
    SaveMaterialDocumentShrinkRequest(const SaveMaterialDocumentShrinkRequest &) = default ;
    SaveMaterialDocumentShrinkRequest(SaveMaterialDocumentShrinkRequest &&) = default ;
    SaveMaterialDocumentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMaterialDocumentShrinkRequest() = default ;
    SaveMaterialDocumentShrinkRequest& operator=(const SaveMaterialDocumentShrinkRequest &) = default ;
    SaveMaterialDocumentShrinkRequest& operator=(SaveMaterialDocumentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->author_ != nullptr && this->bothSavePrivateAndShare_ != nullptr && this->docKeywordsShrink_ != nullptr && this->docType_ != nullptr && this->externalUrl_ != nullptr
        && this->htmlContent_ != nullptr && this->pubTime_ != nullptr && this->shareAttr_ != nullptr && this->srcFrom_ != nullptr && this->summary_ != nullptr
        && this->textContent_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveMaterialDocumentShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline SaveMaterialDocumentShrinkRequest& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // bothSavePrivateAndShare Field Functions 
    bool hasBothSavePrivateAndShare() const { return this->bothSavePrivateAndShare_ != nullptr;};
    void deleteBothSavePrivateAndShare() { this->bothSavePrivateAndShare_ = nullptr;};
    inline bool bothSavePrivateAndShare() const { DARABONBA_PTR_GET_DEFAULT(bothSavePrivateAndShare_, false) };
    inline SaveMaterialDocumentShrinkRequest& setBothSavePrivateAndShare(bool bothSavePrivateAndShare) { DARABONBA_PTR_SET_VALUE(bothSavePrivateAndShare_, bothSavePrivateAndShare) };


    // docKeywordsShrink Field Functions 
    bool hasDocKeywordsShrink() const { return this->docKeywordsShrink_ != nullptr;};
    void deleteDocKeywordsShrink() { this->docKeywordsShrink_ = nullptr;};
    inline string docKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(docKeywordsShrink_, "") };
    inline SaveMaterialDocumentShrinkRequest& setDocKeywordsShrink(string docKeywordsShrink) { DARABONBA_PTR_SET_VALUE(docKeywordsShrink_, docKeywordsShrink) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline SaveMaterialDocumentShrinkRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string externalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline SaveMaterialDocumentShrinkRequest& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // htmlContent Field Functions 
    bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
    void deleteHtmlContent() { this->htmlContent_ = nullptr;};
    inline string htmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
    inline SaveMaterialDocumentShrinkRequest& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline SaveMaterialDocumentShrinkRequest& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // shareAttr Field Functions 
    bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
    void deleteShareAttr() { this->shareAttr_ = nullptr;};
    inline int32_t shareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
    inline SaveMaterialDocumentShrinkRequest& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


    // srcFrom Field Functions 
    bool hasSrcFrom() const { return this->srcFrom_ != nullptr;};
    void deleteSrcFrom() { this->srcFrom_ = nullptr;};
    inline string srcFrom() const { DARABONBA_PTR_GET_DEFAULT(srcFrom_, "") };
    inline SaveMaterialDocumentShrinkRequest& setSrcFrom(string srcFrom) { DARABONBA_PTR_SET_VALUE(srcFrom_, srcFrom) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline SaveMaterialDocumentShrinkRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline SaveMaterialDocumentShrinkRequest& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SaveMaterialDocumentShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SaveMaterialDocumentShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<bool> bothSavePrivateAndShare_ = nullptr;
    std::shared_ptr<string> docKeywordsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> externalUrl_ = nullptr;
    std::shared_ptr<string> htmlContent_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<int32_t> shareAttr_ = nullptr;
    std::shared_ptr<string> srcFrom_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> textContent_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
