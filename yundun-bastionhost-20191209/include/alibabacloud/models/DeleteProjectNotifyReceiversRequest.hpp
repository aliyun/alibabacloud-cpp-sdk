// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTNOTIFYRECEIVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTNOTIFYRECEIVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteProjectNotifyReceiversRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectNotifyReceiversRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ReceiverIds, receiverIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectNotifyReceiversRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ReceiverIds, receiverIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteProjectNotifyReceiversRequest() = default ;
    DeleteProjectNotifyReceiversRequest(const DeleteProjectNotifyReceiversRequest &) = default ;
    DeleteProjectNotifyReceiversRequest(DeleteProjectNotifyReceiversRequest &&) = default ;
    DeleteProjectNotifyReceiversRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectNotifyReceiversRequest() = default ;
    DeleteProjectNotifyReceiversRequest& operator=(const DeleteProjectNotifyReceiversRequest &) = default ;
    DeleteProjectNotifyReceiversRequest& operator=(DeleteProjectNotifyReceiversRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->receiverIds_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteProjectNotifyReceiversRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // receiverIds Field Functions 
    bool hasReceiverIds() const { return this->receiverIds_ != nullptr;};
    void deleteReceiverIds() { this->receiverIds_ = nullptr;};
    inline string getReceiverIds() const { DARABONBA_PTR_GET_DEFAULT(receiverIds_, "") };
    inline DeleteProjectNotifyReceiversRequest& setReceiverIds(string receiverIds) { DARABONBA_PTR_SET_VALUE(receiverIds_, receiverIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteProjectNotifyReceiversRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the Bastionhost instance.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to retrieve this parameter.
    shared_ptr<string> instanceId_ {};
    // The IDs of the notification recipients to delete.
    // > You can call the GetProject operation to retrieve this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> receiverIds_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
