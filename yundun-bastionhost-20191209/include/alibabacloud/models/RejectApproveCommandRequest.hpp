// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTAPPROVECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTAPPROVECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RejectApproveCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectApproveCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectApproveCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RejectApproveCommandRequest() = default ;
    RejectApproveCommandRequest(const RejectApproveCommandRequest &) = default ;
    RejectApproveCommandRequest(RejectApproveCommandRequest &&) = default ;
    RejectApproveCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectApproveCommandRequest() = default ;
    RejectApproveCommandRequest& operator=(const RejectApproveCommandRequest &) = default ;
    RejectApproveCommandRequest& operator=(RejectApproveCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline RejectApproveCommandRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RejectApproveCommandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RejectApproveCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the command that you want to reject.
    // 
    // >  You can call the [ListApproveCommands](https://help.aliyun.com/document_detail/2584310.html) operation to query the IDs of all commands that need to be reviewed.
    // 
    // This parameter is required.
    shared_ptr<string> commandId_ {};
    // The ID of the bastion host.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
