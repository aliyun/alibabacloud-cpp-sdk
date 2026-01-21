// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTOPERATIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTOPERATIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RejectOperationTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectOperationTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectOperationTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RejectOperationTicketRequest() = default ;
    RejectOperationTicketRequest(const RejectOperationTicketRequest &) = default ;
    RejectOperationTicketRequest(RejectOperationTicketRequest &&) = default ;
    RejectOperationTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectOperationTicketRequest() = default ;
    RejectOperationTicketRequest& operator=(const RejectOperationTicketRequest &) = default ;
    RejectOperationTicketRequest& operator=(RejectOperationTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceId_ == nullptr && this->operationTicketId_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline RejectOperationTicketRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RejectOperationTicketRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operationTicketId Field Functions 
    bool hasOperationTicketId() const { return this->operationTicketId_ != nullptr;};
    void deleteOperationTicketId() { this->operationTicketId_ = nullptr;};
    inline string getOperationTicketId() const { DARABONBA_PTR_GET_DEFAULT(operationTicketId_, "") };
    inline RejectOperationTicketRequest& setOperationTicketId(string operationTicketId) { DARABONBA_PTR_SET_VALUE(operationTicketId_, operationTicketId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RejectOperationTicketRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The review remarks.
    shared_ptr<string> comment_ {};
    // The ID of the bastion host.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the O\\&M application that you want to reject.
    // 
    // >  You can call the [ListOperationTickets](https://help.aliyun.com/document_detail/2584313.html) operation to query the IDs of all O\\&M applications that require review.
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
