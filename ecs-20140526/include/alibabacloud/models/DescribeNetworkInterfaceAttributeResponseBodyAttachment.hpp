// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYATTACHMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberNetworkInterfaceIds, memberNetworkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_TO_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberNetworkInterfaceIds, memberNetworkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_FROM_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyAttachment() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachment(const DescribeNetworkInterfaceAttributeResponseBodyAttachment &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachment(DescribeNetworkInterfaceAttributeResponseBodyAttachment &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyAttachment() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachment& operator=(const DescribeNetworkInterfaceAttributeResponseBodyAttachment &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachment& operator=(DescribeNetworkInterfaceAttributeResponseBodyAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceIndex_ == nullptr
        && return this->instanceId_ == nullptr && return this->memberNetworkInterfaceIds_ == nullptr && return this->networkCardIndex_ == nullptr && return this->trunkNetworkInterfaceId_ == nullptr; };
    // deviceIndex Field Functions 
    bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
    void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
    inline int32_t deviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberNetworkInterfaceIds Field Functions 
    bool hasMemberNetworkInterfaceIds() const { return this->memberNetworkInterfaceIds_ != nullptr;};
    void deleteMemberNetworkInterfaceIds() { this->memberNetworkInterfaceIds_ = nullptr;};
    inline const Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds & memberNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(memberNetworkInterfaceIds_, Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds) };
    inline Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds memberNetworkInterfaceIds() { DARABONBA_PTR_GET(memberNetworkInterfaceIds_, Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setMemberNetworkInterfaceIds(const Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds & memberNetworkInterfaceIds) { DARABONBA_PTR_SET_VALUE(memberNetworkInterfaceIds_, memberNetworkInterfaceIds) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setMemberNetworkInterfaceIds(Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds && memberNetworkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(memberNetworkInterfaceIds_, memberNetworkInterfaceIds) };


    // networkCardIndex Field Functions 
    bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
    void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
    inline int32_t networkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


    // trunkNetworkInterfaceId Field Functions 
    bool hasTrunkNetworkInterfaceId() const { return this->trunkNetworkInterfaceId_ != nullptr;};
    void deleteTrunkNetworkInterfaceId() { this->trunkNetworkInterfaceId_ = nullptr;};
    inline string trunkNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(trunkNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment& setTrunkNetworkInterfaceId(string trunkNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(trunkNetworkInterfaceId_, trunkNetworkInterfaceId) };


  protected:
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<int32_t> deviceIndex_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> instanceId_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<Models::DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds> memberNetworkInterfaceIds_ = nullptr;
    // The index of the network interface controller (NIC).
    // 
    // *   If the ENI is in the Available state or if no NIC index was specified when the ENI was attached, this parameter has no value.
    // *   If the ENI is in the InUse state and an NIC index was specified when the ENI was attached, the specified NIC index is returned as the value of this parameter.
    std::shared_ptr<int32_t> networkCardIndex_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> trunkNetworkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
