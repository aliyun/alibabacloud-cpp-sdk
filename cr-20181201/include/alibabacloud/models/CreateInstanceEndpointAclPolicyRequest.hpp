// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEENDPOINTACLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEENDPOINTACLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateInstanceEndpointAclPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceEndpointAclPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceEndpointAclPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    CreateInstanceEndpointAclPolicyRequest() = default ;
    CreateInstanceEndpointAclPolicyRequest(const CreateInstanceEndpointAclPolicyRequest &) = default ;
    CreateInstanceEndpointAclPolicyRequest(CreateInstanceEndpointAclPolicyRequest &&) = default ;
    CreateInstanceEndpointAclPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceEndpointAclPolicyRequest() = default ;
    CreateInstanceEndpointAclPolicyRequest& operator=(const CreateInstanceEndpointAclPolicyRequest &) = default ;
    CreateInstanceEndpointAclPolicyRequest& operator=(CreateInstanceEndpointAclPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->endpointType_ == nullptr && return this->entry_ == nullptr && return this->instanceId_ == nullptr && return this->moduleName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateInstanceEndpointAclPolicyRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateInstanceEndpointAclPolicyRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline CreateInstanceEndpointAclPolicyRequest& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceEndpointAclPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline CreateInstanceEndpointAclPolicyRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The description.
    std::shared_ptr<string> comment_ = nullptr;
    // The type of the endpoint. Set the value to Internet.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointType_ = nullptr;
    // The CIDR block that is accessible.
    // 
    // This parameter is required.
    std::shared_ptr<string> entry_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the module that you want to access. Valid values:
    // 
    // *   `Registry`: the image repository.
    // *   `Chart`: a Helm chart.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
