// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostsActiveAddressTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostsActiveAddressTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostsActiveAddressTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyHostsActiveAddressTypeRequest() = default ;
    ModifyHostsActiveAddressTypeRequest(const ModifyHostsActiveAddressTypeRequest &) = default ;
    ModifyHostsActiveAddressTypeRequest(ModifyHostsActiveAddressTypeRequest &&) = default ;
    ModifyHostsActiveAddressTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostsActiveAddressTypeRequest() = default ;
    ModifyHostsActiveAddressTypeRequest& operator=(const ModifyHostsActiveAddressTypeRequest &) = default ;
    ModifyHostsActiveAddressTypeRequest& operator=(ModifyHostsActiveAddressTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->hostIds_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ModifyHostsActiveAddressTypeRequest& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline string getHostIds() const { DARABONBA_PTR_GET_DEFAULT(hostIds_, "") };
    inline ModifyHostsActiveAddressTypeRequest& setHostIds(string hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostsActiveAddressTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyHostsActiveAddressTypeRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostsActiveAddressTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new endpoint type of the host. Valid values:
    // 
    // - **Public**: Internet
    // - **Private**: private network
    // 
    // This parameter is required.
    shared_ptr<string> activeAddressType_ {};
    // The IDs of the hosts whose endpoint types you want to modify. The value is a character string in JSON format. You can specify up to 100 host IDs.
    // You can invoke the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostIds_ {};
    // The instance ID of the Bastionhost instance to which the host whose endpoint type you want to modify belongs.
    // 
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The area ID of the Bastionhost instance to which the host whose endpoint type you want to modify belongs.
    // 
    // > For more information about the mapping between area IDs and area names, see [Regions and active zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
