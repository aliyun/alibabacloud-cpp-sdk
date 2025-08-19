// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyPolicyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(namespaces, namespaces_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(namespaces, namespaces_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
    };
    ModifyPolicyInstanceRequest() = default ;
    ModifyPolicyInstanceRequest(const ModifyPolicyInstanceRequest &) = default ;
    ModifyPolicyInstanceRequest(ModifyPolicyInstanceRequest &&) = default ;
    ModifyPolicyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyInstanceRequest() = default ;
    ModifyPolicyInstanceRequest& operator=(const ModifyPolicyInstanceRequest &) = default ;
    ModifyPolicyInstanceRequest& operator=(ModifyPolicyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->instanceName_ != nullptr && this->namespaces_ != nullptr && this->parameters_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ModifyPolicyInstanceRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyPolicyInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline ModifyPolicyInstanceRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ModifyPolicyInstanceRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline ModifyPolicyInstanceRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ModifyPolicyInstanceRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    // The action of the policy. Valid values:
    // 
    // *   `deny`: Deployments that match the policy are denied.
    // *   `warn`: Alerts are generated for deployments that match the policy.
    std::shared_ptr<string> action_ = nullptr;
    // The ID of the policy instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The namespaces to which the policy is applied. The policy is applied to all namespaces if this parameter is left empty.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // The parameters of the policy instance. For more information, see [Predefined security policies of ACK](https://help.aliyun.com/document_detail/359819.html).
    Darabonba::Json parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
