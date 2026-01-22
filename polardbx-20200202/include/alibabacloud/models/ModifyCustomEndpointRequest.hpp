// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyCustomEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeAutoEnter, nodeAutoEnter_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeAutoEnter, nodeAutoEnter_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCustomEndpointRequest() = default ;
    ModifyCustomEndpointRequest(const ModifyCustomEndpointRequest &) = default ;
    ModifyCustomEndpointRequest(ModifyCustomEndpointRequest &&) = default ;
    ModifyCustomEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomEndpointRequest() = default ;
    ModifyCustomEndpointRequest& operator=(const ModifyCustomEndpointRequest &) = default ;
    ModifyCustomEndpointRequest& operator=(ModifyCustomEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEndpointId_ == nullptr
        && this->DBInstanceName_ == nullptr && this->name_ == nullptr && this->nodeAutoEnter_ == nullptr && this->nodeIds_ == nullptr && this->nodeRole_ == nullptr
        && this->regionId_ == nullptr; };
    // customEndpointId Field Functions 
    bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
    void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
    inline string getCustomEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
    inline ModifyCustomEndpointRequest& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyCustomEndpointRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCustomEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeAutoEnter Field Functions 
    bool hasNodeAutoEnter() const { return this->nodeAutoEnter_ != nullptr;};
    void deleteNodeAutoEnter() { this->nodeAutoEnter_ = nullptr;};
    inline bool getNodeAutoEnter() const { DARABONBA_PTR_GET_DEFAULT(nodeAutoEnter_, false) };
    inline ModifyCustomEndpointRequest& setNodeAutoEnter(bool nodeAutoEnter) { DARABONBA_PTR_SET_VALUE(nodeAutoEnter_, nodeAutoEnter) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline ModifyCustomEndpointRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline ModifyCustomEndpointRequest& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCustomEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> customEndpointId_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> nodeAutoEnter_ {};
    // node ids
    shared_ptr<string> nodeIds_ {};
    shared_ptr<string> nodeRole_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
