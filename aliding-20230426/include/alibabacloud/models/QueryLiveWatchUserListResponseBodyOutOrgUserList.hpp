// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODYOUTORGUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTRESPONSEBODYOUTORGUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveWatchUserListResponseBodyOutOrgUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveWatchUserListResponseBodyOutOrgUserList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WatchLiveTime, watchLiveTime_);
      DARABONBA_PTR_TO_JSON(WatchPlaybackTime, watchPlaybackTime_);
      DARABONBA_PTR_TO_JSON(WatchProgressMs, watchProgressMs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveWatchUserListResponseBodyOutOrgUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WatchLiveTime, watchLiveTime_);
      DARABONBA_PTR_FROM_JSON(WatchPlaybackTime, watchPlaybackTime_);
      DARABONBA_PTR_FROM_JSON(WatchProgressMs, watchProgressMs_);
    };
    QueryLiveWatchUserListResponseBodyOutOrgUserList() = default ;
    QueryLiveWatchUserListResponseBodyOutOrgUserList(const QueryLiveWatchUserListResponseBodyOutOrgUserList &) = default ;
    QueryLiveWatchUserListResponseBodyOutOrgUserList(QueryLiveWatchUserListResponseBodyOutOrgUserList &&) = default ;
    QueryLiveWatchUserListResponseBodyOutOrgUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveWatchUserListResponseBodyOutOrgUserList() = default ;
    QueryLiveWatchUserListResponseBodyOutOrgUserList& operator=(const QueryLiveWatchUserListResponseBodyOutOrgUserList &) = default ;
    QueryLiveWatchUserListResponseBodyOutOrgUserList& operator=(QueryLiveWatchUserListResponseBodyOutOrgUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->watchLiveTime_ != nullptr && this->watchPlaybackTime_ != nullptr && this->watchProgressMs_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryLiveWatchUserListResponseBodyOutOrgUserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // watchLiveTime Field Functions 
    bool hasWatchLiveTime() const { return this->watchLiveTime_ != nullptr;};
    void deleteWatchLiveTime() { this->watchLiveTime_ = nullptr;};
    inline int64_t watchLiveTime() const { DARABONBA_PTR_GET_DEFAULT(watchLiveTime_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOutOrgUserList& setWatchLiveTime(int64_t watchLiveTime) { DARABONBA_PTR_SET_VALUE(watchLiveTime_, watchLiveTime) };


    // watchPlaybackTime Field Functions 
    bool hasWatchPlaybackTime() const { return this->watchPlaybackTime_ != nullptr;};
    void deleteWatchPlaybackTime() { this->watchPlaybackTime_ = nullptr;};
    inline int64_t watchPlaybackTime() const { DARABONBA_PTR_GET_DEFAULT(watchPlaybackTime_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOutOrgUserList& setWatchPlaybackTime(int64_t watchPlaybackTime) { DARABONBA_PTR_SET_VALUE(watchPlaybackTime_, watchPlaybackTime) };


    // watchProgressMs Field Functions 
    bool hasWatchProgressMs() const { return this->watchProgressMs_ != nullptr;};
    void deleteWatchProgressMs() { this->watchProgressMs_ = nullptr;};
    inline int64_t watchProgressMs() const { DARABONBA_PTR_GET_DEFAULT(watchProgressMs_, 0L) };
    inline QueryLiveWatchUserListResponseBodyOutOrgUserList& setWatchProgressMs(int64_t watchProgressMs) { DARABONBA_PTR_SET_VALUE(watchProgressMs_, watchProgressMs) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> watchLiveTime_ = nullptr;
    std::shared_ptr<int64_t> watchPlaybackTime_ = nullptr;
    std::shared_ptr<int64_t> watchProgressMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
