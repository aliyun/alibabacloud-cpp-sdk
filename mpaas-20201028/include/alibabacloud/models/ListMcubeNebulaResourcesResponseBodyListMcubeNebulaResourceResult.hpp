// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODYLISTMCUBENEBULARESOURCERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODYLISTMCUBENEBULARESOURCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(NebulaResourceInfo, nebulaResourceInfo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(NebulaResourceInfo, nebulaResourceInfo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult() = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult(const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult &) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult(ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult &&) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult() = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& operator=(const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult &) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& operator=(ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->errorCode_ != nullptr && this->hasMore_ != nullptr && this->nebulaResourceInfo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nebulaResourceInfo Field Functions 
    bool hasNebulaResourceInfo() const { return this->nebulaResourceInfo_ != nullptr;};
    void deleteNebulaResourceInfo() { this->nebulaResourceInfo_ = nullptr;};
    inline const vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo> & nebulaResourceInfo() const { DARABONBA_PTR_GET_CONST(nebulaResourceInfo_, vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo>) };
    inline vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo> nebulaResourceInfo() { DARABONBA_PTR_GET(nebulaResourceInfo_, vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo>) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setNebulaResourceInfo(const vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo> & nebulaResourceInfo) { DARABONBA_PTR_SET_VALUE(nebulaResourceInfo_, nebulaResourceInfo) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setNebulaResourceInfo(vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo> && nebulaResourceInfo) { DARABONBA_PTR_SET_RVALUE(nebulaResourceInfo_, nebulaResourceInfo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo>> nebulaResourceInfo_ = nullptr;
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
