// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListChunksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChunksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Chunks, chunks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChunksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListChunksResponseBody() = default ;
    ListChunksResponseBody(const ListChunksResponseBody &) = default ;
    ListChunksResponseBody(ListChunksResponseBody &&) = default ;
    ListChunksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChunksResponseBody() = default ;
    ListChunksResponseBody& operator=(const ListChunksResponseBody &) = default ;
    ListChunksResponseBody& operator=(ListChunksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Chunks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chunks& obj) { 
        DARABONBA_PTR_TO_JSON(chunks, chunks_);
      };
      friend void from_json(const Darabonba::Json& j, Chunks& obj) { 
        DARABONBA_PTR_FROM_JSON(chunks, chunks_);
      };
      Chunks() = default ;
      Chunks(const Chunks &) = default ;
      Chunks(Chunks &&) = default ;
      Chunks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chunks() = default ;
      Chunks& operator=(const Chunks &) = default ;
      Chunks& operator=(Chunks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChunksItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChunksItem& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_TO_JSON(Vector, vector_);
        };
        friend void from_json(const Darabonba::Json& j, ChunksItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_FROM_JSON(Vector, vector_);
        };
        ChunksItem() = default ;
        ChunksItem(const ChunksItem &) = default ;
        ChunksItem(ChunksItem &&) = default ;
        ChunksItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChunksItem() = default ;
        ChunksItem& operator=(const ChunksItem &) = default ;
        ChunksItem& operator=(ChunksItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Vector : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vector& obj) { 
            DARABONBA_PTR_TO_JSON(vector, vector_);
          };
          friend void from_json(const Darabonba::Json& j, Vector& obj) { 
            DARABONBA_PTR_FROM_JSON(vector, vector_);
          };
          Vector() = default ;
          Vector(const Vector &) = default ;
          Vector(Vector &&) = default ;
          Vector(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vector() = default ;
          Vector& operator=(const Vector &) = default ;
          Vector& operator=(Vector &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vector_ == nullptr; };
          // vector Field Functions 
          bool hasVector() const { return this->vector_ != nullptr;};
          void deleteVector() { this->vector_ = nullptr;};
          inline const vector<double> & getVector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
          inline vector<double> getVector() { DARABONBA_PTR_GET(vector_, vector<double>) };
          inline Vector& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
          inline Vector& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


        protected:
          shared_ptr<vector<double>> vector_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->loaderMetadata_ == nullptr && this->metadata_ == nullptr && this->pageIndex_ == nullptr
        && this->vector_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ChunksItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline ChunksItem& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ChunksItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // loaderMetadata Field Functions 
        bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
        void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
        inline string getLoaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
        inline ChunksItem& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline ChunksItem& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline ChunksItem& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // pageIndex Field Functions 
        bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
        void deletePageIndex() { this->pageIndex_ = nullptr;};
        inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
        inline ChunksItem& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


        // vector Field Functions 
        bool hasVector() const { return this->vector_ != nullptr;};
        void deleteVector() { this->vector_ = nullptr;};
        inline const ChunksItem::Vector & getVector() const { DARABONBA_PTR_GET_CONST(vector_, ChunksItem::Vector) };
        inline ChunksItem::Vector getVector() { DARABONBA_PTR_GET(vector_, ChunksItem::Vector) };
        inline ChunksItem& setVector(const ChunksItem::Vector & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
        inline ChunksItem& setVector(ChunksItem::Vector && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> loaderMetadata_ {};
        Darabonba::Json metadata_ {};
        shared_ptr<int64_t> pageIndex_ {};
        shared_ptr<ChunksItem::Vector> vector_ {};
      };

      virtual bool empty() const override { return this->chunks_ == nullptr; };
      // chunks Field Functions 
      bool hasChunks() const { return this->chunks_ != nullptr;};
      void deleteChunks() { this->chunks_ = nullptr;};
      inline const vector<Chunks::ChunksItem> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<Chunks::ChunksItem>) };
      inline vector<Chunks::ChunksItem> getChunks() { DARABONBA_PTR_GET(chunks_, vector<Chunks::ChunksItem>) };
      inline Chunks& setChunks(const vector<Chunks::ChunksItem> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
      inline Chunks& setChunks(vector<Chunks::ChunksItem> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    protected:
      shared_ptr<vector<Chunks::ChunksItem>> chunks_ {};
    };

    virtual bool empty() const override { return this->chunks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const ListChunksResponseBody::Chunks & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, ListChunksResponseBody::Chunks) };
    inline ListChunksResponseBody::Chunks getChunks() { DARABONBA_PTR_GET(chunks_, ListChunksResponseBody::Chunks) };
    inline ListChunksResponseBody& setChunks(const ListChunksResponseBody::Chunks & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline ListChunksResponseBody& setChunks(ListChunksResponseBody::Chunks && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListChunksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline ListChunksResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChunksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline ListChunksResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<ListChunksResponseBody::Chunks> chunks_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
