// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListIndexesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(IndexList, indexList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(IndexList, indexList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIndexesResponseBody() = default ;
    ListIndexesResponseBody(const ListIndexesResponseBody &) = default ;
    ListIndexesResponseBody(ListIndexesResponseBody &&) = default ;
    ListIndexesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBody() = default ;
    ListIndexesResponseBody& operator=(const ListIndexesResponseBody &) = default ;
    ListIndexesResponseBody& operator=(ListIndexesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IndexList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexList& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
      };
      friend void from_json(const Darabonba::Json& j, IndexList& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
      };
      IndexList() = default ;
      IndexList(const IndexList &) = default ;
      IndexList(IndexList &&) = default ;
      IndexList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexList() = default ;
      IndexList& operator=(const IndexList &) = default ;
      IndexList& operator=(IndexList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Index : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Index& obj) { 
          DARABONBA_PTR_TO_JSON(IndexComment, indexComment_);
          DARABONBA_PTR_TO_JSON(IndexId, indexId_);
          DARABONBA_PTR_TO_JSON(IndexName, indexName_);
          DARABONBA_PTR_TO_JSON(IndexType, indexType_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
        };
        friend void from_json(const Darabonba::Json& j, Index& obj) { 
          DARABONBA_PTR_FROM_JSON(IndexComment, indexComment_);
          DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
          DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
          DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
        };
        Index() = default ;
        Index(const Index &) = default ;
        Index(Index &&) = default ;
        Index(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Index() = default ;
        Index& operator=(const Index &) = default ;
        Index& operator=(Index &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->indexComment_ == nullptr
        && this->indexId_ == nullptr && this->indexName_ == nullptr && this->indexType_ == nullptr && this->tableId_ == nullptr; };
        // indexComment Field Functions 
        bool hasIndexComment() const { return this->indexComment_ != nullptr;};
        void deleteIndexComment() { this->indexComment_ = nullptr;};
        inline string getIndexComment() const { DARABONBA_PTR_GET_DEFAULT(indexComment_, "") };
        inline Index& setIndexComment(string indexComment) { DARABONBA_PTR_SET_VALUE(indexComment_, indexComment) };


        // indexId Field Functions 
        bool hasIndexId() const { return this->indexId_ != nullptr;};
        void deleteIndexId() { this->indexId_ = nullptr;};
        inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
        inline Index& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


        // indexName Field Functions 
        bool hasIndexName() const { return this->indexName_ != nullptr;};
        void deleteIndexName() { this->indexName_ = nullptr;};
        inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
        inline Index& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


        // indexType Field Functions 
        bool hasIndexType() const { return this->indexType_ != nullptr;};
        void deleteIndexType() { this->indexType_ = nullptr;};
        inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
        inline Index& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline Index& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      protected:
        // The description of the index.
        shared_ptr<string> indexComment_ {};
        // The ID of the index.
        shared_ptr<string> indexId_ {};
        // The name of the index.
        shared_ptr<string> indexName_ {};
        // The type of the index. Valid values:
        // 
        // *   Primary
        // *   Unique
        // *   Normal
        // *   FullText
        // *   Spatial
        shared_ptr<string> indexType_ {};
        // The ID of the table.
        shared_ptr<string> tableId_ {};
      };

      virtual bool empty() const override { return this->index_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline const vector<IndexList::Index> & getIndex() const { DARABONBA_PTR_GET_CONST(index_, vector<IndexList::Index>) };
      inline vector<IndexList::Index> getIndex() { DARABONBA_PTR_GET(index_, vector<IndexList::Index>) };
      inline IndexList& setIndex(const vector<IndexList::Index> & index) { DARABONBA_PTR_SET_VALUE(index_, index) };
      inline IndexList& setIndex(vector<IndexList::Index> && index) { DARABONBA_PTR_SET_RVALUE(index_, index) };


    protected:
      shared_ptr<vector<IndexList::Index>> index_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->indexList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListIndexesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListIndexesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // indexList Field Functions 
    bool hasIndexList() const { return this->indexList_ != nullptr;};
    void deleteIndexList() { this->indexList_ = nullptr;};
    inline const ListIndexesResponseBody::IndexList & getIndexList() const { DARABONBA_PTR_GET_CONST(indexList_, ListIndexesResponseBody::IndexList) };
    inline ListIndexesResponseBody::IndexList getIndexList() { DARABONBA_PTR_GET(indexList_, ListIndexesResponseBody::IndexList) };
    inline ListIndexesResponseBody& setIndexList(const ListIndexesResponseBody::IndexList & indexList) { DARABONBA_PTR_SET_VALUE(indexList_, indexList) };
    inline ListIndexesResponseBody& setIndexList(ListIndexesResponseBody::IndexList && indexList) { DARABONBA_PTR_SET_RVALUE(indexList_, indexList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIndexesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIndexesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The details of indexes.
    shared_ptr<ListIndexesResponseBody::IndexList> indexList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
