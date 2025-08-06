// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTUPDATELIVE_HPP_
#define ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTUPDATELIVE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrgLiveListResponseBodyResultUpdateLiveLiveList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgLiveListResponseBodyResultUpdateLive : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgLiveListResponseBodyResultUpdateLive& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(LiveList, liveList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgLiveListResponseBodyResultUpdateLive& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(LiveList, liveList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetOrgLiveListResponseBodyResultUpdateLive() = default ;
    GetOrgLiveListResponseBodyResultUpdateLive(const GetOrgLiveListResponseBodyResultUpdateLive &) = default ;
    GetOrgLiveListResponseBodyResultUpdateLive(GetOrgLiveListResponseBodyResultUpdateLive &&) = default ;
    GetOrgLiveListResponseBodyResultUpdateLive(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgLiveListResponseBodyResultUpdateLive() = default ;
    GetOrgLiveListResponseBodyResultUpdateLive& operator=(const GetOrgLiveListResponseBodyResultUpdateLive &) = default ;
    GetOrgLiveListResponseBodyResultUpdateLive& operator=(GetOrgLiveListResponseBodyResultUpdateLive &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->liveList_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // liveList Field Functions 
    bool hasLiveList() const { return this->liveList_ != nullptr;};
    void deleteLiveList() { this->liveList_ = nullptr;};
    inline const vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList> & liveList() const { DARABONBA_PTR_GET_CONST(liveList_, vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList>) };
    inline vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList> liveList() { DARABONBA_PTR_GET(liveList_, vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList>) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setLiveList(const vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList> & liveList) { DARABONBA_PTR_SET_VALUE(liveList_, liveList) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setLiveList(vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList> && liveList) { DARABONBA_PTR_SET_RVALUE(liveList_, liveList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetOrgLiveListResponseBodyResultUpdateLive& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::GetOrgLiveListResponseBodyResultUpdateLiveLiveList>> liveList_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
