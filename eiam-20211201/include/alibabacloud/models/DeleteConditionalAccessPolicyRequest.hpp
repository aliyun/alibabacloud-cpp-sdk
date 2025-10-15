// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONDITIONALACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONDITIONALACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteConditionalAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteConditionalAccessPolicyRequest() = default ;
    DeleteConditionalAccessPolicyRequest(const DeleteConditionalAccessPolicyRequest &) = default ;
    DeleteConditionalAccessPolicyRequest(DeleteConditionalAccessPolicyRequest &&) = default ;
    DeleteConditionalAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConditionalAccessPolicyRequest() = default ;
    DeleteConditionalAccessPolicyRequest& operator=(const DeleteConditionalAccessPolicyRequest &) = default ;
    DeleteConditionalAccessPolicyRequest& operator=(DeleteConditionalAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicyId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // conditionalAccessPolicyId Field Functions 
    bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
    void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
    inline string conditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
    inline DeleteConditionalAccessPolicyRequest& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteConditionalAccessPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Conditional Access Policy ID
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyId_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
