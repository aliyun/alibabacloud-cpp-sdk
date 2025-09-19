// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODYPUSHTASKRSPPUSHTASKRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODYPUSHTASKRSPPUSHTASKRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList() = default ;
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList(const ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList &) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList(ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList &&) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList() = default ;
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& operator=(const ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList &) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& operator=(ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->ip_ != nullptr && this->message_ != nullptr && this->online_ != nullptr
        && this->osVersion_ != nullptr && this->region_ != nullptr && this->success_ != nullptr && this->uuid_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server group to which the server belongs.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The message that describes the security check failure.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the Security Center agent is online. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  If the Security Center agent of the server is offline, Security Center does not protect the server.
    std::shared_ptr<bool> online_ = nullptr;
    // The operating system version of the server.
    std::shared_ptr<string> osVersion_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> region_ = nullptr;
    // Indicates whether the security check task is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
