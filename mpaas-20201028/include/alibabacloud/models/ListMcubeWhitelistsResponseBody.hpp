// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeWhitelistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListWhitelistResult, listWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeWhitelistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListWhitelistResult, listWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeWhitelistsResponseBody() = default ;
    ListMcubeWhitelistsResponseBody(const ListMcubeWhitelistsResponseBody &) = default ;
    ListMcubeWhitelistsResponseBody(ListMcubeWhitelistsResponseBody &&) = default ;
    ListMcubeWhitelistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeWhitelistsResponseBody() = default ;
    ListMcubeWhitelistsResponseBody& operator=(const ListMcubeWhitelistsResponseBody &) = default ;
    ListMcubeWhitelistsResponseBody& operator=(ListMcubeWhitelistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListWhitelistResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListWhitelistResult& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
      };
      friend void from_json(const Darabonba::Json& j, ListWhitelistResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
      };
      ListWhitelistResult() = default ;
      ListWhitelistResult(const ListWhitelistResult &) = default ;
      ListWhitelistResult(ListWhitelistResult &&) = default ;
      ListWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListWhitelistResult() = default ;
      ListWhitelistResult& operator=(const ListWhitelistResult &) = default ;
      ListWhitelistResult& operator=(ListWhitelistResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Whitelists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Whitelists& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
          DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
          DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
        };
        friend void from_json(const Darabonba::Json& j, Whitelists& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
          DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
          DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
        };
        Whitelists() = default ;
        Whitelists(const Whitelists &) = default ;
        Whitelists(Whitelists &&) = default ;
        Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Whitelists() = default ;
        Whitelists& operator=(const Whitelists &) = default ;
        Whitelists& operator=(Whitelists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->whiteListCount_ == nullptr && this->whiteListName_ == nullptr
        && this->whitelistType_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline Whitelists& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Whitelists& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Whitelists& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Whitelists& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // whiteListCount Field Functions 
        bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
        void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
        inline int64_t getWhiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
        inline Whitelists& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


        // whiteListName Field Functions 
        bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
        void deleteWhiteListName() { this->whiteListName_ = nullptr;};
        inline string getWhiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
        inline Whitelists& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


        // whitelistType Field Functions 
        bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
        void deleteWhitelistType() { this->whitelistType_ = nullptr;};
        inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
        inline Whitelists& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> whiteListCount_ {};
        shared_ptr<string> whiteListName_ {};
        shared_ptr<string> whitelistType_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasMore_ == nullptr && this->pageSize_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr
        && this->whitelists_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ListWhitelistResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline ListWhitelistResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListWhitelistResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ListWhitelistResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // whitelists Field Functions 
      bool hasWhitelists() const { return this->whitelists_ != nullptr;};
      void deleteWhitelists() { this->whitelists_ = nullptr;};
      inline const vector<ListWhitelistResult::Whitelists> & getWhitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<ListWhitelistResult::Whitelists>) };
      inline vector<ListWhitelistResult::Whitelists> getWhitelists() { DARABONBA_PTR_GET(whitelists_, vector<ListWhitelistResult::Whitelists>) };
      inline ListWhitelistResult& setWhitelists(const vector<ListWhitelistResult::Whitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
      inline ListWhitelistResult& setWhitelists(vector<ListWhitelistResult::Whitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<vector<ListWhitelistResult::Whitelists>> whitelists_ {};
    };

    virtual bool empty() const override { return this->listWhitelistResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listWhitelistResult Field Functions 
    bool hasListWhitelistResult() const { return this->listWhitelistResult_ != nullptr;};
    void deleteListWhitelistResult() { this->listWhitelistResult_ = nullptr;};
    inline const ListMcubeWhitelistsResponseBody::ListWhitelistResult & getListWhitelistResult() const { DARABONBA_PTR_GET_CONST(listWhitelistResult_, ListMcubeWhitelistsResponseBody::ListWhitelistResult) };
    inline ListMcubeWhitelistsResponseBody::ListWhitelistResult getListWhitelistResult() { DARABONBA_PTR_GET(listWhitelistResult_, ListMcubeWhitelistsResponseBody::ListWhitelistResult) };
    inline ListMcubeWhitelistsResponseBody& setListWhitelistResult(const ListMcubeWhitelistsResponseBody::ListWhitelistResult & listWhitelistResult) { DARABONBA_PTR_SET_VALUE(listWhitelistResult_, listWhitelistResult) };
    inline ListMcubeWhitelistsResponseBody& setListWhitelistResult(ListMcubeWhitelistsResponseBody::ListWhitelistResult && listWhitelistResult) { DARABONBA_PTR_SET_RVALUE(listWhitelistResult_, listWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeWhitelistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeWhitelistsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeWhitelistsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeWhitelistsResponseBody::ListWhitelistResult> listWhitelistResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
