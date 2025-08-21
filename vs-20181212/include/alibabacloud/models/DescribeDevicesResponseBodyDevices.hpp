// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDevicesResponseBodyDevicesDirectory.hpp>
#include <alibabacloud/models/DescribeDevicesResponseBodyDevicesStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDevicesResponseBodyDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDevicesResponseBodyDevices& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDevicesResponseBodyDevices& obj) { 
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
    DescribeDevicesResponseBodyDevices() = default ;
    DescribeDevicesResponseBodyDevices(const DescribeDevicesResponseBodyDevices &) = default ;
    DescribeDevicesResponseBodyDevices(DescribeDevicesResponseBodyDevices &&) = default ;
    DescribeDevicesResponseBodyDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDevicesResponseBodyDevices() = default ;
    DescribeDevicesResponseBodyDevices& operator=(const DescribeDevicesResponseBodyDevices &) = default ;
    DescribeDevicesResponseBodyDevices& operator=(DescribeDevicesResponseBodyDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmMethod_ != nullptr
        && this->autoDirectory_ != nullptr && this->autoPos_ != nullptr && this->autoStart_ != nullptr && this->channelSyncTime_ != nullptr && this->createdTime_ != nullptr
        && this->description_ != nullptr && this->directory_ != nullptr && this->directoryId_ != nullptr && this->dsn_ != nullptr && this->enabled_ != nullptr
        && this->gbId_ != nullptr && this->groupId_ != nullptr && this->id_ != nullptr && this->ip_ != nullptr && this->latitude_ != nullptr
        && this->longitude_ != nullptr && this->name_ != nullptr && this->params_ != nullptr && this->parentId_ != nullptr && this->password_ != nullptr
        && this->port_ != nullptr && this->posInterval_ != nullptr && this->protocol_ != nullptr && this->registeredTime_ != nullptr && this->stats_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr && this->url_ != nullptr && this->username_ != nullptr && this->vendor_ != nullptr; };
    // alarmMethod Field Functions 
    bool hasAlarmMethod() const { return this->alarmMethod_ != nullptr;};
    void deleteAlarmMethod() { this->alarmMethod_ = nullptr;};
    inline string alarmMethod() const { DARABONBA_PTR_GET_DEFAULT(alarmMethod_, "") };
    inline DescribeDevicesResponseBodyDevices& setAlarmMethod(string alarmMethod) { DARABONBA_PTR_SET_VALUE(alarmMethod_, alarmMethod) };


    // autoDirectory Field Functions 
    bool hasAutoDirectory() const { return this->autoDirectory_ != nullptr;};
    void deleteAutoDirectory() { this->autoDirectory_ = nullptr;};
    inline bool autoDirectory() const { DARABONBA_PTR_GET_DEFAULT(autoDirectory_, false) };
    inline DescribeDevicesResponseBodyDevices& setAutoDirectory(bool autoDirectory) { DARABONBA_PTR_SET_VALUE(autoDirectory_, autoDirectory) };


    // autoPos Field Functions 
    bool hasAutoPos() const { return this->autoPos_ != nullptr;};
    void deleteAutoPos() { this->autoPos_ = nullptr;};
    inline bool autoPos() const { DARABONBA_PTR_GET_DEFAULT(autoPos_, false) };
    inline DescribeDevicesResponseBodyDevices& setAutoPos(bool autoPos) { DARABONBA_PTR_SET_VALUE(autoPos_, autoPos) };


    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline bool autoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
    inline DescribeDevicesResponseBodyDevices& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // channelSyncTime Field Functions 
    bool hasChannelSyncTime() const { return this->channelSyncTime_ != nullptr;};
    void deleteChannelSyncTime() { this->channelSyncTime_ = nullptr;};
    inline string channelSyncTime() const { DARABONBA_PTR_GET_DEFAULT(channelSyncTime_, "") };
    inline DescribeDevicesResponseBodyDevices& setChannelSyncTime(string channelSyncTime) { DARABONBA_PTR_SET_VALUE(channelSyncTime_, channelSyncTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDevicesResponseBodyDevices& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDevicesResponseBodyDevices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::DescribeDevicesResponseBodyDevicesDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::DescribeDevicesResponseBodyDevicesDirectory) };
    inline Models::DescribeDevicesResponseBodyDevicesDirectory directory() { DARABONBA_PTR_GET(directory_, Models::DescribeDevicesResponseBodyDevicesDirectory) };
    inline DescribeDevicesResponseBodyDevices& setDirectory(const Models::DescribeDevicesResponseBodyDevicesDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline DescribeDevicesResponseBodyDevices& setDirectory(Models::DescribeDevicesResponseBodyDevicesDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDevicesResponseBodyDevices& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // dsn Field Functions 
    bool hasDsn() const { return this->dsn_ != nullptr;};
    void deleteDsn() { this->dsn_ = nullptr;};
    inline string dsn() const { DARABONBA_PTR_GET_DEFAULT(dsn_, "") };
    inline DescribeDevicesResponseBodyDevices& setDsn(string dsn) { DARABONBA_PTR_SET_VALUE(dsn_, dsn) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeDevicesResponseBodyDevices& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeDevicesResponseBodyDevices& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDevicesResponseBodyDevices& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDevicesResponseBodyDevices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDevicesResponseBodyDevices& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline string latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
    inline DescribeDevicesResponseBodyDevices& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline string longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
    inline DescribeDevicesResponseBodyDevices& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDevicesResponseBodyDevices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeDevicesResponseBodyDevices& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDevicesResponseBodyDevices& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeDevicesResponseBodyDevices& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline DescribeDevicesResponseBodyDevices& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // posInterval Field Functions 
    bool hasPosInterval() const { return this->posInterval_ != nullptr;};
    void deletePosInterval() { this->posInterval_ = nullptr;};
    inline int64_t posInterval() const { DARABONBA_PTR_GET_DEFAULT(posInterval_, 0L) };
    inline DescribeDevicesResponseBodyDevices& setPosInterval(int64_t posInterval) { DARABONBA_PTR_SET_VALUE(posInterval_, posInterval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeDevicesResponseBodyDevices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // registeredTime Field Functions 
    bool hasRegisteredTime() const { return this->registeredTime_ != nullptr;};
    void deleteRegisteredTime() { this->registeredTime_ = nullptr;};
    inline string registeredTime() const { DARABONBA_PTR_GET_DEFAULT(registeredTime_, "") };
    inline DescribeDevicesResponseBodyDevices& setRegisteredTime(string registeredTime) { DARABONBA_PTR_SET_VALUE(registeredTime_, registeredTime) };


    // stats Field Functions 
    bool hasStats() const { return this->stats_ != nullptr;};
    void deleteStats() { this->stats_ = nullptr;};
    inline const Models::DescribeDevicesResponseBodyDevicesStats & stats() const { DARABONBA_PTR_GET_CONST(stats_, Models::DescribeDevicesResponseBodyDevicesStats) };
    inline Models::DescribeDevicesResponseBodyDevicesStats stats() { DARABONBA_PTR_GET(stats_, Models::DescribeDevicesResponseBodyDevicesStats) };
    inline DescribeDevicesResponseBodyDevices& setStats(const Models::DescribeDevicesResponseBodyDevicesStats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
    inline DescribeDevicesResponseBodyDevices& setStats(Models::DescribeDevicesResponseBodyDevicesStats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDevicesResponseBodyDevices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDevicesResponseBodyDevices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDevicesResponseBodyDevices& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeDevicesResponseBodyDevices& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeDevicesResponseBodyDevices& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> alarmMethod_ = nullptr;
    std::shared_ptr<bool> autoDirectory_ = nullptr;
    std::shared_ptr<bool> autoPos_ = nullptr;
    std::shared_ptr<bool> autoStart_ = nullptr;
    std::shared_ptr<string> channelSyncTime_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::DescribeDevicesResponseBodyDevicesDirectory> directory_ = nullptr;
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<string> dsn_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> gbId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> latitude_ = nullptr;
    std::shared_ptr<string> longitude_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<int64_t> port_ = nullptr;
    std::shared_ptr<int64_t> posInterval_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> registeredTime_ = nullptr;
    std::shared_ptr<Models::DescribeDevicesResponseBodyDevicesStats> stats_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
