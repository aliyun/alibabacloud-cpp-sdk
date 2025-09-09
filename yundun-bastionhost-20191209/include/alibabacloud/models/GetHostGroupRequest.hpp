// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetHostGroupRequest() = default ;
    GetHostGroupRequest(const GetHostGroupRequest &) = default ;
    GetHostGroupRequest(GetHostGroupRequest &&) = default ;
    GetHostGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupRequest() = default ;
    GetHostGroupRequest& operator=(const GetHostGroupRequest &) = default ;
    GetHostGroupRequest& operator=(GetHostGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostGroupId_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr; };
    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline GetHostGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHostGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetHostGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the asset group to query.
    // 
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the asset group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The ID of the bastion host whose asset group you want to query.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host whose asset group you want to query.
    // 
    // > For more information about the mapping between region IDs and region names, [see Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
