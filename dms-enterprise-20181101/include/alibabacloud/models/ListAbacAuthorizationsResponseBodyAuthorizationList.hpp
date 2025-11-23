// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSRESPONSEBODYAUTHORIZATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSRESPONSEBODYAUTHORIZATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAbacAuthorizationsResponseBodyAuthorizationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbacAuthorizationsResponseBodyAuthorizationList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicySource, policySource_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbacAuthorizationsResponseBodyAuthorizationList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicySource, policySource_);
    };
    ListAbacAuthorizationsResponseBodyAuthorizationList() = default ;
    ListAbacAuthorizationsResponseBodyAuthorizationList(const ListAbacAuthorizationsResponseBodyAuthorizationList &) = default ;
    ListAbacAuthorizationsResponseBodyAuthorizationList(ListAbacAuthorizationsResponseBodyAuthorizationList &&) = default ;
    ListAbacAuthorizationsResponseBodyAuthorizationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbacAuthorizationsResponseBodyAuthorizationList() = default ;
    ListAbacAuthorizationsResponseBodyAuthorizationList& operator=(const ListAbacAuthorizationsResponseBodyAuthorizationList &) = default ;
    ListAbacAuthorizationsResponseBodyAuthorizationList& operator=(ListAbacAuthorizationsResponseBodyAuthorizationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationId_ == nullptr
        && return this->identityId_ == nullptr && return this->identityName_ == nullptr && return this->identityType_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr
        && return this->policySource_ == nullptr; };
    // authorizationId Field Functions 
    bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
    void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
    inline int64_t authorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // identityId Field Functions 
    bool hasIdentityId() const { return this->identityId_ != nullptr;};
    void deleteIdentityId() { this->identityId_ = nullptr;};
    inline int64_t identityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, 0L) };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setIdentityId(int64_t identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string identityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policySource Field Functions 
    bool hasPolicySource() const { return this->policySource_ != nullptr;};
    void deletePolicySource() { this->policySource_ = nullptr;};
    inline string policySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
    inline ListAbacAuthorizationsResponseBodyAuthorizationList& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


  protected:
    // The authorization ID.
    std::shared_ptr<int64_t> authorizationId_ = nullptr;
    // The ID of the object to which the policy is attached.
    std::shared_ptr<int64_t> identityId_ = nullptr;
    // The name of the object to which the policy is attached.
    std::shared_ptr<string> identityName_ = nullptr;
    // The type of the object to which the policy is attached.
    std::shared_ptr<string> identityType_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The source of the policy.
    std::shared_ptr<string> policySource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
