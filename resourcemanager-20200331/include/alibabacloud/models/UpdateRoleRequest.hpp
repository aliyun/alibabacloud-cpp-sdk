// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewAssumeRolePolicyDocument, newAssumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewMaxSessionDuration, newMaxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewAssumeRolePolicyDocument, newAssumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewMaxSessionDuration, newMaxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    UpdateRoleRequest() = default ;
    UpdateRoleRequest(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest(UpdateRoleRequest &&) = default ;
    UpdateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleRequest() = default ;
    UpdateRoleRequest& operator=(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest& operator=(UpdateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newAssumeRolePolicyDocument_ == nullptr
        && return this->newDescription_ == nullptr && return this->newMaxSessionDuration_ == nullptr && return this->roleName_ == nullptr; };
    // newAssumeRolePolicyDocument Field Functions 
    bool hasNewAssumeRolePolicyDocument() const { return this->newAssumeRolePolicyDocument_ != nullptr;};
    void deleteNewAssumeRolePolicyDocument() { this->newAssumeRolePolicyDocument_ = nullptr;};
    inline string newAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(newAssumeRolePolicyDocument_, "") };
    inline UpdateRoleRequest& setNewAssumeRolePolicyDocument(string newAssumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(newAssumeRolePolicyDocument_, newAssumeRolePolicyDocument) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string newDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateRoleRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // newMaxSessionDuration Field Functions 
    bool hasNewMaxSessionDuration() const { return this->newMaxSessionDuration_ != nullptr;};
    void deleteNewMaxSessionDuration() { this->newMaxSessionDuration_ = nullptr;};
    inline int64_t newMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(newMaxSessionDuration_, 0L) };
    inline UpdateRoleRequest& setNewMaxSessionDuration(int64_t newMaxSessionDuration) { DARABONBA_PTR_SET_VALUE(newMaxSessionDuration_, newMaxSessionDuration) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The trust policy of the RAM role.
    std::shared_ptr<string> newAssumeRolePolicyDocument_ = nullptr;
    // The description of the RAM role.
    // 
    // The description must be 1 to 1,024 characters in length.
    std::shared_ptr<string> newDescription_ = nullptr;
    // The maximum session time of the RAM role.
    // 
    // Valid values: 3600 to 43200. Unit: seconds. Default value: 3600.
    // 
    // If you do not specify this parameter, the default value is used.
    std::shared_ptr<int64_t> newMaxSessionDuration_ = nullptr;
    // The name of the RAM role.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
