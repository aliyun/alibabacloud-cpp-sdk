// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateConditionalAccessPolicyDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConditionalAccessPolicyDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConditionalAccessPolicyDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateConditionalAccessPolicyDescriptionRequest() = default ;
    UpdateConditionalAccessPolicyDescriptionRequest(const UpdateConditionalAccessPolicyDescriptionRequest &) = default ;
    UpdateConditionalAccessPolicyDescriptionRequest(UpdateConditionalAccessPolicyDescriptionRequest &&) = default ;
    UpdateConditionalAccessPolicyDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConditionalAccessPolicyDescriptionRequest() = default ;
    UpdateConditionalAccessPolicyDescriptionRequest& operator=(const UpdateConditionalAccessPolicyDescriptionRequest &) = default ;
    UpdateConditionalAccessPolicyDescriptionRequest& operator=(UpdateConditionalAccessPolicyDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->conditionalAccessPolicyId_ == nullptr && return this->description_ == nullptr && return this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateConditionalAccessPolicyDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conditionalAccessPolicyId Field Functions 
    bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
    void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
    inline string conditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
    inline UpdateConditionalAccessPolicyDescriptionRequest& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConditionalAccessPolicyDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConditionalAccessPolicyDescriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Idp client token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Conditional Access Policy ID
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyId_ = nullptr;
    // Description of the conditional access policy
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
