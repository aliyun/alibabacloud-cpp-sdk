// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODY_HPP_
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
  class RecallDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RecallDocumentResponseBody() = default ;
    RecallDocumentResponseBody(const RecallDocumentResponseBody &) = default ;
    RecallDocumentResponseBody(RecallDocumentResponseBody &&) = default ;
    RecallDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentResponseBody() = default ;
    RecallDocumentResponseBody& operator=(const RecallDocumentResponseBody &) = default ;
    RecallDocumentResponseBody& operator=(RecallDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(chunkList, chunkList_);
        DARABONBA_PTR_TO_JSON(chunkPartList, chunkPartList_);
        DARABONBA_PTR_TO_JSON(chunkTextList, chunkTextList_);
        DARABONBA_PTR_TO_JSON(documents, documents_);
        DARABONBA_PTR_TO_JSON(embeddingElapsedMs, embeddingElapsedMs_);
        DARABONBA_PTR_TO_JSON(textChunkList, textChunkList_);
        DARABONBA_PTR_TO_JSON(textSearchElapsedMs, textSearchElapsedMs_);
        DARABONBA_PTR_TO_JSON(totalElapsedMs, totalElapsedMs_);
        DARABONBA_PTR_TO_JSON(vectorChunkList, vectorChunkList_);
        DARABONBA_PTR_TO_JSON(vectorSearchElapsedMs, vectorSearchElapsedMs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(chunkList, chunkList_);
        DARABONBA_PTR_FROM_JSON(chunkPartList, chunkPartList_);
        DARABONBA_PTR_FROM_JSON(chunkTextList, chunkTextList_);
        DARABONBA_PTR_FROM_JSON(documents, documents_);
        DARABONBA_PTR_FROM_JSON(embeddingElapsedMs, embeddingElapsedMs_);
        DARABONBA_PTR_FROM_JSON(textChunkList, textChunkList_);
        DARABONBA_PTR_FROM_JSON(textSearchElapsedMs, textSearchElapsedMs_);
        DARABONBA_PTR_FROM_JSON(totalElapsedMs, totalElapsedMs_);
        DARABONBA_PTR_FROM_JSON(vectorChunkList, vectorChunkList_);
        DARABONBA_PTR_FROM_JSON(vectorSearchElapsedMs, vectorSearchElapsedMs_);
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
      class VectorChunkList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VectorChunkList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, VectorChunkList& obj) { 
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
        VectorChunkList() = default ;
        VectorChunkList(const VectorChunkList &) = default ;
        VectorChunkList(VectorChunkList &&) = default ;
        VectorChunkList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VectorChunkList() = default ;
        VectorChunkList& operator=(const VectorChunkList &) = default ;
        VectorChunkList& operator=(VectorChunkList &&) = default ;
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
        inline VectorChunkList& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // chunkMeta Field Functions 
        bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
        void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
        inline         const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
        Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
        inline VectorChunkList& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
        inline VectorChunkList& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


        // chunkOssUrl Field Functions 
        bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
        void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
        inline string getChunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
        inline VectorChunkList& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


        // chunkText Field Functions 
        bool hasChunkText() const { return this->chunkText_ != nullptr;};
        void deleteChunkText() { this->chunkText_ = nullptr;};
        inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
        inline VectorChunkList& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


        // chunkType Field Functions 
        bool hasChunkType() const { return this->chunkType_ != nullptr;};
        void deleteChunkType() { this->chunkType_ = nullptr;};
        inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
        inline VectorChunkList& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline VectorChunkList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline VectorChunkList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline VectorChunkList& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline VectorChunkList& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


        // nextChunkId Field Functions 
        bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
        void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
        inline string getNextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
        inline VectorChunkList& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


        // pos Field Functions 
        bool hasPos() const { return this->pos_ != nullptr;};
        void deletePos() { this->pos_ = nullptr;};
        inline const vector<VectorChunkList::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<VectorChunkList::Pos>) };
        inline vector<VectorChunkList::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<VectorChunkList::Pos>) };
        inline VectorChunkList& setPos(const vector<VectorChunkList::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
        inline VectorChunkList& setPos(vector<VectorChunkList::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


        // preChunkId Field Functions 
        bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
        void deletePreChunkId() { this->preChunkId_ = nullptr;};
        inline string getPreChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
        inline VectorChunkList& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline VectorChunkList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline VectorChunkList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
        shared_ptr<vector<VectorChunkList::Pos>> pos_ {};
        shared_ptr<string> preChunkId_ {};
        shared_ptr<float> score_ {};
        shared_ptr<string> title_ {};
      };

      class TextChunkList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextChunkList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, TextChunkList& obj) { 
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
        TextChunkList() = default ;
        TextChunkList(const TextChunkList &) = default ;
        TextChunkList(TextChunkList &&) = default ;
        TextChunkList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextChunkList() = default ;
        TextChunkList& operator=(const TextChunkList &) = default ;
        TextChunkList& operator=(TextChunkList &&) = default ;
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
        inline TextChunkList& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // chunkMeta Field Functions 
        bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
        void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
        inline         const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
        Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
        inline TextChunkList& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
        inline TextChunkList& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


        // chunkOssUrl Field Functions 
        bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
        void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
        inline string getChunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
        inline TextChunkList& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


        // chunkText Field Functions 
        bool hasChunkText() const { return this->chunkText_ != nullptr;};
        void deleteChunkText() { this->chunkText_ = nullptr;};
        inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
        inline TextChunkList& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


        // chunkType Field Functions 
        bool hasChunkType() const { return this->chunkType_ != nullptr;};
        void deleteChunkType() { this->chunkType_ = nullptr;};
        inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
        inline TextChunkList& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline TextChunkList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline TextChunkList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline TextChunkList& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline TextChunkList& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


        // nextChunkId Field Functions 
        bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
        void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
        inline string getNextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
        inline TextChunkList& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


        // pos Field Functions 
        bool hasPos() const { return this->pos_ != nullptr;};
        void deletePos() { this->pos_ = nullptr;};
        inline const vector<TextChunkList::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<TextChunkList::Pos>) };
        inline vector<TextChunkList::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<TextChunkList::Pos>) };
        inline TextChunkList& setPos(const vector<TextChunkList::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
        inline TextChunkList& setPos(vector<TextChunkList::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


        // preChunkId Field Functions 
        bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
        void deletePreChunkId() { this->preChunkId_ = nullptr;};
        inline string getPreChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
        inline TextChunkList& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline TextChunkList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline TextChunkList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
        shared_ptr<vector<TextChunkList::Pos>> pos_ {};
        shared_ptr<string> preChunkId_ {};
        shared_ptr<float> score_ {};
        shared_ptr<string> title_ {};
      };

      class Documents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Documents& obj) { 
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_ANY_TO_JSON(documentMeta, documentMeta_);
          DARABONBA_PTR_TO_JSON(fileType, fileType_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(docId, docId_);
          DARABONBA_ANY_FROM_JSON(documentMeta, documentMeta_);
          DARABONBA_PTR_FROM_JSON(fileType, fileType_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Documents() = default ;
        Documents(const Documents &) = default ;
        Documents(Documents &&) = default ;
        Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Documents() = default ;
        Documents& operator=(const Documents &) = default ;
        Documents& operator=(Documents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->docId_ == nullptr
        && this->documentMeta_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr && this->libraryId_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Documents& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // documentMeta Field Functions 
        bool hasDocumentMeta() const { return this->documentMeta_ != nullptr;};
        void deleteDocumentMeta() { this->documentMeta_ = nullptr;};
        inline         const Darabonba::Json & getDocumentMeta() const { DARABONBA_GET(documentMeta_) };
        Darabonba::Json & getDocumentMeta() { DARABONBA_GET(documentMeta_) };
        inline Documents& setDocumentMeta(const Darabonba::Json & documentMeta) { DARABONBA_SET_VALUE(documentMeta_, documentMeta) };
        inline Documents& setDocumentMeta(Darabonba::Json && documentMeta) { DARABONBA_SET_RVALUE(documentMeta_, documentMeta) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline Documents& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Documents& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline Documents& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Documents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Documents& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> docId_ {};
        Darabonba::Json documentMeta_ {};
        shared_ptr<string> fileType_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> libraryId_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      class ChunkPartList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChunkPartList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ChunkPartList& obj) { 
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
        ChunkPartList() = default ;
        ChunkPartList(const ChunkPartList &) = default ;
        ChunkPartList(ChunkPartList &&) = default ;
        ChunkPartList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChunkPartList() = default ;
        ChunkPartList& operator=(const ChunkPartList &) = default ;
        ChunkPartList& operator=(ChunkPartList &&) = default ;
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
        inline ChunkPartList& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // chunkMeta Field Functions 
        bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
        void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
        inline         const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
        Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
        inline ChunkPartList& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
        inline ChunkPartList& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


        // chunkOssUrl Field Functions 
        bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
        void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
        inline string getChunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
        inline ChunkPartList& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


        // chunkText Field Functions 
        bool hasChunkText() const { return this->chunkText_ != nullptr;};
        void deleteChunkText() { this->chunkText_ = nullptr;};
        inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
        inline ChunkPartList& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


        // chunkType Field Functions 
        bool hasChunkType() const { return this->chunkType_ != nullptr;};
        void deleteChunkType() { this->chunkType_ = nullptr;};
        inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
        inline ChunkPartList& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline ChunkPartList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline ChunkPartList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline ChunkPartList& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline ChunkPartList& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


        // nextChunkId Field Functions 
        bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
        void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
        inline string getNextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
        inline ChunkPartList& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


        // pos Field Functions 
        bool hasPos() const { return this->pos_ != nullptr;};
        void deletePos() { this->pos_ = nullptr;};
        inline const vector<ChunkPartList::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<ChunkPartList::Pos>) };
        inline vector<ChunkPartList::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<ChunkPartList::Pos>) };
        inline ChunkPartList& setPos(const vector<ChunkPartList::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
        inline ChunkPartList& setPos(vector<ChunkPartList::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


        // preChunkId Field Functions 
        bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
        void deletePreChunkId() { this->preChunkId_ = nullptr;};
        inline string getPreChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
        inline ChunkPartList& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline ChunkPartList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ChunkPartList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
        shared_ptr<vector<ChunkPartList::Pos>> pos_ {};
        shared_ptr<string> preChunkId_ {};
        shared_ptr<float> score_ {};
        shared_ptr<string> title_ {};
      };

      class ChunkList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChunkList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ChunkList& obj) { 
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
        ChunkList() = default ;
        ChunkList(const ChunkList &) = default ;
        ChunkList(ChunkList &&) = default ;
        ChunkList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChunkList() = default ;
        ChunkList& operator=(const ChunkList &) = default ;
        ChunkList& operator=(ChunkList &&) = default ;
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
        inline ChunkList& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // chunkMeta Field Functions 
        bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
        void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
        inline         const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
        Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
        inline ChunkList& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
        inline ChunkList& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


        // chunkOssUrl Field Functions 
        bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
        void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
        inline string getChunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
        inline ChunkList& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


        // chunkText Field Functions 
        bool hasChunkText() const { return this->chunkText_ != nullptr;};
        void deleteChunkText() { this->chunkText_ = nullptr;};
        inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
        inline ChunkList& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


        // chunkType Field Functions 
        bool hasChunkType() const { return this->chunkType_ != nullptr;};
        void deleteChunkType() { this->chunkType_ = nullptr;};
        inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
        inline ChunkList& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline ChunkList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline ChunkList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline ChunkList& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline ChunkList& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


        // nextChunkId Field Functions 
        bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
        void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
        inline string getNextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
        inline ChunkList& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


        // pos Field Functions 
        bool hasPos() const { return this->pos_ != nullptr;};
        void deletePos() { this->pos_ = nullptr;};
        inline const vector<ChunkList::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<ChunkList::Pos>) };
        inline vector<ChunkList::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<ChunkList::Pos>) };
        inline ChunkList& setPos(const vector<ChunkList::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
        inline ChunkList& setPos(vector<ChunkList::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


        // preChunkId Field Functions 
        bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
        void deletePreChunkId() { this->preChunkId_ = nullptr;};
        inline string getPreChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
        inline ChunkList& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline ChunkList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ChunkList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
        shared_ptr<vector<ChunkList::Pos>> pos_ {};
        shared_ptr<string> preChunkId_ {};
        shared_ptr<float> score_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->chunkList_ == nullptr
        && this->chunkPartList_ == nullptr && this->chunkTextList_ == nullptr && this->documents_ == nullptr && this->embeddingElapsedMs_ == nullptr && this->textChunkList_ == nullptr
        && this->textSearchElapsedMs_ == nullptr && this->totalElapsedMs_ == nullptr && this->vectorChunkList_ == nullptr && this->vectorSearchElapsedMs_ == nullptr; };
      // chunkList Field Functions 
      bool hasChunkList() const { return this->chunkList_ != nullptr;};
      void deleteChunkList() { this->chunkList_ = nullptr;};
      inline const vector<Data::ChunkList> & getChunkList() const { DARABONBA_PTR_GET_CONST(chunkList_, vector<Data::ChunkList>) };
      inline vector<Data::ChunkList> getChunkList() { DARABONBA_PTR_GET(chunkList_, vector<Data::ChunkList>) };
      inline Data& setChunkList(const vector<Data::ChunkList> & chunkList) { DARABONBA_PTR_SET_VALUE(chunkList_, chunkList) };
      inline Data& setChunkList(vector<Data::ChunkList> && chunkList) { DARABONBA_PTR_SET_RVALUE(chunkList_, chunkList) };


      // chunkPartList Field Functions 
      bool hasChunkPartList() const { return this->chunkPartList_ != nullptr;};
      void deleteChunkPartList() { this->chunkPartList_ = nullptr;};
      inline const vector<Data::ChunkPartList> & getChunkPartList() const { DARABONBA_PTR_GET_CONST(chunkPartList_, vector<Data::ChunkPartList>) };
      inline vector<Data::ChunkPartList> getChunkPartList() { DARABONBA_PTR_GET(chunkPartList_, vector<Data::ChunkPartList>) };
      inline Data& setChunkPartList(const vector<Data::ChunkPartList> & chunkPartList) { DARABONBA_PTR_SET_VALUE(chunkPartList_, chunkPartList) };
      inline Data& setChunkPartList(vector<Data::ChunkPartList> && chunkPartList) { DARABONBA_PTR_SET_RVALUE(chunkPartList_, chunkPartList) };


      // chunkTextList Field Functions 
      bool hasChunkTextList() const { return this->chunkTextList_ != nullptr;};
      void deleteChunkTextList() { this->chunkTextList_ = nullptr;};
      inline const vector<string> & getChunkTextList() const { DARABONBA_PTR_GET_CONST(chunkTextList_, vector<string>) };
      inline vector<string> getChunkTextList() { DARABONBA_PTR_GET(chunkTextList_, vector<string>) };
      inline Data& setChunkTextList(const vector<string> & chunkTextList) { DARABONBA_PTR_SET_VALUE(chunkTextList_, chunkTextList) };
      inline Data& setChunkTextList(vector<string> && chunkTextList) { DARABONBA_PTR_SET_RVALUE(chunkTextList_, chunkTextList) };


      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


      // embeddingElapsedMs Field Functions 
      bool hasEmbeddingElapsedMs() const { return this->embeddingElapsedMs_ != nullptr;};
      void deleteEmbeddingElapsedMs() { this->embeddingElapsedMs_ = nullptr;};
      inline int64_t getEmbeddingElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(embeddingElapsedMs_, 0L) };
      inline Data& setEmbeddingElapsedMs(int64_t embeddingElapsedMs) { DARABONBA_PTR_SET_VALUE(embeddingElapsedMs_, embeddingElapsedMs) };


      // textChunkList Field Functions 
      bool hasTextChunkList() const { return this->textChunkList_ != nullptr;};
      void deleteTextChunkList() { this->textChunkList_ = nullptr;};
      inline const vector<Data::TextChunkList> & getTextChunkList() const { DARABONBA_PTR_GET_CONST(textChunkList_, vector<Data::TextChunkList>) };
      inline vector<Data::TextChunkList> getTextChunkList() { DARABONBA_PTR_GET(textChunkList_, vector<Data::TextChunkList>) };
      inline Data& setTextChunkList(const vector<Data::TextChunkList> & textChunkList) { DARABONBA_PTR_SET_VALUE(textChunkList_, textChunkList) };
      inline Data& setTextChunkList(vector<Data::TextChunkList> && textChunkList) { DARABONBA_PTR_SET_RVALUE(textChunkList_, textChunkList) };


      // textSearchElapsedMs Field Functions 
      bool hasTextSearchElapsedMs() const { return this->textSearchElapsedMs_ != nullptr;};
      void deleteTextSearchElapsedMs() { this->textSearchElapsedMs_ = nullptr;};
      inline int64_t getTextSearchElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(textSearchElapsedMs_, 0L) };
      inline Data& setTextSearchElapsedMs(int64_t textSearchElapsedMs) { DARABONBA_PTR_SET_VALUE(textSearchElapsedMs_, textSearchElapsedMs) };


      // totalElapsedMs Field Functions 
      bool hasTotalElapsedMs() const { return this->totalElapsedMs_ != nullptr;};
      void deleteTotalElapsedMs() { this->totalElapsedMs_ = nullptr;};
      inline int64_t getTotalElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(totalElapsedMs_, 0L) };
      inline Data& setTotalElapsedMs(int64_t totalElapsedMs) { DARABONBA_PTR_SET_VALUE(totalElapsedMs_, totalElapsedMs) };


      // vectorChunkList Field Functions 
      bool hasVectorChunkList() const { return this->vectorChunkList_ != nullptr;};
      void deleteVectorChunkList() { this->vectorChunkList_ = nullptr;};
      inline const vector<Data::VectorChunkList> & getVectorChunkList() const { DARABONBA_PTR_GET_CONST(vectorChunkList_, vector<Data::VectorChunkList>) };
      inline vector<Data::VectorChunkList> getVectorChunkList() { DARABONBA_PTR_GET(vectorChunkList_, vector<Data::VectorChunkList>) };
      inline Data& setVectorChunkList(const vector<Data::VectorChunkList> & vectorChunkList) { DARABONBA_PTR_SET_VALUE(vectorChunkList_, vectorChunkList) };
      inline Data& setVectorChunkList(vector<Data::VectorChunkList> && vectorChunkList) { DARABONBA_PTR_SET_RVALUE(vectorChunkList_, vectorChunkList) };


      // vectorSearchElapsedMs Field Functions 
      bool hasVectorSearchElapsedMs() const { return this->vectorSearchElapsedMs_ != nullptr;};
      void deleteVectorSearchElapsedMs() { this->vectorSearchElapsedMs_ = nullptr;};
      inline int64_t getVectorSearchElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(vectorSearchElapsedMs_, 0L) };
      inline Data& setVectorSearchElapsedMs(int64_t vectorSearchElapsedMs) { DARABONBA_PTR_SET_VALUE(vectorSearchElapsedMs_, vectorSearchElapsedMs) };


    protected:
      shared_ptr<vector<Data::ChunkList>> chunkList_ {};
      shared_ptr<vector<Data::ChunkPartList>> chunkPartList_ {};
      shared_ptr<vector<string>> chunkTextList_ {};
      shared_ptr<vector<Data::Documents>> documents_ {};
      shared_ptr<int64_t> embeddingElapsedMs_ {};
      shared_ptr<vector<Data::TextChunkList>> textChunkList_ {};
      shared_ptr<int64_t> textSearchElapsedMs_ {};
      shared_ptr<int64_t> totalElapsedMs_ {};
      shared_ptr<vector<Data::VectorChunkList>> vectorChunkList_ {};
      shared_ptr<int64_t> vectorSearchElapsedMs_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline RecallDocumentResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecallDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RecallDocumentResponseBody::Data) };
    inline RecallDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RecallDocumentResponseBody::Data) };
    inline RecallDocumentResponseBody& setData(const RecallDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecallDocumentResponseBody& setData(RecallDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline RecallDocumentResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline RecallDocumentResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RecallDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecallDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RecallDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RecallDocumentResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<RecallDocumentResponseBody::Data> data_ {};
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
