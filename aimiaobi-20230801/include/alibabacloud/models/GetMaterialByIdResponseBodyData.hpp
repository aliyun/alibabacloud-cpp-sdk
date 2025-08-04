// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMATERIALBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMATERIALBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetMaterialByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMaterialByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DocKeywords, docKeywords_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_TO_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_TO_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TextContent, textContent_);
      DARABONBA_PTR_TO_JSON(ThumbnailInBase64, thumbnailInBase64_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetMaterialByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DocKeywords, docKeywords_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_FROM_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_FROM_JSON(SrcFrom, srcFrom_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TextContent, textContent_);
      DARABONBA_PTR_FROM_JSON(ThumbnailInBase64, thumbnailInBase64_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetMaterialByIdResponseBodyData() = default ;
    GetMaterialByIdResponseBodyData(const GetMaterialByIdResponseBodyData &) = default ;
    GetMaterialByIdResponseBodyData(GetMaterialByIdResponseBodyData &&) = default ;
    GetMaterialByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMaterialByIdResponseBodyData() = default ;
    GetMaterialByIdResponseBodyData& operator=(const GetMaterialByIdResponseBodyData &) = default ;
    GetMaterialByIdResponseBodyData& operator=(GetMaterialByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->author_ != nullptr
        && this->createTime_ != nullptr && this->createUser_ != nullptr && this->docKeywords_ != nullptr && this->docType_ != nullptr && this->externalUrl_ != nullptr
        && this->htmlContent_ != nullptr && this->id_ != nullptr && this->pubTime_ != nullptr && this->publicUrl_ != nullptr && this->shareAttr_ != nullptr
        && this->srcFrom_ != nullptr && this->summary_ != nullptr && this->textContent_ != nullptr && this->thumbnailInBase64_ != nullptr && this->title_ != nullptr
        && this->updateTime_ != nullptr && this->updateUser_ != nullptr && this->url_ != nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline GetMaterialByIdResponseBodyData& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMaterialByIdResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetMaterialByIdResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // docKeywords Field Functions 
    bool hasDocKeywords() const { return this->docKeywords_ != nullptr;};
    void deleteDocKeywords() { this->docKeywords_ = nullptr;};
    inline const vector<string> & docKeywords() const { DARABONBA_PTR_GET_CONST(docKeywords_, vector<string>) };
    inline vector<string> docKeywords() { DARABONBA_PTR_GET(docKeywords_, vector<string>) };
    inline GetMaterialByIdResponseBodyData& setDocKeywords(const vector<string> & docKeywords) { DARABONBA_PTR_SET_VALUE(docKeywords_, docKeywords) };
    inline GetMaterialByIdResponseBodyData& setDocKeywords(vector<string> && docKeywords) { DARABONBA_PTR_SET_RVALUE(docKeywords_, docKeywords) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline GetMaterialByIdResponseBodyData& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string externalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline GetMaterialByIdResponseBodyData& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // htmlContent Field Functions 
    bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
    void deleteHtmlContent() { this->htmlContent_ = nullptr;};
    inline string htmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
    inline GetMaterialByIdResponseBodyData& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMaterialByIdResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline GetMaterialByIdResponseBodyData& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string publicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline GetMaterialByIdResponseBodyData& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    // shareAttr Field Functions 
    bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
    void deleteShareAttr() { this->shareAttr_ = nullptr;};
    inline int32_t shareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
    inline GetMaterialByIdResponseBodyData& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


    // srcFrom Field Functions 
    bool hasSrcFrom() const { return this->srcFrom_ != nullptr;};
    void deleteSrcFrom() { this->srcFrom_ = nullptr;};
    inline string srcFrom() const { DARABONBA_PTR_GET_DEFAULT(srcFrom_, "") };
    inline GetMaterialByIdResponseBodyData& setSrcFrom(string srcFrom) { DARABONBA_PTR_SET_VALUE(srcFrom_, srcFrom) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetMaterialByIdResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline GetMaterialByIdResponseBodyData& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // thumbnailInBase64 Field Functions 
    bool hasThumbnailInBase64() const { return this->thumbnailInBase64_ != nullptr;};
    void deleteThumbnailInBase64() { this->thumbnailInBase64_ = nullptr;};
    inline string thumbnailInBase64() const { DARABONBA_PTR_GET_DEFAULT(thumbnailInBase64_, "") };
    inline GetMaterialByIdResponseBodyData& setThumbnailInBase64(string thumbnailInBase64) { DARABONBA_PTR_SET_VALUE(thumbnailInBase64_, thumbnailInBase64) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetMaterialByIdResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetMaterialByIdResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline GetMaterialByIdResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetMaterialByIdResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<vector<string>> docKeywords_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> externalUrl_ = nullptr;
    std::shared_ptr<string> htmlContent_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> publicUrl_ = nullptr;
    std::shared_ptr<int32_t> shareAttr_ = nullptr;
    std::shared_ptr<string> srcFrom_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> textContent_ = nullptr;
    std::shared_ptr<string> thumbnailInBase64_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUser_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
