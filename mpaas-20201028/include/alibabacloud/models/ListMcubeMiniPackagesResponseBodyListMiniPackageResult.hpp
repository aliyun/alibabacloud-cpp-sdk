// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIPACKAGESRESPONSEBODYLISTMINIPACKAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIPACKAGESRESPONSEBODYLISTMINIPACKAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniPackagesResponseBodyListMiniPackageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniPackagesResponseBodyListMiniPackageResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(MiniPackageList, miniPackageList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniPackagesResponseBodyListMiniPackageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(MiniPackageList, miniPackageList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult() = default ;
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult(const ListMcubeMiniPackagesResponseBodyListMiniPackageResult &) = default ;
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult(ListMcubeMiniPackagesResponseBodyListMiniPackageResult &&) = default ;
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniPackagesResponseBodyListMiniPackageResult() = default ;
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult& operator=(const ListMcubeMiniPackagesResponseBodyListMiniPackageResult &) = default ;
    ListMcubeMiniPackagesResponseBodyListMiniPackageResult& operator=(ListMcubeMiniPackagesResponseBodyListMiniPackageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->hasMore_ == nullptr && return this->miniPackageList_ == nullptr && return this->pageSize_ == nullptr && return this->resultMsg_ == nullptr && return this->success_ == nullptr
        && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // miniPackageList Field Functions 
    bool hasMiniPackageList() const { return this->miniPackageList_ != nullptr;};
    void deleteMiniPackageList() { this->miniPackageList_ = nullptr;};
    inline const vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList> & miniPackageList() const { DARABONBA_PTR_GET_CONST(miniPackageList_, vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList>) };
    inline vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList> miniPackageList() { DARABONBA_PTR_GET(miniPackageList_, vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList>) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setMiniPackageList(const vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList> & miniPackageList) { DARABONBA_PTR_SET_VALUE(miniPackageList_, miniPackageList) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setMiniPackageList(vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList> && miniPackageList) { DARABONBA_PTR_SET_RVALUE(miniPackageList_, miniPackageList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeMiniPackagesResponseBodyListMiniPackageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeMiniPackagesResponseBodyListMiniPackageResultMiniPackageList>> miniPackageList_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
