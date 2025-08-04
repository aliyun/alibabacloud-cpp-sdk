// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMATERIALDOCUMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMATERIALDOCUMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateMaterialDocumentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMaterialDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(DocKeywords, docKeywordsShrink_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_TO_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TextContent, textContent_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMaterialDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(DocKeywords, docKeywordsShrink_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_FROM_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TextContent, textContent_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    UpdateMaterialDocumentShrinkRequest() = default ;
    UpdateMaterialDocumentShrinkRequest(const UpdateMaterialDocumentShrinkRequest &) = default ;
    UpdateMaterialDocumentShrinkRequest(UpdateMaterialDocumentShrinkRequest &&) = default ;
    UpdateMaterialDocumentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMaterialDocumentShrinkRequest() = default ;
    UpdateMaterialDocumentShrinkRequest& operator=(const UpdateMaterialDocumentShrinkRequest &) = default ;
    UpdateMaterialDocumentShrinkRequest& operator=(UpdateMaterialDocumentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->author_ != nullptr && this->docKeywordsShrink_ != nullptr && this->docType_ != nullptr && this->externalUrl_ != nullptr && this->htmlContent_ != nullptr
        && this->id_ != nullptr && this->pubTime_ != nullptr && this->regionId_ != nullptr && this->shareAttr_ != nullptr && this->srcFrom_ != nullptr
        && this->summary_ != nullptr && this->textContent_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // docKeywordsShrink Field Functions 
    bool hasDocKeywordsShrink() const { return this->docKeywordsShrink_ != nullptr;};
    void deleteDocKeywordsShrink() { this->docKeywordsShrink_ = nullptr;};
    inline string docKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(docKeywordsShrink_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setDocKeywordsShrink(string docKeywordsShrink) { DARABONBA_PTR_SET_VALUE(docKeywordsShrink_, docKeywordsShrink) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string externalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // htmlContent Field Functions 
    bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
    void deleteHtmlContent() { this->htmlContent_ = nullptr;};
    inline string htmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateMaterialDocumentShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shareAttr Field Functions 
    bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
    void deleteShareAttr() { this->shareAttr_ = nullptr;};
    inline int32_t shareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
    inline UpdateMaterialDocumentShrinkRequest& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


    // srcFrom Field Functions 
    bool hasSrcFrom() const { return this->srcFrom_ != nullptr;};
    void deleteSrcFrom() { this->srcFrom_ = nullptr;};
    inline string srcFrom() const { DARABONBA_PTR_GET_DEFAULT(srcFrom_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setSrcFrom(string srcFrom) { DARABONBA_PTR_SET_VALUE(srcFrom_, srcFrom) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateMaterialDocumentShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> docKeywordsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> externalUrl_ = nullptr;
    std::shared_ptr<string> htmlContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
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
