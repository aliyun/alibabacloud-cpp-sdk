// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryLiveWatchUserListResponseBodyOrgUsesList.hpp>
#include <alibabacloud/models/QueryLiveWatchUserListResponseBodyOutOrgUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveWatchUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveWatchUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(orgUsesList, orgUsesList_);
      DARABONBA_PTR_TO_JSON(outOrgUserList, outOrgUserList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveWatchUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(orgUsesList, orgUsesList_);
      DARABONBA_PTR_FROM_JSON(outOrgUserList, outOrgUserList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryLiveWatchUserListResponseBody() = default ;
    QueryLiveWatchUserListResponseBody(const QueryLiveWatchUserListResponseBody &) = default ;
    QueryLiveWatchUserListResponseBody(QueryLiveWatchUserListResponseBody &&) = default ;
    QueryLiveWatchUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveWatchUserListResponseBody() = default ;
    QueryLiveWatchUserListResponseBody& operator=(const QueryLiveWatchUserListResponseBody &) = default ;
    QueryLiveWatchUserListResponseBody& operator=(QueryLiveWatchUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgUsesList_ != nullptr
        && this->outOrgUserList_ != nullptr && this->requestId_ != nullptr; };
    // orgUsesList Field Functions 
    bool hasOrgUsesList() const { return this->orgUsesList_ != nullptr;};
    void deleteOrgUsesList() { this->orgUsesList_ = nullptr;};
    inline const vector<QueryLiveWatchUserListResponseBodyOrgUsesList> & orgUsesList() const { DARABONBA_PTR_GET_CONST(orgUsesList_, vector<QueryLiveWatchUserListResponseBodyOrgUsesList>) };
    inline vector<QueryLiveWatchUserListResponseBodyOrgUsesList> orgUsesList() { DARABONBA_PTR_GET(orgUsesList_, vector<QueryLiveWatchUserListResponseBodyOrgUsesList>) };
    inline QueryLiveWatchUserListResponseBody& setOrgUsesList(const vector<QueryLiveWatchUserListResponseBodyOrgUsesList> & orgUsesList) { DARABONBA_PTR_SET_VALUE(orgUsesList_, orgUsesList) };
    inline QueryLiveWatchUserListResponseBody& setOrgUsesList(vector<QueryLiveWatchUserListResponseBodyOrgUsesList> && orgUsesList) { DARABONBA_PTR_SET_RVALUE(orgUsesList_, orgUsesList) };


    // outOrgUserList Field Functions 
    bool hasOutOrgUserList() const { return this->outOrgUserList_ != nullptr;};
    void deleteOutOrgUserList() { this->outOrgUserList_ = nullptr;};
    inline const vector<QueryLiveWatchUserListResponseBodyOutOrgUserList> & outOrgUserList() const { DARABONBA_PTR_GET_CONST(outOrgUserList_, vector<QueryLiveWatchUserListResponseBodyOutOrgUserList>) };
    inline vector<QueryLiveWatchUserListResponseBodyOutOrgUserList> outOrgUserList() { DARABONBA_PTR_GET(outOrgUserList_, vector<QueryLiveWatchUserListResponseBodyOutOrgUserList>) };
    inline QueryLiveWatchUserListResponseBody& setOutOrgUserList(const vector<QueryLiveWatchUserListResponseBodyOutOrgUserList> & outOrgUserList) { DARABONBA_PTR_SET_VALUE(outOrgUserList_, outOrgUserList) };
    inline QueryLiveWatchUserListResponseBody& setOutOrgUserList(vector<QueryLiveWatchUserListResponseBodyOutOrgUserList> && outOrgUserList) { DARABONBA_PTR_SET_RVALUE(outOrgUserList_, outOrgUserList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveWatchUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryLiveWatchUserListResponseBodyOrgUsesList>> orgUsesList_ = nullptr;
    std::shared_ptr<vector<QueryLiveWatchUserListResponseBodyOutOrgUserList>> outOrgUserList_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
