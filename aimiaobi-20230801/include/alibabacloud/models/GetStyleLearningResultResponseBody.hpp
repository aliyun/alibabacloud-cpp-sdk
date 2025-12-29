// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTRESPONSEBODY_HPP_
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
  class GetStyleLearningResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStyleLearningResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStyleLearningResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStyleLearningResultResponseBody() = default ;
    GetStyleLearningResultResponseBody(const GetStyleLearningResultResponseBody &) = default ;
    GetStyleLearningResultResponseBody(GetStyleLearningResultResponseBody &&) = default ;
    GetStyleLearningResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStyleLearningResultResponseBody() = default ;
    GetStyleLearningResultResponseBody& operator=(const GetStyleLearningResultResponseBody &) = default ;
    GetStyleLearningResultResponseBody& operator=(GetStyleLearningResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AigcResult, aigcResult_);
        DARABONBA_PTR_TO_JSON(ContentList, contentList_);
        DARABONBA_PTR_TO_JSON(CustomTextIdList, customTextIdList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaterialIdList, materialIdList_);
        DARABONBA_PTR_TO_JSON(MaterialInfoList, materialInfoList_);
        DARABONBA_PTR_TO_JSON(RewriteResult, rewriteResult_);
        DARABONBA_PTR_TO_JSON(StyleName, styleName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AigcResult, aigcResult_);
        DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
        DARABONBA_PTR_FROM_JSON(CustomTextIdList, customTextIdList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaterialIdList, materialIdList_);
        DARABONBA_PTR_FROM_JSON(MaterialInfoList, materialInfoList_);
        DARABONBA_PTR_FROM_JSON(RewriteResult, rewriteResult_);
        DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MaterialInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaterialInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Author, author_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
          DARABONBA_PTR_TO_JSON(DocKeywords, docKeywords_);
          DARABONBA_PTR_TO_JSON(DocType, docType_);
          DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
          DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
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
          DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, MaterialInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Author, author_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
          DARABONBA_PTR_FROM_JSON(DocKeywords, docKeywords_);
          DARABONBA_PTR_FROM_JSON(DocType, docType_);
          DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
          DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
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
          DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        MaterialInfoList() = default ;
        MaterialInfoList(const MaterialInfoList &) = default ;
        MaterialInfoList(MaterialInfoList &&) = default ;
        MaterialInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaterialInfoList() = default ;
        MaterialInfoList& operator=(const MaterialInfoList &) = default ;
        MaterialInfoList& operator=(MaterialInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->author_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->createUserName_ == nullptr && this->docKeywords_ == nullptr && this->docType_ == nullptr
        && this->externalUrl_ == nullptr && this->fileLength_ == nullptr && this->htmlContent_ == nullptr && this->id_ == nullptr && this->pubTime_ == nullptr
        && this->publicUrl_ == nullptr && this->shareAttr_ == nullptr && this->srcFrom_ == nullptr && this->summary_ == nullptr && this->textContent_ == nullptr
        && this->thumbnailInBase64_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr && this->updateUserName_ == nullptr
        && this->url_ == nullptr; };
        // author Field Functions 
        bool hasAuthor() const { return this->author_ != nullptr;};
        void deleteAuthor() { this->author_ = nullptr;};
        inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
        inline MaterialInfoList& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MaterialInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline MaterialInfoList& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // createUserName Field Functions 
        bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
        void deleteCreateUserName() { this->createUserName_ = nullptr;};
        inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
        inline MaterialInfoList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


        // docKeywords Field Functions 
        bool hasDocKeywords() const { return this->docKeywords_ != nullptr;};
        void deleteDocKeywords() { this->docKeywords_ = nullptr;};
        inline const vector<string> & getDocKeywords() const { DARABONBA_PTR_GET_CONST(docKeywords_, vector<string>) };
        inline vector<string> getDocKeywords() { DARABONBA_PTR_GET(docKeywords_, vector<string>) };
        inline MaterialInfoList& setDocKeywords(const vector<string> & docKeywords) { DARABONBA_PTR_SET_VALUE(docKeywords_, docKeywords) };
        inline MaterialInfoList& setDocKeywords(vector<string> && docKeywords) { DARABONBA_PTR_SET_RVALUE(docKeywords_, docKeywords) };


        // docType Field Functions 
        bool hasDocType() const { return this->docType_ != nullptr;};
        void deleteDocType() { this->docType_ = nullptr;};
        inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
        inline MaterialInfoList& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


        // externalUrl Field Functions 
        bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
        void deleteExternalUrl() { this->externalUrl_ = nullptr;};
        inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
        inline MaterialInfoList& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


        // fileLength Field Functions 
        bool hasFileLength() const { return this->fileLength_ != nullptr;};
        void deleteFileLength() { this->fileLength_ = nullptr;};
        inline int32_t getFileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, 0) };
        inline MaterialInfoList& setFileLength(int32_t fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


        // htmlContent Field Functions 
        bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
        void deleteHtmlContent() { this->htmlContent_ = nullptr;};
        inline string getHtmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
        inline MaterialInfoList& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MaterialInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline MaterialInfoList& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // publicUrl Field Functions 
        bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
        void deletePublicUrl() { this->publicUrl_ = nullptr;};
        inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
        inline MaterialInfoList& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


        // shareAttr Field Functions 
        bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
        void deleteShareAttr() { this->shareAttr_ = nullptr;};
        inline int32_t getShareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
        inline MaterialInfoList& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


        // srcFrom Field Functions 
        bool hasSrcFrom() const { return this->srcFrom_ != nullptr;};
        void deleteSrcFrom() { this->srcFrom_ = nullptr;};
        inline string getSrcFrom() const { DARABONBA_PTR_GET_DEFAULT(srcFrom_, "") };
        inline MaterialInfoList& setSrcFrom(string srcFrom) { DARABONBA_PTR_SET_VALUE(srcFrom_, srcFrom) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline MaterialInfoList& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // textContent Field Functions 
        bool hasTextContent() const { return this->textContent_ != nullptr;};
        void deleteTextContent() { this->textContent_ = nullptr;};
        inline string getTextContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
        inline MaterialInfoList& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


        // thumbnailInBase64 Field Functions 
        bool hasThumbnailInBase64() const { return this->thumbnailInBase64_ != nullptr;};
        void deleteThumbnailInBase64() { this->thumbnailInBase64_ = nullptr;};
        inline string getThumbnailInBase64() const { DARABONBA_PTR_GET_DEFAULT(thumbnailInBase64_, "") };
        inline MaterialInfoList& setThumbnailInBase64(string thumbnailInBase64) { DARABONBA_PTR_SET_VALUE(thumbnailInBase64_, thumbnailInBase64) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MaterialInfoList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline MaterialInfoList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateUser Field Functions 
        bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
        void deleteUpdateUser() { this->updateUser_ = nullptr;};
        inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
        inline MaterialInfoList& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


        // updateUserName Field Functions 
        bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
        void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
        inline string getUpdateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
        inline MaterialInfoList& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline MaterialInfoList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> author_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> createUser_ {};
        shared_ptr<string> createUserName_ {};
        shared_ptr<vector<string>> docKeywords_ {};
        shared_ptr<string> docType_ {};
        shared_ptr<string> externalUrl_ {};
        shared_ptr<int32_t> fileLength_ {};
        shared_ptr<string> htmlContent_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> publicUrl_ {};
        shared_ptr<int32_t> shareAttr_ {};
        shared_ptr<string> srcFrom_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> textContent_ {};
        shared_ptr<string> thumbnailInBase64_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> updateUser_ {};
        shared_ptr<string> updateUserName_ {};
        shared_ptr<string> url_ {};
      };

      class ContentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentList& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
        };
        friend void from_json(const Darabonba::Json& j, ContentList& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
        };
        ContentList() = default ;
        ContentList(const ContentList &) = default ;
        ContentList(ContentList &&) = default ;
        ContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentList() = default ;
        ContentList& operator=(const ContentList &) = default ;
        ContentList& operator=(ContentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->id_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr
        && this->updateUser_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ContentList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ContentList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline ContentList& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ContentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ContentList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline ContentList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateUser Field Functions 
        bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
        void deleteUpdateUser() { this->updateUser_ = nullptr;};
        inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
        inline ContentList& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> createUser_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> updateUser_ {};
      };

      virtual bool empty() const override { return this->aigcResult_ == nullptr
        && this->contentList_ == nullptr && this->customTextIdList_ == nullptr && this->id_ == nullptr && this->materialIdList_ == nullptr && this->materialInfoList_ == nullptr
        && this->rewriteResult_ == nullptr && this->styleName_ == nullptr && this->taskId_ == nullptr; };
      // aigcResult Field Functions 
      bool hasAigcResult() const { return this->aigcResult_ != nullptr;};
      void deleteAigcResult() { this->aigcResult_ = nullptr;};
      inline string getAigcResult() const { DARABONBA_PTR_GET_DEFAULT(aigcResult_, "") };
      inline Data& setAigcResult(string aigcResult) { DARABONBA_PTR_SET_VALUE(aigcResult_, aigcResult) };


      // contentList Field Functions 
      bool hasContentList() const { return this->contentList_ != nullptr;};
      void deleteContentList() { this->contentList_ = nullptr;};
      inline const vector<Data::ContentList> & getContentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<Data::ContentList>) };
      inline vector<Data::ContentList> getContentList() { DARABONBA_PTR_GET(contentList_, vector<Data::ContentList>) };
      inline Data& setContentList(const vector<Data::ContentList> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
      inline Data& setContentList(vector<Data::ContentList> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


      // customTextIdList Field Functions 
      bool hasCustomTextIdList() const { return this->customTextIdList_ != nullptr;};
      void deleteCustomTextIdList() { this->customTextIdList_ = nullptr;};
      inline const vector<int64_t> & getCustomTextIdList() const { DARABONBA_PTR_GET_CONST(customTextIdList_, vector<int64_t>) };
      inline vector<int64_t> getCustomTextIdList() { DARABONBA_PTR_GET(customTextIdList_, vector<int64_t>) };
      inline Data& setCustomTextIdList(const vector<int64_t> & customTextIdList) { DARABONBA_PTR_SET_VALUE(customTextIdList_, customTextIdList) };
      inline Data& setCustomTextIdList(vector<int64_t> && customTextIdList) { DARABONBA_PTR_SET_RVALUE(customTextIdList_, customTextIdList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // materialIdList Field Functions 
      bool hasMaterialIdList() const { return this->materialIdList_ != nullptr;};
      void deleteMaterialIdList() { this->materialIdList_ = nullptr;};
      inline const vector<int64_t> & getMaterialIdList() const { DARABONBA_PTR_GET_CONST(materialIdList_, vector<int64_t>) };
      inline vector<int64_t> getMaterialIdList() { DARABONBA_PTR_GET(materialIdList_, vector<int64_t>) };
      inline Data& setMaterialIdList(const vector<int64_t> & materialIdList) { DARABONBA_PTR_SET_VALUE(materialIdList_, materialIdList) };
      inline Data& setMaterialIdList(vector<int64_t> && materialIdList) { DARABONBA_PTR_SET_RVALUE(materialIdList_, materialIdList) };


      // materialInfoList Field Functions 
      bool hasMaterialInfoList() const { return this->materialInfoList_ != nullptr;};
      void deleteMaterialInfoList() { this->materialInfoList_ = nullptr;};
      inline const vector<Data::MaterialInfoList> & getMaterialInfoList() const { DARABONBA_PTR_GET_CONST(materialInfoList_, vector<Data::MaterialInfoList>) };
      inline vector<Data::MaterialInfoList> getMaterialInfoList() { DARABONBA_PTR_GET(materialInfoList_, vector<Data::MaterialInfoList>) };
      inline Data& setMaterialInfoList(const vector<Data::MaterialInfoList> & materialInfoList) { DARABONBA_PTR_SET_VALUE(materialInfoList_, materialInfoList) };
      inline Data& setMaterialInfoList(vector<Data::MaterialInfoList> && materialInfoList) { DARABONBA_PTR_SET_RVALUE(materialInfoList_, materialInfoList) };


      // rewriteResult Field Functions 
      bool hasRewriteResult() const { return this->rewriteResult_ != nullptr;};
      void deleteRewriteResult() { this->rewriteResult_ = nullptr;};
      inline string getRewriteResult() const { DARABONBA_PTR_GET_DEFAULT(rewriteResult_, "") };
      inline Data& setRewriteResult(string rewriteResult) { DARABONBA_PTR_SET_VALUE(rewriteResult_, rewriteResult) };


      // styleName Field Functions 
      bool hasStyleName() const { return this->styleName_ != nullptr;};
      void deleteStyleName() { this->styleName_ = nullptr;};
      inline string getStyleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
      inline Data& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> aigcResult_ {};
      shared_ptr<vector<Data::ContentList>> contentList_ {};
      shared_ptr<vector<int64_t>> customTextIdList_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<int64_t>> materialIdList_ {};
      shared_ptr<vector<Data::MaterialInfoList>> materialInfoList_ {};
      shared_ptr<string> rewriteResult_ {};
      shared_ptr<string> styleName_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStyleLearningResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStyleLearningResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStyleLearningResultResponseBody::Data) };
    inline GetStyleLearningResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStyleLearningResultResponseBody::Data) };
    inline GetStyleLearningResultResponseBody& setData(const GetStyleLearningResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStyleLearningResultResponseBody& setData(GetStyleLearningResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetStyleLearningResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStyleLearningResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStyleLearningResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStyleLearningResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetStyleLearningResultResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
