// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKECONSUMERMODELCARDGRANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKECONSUMERMODELCARDGRANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RevokeConsumerModelCardGrantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeConsumerModelCardGrantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_TO_JSON(modelGroupIds, modelGroupIds_);
      DARABONBA_PTR_TO_JSON(principalId, principalId_);
      DARABONBA_PTR_TO_JSON(principalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeConsumerModelCardGrantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_FROM_JSON(modelGroupIds, modelGroupIds_);
      DARABONBA_PTR_FROM_JSON(principalId, principalId_);
      DARABONBA_PTR_FROM_JSON(principalType, principalType_);
    };
    RevokeConsumerModelCardGrantsRequest() = default ;
    RevokeConsumerModelCardGrantsRequest(const RevokeConsumerModelCardGrantsRequest &) = default ;
    RevokeConsumerModelCardGrantsRequest(RevokeConsumerModelCardGrantsRequest &&) = default ;
    RevokeConsumerModelCardGrantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeConsumerModelCardGrantsRequest() = default ;
    RevokeConsumerModelCardGrantsRequest& operator=(const RevokeConsumerModelCardGrantsRequest &) = default ;
    RevokeConsumerModelCardGrantsRequest& operator=(RevokeConsumerModelCardGrantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelCardIds_ == nullptr
        && this->modelGroupIds_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr; };
    // modelCardIds Field Functions 
    bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
    void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
    inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
    inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
    inline RevokeConsumerModelCardGrantsRequest& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
    inline RevokeConsumerModelCardGrantsRequest& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


    // modelGroupIds Field Functions 
    bool hasModelGroupIds() const { return this->modelGroupIds_ != nullptr;};
    void deleteModelGroupIds() { this->modelGroupIds_ = nullptr;};
    inline const vector<string> & getModelGroupIds() const { DARABONBA_PTR_GET_CONST(modelGroupIds_, vector<string>) };
    inline vector<string> getModelGroupIds() { DARABONBA_PTR_GET(modelGroupIds_, vector<string>) };
    inline RevokeConsumerModelCardGrantsRequest& setModelGroupIds(const vector<string> & modelGroupIds) { DARABONBA_PTR_SET_VALUE(modelGroupIds_, modelGroupIds) };
    inline RevokeConsumerModelCardGrantsRequest& setModelGroupIds(vector<string> && modelGroupIds) { DARABONBA_PTR_SET_RVALUE(modelGroupIds_, modelGroupIds) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline RevokeConsumerModelCardGrantsRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline RevokeConsumerModelCardGrantsRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // The IDs of the model cards for which entitlements are revoked in this API. Revoking non-existent entitlements is a valid no-op.
    shared_ptr<vector<string>> modelCardIds_ {};
    // The IDs of the actual model groups for which entitlements are revoked in this API. If you revoke only group entitlements, modelCardIds can be empty, and the group or principal is not required to exist. At least one of the two target types must be specified. This operation does not delete consumers, keys, or quotas.
    shared_ptr<vector<string>> modelGroupIds_ {};
    // The immutable ID of the principal for which entitlements are revoked. This is not the name.
    // 
    // This parameter is required.
    shared_ptr<string> principalId_ {};
    // The type of the principal for which entitlements are revoked. Valid values:
    // - Consumer
    // - ConsumerGroup
    // 
    // This parameter is required.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
