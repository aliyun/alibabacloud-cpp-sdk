// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDocumentChunkListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentChunkListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentChunkListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetDocumentChunkListResponseBody() = default ;
    GetDocumentChunkListResponseBody(const GetDocumentChunkListResponseBody &) = default ;
    GetDocumentChunkListResponseBody(GetDocumentChunkListResponseBody &&) = default ;
    GetDocumentChunkListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentChunkListResponseBody() = default ;
    GetDocumentChunkListResponseBody& operator=(const GetDocumentChunkListResponseBody &) = default ;
    GetDocumentChunkListResponseBody& operator=(GetDocumentChunkListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(records, records_);
        DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
        DARABONBA_PTR_TO_JSON(totalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(records, records_);
        DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
        DARABONBA_PTR_FROM_JSON(totalRecords, totalRecords_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
          DARABONBA_ANY_TO_JSON(chunkMeta, chunkMeta_);
          DARABONBA_PTR_TO_JSON(chunkOssUrl, chunkOssUrl_);
          DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
          DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_PTR_TO_JSON(fileType, fileType_);
          DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
          DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
          DARABONBA_PTR_TO_JSON(nextChunkId, nextChunkId_);
          DARABONBA_PTR_TO_JSON(pos, pos_);
          DARABONBA_PTR_TO_JSON(preChunkId, preChunkId_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
          DARABONBA_ANY_FROM_JSON(chunkMeta, chunkMeta_);
          DARABONBA_PTR_FROM_JSON(chunkOssUrl, chunkOssUrl_);
          DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
          DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
          DARABONBA_PTR_FROM_JSON(docId, docId_);
          DARABONBA_PTR_FROM_JSON(fileType, fileType_);
          DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
          DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
          DARABONBA_PTR_FROM_JSON(nextChunkId, nextChunkId_);
          DARABONBA_PTR_FROM_JSON(pos, pos_);
          DARABONBA_PTR_FROM_JSON(preChunkId, preChunkId_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Pos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Pos& obj) { 
            DARABONBA_PTR_TO_JSON(axisArray, axisArray_);
            DARABONBA_PTR_TO_JSON(page, page_);
            DARABONBA_PTR_TO_JSON(textHighlightArea, textHighlightArea_);
          };
          friend void from_json(const Darabonba::Json& j, Pos& obj) { 
            DARABONBA_PTR_FROM_JSON(axisArray, axisArray_);
            DARABONBA_PTR_FROM_JSON(page, page_);
            DARABONBA_PTR_FROM_JSON(textHighlightArea, textHighlightArea_);
          };
          Pos() = default ;
          Pos(const Pos &) = default ;
          Pos(Pos &&) = default ;
          Pos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Pos() = default ;
          Pos& operator=(const Pos &) = default ;
          Pos& operator=(Pos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->axisArray_ == nullptr
        && this->page_ == nullptr && this->textHighlightArea_ == nullptr; };
          // axisArray Field Functions 
          bool hasAxisArray() const { return this->axisArray_ != nullptr;};
          void deleteAxisArray() { this->axisArray_ = nullptr;};
          inline const vector<double> & getAxisArray() const { DARABONBA_PTR_GET_CONST(axisArray_, vector<double>) };
          inline vector<double> getAxisArray() { DARABONBA_PTR_GET(axisArray_, vector<double>) };
          inline Pos& setAxisArray(const vector<double> & axisArray) { DARABONBA_PTR_SET_VALUE(axisArray_, axisArray) };
          inline Pos& setAxisArray(vector<double> && axisArray) { DARABONBA_PTR_SET_RVALUE(axisArray_, axisArray) };


          // page Field Functions 
          bool hasPage() const { return this->page_ != nullptr;};
          void deletePage() { this->page_ = nullptr;};
          inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
          inline Pos& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


          // textHighlightArea Field Functions 
          bool hasTextHighlightArea() const { return this->textHighlightArea_ != nullptr;};
          void deleteTextHighlightArea() { this->textHighlightArea_ = nullptr;};
          inline const vector<int32_t> & getTextHighlightArea() const { DARABONBA_PTR_GET_CONST(textHighlightArea_, vector<int32_t>) };
          inline vector<int32_t> getTextHighlightArea() { DARABONBA_PTR_GET(textHighlightArea_, vector<int32_t>) };
          inline Pos& setTextHighlightArea(const vector<int32_t> & textHighlightArea) { DARABONBA_PTR_SET_VALUE(textHighlightArea_, textHighlightArea) };
          inline Pos& setTextHighlightArea(vector<int32_t> && textHighlightArea) { DARABONBA_PTR_SET_RVALUE(textHighlightArea_, textHighlightArea) };


        protected:
          shared_ptr<vector<double>> axisArray_ {};
          shared_ptr<int32_t> page_ {};
          shared_ptr<vector<int32_t>> textHighlightArea_ {};
        };

        virtual bool empty() const override { return this->chunkId_ == nullptr
        && this->chunkMeta_ == nullptr && this->chunkOssUrl_ == nullptr && this->chunkText_ == nullptr && this->chunkType_ == nullptr && this->docId_ == nullptr
        && this->fileType_ == nullptr && this->libraryId_ == nullptr && this->libraryName_ == nullptr && this->nextChunkId_ == nullptr && this->pos_ == nullptr
        && this->preChunkId_ == nullptr && this->score_ == nullptr && this->title_ == nullptr; };
        // chunkId Field Functions 
        bool hasChunkId() const { return this->chunkId_ != nullptr;};
        void deleteChunkId() { this->chunkId_ = nullptr;};
        inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
        inline Records& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // chunkMeta Field Functions 
        bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
        void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
        inline         const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
        Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
        inline Records& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
        inline Records& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


        // chunkOssUrl Field Functions 
        bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
        void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
        inline string getChunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
        inline Records& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


        // chunkText Field Functions 
        bool hasChunkText() const { return this->chunkText_ != nullptr;};
        void deleteChunkText() { this->chunkText_ = nullptr;};
        inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
        inline Records& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


        // chunkType Field Functions 
        bool hasChunkType() const { return this->chunkType_ != nullptr;};
        void deleteChunkType() { this->chunkType_ = nullptr;};
        inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
        inline Records& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Records& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline Records& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline Records& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline Records& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


        // nextChunkId Field Functions 
        bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
        void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
        inline string getNextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
        inline Records& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


        // pos Field Functions 
        bool hasPos() const { return this->pos_ != nullptr;};
        void deletePos() { this->pos_ = nullptr;};
        inline const vector<Records::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<Records::Pos>) };
        inline vector<Records::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<Records::Pos>) };
        inline Records& setPos(const vector<Records::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
        inline Records& setPos(vector<Records::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


        // preChunkId Field Functions 
        bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
        void deletePreChunkId() { this->preChunkId_ = nullptr;};
        inline string getPreChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
        inline Records& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Records& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Records& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> chunkId_ {};
        Darabonba::Json chunkMeta_ {};
        shared_ptr<string> chunkOssUrl_ {};
        shared_ptr<string> chunkText_ {};
        shared_ptr<string> chunkType_ {};
        shared_ptr<string> docId_ {};
        shared_ptr<string> fileType_ {};
        shared_ptr<string> libraryId_ {};
        shared_ptr<string> libraryName_ {};
        shared_ptr<string> nextChunkId_ {};
        shared_ptr<vector<Records::Pos>> pos_ {};
        shared_ptr<string> preChunkId_ {};
        shared_ptr<float> score_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalPages_ == nullptr && this->totalRecords_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      shared_ptr<int64_t> currentPage_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int64_t> totalPages_ {};
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetDocumentChunkListResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocumentChunkListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocumentChunkListResponseBody::Data) };
    inline GetDocumentChunkListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocumentChunkListResponseBody::Data) };
    inline GetDocumentChunkListResponseBody& setData(const GetDocumentChunkListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocumentChunkListResponseBody& setData(GetDocumentChunkListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDocumentChunkListResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDocumentChunkListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDocumentChunkListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocumentChunkListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDocumentChunkListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetDocumentChunkListResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetDocumentChunkListResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
