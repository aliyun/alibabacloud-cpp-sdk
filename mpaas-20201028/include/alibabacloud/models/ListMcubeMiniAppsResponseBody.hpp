// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODY_HPP_
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
  class ListMcubeMiniAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMiniResult, listMiniResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMiniResult, listMiniResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeMiniAppsResponseBody() = default ;
    ListMcubeMiniAppsResponseBody(const ListMcubeMiniAppsResponseBody &) = default ;
    ListMcubeMiniAppsResponseBody(ListMcubeMiniAppsResponseBody &&) = default ;
    ListMcubeMiniAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniAppsResponseBody() = default ;
    ListMcubeMiniAppsResponseBody& operator=(const ListMcubeMiniAppsResponseBody &) = default ;
    ListMcubeMiniAppsResponseBody& operator=(ListMcubeMiniAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListMiniResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListMiniResult& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(MiniProgramList, miniProgramList_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListMiniResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(MiniProgramList, miniProgramList_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListMiniResult() = default ;
      ListMiniResult(const ListMiniResult &) = default ;
      ListMiniResult(ListMiniResult &&) = default ;
      ListMiniResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListMiniResult() = default ;
      ListMiniResult& operator=(const ListMiniResult &) = default ;
      ListMiniResult& operator=(ListMiniResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MiniProgramList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MiniProgramList& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
          DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
        };
        friend void from_json(const Darabonba::Json& j, MiniProgramList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
          DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
        };
        MiniProgramList() = default ;
        MiniProgramList(const MiniProgramList &) = default ;
        MiniProgramList(MiniProgramList &&) = default ;
        MiniProgramList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MiniProgramList() = default ;
        MiniProgramList& operator=(const MiniProgramList &) = default ;
        MiniProgramList& operator=(MiniProgramList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline MiniProgramList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline MiniProgramList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline MiniProgramList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // h5Id Field Functions 
        bool hasH5Id() const { return this->h5Id_ != nullptr;};
        void deleteH5Id() { this->h5Id_ = nullptr;};
        inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
        inline MiniProgramList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


        // h5Name Field Functions 
        bool hasH5Name() const { return this->h5Name_ != nullptr;};
        void deleteH5Name() { this->h5Name_ = nullptr;};
        inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
        inline MiniProgramList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> h5Id_ {};
        shared_ptr<string> h5Name_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasMore_ == nullptr && this->miniProgramList_ == nullptr && this->pageSize_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ListMiniResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline ListMiniResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // miniProgramList Field Functions 
      bool hasMiniProgramList() const { return this->miniProgramList_ != nullptr;};
      void deleteMiniProgramList() { this->miniProgramList_ = nullptr;};
      inline const vector<ListMiniResult::MiniProgramList> & getMiniProgramList() const { DARABONBA_PTR_GET_CONST(miniProgramList_, vector<ListMiniResult::MiniProgramList>) };
      inline vector<ListMiniResult::MiniProgramList> getMiniProgramList() { DARABONBA_PTR_GET(miniProgramList_, vector<ListMiniResult::MiniProgramList>) };
      inline ListMiniResult& setMiniProgramList(const vector<ListMiniResult::MiniProgramList> & miniProgramList) { DARABONBA_PTR_SET_VALUE(miniProgramList_, miniProgramList) };
      inline ListMiniResult& setMiniProgramList(vector<ListMiniResult::MiniProgramList> && miniProgramList) { DARABONBA_PTR_SET_RVALUE(miniProgramList_, miniProgramList) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListMiniResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListMiniResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListMiniResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ListMiniResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<ListMiniResult::MiniProgramList>> miniProgramList_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->listMiniResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listMiniResult Field Functions 
    bool hasListMiniResult() const { return this->listMiniResult_ != nullptr;};
    void deleteListMiniResult() { this->listMiniResult_ = nullptr;};
    inline const ListMcubeMiniAppsResponseBody::ListMiniResult & getListMiniResult() const { DARABONBA_PTR_GET_CONST(listMiniResult_, ListMcubeMiniAppsResponseBody::ListMiniResult) };
    inline ListMcubeMiniAppsResponseBody::ListMiniResult getListMiniResult() { DARABONBA_PTR_GET(listMiniResult_, ListMcubeMiniAppsResponseBody::ListMiniResult) };
    inline ListMcubeMiniAppsResponseBody& setListMiniResult(const ListMcubeMiniAppsResponseBody::ListMiniResult & listMiniResult) { DARABONBA_PTR_SET_VALUE(listMiniResult_, listMiniResult) };
    inline ListMcubeMiniAppsResponseBody& setListMiniResult(ListMcubeMiniAppsResponseBody::ListMiniResult && listMiniResult) { DARABONBA_PTR_SET_RVALUE(listMiniResult_, listMiniResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeMiniAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeMiniAppsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeMiniAppsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeMiniAppsResponseBody::ListMiniResult> listMiniResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
