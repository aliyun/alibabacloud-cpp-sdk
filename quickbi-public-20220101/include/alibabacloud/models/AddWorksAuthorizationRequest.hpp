// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddWorksAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorksAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPoints, authPoints_);
      DARABONBA_PTR_TO_JSON(AuthorizeScope, authorizeScope_);
      DARABONBA_PTR_TO_JSON(AuthorizedId, authorizedId_);
      DARABONBA_PTR_TO_JSON(ExpireDay, expireDay_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorksAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPoints, authPoints_);
      DARABONBA_PTR_FROM_JSON(AuthorizeScope, authorizeScope_);
      DARABONBA_PTR_FROM_JSON(AuthorizedId, authorizedId_);
      DARABONBA_PTR_FROM_JSON(ExpireDay, expireDay_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    AddWorksAuthorizationRequest() = default ;
    AddWorksAuthorizationRequest(const AddWorksAuthorizationRequest &) = default ;
    AddWorksAuthorizationRequest(AddWorksAuthorizationRequest &&) = default ;
    AddWorksAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorksAuthorizationRequest() = default ;
    AddWorksAuthorizationRequest& operator=(const AddWorksAuthorizationRequest &) = default ;
    AddWorksAuthorizationRequest& operator=(AddWorksAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authPoints_ == nullptr
        && this->authorizeScope_ == nullptr && this->authorizedId_ == nullptr && this->expireDay_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // authPoints Field Functions 
    bool hasAuthPoints() const { return this->authPoints_ != nullptr;};
    void deleteAuthPoints() { this->authPoints_ = nullptr;};
    inline int32_t getAuthPoints() const { DARABONBA_PTR_GET_DEFAULT(authPoints_, 0) };
    inline AddWorksAuthorizationRequest& setAuthPoints(int32_t authPoints) { DARABONBA_PTR_SET_VALUE(authPoints_, authPoints) };


    // authorizeScope Field Functions 
    bool hasAuthorizeScope() const { return this->authorizeScope_ != nullptr;};
    void deleteAuthorizeScope() { this->authorizeScope_ = nullptr;};
    inline int32_t getAuthorizeScope() const { DARABONBA_PTR_GET_DEFAULT(authorizeScope_, 0) };
    inline AddWorksAuthorizationRequest& setAuthorizeScope(int32_t authorizeScope) { DARABONBA_PTR_SET_VALUE(authorizeScope_, authorizeScope) };


    // authorizedId Field Functions 
    bool hasAuthorizedId() const { return this->authorizedId_ != nullptr;};
    void deleteAuthorizedId() { this->authorizedId_ = nullptr;};
    inline string getAuthorizedId() const { DARABONBA_PTR_GET_DEFAULT(authorizedId_, "") };
    inline AddWorksAuthorizationRequest& setAuthorizedId(string authorizedId) { DARABONBA_PTR_SET_VALUE(authorizedId_, authorizedId) };


    // expireDay Field Functions 
    bool hasExpireDay() const { return this->expireDay_ != nullptr;};
    void deleteExpireDay() { this->expireDay_ = nullptr;};
    inline string getExpireDay() const { DARABONBA_PTR_GET_DEFAULT(expireDay_, "") };
    inline AddWorksAuthorizationRequest& setExpireDay(string expireDay) { DARABONBA_PTR_SET_VALUE(expireDay_, expireDay) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddWorksAuthorizationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddWorksAuthorizationRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> authPoints_ {};
    // This parameter is required.
    shared_ptr<int32_t> authorizeScope_ {};
    // This parameter is required.
    shared_ptr<string> authorizedId_ {};
    shared_ptr<string> expireDay_ {};
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
