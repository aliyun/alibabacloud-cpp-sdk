// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODYLISTMINIRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODYLISTMINIRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniAppsResponseBodyListMiniResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniAppsResponseBodyListMiniResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(MiniProgramList, miniProgramList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniAppsResponseBodyListMiniResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(MiniProgramList, miniProgramList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMcubeMiniAppsResponseBodyListMiniResult() = default ;
    ListMcubeMiniAppsResponseBodyListMiniResult(const ListMcubeMiniAppsResponseBodyListMiniResult &) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResult(ListMcubeMiniAppsResponseBodyListMiniResult &&) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniAppsResponseBodyListMiniResult() = default ;
    ListMcubeMiniAppsResponseBodyListMiniResult& operator=(const ListMcubeMiniAppsResponseBodyListMiniResult &) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResult& operator=(ListMcubeMiniAppsResponseBodyListMiniResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->hasMore_ == nullptr && return this->miniProgramList_ == nullptr && return this->pageSize_ == nullptr && return this->resultMsg_ == nullptr && return this->success_ == nullptr
        && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // miniProgramList Field Functions 
    bool hasMiniProgramList() const { return this->miniProgramList_ != nullptr;};
    void deleteMiniProgramList() { this->miniProgramList_ = nullptr;};
    inline const vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList> & miniProgramList() const { DARABONBA_PTR_GET_CONST(miniProgramList_, vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList>) };
    inline vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList> miniProgramList() { DARABONBA_PTR_GET(miniProgramList_, vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList>) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setMiniProgramList(const vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList> & miniProgramList) { DARABONBA_PTR_SET_VALUE(miniProgramList_, miniProgramList) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setMiniProgramList(vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList> && miniProgramList) { DARABONBA_PTR_SET_RVALUE(miniProgramList_, miniProgramList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList>> miniProgramList_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
