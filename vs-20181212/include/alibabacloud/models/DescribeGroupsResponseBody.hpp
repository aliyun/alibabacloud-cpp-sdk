// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody(DescribeGroupsResponseBody &&) = default ;
    DescribeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody& operator=(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody& operator=(DescribeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(AliasId, aliasId_);
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(Callback, callback_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(GbId, gbId_);
        DARABONBA_PTR_TO_JSON(GbIp, gbIp_);
        DARABONBA_PTR_TO_JSON(GbPort, gbPort_);
        DARABONBA_PTR_TO_JSON(GbTcpPorts, gbTcpPorts_);
        DARABONBA_PTR_TO_JSON(GbUdpPorts, gbUdpPorts_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InProtocol, inProtocol_);
        DARABONBA_PTR_TO_JSON(LazyPull, lazyPull_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutProtocol, outProtocol_);
        DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Stats, stats_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasId, aliasId_);
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(Callback, callback_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(GbId, gbId_);
        DARABONBA_PTR_FROM_JSON(GbIp, gbIp_);
        DARABONBA_PTR_FROM_JSON(GbPort, gbPort_);
        DARABONBA_PTR_FROM_JSON(GbTcpPorts, gbTcpPorts_);
        DARABONBA_PTR_FROM_JSON(GbUdpPorts, gbUdpPorts_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InProtocol, inProtocol_);
        DARABONBA_PTR_FROM_JSON(LazyPull, lazyPull_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutProtocol, outProtocol_);
        DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Stats, stats_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stats& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceNum, deviceNum_);
          DARABONBA_PTR_TO_JSON(IedNum, iedNum_);
          DARABONBA_PTR_TO_JSON(IpcNum, ipcNum_);
          DARABONBA_PTR_TO_JSON(PlatformNum, platformNum_);
        };
        friend void from_json(const Darabonba::Json& j, Stats& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceNum, deviceNum_);
          DARABONBA_PTR_FROM_JSON(IedNum, iedNum_);
          DARABONBA_PTR_FROM_JSON(IpcNum, ipcNum_);
          DARABONBA_PTR_FROM_JSON(PlatformNum, platformNum_);
        };
        Stats() = default ;
        Stats(const Stats &) = default ;
        Stats(Stats &&) = default ;
        Stats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stats() = default ;
        Stats& operator=(const Stats &) = default ;
        Stats& operator=(Stats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceNum_ == nullptr
        && this->iedNum_ == nullptr && this->ipcNum_ == nullptr && this->platformNum_ == nullptr; };
        // deviceNum Field Functions 
        bool hasDeviceNum() const { return this->deviceNum_ != nullptr;};
        void deleteDeviceNum() { this->deviceNum_ = nullptr;};
        inline int64_t getDeviceNum() const { DARABONBA_PTR_GET_DEFAULT(deviceNum_, 0L) };
        inline Stats& setDeviceNum(int64_t deviceNum) { DARABONBA_PTR_SET_VALUE(deviceNum_, deviceNum) };


        // iedNum Field Functions 
        bool hasIedNum() const { return this->iedNum_ != nullptr;};
        void deleteIedNum() { this->iedNum_ = nullptr;};
        inline int64_t getIedNum() const { DARABONBA_PTR_GET_DEFAULT(iedNum_, 0L) };
        inline Stats& setIedNum(int64_t iedNum) { DARABONBA_PTR_SET_VALUE(iedNum_, iedNum) };


        // ipcNum Field Functions 
        bool hasIpcNum() const { return this->ipcNum_ != nullptr;};
        void deleteIpcNum() { this->ipcNum_ = nullptr;};
        inline int64_t getIpcNum() const { DARABONBA_PTR_GET_DEFAULT(ipcNum_, 0L) };
        inline Stats& setIpcNum(int64_t ipcNum) { DARABONBA_PTR_SET_VALUE(ipcNum_, ipcNum) };


        // platformNum Field Functions 
        bool hasPlatformNum() const { return this->platformNum_ != nullptr;};
        void deletePlatformNum() { this->platformNum_ = nullptr;};
        inline int64_t getPlatformNum() const { DARABONBA_PTR_GET_DEFAULT(platformNum_, 0L) };
        inline Stats& setPlatformNum(int64_t platformNum) { DARABONBA_PTR_SET_VALUE(platformNum_, platformNum) };


      protected:
        shared_ptr<int64_t> deviceNum_ {};
        shared_ptr<int64_t> iedNum_ {};
        shared_ptr<int64_t> ipcNum_ {};
        shared_ptr<int64_t> platformNum_ {};
      };

      virtual bool empty() const override { return this->aliasId_ == nullptr
        && this->app_ == nullptr && this->callback_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr
        && this->gbId_ == nullptr && this->gbIp_ == nullptr && this->gbPort_ == nullptr && this->gbTcpPorts_ == nullptr && this->gbUdpPorts_ == nullptr
        && this->id_ == nullptr && this->inProtocol_ == nullptr && this->lazyPull_ == nullptr && this->name_ == nullptr && this->outProtocol_ == nullptr
        && this->playDomain_ == nullptr && this->pushDomain_ == nullptr && this->region_ == nullptr && this->stats_ == nullptr && this->status_ == nullptr; };
      // aliasId Field Functions 
      bool hasAliasId() const { return this->aliasId_ != nullptr;};
      void deleteAliasId() { this->aliasId_ = nullptr;};
      inline string getAliasId() const { DARABONBA_PTR_GET_DEFAULT(aliasId_, "") };
      inline Groups& setAliasId(string aliasId) { DARABONBA_PTR_SET_VALUE(aliasId_, aliasId) };


      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Groups& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // callback Field Functions 
      bool hasCallback() const { return this->callback_ != nullptr;};
      void deleteCallback() { this->callback_ = nullptr;};
      inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
      inline Groups& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Groups& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Groups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Groups& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // gbId Field Functions 
      bool hasGbId() const { return this->gbId_ != nullptr;};
      void deleteGbId() { this->gbId_ = nullptr;};
      inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
      inline Groups& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


      // gbIp Field Functions 
      bool hasGbIp() const { return this->gbIp_ != nullptr;};
      void deleteGbIp() { this->gbIp_ = nullptr;};
      inline string getGbIp() const { DARABONBA_PTR_GET_DEFAULT(gbIp_, "") };
      inline Groups& setGbIp(string gbIp) { DARABONBA_PTR_SET_VALUE(gbIp_, gbIp) };


      // gbPort Field Functions 
      bool hasGbPort() const { return this->gbPort_ != nullptr;};
      void deleteGbPort() { this->gbPort_ = nullptr;};
      inline int64_t getGbPort() const { DARABONBA_PTR_GET_DEFAULT(gbPort_, 0L) };
      inline Groups& setGbPort(int64_t gbPort) { DARABONBA_PTR_SET_VALUE(gbPort_, gbPort) };


      // gbTcpPorts Field Functions 
      bool hasGbTcpPorts() const { return this->gbTcpPorts_ != nullptr;};
      void deleteGbTcpPorts() { this->gbTcpPorts_ = nullptr;};
      inline const vector<string> & getGbTcpPorts() const { DARABONBA_PTR_GET_CONST(gbTcpPorts_, vector<string>) };
      inline vector<string> getGbTcpPorts() { DARABONBA_PTR_GET(gbTcpPorts_, vector<string>) };
      inline Groups& setGbTcpPorts(const vector<string> & gbTcpPorts) { DARABONBA_PTR_SET_VALUE(gbTcpPorts_, gbTcpPorts) };
      inline Groups& setGbTcpPorts(vector<string> && gbTcpPorts) { DARABONBA_PTR_SET_RVALUE(gbTcpPorts_, gbTcpPorts) };


      // gbUdpPorts Field Functions 
      bool hasGbUdpPorts() const { return this->gbUdpPorts_ != nullptr;};
      void deleteGbUdpPorts() { this->gbUdpPorts_ = nullptr;};
      inline const vector<string> & getGbUdpPorts() const { DARABONBA_PTR_GET_CONST(gbUdpPorts_, vector<string>) };
      inline vector<string> getGbUdpPorts() { DARABONBA_PTR_GET(gbUdpPorts_, vector<string>) };
      inline Groups& setGbUdpPorts(const vector<string> & gbUdpPorts) { DARABONBA_PTR_SET_VALUE(gbUdpPorts_, gbUdpPorts) };
      inline Groups& setGbUdpPorts(vector<string> && gbUdpPorts) { DARABONBA_PTR_SET_RVALUE(gbUdpPorts_, gbUdpPorts) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Groups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inProtocol Field Functions 
      bool hasInProtocol() const { return this->inProtocol_ != nullptr;};
      void deleteInProtocol() { this->inProtocol_ = nullptr;};
      inline string getInProtocol() const { DARABONBA_PTR_GET_DEFAULT(inProtocol_, "") };
      inline Groups& setInProtocol(string inProtocol) { DARABONBA_PTR_SET_VALUE(inProtocol_, inProtocol) };


      // lazyPull Field Functions 
      bool hasLazyPull() const { return this->lazyPull_ != nullptr;};
      void deleteLazyPull() { this->lazyPull_ = nullptr;};
      inline bool getLazyPull() const { DARABONBA_PTR_GET_DEFAULT(lazyPull_, false) };
      inline Groups& setLazyPull(bool lazyPull) { DARABONBA_PTR_SET_VALUE(lazyPull_, lazyPull) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Groups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outProtocol Field Functions 
      bool hasOutProtocol() const { return this->outProtocol_ != nullptr;};
      void deleteOutProtocol() { this->outProtocol_ = nullptr;};
      inline string getOutProtocol() const { DARABONBA_PTR_GET_DEFAULT(outProtocol_, "") };
      inline Groups& setOutProtocol(string outProtocol) { DARABONBA_PTR_SET_VALUE(outProtocol_, outProtocol) };


      // playDomain Field Functions 
      bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
      void deletePlayDomain() { this->playDomain_ = nullptr;};
      inline string getPlayDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
      inline Groups& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


      // pushDomain Field Functions 
      bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
      void deletePushDomain() { this->pushDomain_ = nullptr;};
      inline string getPushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
      inline Groups& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Groups& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // stats Field Functions 
      bool hasStats() const { return this->stats_ != nullptr;};
      void deleteStats() { this->stats_ = nullptr;};
      inline const Groups::Stats & getStats() const { DARABONBA_PTR_GET_CONST(stats_, Groups::Stats) };
      inline Groups::Stats getStats() { DARABONBA_PTR_GET(stats_, Groups::Stats) };
      inline Groups& setStats(const Groups::Stats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
      inline Groups& setStats(Groups::Stats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Groups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> aliasId_ {};
      shared_ptr<string> app_ {};
      shared_ptr<string> callback_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> gbId_ {};
      shared_ptr<string> gbIp_ {};
      shared_ptr<int64_t> gbPort_ {};
      shared_ptr<vector<string>> gbTcpPorts_ {};
      shared_ptr<vector<string>> gbUdpPorts_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> inProtocol_ {};
      shared_ptr<bool> lazyPull_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> outProtocol_ {};
      shared_ptr<string> playDomain_ {};
      shared_ptr<string> pushDomain_ {};
      shared_ptr<string> region_ {};
      shared_ptr<Groups::Stats> stats_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline vector<DescribeGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline DescribeGroupsResponseBody& setGroups(const vector<DescribeGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupsResponseBody& setGroups(vector<DescribeGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeGroupsResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeGroupsResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeGroupsResponseBody::Groups>> groups_ {};
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
