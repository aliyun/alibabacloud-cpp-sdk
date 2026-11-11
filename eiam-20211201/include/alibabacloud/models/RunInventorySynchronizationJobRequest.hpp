// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINVENTORYSYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNINVENTORYSYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RunInventorySynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInventorySynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InventorySourceId, inventorySourceId_);
      DARABONBA_PTR_TO_JSON(InventoryTypes, inventoryTypes_);
    };
    friend void from_json(const Darabonba::Json& j, RunInventorySynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InventorySourceId, inventorySourceId_);
      DARABONBA_PTR_FROM_JSON(InventoryTypes, inventoryTypes_);
    };
    RunInventorySynchronizationJobRequest() = default ;
    RunInventorySynchronizationJobRequest(const RunInventorySynchronizationJobRequest &) = default ;
    RunInventorySynchronizationJobRequest(RunInventorySynchronizationJobRequest &&) = default ;
    RunInventorySynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInventorySynchronizationJobRequest() = default ;
    RunInventorySynchronizationJobRequest& operator=(const RunInventorySynchronizationJobRequest &) = default ;
    RunInventorySynchronizationJobRequest& operator=(RunInventorySynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->inventorySourceId_ == nullptr && this->inventoryTypes_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunInventorySynchronizationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // inventorySourceId Field Functions 
    bool hasInventorySourceId() const { return this->inventorySourceId_ != nullptr;};
    void deleteInventorySourceId() { this->inventorySourceId_ = nullptr;};
    inline string getInventorySourceId() const { DARABONBA_PTR_GET_DEFAULT(inventorySourceId_, "") };
    inline RunInventorySynchronizationJobRequest& setInventorySourceId(string inventorySourceId) { DARABONBA_PTR_SET_VALUE(inventorySourceId_, inventorySourceId) };


    // inventoryTypes Field Functions 
    bool hasInventoryTypes() const { return this->inventoryTypes_ != nullptr;};
    void deleteInventoryTypes() { this->inventoryTypes_ = nullptr;};
    inline const vector<string> & getInventoryTypes() const { DARABONBA_PTR_GET_CONST(inventoryTypes_, vector<string>) };
    inline vector<string> getInventoryTypes() { DARABONBA_PTR_GET(inventoryTypes_, vector<string>) };
    inline RunInventorySynchronizationJobRequest& setInventoryTypes(const vector<string> & inventoryTypes) { DARABONBA_PTR_SET_VALUE(inventoryTypes_, inventoryTypes) };
    inline RunInventorySynchronizationJobRequest& setInventoryTypes(vector<string> && inventoryTypes) { DARABONBA_PTR_SET_RVALUE(inventoryTypes_, inventoryTypes) };


  protected:
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the synchronization target.
    // 
    // This parameter is required.
    shared_ptr<string> inventorySourceId_ {};
    // The resource types.
    shared_ptr<vector<string>> inventoryTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
