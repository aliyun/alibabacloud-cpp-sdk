// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKATTACHMENTSATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKATTACHMENTSATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskAttachmentsAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment() = default ;
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment(const DescribeDisksResponseBodyDisksDiskAttachmentsAttachment &) = default ;
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment(DescribeDisksResponseBodyDisksDiskAttachmentsAttachment &&) = default ;
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskAttachmentsAttachment() = default ;
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& operator=(const DescribeDisksResponseBodyDisksDiskAttachmentsAttachment &) = default ;
    DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& operator=(DescribeDisksResponseBodyDisksDiskAttachmentsAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachedTime_ != nullptr
        && this->device_ != nullptr && this->instanceId_ != nullptr; };
    // attachedTime Field Functions 
    bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
    void deleteAttachedTime() { this->attachedTime_ = nullptr;};
    inline string attachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
    inline DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksResponseBodyDisksDiskAttachmentsAttachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The time when the disk was attached. The time is displayed in UTC.
    std::shared_ptr<string> attachedTime_ = nullptr;
    // The device name of the disk.
    std::shared_ptr<string> device_ = nullptr;
    // The ID of the instance to which the disk is attached.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
