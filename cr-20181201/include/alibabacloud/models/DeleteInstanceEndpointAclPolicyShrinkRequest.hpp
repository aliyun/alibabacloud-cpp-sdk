// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEENDPOINTACLPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEENDPOINTACLPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteInstanceEndpointAclPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceEndpointAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Entries, entriesShrink_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceEndpointAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Entries, entriesShrink_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    DeleteInstanceEndpointAclPolicyShrinkRequest() = default ;
    DeleteInstanceEndpointAclPolicyShrinkRequest(const DeleteInstanceEndpointAclPolicyShrinkRequest &) = default ;
    DeleteInstanceEndpointAclPolicyShrinkRequest(DeleteInstanceEndpointAclPolicyShrinkRequest &&) = default ;
    DeleteInstanceEndpointAclPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceEndpointAclPolicyShrinkRequest() = default ;
    DeleteInstanceEndpointAclPolicyShrinkRequest& operator=(const DeleteInstanceEndpointAclPolicyShrinkRequest &) = default ;
    DeleteInstanceEndpointAclPolicyShrinkRequest& operator=(DeleteInstanceEndpointAclPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->entriesShrink_ == nullptr && this->entry_ == nullptr && this->instanceId_ == nullptr && this->moduleName_ == nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DeleteInstanceEndpointAclPolicyShrinkRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // entriesShrink Field Functions 
    bool hasEntriesShrink() const { return this->entriesShrink_ != nullptr;};
    void deleteEntriesShrink() { this->entriesShrink_ = nullptr;};
    inline string getEntriesShrink() const { DARABONBA_PTR_GET_DEFAULT(entriesShrink_, "") };
    inline DeleteInstanceEndpointAclPolicyShrinkRequest& setEntriesShrink(string entriesShrink) { DARABONBA_PTR_SET_VALUE(entriesShrink_, entriesShrink) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline DeleteInstanceEndpointAclPolicyShrinkRequest& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstanceEndpointAclPolicyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DeleteInstanceEndpointAclPolicyShrinkRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The endpoint type. Only Internet is supported.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    shared_ptr<string> entriesShrink_ {};
    // The IP CIDR block.
    shared_ptr<string> entry_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The module for which the access policy is set. Valid values:
    // 
    // - `Registry`: access to the image repository
    // 
    // - `Chart`: access to Helm Chart
    shared_ptr<string> moduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
