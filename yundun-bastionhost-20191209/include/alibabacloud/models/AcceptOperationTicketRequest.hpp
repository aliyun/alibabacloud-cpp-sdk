// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTOPERATIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTOPERATIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AcceptOperationTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptOperationTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EffectCount, effectCount_);
      DARABONBA_PTR_TO_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_TO_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptOperationTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EffectCount, effectCount_);
      DARABONBA_PTR_FROM_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AcceptOperationTicketRequest() = default ;
    AcceptOperationTicketRequest(const AcceptOperationTicketRequest &) = default ;
    AcceptOperationTicketRequest(AcceptOperationTicketRequest &&) = default ;
    AcceptOperationTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptOperationTicketRequest() = default ;
    AcceptOperationTicketRequest& operator=(const AcceptOperationTicketRequest &) = default ;
    AcceptOperationTicketRequest& operator=(AcceptOperationTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->effectCount_ == nullptr && this->effectEndTime_ == nullptr && this->effectStartTime_ == nullptr && this->instanceId_ == nullptr && this->operationTicketId_ == nullptr
        && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline AcceptOperationTicketRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // effectCount Field Functions 
    bool hasEffectCount() const { return this->effectCount_ != nullptr;};
    void deleteEffectCount() { this->effectCount_ = nullptr;};
    inline string getEffectCount() const { DARABONBA_PTR_GET_DEFAULT(effectCount_, "") };
    inline AcceptOperationTicketRequest& setEffectCount(string effectCount) { DARABONBA_PTR_SET_VALUE(effectCount_, effectCount) };


    // effectEndTime Field Functions 
    bool hasEffectEndTime() const { return this->effectEndTime_ != nullptr;};
    void deleteEffectEndTime() { this->effectEndTime_ = nullptr;};
    inline string getEffectEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectEndTime_, "") };
    inline AcceptOperationTicketRequest& setEffectEndTime(string effectEndTime) { DARABONBA_PTR_SET_VALUE(effectEndTime_, effectEndTime) };


    // effectStartTime Field Functions 
    bool hasEffectStartTime() const { return this->effectStartTime_ != nullptr;};
    void deleteEffectStartTime() { this->effectStartTime_ = nullptr;};
    inline string getEffectStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectStartTime_, "") };
    inline AcceptOperationTicketRequest& setEffectStartTime(string effectStartTime) { DARABONBA_PTR_SET_VALUE(effectStartTime_, effectStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AcceptOperationTicketRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operationTicketId Field Functions 
    bool hasOperationTicketId() const { return this->operationTicketId_ != nullptr;};
    void deleteOperationTicketId() { this->operationTicketId_ = nullptr;};
    inline string getOperationTicketId() const { DARABONBA_PTR_GET_DEFAULT(operationTicketId_, "") };
    inline AcceptOperationTicketRequest& setOperationTicketId(string operationTicketId) { DARABONBA_PTR_SET_VALUE(operationTicketId_, operationTicketId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AcceptOperationTicketRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The review description.
    shared_ptr<string> comment_ {};
    // The maximum number of logons allowed. Valid values:
    // 
    // *   **0**: The number of logons is unlimited. The O\\&M engineer can log on to the specified asset for unlimited times during the validity period.
    // *   **1**: The O\\&M engineer can log on to the specified asset only once during the validity period.
    // 
    // > *   You can set this parameter only to 0 if you review an O\\&M application on a database.
    // > *   If you do not specify this parameter, the default value 0 is used.
    shared_ptr<string> effectCount_ {};
    // The end time of the validity period. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> effectEndTime_ {};
    // The start time of the validity period. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> effectStartTime_ {};
    // The ID of the bastion host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the O\\&M application that you want to approve. You can call the ListOperationTickets operation to query the IDs of all O\\&M applications that require review.
    // 
    // This parameter is required.
    shared_ptr<string> operationTicketId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
