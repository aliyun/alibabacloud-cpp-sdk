// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODYLISTMCUBENEBULAAPPSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULAAPPSRESPONSEBODYLISTMCUBENEBULAAPPSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& obj) { 
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
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult() = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult(const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult &) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult(ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult &&) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult() = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& operator=(const ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult &) = default ;
    ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& operator=(ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->errorCode_ != nullptr && this->hasMore_ != nullptr && this->nebulaAppInfos_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nebulaAppInfos Field Functions 
    bool hasNebulaAppInfos() const { return this->nebulaAppInfos_ != nullptr;};
    void deleteNebulaAppInfos() { this->nebulaAppInfos_ = nullptr;};
    inline const vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos> & nebulaAppInfos() const { DARABONBA_PTR_GET_CONST(nebulaAppInfos_, vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos>) };
    inline vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos> nebulaAppInfos() { DARABONBA_PTR_GET(nebulaAppInfos_, vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos>) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setNebulaAppInfos(const vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos> & nebulaAppInfos) { DARABONBA_PTR_SET_VALUE(nebulaAppInfos_, nebulaAppInfos) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setNebulaAppInfos(vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos> && nebulaAppInfos) { DARABONBA_PTR_SET_RVALUE(nebulaAppInfos_, nebulaAppInfos) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeNebulaAppsResponseBodyListMcubeNebulaAppsResultNebulaAppInfos>> nebulaAppInfos_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
