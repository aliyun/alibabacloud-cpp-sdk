// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEINSTANCEFAILOVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEINSTANCEFAILOVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ExecuteInstanceFailoverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteInstanceFailoverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFailoverStatus, instanceFailoverStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteInstanceFailoverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFailoverStatus, instanceFailoverStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ExecuteInstanceFailoverRequest() = default ;
    ExecuteInstanceFailoverRequest(const ExecuteInstanceFailoverRequest &) = default ;
    ExecuteInstanceFailoverRequest(ExecuteInstanceFailoverRequest &&) = default ;
    ExecuteInstanceFailoverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteInstanceFailoverRequest() = default ;
    ExecuteInstanceFailoverRequest& operator=(const ExecuteInstanceFailoverRequest &) = default ;
    ExecuteInstanceFailoverRequest& operator=(ExecuteInstanceFailoverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceFailoverStatus_ == nullptr
        && this->instanceId_ == nullptr; };
    // instanceFailoverStatus Field Functions 
    bool hasInstanceFailoverStatus() const { return this->instanceFailoverStatus_ != nullptr;};
    void deleteInstanceFailoverStatus() { this->instanceFailoverStatus_ = nullptr;};
    inline string getInstanceFailoverStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceFailoverStatus_, "") };
    inline ExecuteInstanceFailoverRequest& setInstanceFailoverStatus(string instanceFailoverStatus) { DARABONBA_PTR_SET_VALUE(instanceFailoverStatus_, instanceFailoverStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExecuteInstanceFailoverRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The failover status. Valid values:
    // - inactive: The primary instance is active.
    // - active: The replica instance is active.
    // 
    // This parameter is required.
    shared_ptr<string> instanceFailoverStatus_ {};
    // The replica instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
