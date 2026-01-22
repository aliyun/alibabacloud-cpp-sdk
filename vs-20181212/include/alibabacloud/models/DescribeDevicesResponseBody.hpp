// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODY_HPP_
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
  class DescribeDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDevicesResponseBody() = default ;
    DescribeDevicesResponseBody(const DescribeDevicesResponseBody &) = default ;
    DescribeDevicesResponseBody(DescribeDevicesResponseBody &&) = default ;
    DescribeDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDevicesResponseBody() = default ;
    DescribeDevicesResponseBody& operator=(const DescribeDevicesResponseBody &) = default ;
    DescribeDevicesResponseBody& operator=(DescribeDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmMethod, alarmMethod_);
        DARABONBA_PTR_TO_JSON(AutoDirectory, autoDirectory_);
        DARABONBA_PTR_TO_JSON(AutoPos, autoPos_);
        DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
        DARABONBA_PTR_TO_JSON(ChannelSyncTime, channelSyncTime_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(Dsn, dsn_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(GbId, gbId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PosInterval, posInterval_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RegisteredTime, registeredTime_);
        DARABONBA_PTR_TO_JSON(Stats, stats_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmMethod, alarmMethod_);
        DARABONBA_PTR_FROM_JSON(AutoDirectory, autoDirectory_);
        DARABONBA_PTR_FROM_JSON(AutoPos, autoPos_);
        DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
        DARABONBA_PTR_FROM_JSON(ChannelSyncTime, channelSyncTime_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(Dsn, dsn_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(GbId, gbId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PosInterval, posInterval_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RegisteredTime, registeredTime_);
        DARABONBA_PTR_FROM_JSON(Stats, stats_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stats& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_TO_JSON(OfflineNum, offlineNum_);
          DARABONBA_PTR_TO_JSON(OnlineNum, onlineNum_);
          DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
        };
        friend void from_json(const Darabonba::Json& j, Stats& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_FROM_JSON(OfflineNum, offlineNum_);
          DARABONBA_PTR_FROM_JSON(OnlineNum, onlineNum_);
          DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
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
        virtual bool empty() const override { return this->channelNum_ == nullptr
        && this->failedNum_ == nullptr && this->offlineNum_ == nullptr && this->onlineNum_ == nullptr && this->streamNum_ == nullptr; };
        // channelNum Field Functions 
        bool hasChannelNum() const { return this->channelNum_ != nullptr;};
        void deleteChannelNum() { this->channelNum_ = nullptr;};
        inline int64_t getChannelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0L) };
        inline Stats& setChannelNum(int64_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


        // failedNum Field Functions 
        bool hasFailedNum() const { return this->failedNum_ != nullptr;};
        void deleteFailedNum() { this->failedNum_ = nullptr;};
        inline int64_t getFailedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0L) };
        inline Stats& setFailedNum(int64_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


        // offlineNum Field Functions 
        bool hasOfflineNum() const { return this->offlineNum_ != nullptr;};
        void deleteOfflineNum() { this->offlineNum_ = nullptr;};
        inline int64_t getOfflineNum() const { DARABONBA_PTR_GET_DEFAULT(offlineNum_, 0L) };
        inline Stats& setOfflineNum(int64_t offlineNum) { DARABONBA_PTR_SET_VALUE(offlineNum_, offlineNum) };


        // onlineNum Field Functions 
        bool hasOnlineNum() const { return this->onlineNum_ != nullptr;};
        void deleteOnlineNum() { this->onlineNum_ = nullptr;};
        inline int64_t getOnlineNum() const { DARABONBA_PTR_GET_DEFAULT(onlineNum_, 0L) };
        inline Stats& setOnlineNum(int64_t onlineNum) { DARABONBA_PTR_SET_VALUE(onlineNum_, onlineNum) };


        // streamNum Field Functions 
        bool hasStreamNum() const { return this->streamNum_ != nullptr;};
        void deleteStreamNum() { this->streamNum_ = nullptr;};
        inline int64_t getStreamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0L) };
        inline Stats& setStreamNum(int64_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


      protected:
        shared_ptr<int64_t> channelNum_ {};
        shared_ptr<int64_t> failedNum_ {};
        shared_ptr<int64_t> offlineNum_ {};
        shared_ptr<int64_t> onlineNum_ {};
        shared_ptr<int64_t> streamNum_ {};
      };

      class Directory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Directory& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        };
        friend void from_json(const Darabonba::Json& j, Directory& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        };
        Directory() = default ;
        Directory(const Directory &) = default ;
        Directory(Directory &&) = default ;
        Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Directory() = default ;
        Directory& operator=(const Directory &) = default ;
        Directory& operator=(Directory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Directory& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Directory& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Directory& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Directory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Directory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline Directory& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      protected:
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> parentId_ {};
      };

      virtual bool empty() const override { return this->alarmMethod_ == nullptr
        && this->autoDirectory_ == nullptr && this->autoPos_ == nullptr && this->autoStart_ == nullptr && this->channelSyncTime_ == nullptr && this->createdTime_ == nullptr
        && this->description_ == nullptr && this->directory_ == nullptr && this->directoryId_ == nullptr && this->dsn_ == nullptr && this->enabled_ == nullptr
        && this->gbId_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr && this->ip_ == nullptr && this->latitude_ == nullptr
        && this->longitude_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->parentId_ == nullptr && this->password_ == nullptr
        && this->port_ == nullptr && this->posInterval_ == nullptr && this->protocol_ == nullptr && this->registeredTime_ == nullptr && this->stats_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->username_ == nullptr && this->vendor_ == nullptr; };
      // alarmMethod Field Functions 
      bool hasAlarmMethod() const { return this->alarmMethod_ != nullptr;};
      void deleteAlarmMethod() { this->alarmMethod_ = nullptr;};
      inline string getAlarmMethod() const { DARABONBA_PTR_GET_DEFAULT(alarmMethod_, "") };
      inline Devices& setAlarmMethod(string alarmMethod) { DARABONBA_PTR_SET_VALUE(alarmMethod_, alarmMethod) };


      // autoDirectory Field Functions 
      bool hasAutoDirectory() const { return this->autoDirectory_ != nullptr;};
      void deleteAutoDirectory() { this->autoDirectory_ = nullptr;};
      inline bool getAutoDirectory() const { DARABONBA_PTR_GET_DEFAULT(autoDirectory_, false) };
      inline Devices& setAutoDirectory(bool autoDirectory) { DARABONBA_PTR_SET_VALUE(autoDirectory_, autoDirectory) };


      // autoPos Field Functions 
      bool hasAutoPos() const { return this->autoPos_ != nullptr;};
      void deleteAutoPos() { this->autoPos_ = nullptr;};
      inline bool getAutoPos() const { DARABONBA_PTR_GET_DEFAULT(autoPos_, false) };
      inline Devices& setAutoPos(bool autoPos) { DARABONBA_PTR_SET_VALUE(autoPos_, autoPos) };


      // autoStart Field Functions 
      bool hasAutoStart() const { return this->autoStart_ != nullptr;};
      void deleteAutoStart() { this->autoStart_ = nullptr;};
      inline bool getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
      inline Devices& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


      // channelSyncTime Field Functions 
      bool hasChannelSyncTime() const { return this->channelSyncTime_ != nullptr;};
      void deleteChannelSyncTime() { this->channelSyncTime_ = nullptr;};
      inline string getChannelSyncTime() const { DARABONBA_PTR_GET_DEFAULT(channelSyncTime_, "") };
      inline Devices& setChannelSyncTime(string channelSyncTime) { DARABONBA_PTR_SET_VALUE(channelSyncTime_, channelSyncTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Devices& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Devices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline const Devices::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, Devices::Directory) };
      inline Devices::Directory getDirectory() { DARABONBA_PTR_GET(directory_, Devices::Directory) };
      inline Devices& setDirectory(const Devices::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
      inline Devices& setDirectory(Devices::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Devices& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // dsn Field Functions 
      bool hasDsn() const { return this->dsn_ != nullptr;};
      void deleteDsn() { this->dsn_ = nullptr;};
      inline string getDsn() const { DARABONBA_PTR_GET_DEFAULT(dsn_, "") };
      inline Devices& setDsn(string dsn) { DARABONBA_PTR_SET_VALUE(dsn_, dsn) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Devices& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // gbId Field Functions 
      bool hasGbId() const { return this->gbId_ != nullptr;};
      void deleteGbId() { this->gbId_ = nullptr;};
      inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
      inline Devices& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Devices& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Devices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Devices& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
      inline Devices& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
      inline Devices& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Devices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline Devices& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Devices& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Devices& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
      inline Devices& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // posInterval Field Functions 
      bool hasPosInterval() const { return this->posInterval_ != nullptr;};
      void deletePosInterval() { this->posInterval_ = nullptr;};
      inline int64_t getPosInterval() const { DARABONBA_PTR_GET_DEFAULT(posInterval_, 0L) };
      inline Devices& setPosInterval(int64_t posInterval) { DARABONBA_PTR_SET_VALUE(posInterval_, posInterval) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Devices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // registeredTime Field Functions 
      bool hasRegisteredTime() const { return this->registeredTime_ != nullptr;};
      void deleteRegisteredTime() { this->registeredTime_ = nullptr;};
      inline string getRegisteredTime() const { DARABONBA_PTR_GET_DEFAULT(registeredTime_, "") };
      inline Devices& setRegisteredTime(string registeredTime) { DARABONBA_PTR_SET_VALUE(registeredTime_, registeredTime) };


      // stats Field Functions 
      bool hasStats() const { return this->stats_ != nullptr;};
      void deleteStats() { this->stats_ = nullptr;};
      inline const Devices::Stats & getStats() const { DARABONBA_PTR_GET_CONST(stats_, Devices::Stats) };
      inline Devices::Stats getStats() { DARABONBA_PTR_GET(stats_, Devices::Stats) };
      inline Devices& setStats(const Devices::Stats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
      inline Devices& setStats(Devices::Stats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Devices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Devices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Devices& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Devices& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Devices& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      shared_ptr<string> alarmMethod_ {};
      shared_ptr<bool> autoDirectory_ {};
      shared_ptr<bool> autoPos_ {};
      shared_ptr<bool> autoStart_ {};
      shared_ptr<string> channelSyncTime_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Devices::Directory> directory_ {};
      shared_ptr<string> directoryId_ {};
      shared_ptr<string> dsn_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> gbId_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> latitude_ {};
      shared_ptr<string> longitude_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> params_ {};
      shared_ptr<string> parentId_ {};
      shared_ptr<string> password_ {};
      shared_ptr<int64_t> port_ {};
      shared_ptr<int64_t> posInterval_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> registeredTime_ {};
      shared_ptr<Devices::Stats> stats_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> username_ {};
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->devices_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<DescribeDevicesResponseBody::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<DescribeDevicesResponseBody::Devices>) };
    inline vector<DescribeDevicesResponseBody::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<DescribeDevicesResponseBody::Devices>) };
    inline DescribeDevicesResponseBody& setDevices(const vector<DescribeDevicesResponseBody::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline DescribeDevicesResponseBody& setDevices(vector<DescribeDevicesResponseBody::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeDevicesResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeDevicesResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDevicesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDevicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeDevicesResponseBody::Devices>> devices_ {};
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
