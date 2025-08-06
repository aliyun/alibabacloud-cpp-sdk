// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODYORGUSESLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODYORGUSESLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveWatchUserListResponseBodyOrgUsesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveWatchUserListResponseBodyOrgUsesList& obj) { 
      DARABONBA_PTR_TO_JSON(DeptName, deptName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WatchLiveTime, watchLiveTime_);
      DARABONBA_PTR_TO_JSON(WatchPlaybackTime, watchPlaybackTime_);
      DARABONBA_PTR_TO_JSON(WatchProgressMs, watchProgressMs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveWatchUserListResponseBodyOrgUsesList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WatchLiveTime, watchLiveTime_);
      DARABONBA_PTR_FROM_JSON(WatchPlaybackTime, watchPlaybackTime_);
      DARABONBA_PTR_FROM_JSON(WatchProgressMs, watchProgressMs_);
    };
    QueryLiveWatchUserListResponseBodyOrgUsesList() = default ;
    QueryLiveWatchUserListResponseBodyOrgUsesList(const QueryLiveWatchUserListResponseBodyOrgUsesList &) = default ;
    QueryLiveWatchUserListResponseBodyOrgUsesList(QueryLiveWatchUserListResponseBodyOrgUsesList &&) = default ;
    QueryLiveWatchUserListResponseBodyOrgUsesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveWatchUserListResponseBodyOrgUsesList() = default ;
    QueryLiveWatchUserListResponseBodyOrgUsesList& operator=(const QueryLiveWatchUserListResponseBodyOrgUsesList &) = default ;
    QueryLiveWatchUserListResponseBodyOrgUsesList& operator=(QueryLiveWatchUserListResponseBodyOrgUsesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptName_ != nullptr
        && this->name_ != nullptr && this->userId_ != nullptr && this->watchLiveTime_ != nullptr && this->watchPlaybackTime_ != nullptr && this->watchProgressMs_ != nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // watchLiveTime Field Functions 
    bool hasWatchLiveTime() const { return this->watchLiveTime_ != nullptr;};
    void deleteWatchLiveTime() { this->watchLiveTime_ = nullptr;};
    inline int64_t watchLiveTime() const { DARABONBA_PTR_GET_DEFAULT(watchLiveTime_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setWatchLiveTime(int64_t watchLiveTime) { DARABONBA_PTR_SET_VALUE(watchLiveTime_, watchLiveTime) };


    // watchPlaybackTime Field Functions 
    bool hasWatchPlaybackTime() const { return this->watchPlaybackTime_ != nullptr;};
    void deleteWatchPlaybackTime() { this->watchPlaybackTime_ = nullptr;};
    inline int64_t watchPlaybackTime() const { DARABONBA_PTR_GET_DEFAULT(watchPlaybackTime_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setWatchPlaybackTime(int64_t watchPlaybackTime) { DARABONBA_PTR_SET_VALUE(watchPlaybackTime_, watchPlaybackTime) };


    // watchProgressMs Field Functions 
    bool hasWatchProgressMs() const { return this->watchProgressMs_ != nullptr;};
    void deleteWatchProgressMs() { this->watchProgressMs_ = nullptr;};
    inline int64_t watchProgressMs() const { DARABONBA_PTR_GET_DEFAULT(watchProgressMs_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOrgUsesList& setWatchProgressMs(int64_t watchProgressMs) { DARABONBA_PTR_SET_VALUE(watchProgressMs_, watchProgressMs) };


  protected:
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int64_t> watchLiveTime_ = nullptr;
    std::shared_ptr<int64_t> watchPlaybackTime_ = nullptr;
    std::shared_ptr<int64_t> watchProgressMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
