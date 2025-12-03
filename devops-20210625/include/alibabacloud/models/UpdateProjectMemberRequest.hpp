// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(roleIdentifier, roleIdentifier_);
      DARABONBA_PTR_TO_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(userIdentifier, userIdentifier_);
      DARABONBA_PTR_TO_JSON(userType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(roleIdentifier, roleIdentifier_);
      DARABONBA_PTR_FROM_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(userIdentifier, userIdentifier_);
      DARABONBA_PTR_FROM_JSON(userType, userType_);
    };
    UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest(UpdateProjectMemberRequest &&) = default ;
    UpdateProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest& operator=(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest& operator=(UpdateProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleIdentifier_ == nullptr
        && return this->targetIdentifier_ == nullptr && return this->targetType_ == nullptr && return this->userIdentifier_ == nullptr && return this->userType_ == nullptr; };
    // roleIdentifier Field Functions 
    bool hasRoleIdentifier() const { return this->roleIdentifier_ != nullptr;};
    void deleteRoleIdentifier() { this->roleIdentifier_ = nullptr;};
    inline string roleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(roleIdentifier_, "") };
    inline UpdateProjectMemberRequest& setRoleIdentifier(string roleIdentifier) { DARABONBA_PTR_SET_VALUE(roleIdentifier_, roleIdentifier) };


    // targetIdentifier Field Functions 
    bool hasTargetIdentifier() const { return this->targetIdentifier_ != nullptr;};
    void deleteTargetIdentifier() { this->targetIdentifier_ = nullptr;};
    inline string targetIdentifier() const { DARABONBA_PTR_GET_DEFAULT(targetIdentifier_, "") };
    inline UpdateProjectMemberRequest& setTargetIdentifier(string targetIdentifier) { DARABONBA_PTR_SET_VALUE(targetIdentifier_, targetIdentifier) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateProjectMemberRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userIdentifier Field Functions 
    bool hasUserIdentifier() const { return this->userIdentifier_ != nullptr;};
    void deleteUserIdentifier() { this->userIdentifier_ = nullptr;};
    inline string userIdentifier() const { DARABONBA_PTR_GET_DEFAULT(userIdentifier_, "") };
    inline UpdateProjectMemberRequest& setUserIdentifier(string userIdentifier) { DARABONBA_PTR_SET_VALUE(userIdentifier_, userIdentifier) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline UpdateProjectMemberRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
