// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class DeleteInstancePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstancePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstancePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    DeleteInstancePolicyRequest() = default ;
    DeleteInstancePolicyRequest(const DeleteInstancePolicyRequest &) = default ;
    DeleteInstancePolicyRequest(DeleteInstancePolicyRequest &&) = default ;
    DeleteInstancePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstancePolicyRequest() = default ;
    DeleteInstancePolicyRequest& operator=(const DeleteInstancePolicyRequest &) = default ;
    DeleteInstancePolicyRequest& operator=(DeleteInstancePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->policyVersion_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteInstancePolicyRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline DeleteInstancePolicyRequest& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The version of the instance policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
