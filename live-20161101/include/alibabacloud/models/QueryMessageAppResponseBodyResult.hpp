// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMessageAppResponseBodyResultAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryMessageAppResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageAppResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageAppResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryMessageAppResponseBodyResult() = default ;
    QueryMessageAppResponseBodyResult(const QueryMessageAppResponseBodyResult &) = default ;
    QueryMessageAppResponseBodyResult(QueryMessageAppResponseBodyResult &&) = default ;
    QueryMessageAppResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageAppResponseBodyResult() = default ;
    QueryMessageAppResponseBodyResult& operator=(const QueryMessageAppResponseBodyResult &) = default ;
    QueryMessageAppResponseBodyResult& operator=(QueryMessageAppResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appList_ == nullptr
        && return this->hasMore_ == nullptr && return this->totalCount_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<Models::QueryMessageAppResponseBodyResultAppList> & appList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Models::QueryMessageAppResponseBodyResultAppList>) };
    inline vector<Models::QueryMessageAppResponseBodyResultAppList> appList() { DARABONBA_PTR_GET(appList_, vector<Models::QueryMessageAppResponseBodyResultAppList>) };
    inline QueryMessageAppResponseBodyResult& setAppList(const vector<Models::QueryMessageAppResponseBodyResultAppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline QueryMessageAppResponseBodyResult& setAppList(vector<Models::QueryMessageAppResponseBodyResultAppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryMessageAppResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryMessageAppResponseBodyResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the interactive messaging applications.
    std::shared_ptr<vector<Models::QueryMessageAppResponseBodyResultAppList>> appList_ = nullptr;
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true: The current page is followed by another page.
    // *   false: The current page is not followed by another page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The total number of applications returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
