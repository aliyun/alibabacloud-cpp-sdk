// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODY_HPP_
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
  class ListMcubeNebulaAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaAppsResult, listMcubeNebulaAppsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaAppsResult, listMcubeNebulaAppsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaAppsResponseBody() = default ;
    ListMcubeNebulaAppsResponseBody(const ListMcubeNebulaAppsResponseBody &) = default ;
    ListMcubeNebulaAppsResponseBody(ListMcubeNebulaAppsResponseBody &&) = default ;
    ListMcubeNebulaAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaAppsResponseBody() = default ;
    ListMcubeNebulaAppsResponseBody& operator=(const ListMcubeNebulaAppsResponseBody &) = default ;
    ListMcubeNebulaAppsResponseBody& operator=(ListMcubeNebulaAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListMcubeNebulaAppsResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListMcubeNebulaAppsResult& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(NebulaAppInfos, nebulaAppInfos_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListMcubeNebulaAppsResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(NebulaAppInfos, nebulaAppInfos_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListMcubeNebulaAppsResult() = default ;
      ListMcubeNebulaAppsResult(const ListMcubeNebulaAppsResult &) = default ;
      ListMcubeNebulaAppsResult(ListMcubeNebulaAppsResult &&) = default ;
      ListMcubeNebulaAppsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListMcubeNebulaAppsResult() = default ;
      ListMcubeNebulaAppsResult& operator=(const ListMcubeNebulaAppsResult &) = default ;
      ListMcubeNebulaAppsResult& operator=(ListMcubeNebulaAppsResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NebulaAppInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NebulaAppInfos& obj) { 
          DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
          DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
        };
        friend void from_json(const Darabonba::Json& j, NebulaAppInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
          DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
        };
        NebulaAppInfos() = default ;
        NebulaAppInfos(const NebulaAppInfos &) = default ;
        NebulaAppInfos(NebulaAppInfos &&) = default ;
        NebulaAppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NebulaAppInfos() = default ;
        NebulaAppInfos& operator=(const NebulaAppInfos &) = default ;
        NebulaAppInfos& operator=(NebulaAppInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->h5Id_ == nullptr
        && this->h5Name_ == nullptr; };
        // h5Id Field Functions 
        bool hasH5Id() const { return this->h5Id_ != nullptr;};
        void deleteH5Id() { this->h5Id_ = nullptr;};
        inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
        inline NebulaAppInfos& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


        // h5Name Field Functions 
        bool hasH5Name() const { return this->h5Name_ != nullptr;};
        void deleteH5Name() { this->h5Name_ = nullptr;};
        inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
        inline NebulaAppInfos& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


      protected:
        shared_ptr<string> h5Id_ {};
        shared_ptr<string> h5Name_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->errorCode_ == nullptr && this->hasMore_ == nullptr && this->nebulaAppInfos_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ListMcubeNebulaAppsResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListMcubeNebulaAppsResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline ListMcubeNebulaAppsResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // nebulaAppInfos Field Functions 
      bool hasNebulaAppInfos() const { return this->nebulaAppInfos_ != nullptr;};
      void deleteNebulaAppInfos() { this->nebulaAppInfos_ = nullptr;};
      inline const vector<ListMcubeNebulaAppsResult::NebulaAppInfos> & getNebulaAppInfos() const { DARABONBA_PTR_GET_CONST(nebulaAppInfos_, vector<ListMcubeNebulaAppsResult::NebulaAppInfos>) };
      inline vector<ListMcubeNebulaAppsResult::NebulaAppInfos> getNebulaAppInfos() { DARABONBA_PTR_GET(nebulaAppInfos_, vector<ListMcubeNebulaAppsResult::NebulaAppInfos>) };
      inline ListMcubeNebulaAppsResult& setNebulaAppInfos(const vector<ListMcubeNebulaAppsResult::NebulaAppInfos> & nebulaAppInfos) { DARABONBA_PTR_SET_VALUE(nebulaAppInfos_, nebulaAppInfos) };
      inline ListMcubeNebulaAppsResult& setNebulaAppInfos(vector<ListMcubeNebulaAppsResult::NebulaAppInfos> && nebulaAppInfos) { DARABONBA_PTR_SET_RVALUE(nebulaAppInfos_, nebulaAppInfos) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListMcubeNebulaAppsResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListMcubeNebulaAppsResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListMcubeNebulaAppsResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListMcubeNebulaAppsResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ListMcubeNebulaAppsResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<ListMcubeNebulaAppsResult::NebulaAppInfos>> nebulaAppInfos_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->listMcubeNebulaAppsResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listMcubeNebulaAppsResult Field Functions 
    bool hasListMcubeNebulaAppsResult() const { return this->listMcubeNebulaAppsResult_ != nullptr;};
    void deleteListMcubeNebulaAppsResult() { this->listMcubeNebulaAppsResult_ = nullptr;};
    inline const ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult & getListMcubeNebulaAppsResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaAppsResult_, ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult getListMcubeNebulaAppsResult() { DARABONBA_PTR_GET(listMcubeNebulaAppsResult_, ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBody& setListMcubeNebulaAppsResult(const ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult & listMcubeNebulaAppsResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaAppsResult_, listMcubeNebulaAppsResult) };
    inline ListMcubeNebulaAppsResponseBody& setListMcubeNebulaAppsResult(ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult && listMcubeNebulaAppsResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaAppsResult_, listMcubeNebulaAppsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaAppsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaAppsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeNebulaAppsResponseBody::ListMcubeNebulaAppsResult> listMcubeNebulaAppsResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
