// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEENDPOINTACLPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEENDPOINTACLPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateInstanceEndpointAclPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceEndpointAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Entries, entriesShrink_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceEndpointAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Entries, entriesShrink_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    CreateInstanceEndpointAclPolicyShrinkRequest() = default ;
    CreateInstanceEndpointAclPolicyShrinkRequest(const CreateInstanceEndpointAclPolicyShrinkRequest &) = default ;
    CreateInstanceEndpointAclPolicyShrinkRequest(CreateInstanceEndpointAclPolicyShrinkRequest &&) = default ;
    CreateInstanceEndpointAclPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceEndpointAclPolicyShrinkRequest() = default ;
    CreateInstanceEndpointAclPolicyShrinkRequest& operator=(const CreateInstanceEndpointAclPolicyShrinkRequest &) = default ;
    CreateInstanceEndpointAclPolicyShrinkRequest& operator=(CreateInstanceEndpointAclPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->endpointType_ == nullptr && this->entriesShrink_ == nullptr && this->entry_ == nullptr && this->instanceId_ == nullptr && this->moduleName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // entriesShrink Field Functions 
    bool hasEntriesShrink() const { return this->entriesShrink_ != nullptr;};
    void deleteEntriesShrink() { this->entriesShrink_ = nullptr;};
    inline string getEntriesShrink() const { DARABONBA_PTR_GET_DEFAULT(entriesShrink_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setEntriesShrink(string entriesShrink) { DARABONBA_PTR_SET_VALUE(entriesShrink_, entriesShrink) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline CreateInstanceEndpointAclPolicyShrinkRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The description.
    shared_ptr<string> comment_ {};
    // The endpoint type. Only Internet is supported.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    shared_ptr<string> entriesShrink_ {};
    // The IP address range that is allowed to access the instance.
    shared_ptr<string> entry_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The module for which you want to set the access policy. Valid values:
    // 
    // - `Registry`: access the image repository
    // 
    // - `Chart`: access Helm Chart
    shared_ptr<string> moduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
