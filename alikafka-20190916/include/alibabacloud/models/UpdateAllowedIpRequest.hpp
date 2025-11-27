// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALLOWEDIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALLOWEDIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpdateAllowedIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAllowedIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedListIp, allowedListIp_);
      DARABONBA_PTR_TO_JSON(AllowedListType, allowedListType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpdateType, updateType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAllowedIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedListIp, allowedListIp_);
      DARABONBA_PTR_FROM_JSON(AllowedListType, allowedListType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpdateType, updateType_);
    };
    UpdateAllowedIpRequest() = default ;
    UpdateAllowedIpRequest(const UpdateAllowedIpRequest &) = default ;
    UpdateAllowedIpRequest(UpdateAllowedIpRequest &&) = default ;
    UpdateAllowedIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAllowedIpRequest() = default ;
    UpdateAllowedIpRequest& operator=(const UpdateAllowedIpRequest &) = default ;
    UpdateAllowedIpRequest& operator=(UpdateAllowedIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedListIp_ == nullptr
        && return this->allowedListType_ == nullptr && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->portRange_ == nullptr && return this->regionId_ == nullptr
        && return this->updateType_ == nullptr; };
    // allowedListIp Field Functions 
    bool hasAllowedListIp() const { return this->allowedListIp_ != nullptr;};
    void deleteAllowedListIp() { this->allowedListIp_ = nullptr;};
    inline string allowedListIp() const { DARABONBA_PTR_GET_DEFAULT(allowedListIp_, "") };
    inline UpdateAllowedIpRequest& setAllowedListIp(string allowedListIp) { DARABONBA_PTR_SET_VALUE(allowedListIp_, allowedListIp) };


    // allowedListType Field Functions 
    bool hasAllowedListType() const { return this->allowedListType_ != nullptr;};
    void deleteAllowedListType() { this->allowedListType_ = nullptr;};
    inline string allowedListType() const { DARABONBA_PTR_GET_DEFAULT(allowedListType_, "") };
    inline UpdateAllowedIpRequest& setAllowedListType(string allowedListType) { DARABONBA_PTR_SET_VALUE(allowedListType_, allowedListType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAllowedIpRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAllowedIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline UpdateAllowedIpRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAllowedIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string updateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline UpdateAllowedIpRequest& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


  protected:
    // The IP addresses that you want to manage. You can specify a CIDR block. Example: **192.168.0.0/16**.
    // 
    // *   If the **UpdateType** parameter is set to **add**, specify one or more IP addresses for this parameter. Separate multiple IP addresses with commas (,).
    // *   If the **UpdateType** parameter is set to **delete**, specify only one IP address.
    // *   Exercise caution when you delete IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<string> allowedListIp_ = nullptr;
    // The type of the whitelist. Valid values:
    // 
    // *   **vpc**: a whitelist for access from a VPC.
    // *   **internet**: a whitelist for access from the Internet.
    // 
    // This parameter is required.
    std::shared_ptr<string> allowedListType_ = nullptr;
    // The description of the whitelist.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The port range. Valid values:
    // 
    // *   **9092/9092**: Messages are transmitted in a virtual private cloud (VPC) by using the PLAINTEXT protocol.
    // *   **9093/9093**: Messages are transmitted over the Internet by using the SASL_SSL protocol.
    // *   **9094/9094**: Messages are transmitted in a VPC by using the SASL_PLAINTEXT protocol.
    // *   **9095/9095**: Messages are transmitted in a VPC by using the SASL_SSL protocol.
    // 
    // This parameter must correspond to **AllowdedListType**.
    // 
    // This parameter is required.
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of configuration change. Valid values:
    // 
    // *   **add**
    // *   **delete**
    // 
    // This parameter is required.
    std::shared_ptr<string> updateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
