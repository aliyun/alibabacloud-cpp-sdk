// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveMessageAppsResponseBodyAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageAppsResponseBody() = default ;
    ListLiveMessageAppsResponseBody(const ListLiveMessageAppsResponseBody &) = default ;
    ListLiveMessageAppsResponseBody(ListLiveMessageAppsResponseBody &&) = default ;
    ListLiveMessageAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageAppsResponseBody() = default ;
    ListLiveMessageAppsResponseBody& operator=(const ListLiveMessageAppsResponseBody &) = default ;
    ListLiveMessageAppsResponseBody& operator=(ListLiveMessageAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appList_ == nullptr
        && return this->hasMore_ == nullptr && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<ListLiveMessageAppsResponseBodyAppList> & appList() const { DARABONBA_PTR_GET_CONST(appList_, vector<ListLiveMessageAppsResponseBodyAppList>) };
    inline vector<ListLiveMessageAppsResponseBodyAppList> appList() { DARABONBA_PTR_GET(appList_, vector<ListLiveMessageAppsResponseBodyAppList>) };
    inline ListLiveMessageAppsResponseBody& setAppList(const vector<ListLiveMessageAppsResponseBodyAppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListLiveMessageAppsResponseBody& setAppList(vector<ListLiveMessageAppsResponseBodyAppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListLiveMessageAppsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageAppsResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The interactive messaging applications.
    std::shared_ptr<vector<ListLiveMessageAppsResponseBodyAppList>> appList_ = nullptr;
    // Indicates whether the current page is followed by a page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The starting page number for the next query. This parameter is returned only if the value of HasMore is true.
    std::shared_ptr<int64_t> nextPageToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
