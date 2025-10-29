// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZATIONRESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZATIONRESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AuthorizationResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizationResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizationResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
    };
    AuthorizationResourceInfo() = default ;
    AuthorizationResourceInfo(const AuthorizationResourceInfo &) = default ;
    AuthorizationResourceInfo(AuthorizationResourceInfo &&) = default ;
    AuthorizationResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizationResourceInfo() = default ;
    AuthorizationResourceInfo& operator=(const AuthorizationResourceInfo &) = default ;
    AuthorizationResourceInfo& operator=(AuthorizationResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentId_ == nullptr
        && return this->parentResourceId_ == nullptr && return this->resourceId_ == nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline AuthorizationResourceInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // parentResourceId Field Functions 
    bool hasParentResourceId() const { return this->parentResourceId_ != nullptr;};
    void deleteParentResourceId() { this->parentResourceId_ = nullptr;};
    inline string parentResourceId() const { DARABONBA_PTR_GET_DEFAULT(parentResourceId_, "") };
    inline AuthorizationResourceInfo& setParentResourceId(string parentResourceId) { DARABONBA_PTR_SET_VALUE(parentResourceId_, parentResourceId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AuthorizationResourceInfo& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> parentResourceId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
