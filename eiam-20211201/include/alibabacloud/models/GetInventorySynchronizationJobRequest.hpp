// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInventorySynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
    };
    GetInventorySynchronizationJobRequest() = default ;
    GetInventorySynchronizationJobRequest(const GetInventorySynchronizationJobRequest &) = default ;
    GetInventorySynchronizationJobRequest(GetInventorySynchronizationJobRequest &&) = default ;
    GetInventorySynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySynchronizationJobRequest() = default ;
    GetInventorySynchronizationJobRequest& operator=(const GetInventorySynchronizationJobRequest &) = default ;
    GetInventorySynchronizationJobRequest& operator=(GetInventorySynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->inventorySynchronizationJobId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInventorySynchronizationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // inventorySynchronizationJobId Field Functions 
    bool hasInventorySynchronizationJobId() const { return this->inventorySynchronizationJobId_ != nullptr;};
    void deleteInventorySynchronizationJobId() { this->inventorySynchronizationJobId_ = nullptr;};
    inline string getInventorySynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(inventorySynchronizationJobId_, "") };
    inline GetInventorySynchronizationJobRequest& setInventorySynchronizationJobId(string inventorySynchronizationJobId) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJobId_, inventorySynchronizationJobId) };


  protected:
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the synchronization task.
    // 
    // This parameter is required.
    shared_ptr<string> inventorySynchronizationJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
