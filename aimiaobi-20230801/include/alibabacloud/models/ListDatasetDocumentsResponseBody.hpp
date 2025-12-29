// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSRESPONSEBODY_HPP_
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
  class ListDatasetDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetDocumentsResponseBody() = default ;
    ListDatasetDocumentsResponseBody(const ListDatasetDocumentsResponseBody &) = default ;
    ListDatasetDocumentsResponseBody(ListDatasetDocumentsResponseBody &&) = default ;
    ListDatasetDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetDocumentsResponseBody() = default ;
    ListDatasetDocumentsResponseBody& operator=(const ListDatasetDocumentsResponseBody &) = default ;
    ListDatasetDocumentsResponseBody& operator=(ListDatasetDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Extend1, extend1_);
        DARABONBA_PTR_TO_JSON(Extend2, extend2_);
        DARABONBA_PTR_TO_JSON(Extend3, extend3_);
        DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
        DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
        DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
        DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      class MultimodalMedias : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultimodalMedias& obj) { 
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        };
        friend void from_json(const Darabonba::Json& j, MultimodalMedias& obj) { 
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        };
        MultimodalMedias() = default ;
        MultimodalMedias(const MultimodalMedias &) = default ;
        MultimodalMedias(MultimodalMedias &&) = default ;
        MultimodalMedias(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultimodalMedias() = default ;
        MultimodalMedias& operator=(const MultimodalMedias &) = default ;
        MultimodalMedias& operator=(MultimodalMedias &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline MultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MultimodalMedias& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline MultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      protected:
        shared_ptr<string> fileUrl_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<string> mediaType_ {};
      };

      virtual bool empty() const override { return this->categoryUuid_ == nullptr
        && this->content_ == nullptr && this->createTime_ == nullptr && this->disableHandleMultimodalMedia_ == nullptr && this->docId_ == nullptr && this->docType_ == nullptr
        && this->docUuid_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->multimodalMedias_ == nullptr
        && this->pubTime_ == nullptr && this->sourceFrom_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->updateTime_ == nullptr && this->url_ == nullptr; };
      // categoryUuid Field Functions 
      bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
      void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
      inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
      inline Data& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // disableHandleMultimodalMedia Field Functions 
      bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
      void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
      inline bool getDisableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
      inline Data& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Data& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Data& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // extend1 Field Functions 
      bool hasExtend1() const { return this->extend1_ != nullptr;};
      void deleteExtend1() { this->extend1_ = nullptr;};
      inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
      inline Data& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


      // extend2 Field Functions 
      bool hasExtend2() const { return this->extend2_ != nullptr;};
      void deleteExtend2() { this->extend2_ = nullptr;};
      inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
      inline Data& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


      // extend3 Field Functions 
      bool hasExtend3() const { return this->extend3_ != nullptr;};
      void deleteExtend3() { this->extend3_ = nullptr;};
      inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
      inline Data& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


      // multimodalMedias Field Functions 
      bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
      void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
      inline const vector<Data::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Data::MultimodalMedias>) };
      inline vector<Data::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Data::MultimodalMedias>) };
      inline Data& setMultimodalMedias(const vector<Data::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
      inline Data& setMultimodalMedias(vector<Data::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Data& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // sourceFrom Field Functions 
      bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
      void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
      inline string getSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
      inline Data& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


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


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> categoryUuid_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> disableHandleMultimodalMedia_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<string> extend1_ {};
      shared_ptr<string> extend2_ {};
      shared_ptr<string> extend3_ {};
      shared_ptr<vector<Data::MultimodalMedias>> multimodalMedias_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> sourceFrom_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> updateTime_ {};
      // url
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDatasetDocumentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDatasetDocumentsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDatasetDocumentsResponseBody::Data>) };
    inline vector<ListDatasetDocumentsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDatasetDocumentsResponseBody::Data>) };
    inline ListDatasetDocumentsResponseBody& setData(const vector<ListDatasetDocumentsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDatasetDocumentsResponseBody& setData(vector<ListDatasetDocumentsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDatasetDocumentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDatasetDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetDocumentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetDocumentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDatasetDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetDocumentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListDatasetDocumentsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
