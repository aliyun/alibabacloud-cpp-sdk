// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateRoleRequest() = default ;
    CreateRoleRequest(const CreateRoleRequest &) = default ;
    CreateRoleRequest(CreateRoleRequest &&) = default ;
    CreateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleRequest() = default ;
    CreateRoleRequest& operator=(const CreateRoleRequest &) = default ;
    CreateRoleRequest& operator=(CreateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeRolePolicyDocument_ == nullptr
        && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleName_ == nullptr; };
    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline CreateRoleRequest& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRoleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline CreateRoleRequest& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The content of the access policy for assuming the role.
    // 
    // Specifies one or more entities that are allowed to assume the role. The trusted entity can be an Alibaba Cloud account, an Alibaba Cloud service, or an identity provider.
    // 
    // > A Resource Access Management (RAM) user cannot assume a RAM role whose trusted entity is an Alibaba Cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> assumeRolePolicyDocument_ {};
    // The description of the role.
    // 
    // The description must be 1 to 1,024 characters in length.
    shared_ptr<string> description_ {};
    // The maximum session duration of the role.
    // 
    // Valid values: 3600 to 43200. Unit: seconds. Default value: 3600.
    // 
    // If this parameter is left empty, the default value is used.
    shared_ptr<int64_t> maxSessionDuration_ {};
    // The name of the role.
    // 
    // The name must be 1 to 64 characters in length and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
