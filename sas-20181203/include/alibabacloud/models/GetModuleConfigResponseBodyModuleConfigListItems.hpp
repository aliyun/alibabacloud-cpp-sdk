// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODYMODULECONFIGLISTITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODYMODULECONFIGLISTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigResponseBodyModuleConfigListItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigResponseBodyModuleConfigListItems& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigResponseBodyModuleConfigListItems& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetModuleConfigResponseBodyModuleConfigListItems() = default ;
    GetModuleConfigResponseBodyModuleConfigListItems(const GetModuleConfigResponseBodyModuleConfigListItems &) = default ;
    GetModuleConfigResponseBodyModuleConfigListItems(GetModuleConfigResponseBodyModuleConfigListItems &&) = default ;
    GetModuleConfigResponseBodyModuleConfigListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigResponseBodyModuleConfigListItems() = default ;
    GetModuleConfigResponseBodyModuleConfigListItems& operator=(const GetModuleConfigResponseBodyModuleConfigListItems &) = default ;
    GetModuleConfigResponseBodyModuleConfigListItems& operator=(GetModuleConfigResponseBodyModuleConfigListItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->ip_ == nullptr && return this->region_ == nullptr && return this->uuid_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetModuleConfigResponseBodyModuleConfigListItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server group to which the server belongs.
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> region_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
