// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_TO_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_FROM_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
    };
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment &&) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& operator=(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& operator=(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceIndex_ != nullptr
        && this->instanceId_ != nullptr && this->networkCardIndex_ != nullptr && this->trunkNetworkInterfaceId_ != nullptr; };
    // deviceIndex Field Functions 
    bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
    void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
    inline int32_t deviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkCardIndex Field Functions 
    bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
    void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
    inline int32_t networkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


    // trunkNetworkInterfaceId Field Functions 
    bool hasTrunkNetworkInterfaceId() const { return this->trunkNetworkInterfaceId_ != nullptr;};
    void deleteTrunkNetworkInterfaceId() { this->trunkNetworkInterfaceId_ = nullptr;};
    inline string trunkNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(trunkNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetAttachment& setTrunkNetworkInterfaceId(string trunkNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(trunkNetworkInterfaceId_, trunkNetworkInterfaceId) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> deviceIndex_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The index of the network card.
    // 
    // *   If the ENI is in the Available state or if no network card index was specified when the ENI was attached, this parameter is empty.
    // *   If the ENI is in the InUse state and a network card index was specified when the ENI was attached, the specified network card index is returned as the value of this parameter.
    std::shared_ptr<int32_t> networkCardIndex_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> trunkNetworkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
