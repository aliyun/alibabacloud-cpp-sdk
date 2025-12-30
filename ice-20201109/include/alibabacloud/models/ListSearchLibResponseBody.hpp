// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSearchLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchLibInfoList, searchLibInfoList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchLibInfoList, searchLibInfoList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSearchLibResponseBody() = default ;
    ListSearchLibResponseBody(const ListSearchLibResponseBody &) = default ;
    ListSearchLibResponseBody(ListSearchLibResponseBody &&) = default ;
    ListSearchLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLibResponseBody() = default ;
    ListSearchLibResponseBody& operator=(const ListSearchLibResponseBody &) = default ;
    ListSearchLibResponseBody& operator=(ListSearchLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchLibInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchLibInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_TO_JSON(SearchLibConfig, searchLibConfig_);
        DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SearchLibInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_FROM_JSON(SearchLibConfig, searchLibConfig_);
        DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SearchLibInfoList() = default ;
      SearchLibInfoList(const SearchLibInfoList &) = default ;
      SearchLibInfoList(SearchLibInfoList &&) = default ;
      SearchLibInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchLibInfoList() = default ;
      SearchLibInfoList& operator=(const SearchLibInfoList &) = default ;
      SearchLibInfoList& operator=(SearchLibInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IndexInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndexInfo& obj) { 
          DARABONBA_PTR_TO_JSON(IndexReadiness, indexReadiness_);
          DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
          DARABONBA_PTR_TO_JSON(IndexType, indexType_);
        };
        friend void from_json(const Darabonba::Json& j, IndexInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(IndexReadiness, indexReadiness_);
          DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
          DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
        };
        IndexInfo() = default ;
        IndexInfo(const IndexInfo &) = default ;
        IndexInfo(IndexInfo &&) = default ;
        IndexInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IndexInfo() = default ;
        IndexInfo& operator=(const IndexInfo &) = default ;
        IndexInfo& operator=(IndexInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->indexReadiness_ == nullptr
        && this->indexStatus_ == nullptr && this->indexType_ == nullptr; };
        // indexReadiness Field Functions 
        bool hasIndexReadiness() const { return this->indexReadiness_ != nullptr;};
        void deleteIndexReadiness() { this->indexReadiness_ = nullptr;};
        inline string getIndexReadiness() const { DARABONBA_PTR_GET_DEFAULT(indexReadiness_, "") };
        inline IndexInfo& setIndexReadiness(string indexReadiness) { DARABONBA_PTR_SET_VALUE(indexReadiness_, indexReadiness) };


        // indexStatus Field Functions 
        bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
        void deleteIndexStatus() { this->indexStatus_ = nullptr;};
        inline string getIndexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
        inline IndexInfo& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


        // indexType Field Functions 
        bool hasIndexType() const { return this->indexType_ != nullptr;};
        void deleteIndexType() { this->indexType_ = nullptr;};
        inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
        inline IndexInfo& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


      protected:
        shared_ptr<string> indexReadiness_ {};
        shared_ptr<string> indexStatus_ {};
        shared_ptr<string> indexType_ {};
      };

      virtual bool empty() const override { return this->indexInfo_ == nullptr
        && this->searchLibConfig_ == nullptr && this->searchLibName_ == nullptr && this->status_ == nullptr; };
      // indexInfo Field Functions 
      bool hasIndexInfo() const { return this->indexInfo_ != nullptr;};
      void deleteIndexInfo() { this->indexInfo_ = nullptr;};
      inline const vector<SearchLibInfoList::IndexInfo> & getIndexInfo() const { DARABONBA_PTR_GET_CONST(indexInfo_, vector<SearchLibInfoList::IndexInfo>) };
      inline vector<SearchLibInfoList::IndexInfo> getIndexInfo() { DARABONBA_PTR_GET(indexInfo_, vector<SearchLibInfoList::IndexInfo>) };
      inline SearchLibInfoList& setIndexInfo(const vector<SearchLibInfoList::IndexInfo> & indexInfo) { DARABONBA_PTR_SET_VALUE(indexInfo_, indexInfo) };
      inline SearchLibInfoList& setIndexInfo(vector<SearchLibInfoList::IndexInfo> && indexInfo) { DARABONBA_PTR_SET_RVALUE(indexInfo_, indexInfo) };


      // searchLibConfig Field Functions 
      bool hasSearchLibConfig() const { return this->searchLibConfig_ != nullptr;};
      void deleteSearchLibConfig() { this->searchLibConfig_ = nullptr;};
      inline string getSearchLibConfig() const { DARABONBA_PTR_GET_DEFAULT(searchLibConfig_, "") };
      inline SearchLibInfoList& setSearchLibConfig(string searchLibConfig) { DARABONBA_PTR_SET_VALUE(searchLibConfig_, searchLibConfig) };


      // searchLibName Field Functions 
      bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
      void deleteSearchLibName() { this->searchLibName_ = nullptr;};
      inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
      inline SearchLibInfoList& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SearchLibInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<SearchLibInfoList::IndexInfo>> indexInfo_ {};
      shared_ptr<string> searchLibConfig_ {};
      // The search library.
      shared_ptr<string> searchLibName_ {};
      // The status of the search library.
      // 
      // *   normal
      // *   deleting
      // *   deleteFail
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->requestId_ == nullptr && this->searchLibInfoList_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSearchLibResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchLibInfoList Field Functions 
    bool hasSearchLibInfoList() const { return this->searchLibInfoList_ != nullptr;};
    void deleteSearchLibInfoList() { this->searchLibInfoList_ = nullptr;};
    inline const vector<ListSearchLibResponseBody::SearchLibInfoList> & getSearchLibInfoList() const { DARABONBA_PTR_GET_CONST(searchLibInfoList_, vector<ListSearchLibResponseBody::SearchLibInfoList>) };
    inline vector<ListSearchLibResponseBody::SearchLibInfoList> getSearchLibInfoList() { DARABONBA_PTR_GET(searchLibInfoList_, vector<ListSearchLibResponseBody::SearchLibInfoList>) };
    inline ListSearchLibResponseBody& setSearchLibInfoList(const vector<ListSearchLibResponseBody::SearchLibInfoList> & searchLibInfoList) { DARABONBA_PTR_SET_VALUE(searchLibInfoList_, searchLibInfoList) };
    inline ListSearchLibResponseBody& setSearchLibInfoList(vector<ListSearchLibResponseBody::SearchLibInfoList> && searchLibInfoList) { DARABONBA_PTR_SET_RVALUE(searchLibInfoList_, searchLibInfoList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListSearchLibResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSearchLibResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Information about search libraries.
    shared_ptr<vector<ListSearchLibResponseBody::SearchLibInfoList>> searchLibInfoList_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
