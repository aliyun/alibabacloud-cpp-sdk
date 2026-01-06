// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OutOrgUserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutOrgUserList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WatchLiveTime, watchLiveTime_);
        DARABONBA_PTR_TO_JSON(WatchPlaybackTime, watchPlaybackTime_);
        DARABONBA_PTR_TO_JSON(WatchProgressMs, watchProgressMs_);
      };
      friend void from_json(const Darabonba::Json& j, OutOrgUserList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WatchLiveTime, watchLiveTime_);
        DARABONBA_PTR_FROM_JSON(WatchPlaybackTime, watchPlaybackTime_);
        DARABONBA_PTR_FROM_JSON(WatchProgressMs, watchProgressMs_);
      };
      OutOrgUserList() = default ;
      OutOrgUserList(const OutOrgUserList &) = default ;
      OutOrgUserList(OutOrgUserList &&) = default ;
      OutOrgUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutOrgUserList() = default ;
      OutOrgUserList& operator=(const OutOrgUserList &) = default ;
      OutOrgUserList& operator=(OutOrgUserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->watchLiveTime_ == nullptr && this->watchPlaybackTime_ == nullptr && this->watchProgressMs_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OutOrgUserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // watchLiveTime Field Functions 
      bool hasWatchLiveTime() const { return this->watchLiveTime_ != nullptr;};
      void deleteWatchLiveTime() { this->watchLiveTime_ = nullptr;};
      inline int64_t getWatchLiveTime() const { DARABONBA_PTR_GET_DEFAULT(watchLiveTime_, 0L) };
      inline OutOrgUserList& setWatchLiveTime(int64_t watchLiveTime) { DARABONBA_PTR_SET_VALUE(watchLiveTime_, watchLiveTime) };


      // watchPlaybackTime Field Functions 
      bool hasWatchPlaybackTime() const { return this->watchPlaybackTime_ != nullptr;};
      void deleteWatchPlaybackTime() { this->watchPlaybackTime_ = nullptr;};
      inline int64_t getWatchPlaybackTime() const { DARABONBA_PTR_GET_DEFAULT(watchPlaybackTime_, 0L) };
      inline OutOrgUserList& setWatchPlaybackTime(int64_t watchPlaybackTime) { DARABONBA_PTR_SET_VALUE(watchPlaybackTime_, watchPlaybackTime) };


      // watchProgressMs Field Functions 
      bool hasWatchProgressMs() const { return this->watchProgressMs_ != nullptr;};
      void deleteWatchProgressMs() { this->watchProgressMs_ = nullptr;};
      inline int64_t getWatchProgressMs() const { DARABONBA_PTR_GET_DEFAULT(watchProgressMs_, 0L) };
      inline OutOrgUserList& setWatchProgressMs(int64_t watchProgressMs) { DARABONBA_PTR_SET_VALUE(watchProgressMs_, watchProgressMs) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> watchLiveTime_ {};
      shared_ptr<int64_t> watchPlaybackTime_ {};
      shared_ptr<int64_t> watchProgressMs_ {};
    };

    class OrgUsesList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrgUsesList& obj) { 
        DARABONBA_PTR_TO_JSON(DeptName, deptName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WatchLiveTime, watchLiveTime_);
        DARABONBA_PTR_TO_JSON(WatchPlaybackTime, watchPlaybackTime_);
        DARABONBA_PTR_TO_JSON(WatchProgressMs, watchProgressMs_);
      };
      friend void from_json(const Darabonba::Json& j, OrgUsesList& obj) { 
        DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WatchLiveTime, watchLiveTime_);
        DARABONBA_PTR_FROM_JSON(WatchPlaybackTime, watchPlaybackTime_);
        DARABONBA_PTR_FROM_JSON(WatchProgressMs, watchProgressMs_);
      };
      OrgUsesList() = default ;
      OrgUsesList(const OrgUsesList &) = default ;
      OrgUsesList(OrgUsesList &&) = default ;
      OrgUsesList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrgUsesList() = default ;
      OrgUsesList& operator=(const OrgUsesList &) = default ;
      OrgUsesList& operator=(OrgUsesList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deptName_ == nullptr
        && this->name_ == nullptr && this->userId_ == nullptr && this->watchLiveTime_ == nullptr && this->watchPlaybackTime_ == nullptr && this->watchProgressMs_ == nullptr; };
      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline OrgUsesList& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OrgUsesList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline OrgUsesList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // watchLiveTime Field Functions 
      bool hasWatchLiveTime() const { return this->watchLiveTime_ != nullptr;};
      void deleteWatchLiveTime() { this->watchLiveTime_ = nullptr;};
      inline int64_t getWatchLiveTime() const { DARABONBA_PTR_GET_DEFAULT(watchLiveTime_, 0L) };
      inline OrgUsesList& setWatchLiveTime(int64_t watchLiveTime) { DARABONBA_PTR_SET_VALUE(watchLiveTime_, watchLiveTime) };


      // watchPlaybackTime Field Functions 
      bool hasWatchPlaybackTime() const { return this->watchPlaybackTime_ != nullptr;};
      void deleteWatchPlaybackTime() { this->watchPlaybackTime_ = nullptr;};
      inline int64_t getWatchPlaybackTime() const { DARABONBA_PTR_GET_DEFAULT(watchPlaybackTime_, 0L) };
      inline OrgUsesList& setWatchPlaybackTime(int64_t watchPlaybackTime) { DARABONBA_PTR_SET_VALUE(watchPlaybackTime_, watchPlaybackTime) };


      // watchProgressMs Field Functions 
      bool hasWatchProgressMs() const { return this->watchProgressMs_ != nullptr;};
      void deleteWatchProgressMs() { this->watchProgressMs_ = nullptr;};
      inline int64_t getWatchProgressMs() const { DARABONBA_PTR_GET_DEFAULT(watchProgressMs_, 0L) };
      inline OrgUsesList& setWatchProgressMs(int64_t watchProgressMs) { DARABONBA_PTR_SET_VALUE(watchProgressMs_, watchProgressMs) };


    protected:
      shared_ptr<string> deptName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<int64_t> watchLiveTime_ {};
      shared_ptr<int64_t> watchPlaybackTime_ {};
      shared_ptr<int64_t> watchProgressMs_ {};
    };

    virtual bool empty() const override { return this->orgUsesList_ == nullptr
        && this->outOrgUserList_ == nullptr && this->requestId_ == nullptr; };
    // orgUsesList Field Functions 
    bool hasOrgUsesList() const { return this->orgUsesList_ != nullptr;};
    void deleteOrgUsesList() { this->orgUsesList_ = nullptr;};
    inline const vector<QueryLiveWatchUserListResponseBody::OrgUsesList> & getOrgUsesList() const { DARABONBA_PTR_GET_CONST(orgUsesList_, vector<QueryLiveWatchUserListResponseBody::OrgUsesList>) };
    inline vector<QueryLiveWatchUserListResponseBody::OrgUsesList> getOrgUsesList() { DARABONBA_PTR_GET(orgUsesList_, vector<QueryLiveWatchUserListResponseBody::OrgUsesList>) };
    inline QueryLiveWatchUserListResponseBody& setOrgUsesList(const vector<QueryLiveWatchUserListResponseBody::OrgUsesList> & orgUsesList) { DARABONBA_PTR_SET_VALUE(orgUsesList_, orgUsesList) };
    inline QueryLiveWatchUserListResponseBody& setOrgUsesList(vector<QueryLiveWatchUserListResponseBody::OrgUsesList> && orgUsesList) { DARABONBA_PTR_SET_RVALUE(orgUsesList_, orgUsesList) };


    // outOrgUserList Field Functions 
    bool hasOutOrgUserList() const { return this->outOrgUserList_ != nullptr;};
    void deleteOutOrgUserList() { this->outOrgUserList_ = nullptr;};
    inline const vector<QueryLiveWatchUserListResponseBody::OutOrgUserList> & getOutOrgUserList() const { DARABONBA_PTR_GET_CONST(outOrgUserList_, vector<QueryLiveWatchUserListResponseBody::OutOrgUserList>) };
    inline vector<QueryLiveWatchUserListResponseBody::OutOrgUserList> getOutOrgUserList() { DARABONBA_PTR_GET(outOrgUserList_, vector<QueryLiveWatchUserListResponseBody::OutOrgUserList>) };
    inline QueryLiveWatchUserListResponseBody& setOutOrgUserList(const vector<QueryLiveWatchUserListResponseBody::OutOrgUserList> & outOrgUserList) { DARABONBA_PTR_SET_VALUE(outOrgUserList_, outOrgUserList) };
    inline QueryLiveWatchUserListResponseBody& setOutOrgUserList(vector<QueryLiveWatchUserListResponseBody::OutOrgUserList> && outOrgUserList) { DARABONBA_PTR_SET_RVALUE(outOrgUserList_, outOrgUserList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveWatchUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryLiveWatchUserListResponseBody::OrgUsesList>> orgUsesList_ {};
    shared_ptr<vector<QueryLiveWatchUserListResponseBody::OutOrgUserList>> outOrgUserList_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
