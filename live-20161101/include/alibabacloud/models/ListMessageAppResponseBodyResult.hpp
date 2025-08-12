// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEAPPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEAPPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageAppResponseBodyResultAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageAppResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageAppResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageAppResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMessageAppResponseBodyResult() = default ;
    ListMessageAppResponseBodyResult(const ListMessageAppResponseBodyResult &) = default ;
    ListMessageAppResponseBodyResult(ListMessageAppResponseBodyResult &&) = default ;
    ListMessageAppResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageAppResponseBodyResult() = default ;
    ListMessageAppResponseBodyResult& operator=(const ListMessageAppResponseBodyResult &) = default ;
    ListMessageAppResponseBodyResult& operator=(ListMessageAppResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appList_ != nullptr
        && this->hasMore_ != nullptr && this->total_ != nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<Models::ListMessageAppResponseBodyResultAppList> & appList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Models::ListMessageAppResponseBodyResultAppList>) };
    inline vector<Models::ListMessageAppResponseBodyResultAppList> appList() { DARABONBA_PTR_GET(appList_, vector<Models::ListMessageAppResponseBodyResultAppList>) };
    inline ListMessageAppResponseBodyResult& setAppList(const vector<Models::ListMessageAppResponseBodyResultAppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListMessageAppResponseBodyResult& setAppList(vector<Models::ListMessageAppResponseBodyResultAppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMessageAppResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMessageAppResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Details about the applications.
    std::shared_ptr<vector<Models::ListMessageAppResponseBodyResultAppList>> appList_ = nullptr;
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true: The current page is followed by another page.
    // *   false: The current page is not followed by another page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The total number of interactive message applications.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
