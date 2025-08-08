// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODYLISTWHITELISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODYLISTWHITELISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeWhitelistsResponseBodyListWhitelistResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeWhitelistsResponseBodyListWhitelistResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeWhitelistsResponseBodyListWhitelistResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
    };
    ListMcubeWhitelistsResponseBodyListWhitelistResult() = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResult(const ListMcubeWhitelistsResponseBodyListWhitelistResult &) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResult(ListMcubeWhitelistsResponseBodyListWhitelistResult &&) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeWhitelistsResponseBodyListWhitelistResult() = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResult& operator=(const ListMcubeWhitelistsResponseBodyListWhitelistResult &) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResult& operator=(ListMcubeWhitelistsResponseBodyListWhitelistResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->hasMore_ != nullptr && this->pageSize_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr
        && this->whitelists_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // whitelists Field Functions 
    bool hasWhitelists() const { return this->whitelists_ != nullptr;};
    void deleteWhitelists() { this->whitelists_ = nullptr;};
    inline const vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists> & whitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists>) };
    inline vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists> whitelists() { DARABONBA_PTR_GET(whitelists_, vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists>) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setWhitelists(const vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResult& setWhitelists(vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists>> whitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
