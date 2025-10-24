// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetAcpConnectionTicketRequestInstanceTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BatchGetAcpConnectionTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetAcpConnectionTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceTasks, instanceTasks_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceTasks, instanceTasks_);
    };
    BatchGetAcpConnectionTicketRequest() = default ;
    BatchGetAcpConnectionTicketRequest(const BatchGetAcpConnectionTicketRequest &) = default ;
    BatchGetAcpConnectionTicketRequest(BatchGetAcpConnectionTicketRequest &&) = default ;
    BatchGetAcpConnectionTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetAcpConnectionTicketRequest() = default ;
    BatchGetAcpConnectionTicketRequest& operator=(const BatchGetAcpConnectionTicketRequest &) = default ;
    BatchGetAcpConnectionTicketRequest& operator=(BatchGetAcpConnectionTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && return this->instanceGroupId_ == nullptr && return this->instanceIds_ == nullptr && return this->instanceTasks_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline BatchGetAcpConnectionTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline BatchGetAcpConnectionTicketRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceTasks Field Functions 
    bool hasInstanceTasks() const { return this->instanceTasks_ != nullptr;};
    void deleteInstanceTasks() { this->instanceTasks_ = nullptr;};
    inline const vector<BatchGetAcpConnectionTicketRequestInstanceTasks> & instanceTasks() const { DARABONBA_PTR_GET_CONST(instanceTasks_, vector<BatchGetAcpConnectionTicketRequestInstanceTasks>) };
    inline vector<BatchGetAcpConnectionTicketRequestInstanceTasks> instanceTasks() { DARABONBA_PTR_GET(instanceTasks_, vector<BatchGetAcpConnectionTicketRequestInstanceTasks>) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceTasks(const vector<BatchGetAcpConnectionTicketRequestInstanceTasks> & instanceTasks) { DARABONBA_PTR_SET_VALUE(instanceTasks_, instanceTasks) };
    inline BatchGetAcpConnectionTicketRequest& setInstanceTasks(vector<BatchGetAcpConnectionTicketRequestInstanceTasks> && instanceTasks) { DARABONBA_PTR_SET_RVALUE(instanceTasks_, instanceTasks) };


  protected:
    // The ID of the user to whom the cloud phone instance is assigned.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The IDs of the cloud phone instances. You can specify 1 to 100 IDs of cloud phone instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The instance connection tasks.
    std::shared_ptr<vector<BatchGetAcpConnectionTicketRequestInstanceTasks>> instanceTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
