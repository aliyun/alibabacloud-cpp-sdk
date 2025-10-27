// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODYQUARAFILES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODYQUARAFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventQuaraFilesResponseBodyQuaraFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles() = default ;
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles(const DescribeSuspEventQuaraFilesResponseBodyQuaraFiles &) = default ;
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles(DescribeSuspEventQuaraFilesResponseBodyQuaraFiles &&) = default ;
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventQuaraFilesResponseBodyQuaraFiles() = default ;
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& operator=(const DescribeSuspEventQuaraFilesResponseBodyQuaraFiles &) = default ;
    DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& operator=(DescribeSuspEventQuaraFilesResponseBodyQuaraFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->eventType_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->ip_ == nullptr && return this->link_ == nullptr && return this->md5_ == nullptr && return this->modifyTime_ == nullptr
        && return this->path_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr && return this->uuid_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSuspEventQuaraFilesResponseBodyQuaraFiles& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The type of the event.
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the quarantined file.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server on which the quarantined file is located.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server on which the quarantined file is located.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server on which the quarantined file is located.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The public IP address of the server on which the quarantined file is located.
    std::shared_ptr<string> ip_ = nullptr;
    // The download link of the quarantined file.
    std::shared_ptr<string> link_ = nullptr;
    // The MD5 hash value of the quarantined file.
    std::shared_ptr<string> md5_ = nullptr;
    // The time when the quarantined file was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The path to the quarantined file on the server.
    std::shared_ptr<string> path_ = nullptr;
    // The status of the quarantined file. Valid values:
    // 
    // *   **quaraFailed**: The file fails to be quarantined.
    // *   **quaraDone**: The file is quarantined.
    // *   **quaraing**: The file is being quarantined.
    // *   **rollbackFailed**: The system fails to cancel quarantining the file.
    // *   **rollbackDone**: The system cancelled quarantining the file.
    // *   **rollbacking**: The system is cancelling quarantining the file.
    std::shared_ptr<string> status_ = nullptr;
    // The unique ID of the event.
    std::shared_ptr<string> tag_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
