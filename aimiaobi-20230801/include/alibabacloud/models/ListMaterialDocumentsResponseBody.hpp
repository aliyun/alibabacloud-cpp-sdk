// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSRESPONSEBODY_HPP_
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
  class ListMaterialDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaterialDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaterialDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMaterialDocumentsResponseBody() = default ;
    ListMaterialDocumentsResponseBody(const ListMaterialDocumentsResponseBody &) = default ;
    ListMaterialDocumentsResponseBody(ListMaterialDocumentsResponseBody &&) = default ;
    ListMaterialDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaterialDocumentsResponseBody() = default ;
    ListMaterialDocumentsResponseBody& operator=(const ListMaterialDocumentsResponseBody &) = default ;
    ListMaterialDocumentsResponseBody& operator=(ListMaterialDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Author, author_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(DocKeywords, docKeywords_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
        DARABONBA_PTR_TO_JSON(FileAttr, fileAttr_);
        DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Author, author_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(DocKeywords, docKeywords_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
        DARABONBA_PTR_FROM_JSON(FileAttr, fileAttr_);
        DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
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
      class FileAttr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileAttr& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, FileAttr& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        FileAttr() = default ;
        FileAttr(const FileAttr &) = default ;
        FileAttr(FileAttr &&) = default ;
        FileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileAttr() = default ;
        FileAttr& operator=(const FileAttr &) = default ;
        FileAttr& operator=(FileAttr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->fileLength_ == nullptr && this->fileName_ == nullptr && this->height_ == nullptr && this->mimeType_ == nullptr && this->width_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline FileAttr& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileLength Field Functions 
        bool hasFileLength() const { return this->fileLength_ != nullptr;};
        void deleteFileLength() { this->fileLength_ = nullptr;};
        inline int64_t getFileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, 0L) };
        inline FileAttr& setFileLength(int64_t fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline FileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline FileAttr& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline FileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<double> duration_ {};
        shared_ptr<int64_t> fileLength_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> mimeType_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->author_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->createUserName_ == nullptr && this->docKeywords_ == nullptr && this->docType_ == nullptr
        && this->externalUrl_ == nullptr && this->fileAttr_ == nullptr && this->fileKey_ == nullptr && this->htmlContent_ == nullptr && this->id_ == nullptr
        && this->pubTime_ == nullptr && this->publicUrl_ == nullptr && this->shareAttr_ == nullptr && this->srcFrom_ == nullptr && this->summary_ == nullptr
        && this->textContent_ == nullptr && this->thumbnailInBase64_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr
        && this->updateUserName_ == nullptr && this->url_ == nullptr; };
      // author Field Functions 
      bool hasAuthor() const { return this->author_ != nullptr;};
      void deleteAuthor() { this->author_ = nullptr;};
      inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
      inline Data& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Data& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // docKeywords Field Functions 
      bool hasDocKeywords() const { return this->docKeywords_ != nullptr;};
      void deleteDocKeywords() { this->docKeywords_ = nullptr;};
      inline const vector<string> & getDocKeywords() const { DARABONBA_PTR_GET_CONST(docKeywords_, vector<string>) };
      inline vector<string> getDocKeywords() { DARABONBA_PTR_GET(docKeywords_, vector<string>) };
      inline Data& setDocKeywords(const vector<string> & docKeywords) { DARABONBA_PTR_SET_VALUE(docKeywords_, docKeywords) };
      inline Data& setDocKeywords(vector<string> && docKeywords) { DARABONBA_PTR_SET_RVALUE(docKeywords_, docKeywords) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // externalUrl Field Functions 
      bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
      void deleteExternalUrl() { this->externalUrl_ = nullptr;};
      inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
      inline Data& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


      // fileAttr Field Functions 
      bool hasFileAttr() const { return this->fileAttr_ != nullptr;};
      void deleteFileAttr() { this->fileAttr_ = nullptr;};
      inline const Data::FileAttr & getFileAttr() const { DARABONBA_PTR_GET_CONST(fileAttr_, Data::FileAttr) };
      inline Data::FileAttr getFileAttr() { DARABONBA_PTR_GET(fileAttr_, Data::FileAttr) };
      inline Data& setFileAttr(const Data::FileAttr & fileAttr) { DARABONBA_PTR_SET_VALUE(fileAttr_, fileAttr) };
      inline Data& setFileAttr(Data::FileAttr && fileAttr) { DARABONBA_PTR_SET_RVALUE(fileAttr_, fileAttr) };


      // fileKey Field Functions 
      bool hasFileKey() const { return this->fileKey_ != nullptr;};
      void deleteFileKey() { this->fileKey_ = nullptr;};
      inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
      inline Data& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


      // htmlContent Field Functions 
      bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
      void deleteHtmlContent() { this->htmlContent_ = nullptr;};
      inline string getHtmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
      inline Data& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Data& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // publicUrl Field Functions 
      bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
      void deletePublicUrl() { this->publicUrl_ = nullptr;};
      inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
      inline Data& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


      // shareAttr Field Functions 
      bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
      void deleteShareAttr() { this->shareAttr_ = nullptr;};
      inline int32_t getShareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
      inline Data& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


      // srcFrom Field Functions 
      bool hasSrcFrom() const { return this->srcFrom_ != nullptr;};
      void deleteSrcFrom() { this->srcFrom_ = nullptr;};
      inline string getSrcFrom() const { DARABONBA_PTR_GET_DEFAULT(srcFrom_, "") };
      inline Data& setSrcFrom(string srcFrom) { DARABONBA_PTR_SET_VALUE(srcFrom_, srcFrom) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // textContent Field Functions 
      bool hasTextContent() const { return this->textContent_ != nullptr;};
      void deleteTextContent() { this->textContent_ = nullptr;};
      inline string getTextContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
      inline Data& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


      // thumbnailInBase64 Field Functions 
      bool hasThumbnailInBase64() const { return this->thumbnailInBase64_ != nullptr;};
      void deleteThumbnailInBase64() { this->thumbnailInBase64_ = nullptr;};
      inline string getThumbnailInBase64() const { DARABONBA_PTR_GET_DEFAULT(thumbnailInBase64_, "") };
      inline Data& setThumbnailInBase64(string thumbnailInBase64) { DARABONBA_PTR_SET_VALUE(thumbnailInBase64_, thumbnailInBase64) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUser Field Functions 
      bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
      void deleteUpdateUser() { this->updateUser_ = nullptr;};
      inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
      inline Data& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


      // updateUserName Field Functions 
      bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
      void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
      inline string getUpdateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
      inline Data& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> author_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<vector<string>> docKeywords_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> externalUrl_ {};
      shared_ptr<Data::FileAttr> fileAttr_ {};
      shared_ptr<string> fileKey_ {};
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

    virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->size_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMaterialDocumentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListMaterialDocumentsResponseBody& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMaterialDocumentsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMaterialDocumentsResponseBody::Data>) };
    inline vector<ListMaterialDocumentsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMaterialDocumentsResponseBody::Data>) };
    inline ListMaterialDocumentsResponseBody& setData(const vector<ListMaterialDocumentsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMaterialDocumentsResponseBody& setData(vector<ListMaterialDocumentsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMaterialDocumentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMaterialDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMaterialDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListMaterialDocumentsResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMaterialDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMaterialDocumentsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<vector<ListMaterialDocumentsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
