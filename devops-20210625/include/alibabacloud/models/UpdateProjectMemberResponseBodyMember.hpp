// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERRESPONSEBODYMEMBER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERRESPONSEBODYMEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectMemberResponseBodyMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(roleIdentifier, roleIdentifier_);
      DARABONBA_PTR_TO_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(userIdentifier, userIdentifier_);
      DARABONBA_PTR_TO_JSON(userType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(roleIdentifier, roleIdentifier_);
      DARABONBA_PTR_FROM_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(userIdentifier, userIdentifier_);
      DARABONBA_PTR_FROM_JSON(userType, userType_);
    };
    UpdateProjectMemberResponseBodyMember() = default ;
    UpdateProjectMemberResponseBodyMember(const UpdateProjectMemberResponseBodyMember &) = default ;
    UpdateProjectMemberResponseBodyMember(UpdateProjectMemberResponseBodyMember &&) = default ;
    UpdateProjectMemberResponseBodyMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberResponseBodyMember() = default ;
    UpdateProjectMemberResponseBodyMember& operator=(const UpdateProjectMemberResponseBodyMember &) = default ;
    UpdateProjectMemberResponseBodyMember& operator=(UpdateProjectMemberResponseBodyMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->roleIdentifier_ == nullptr && return this->targetIdentifier_ == nullptr && return this->targetType_ == nullptr
        && return this->userIdentifier_ == nullptr && return this->userType_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline UpdateProjectMemberResponseBodyMember& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline UpdateProjectMemberResponseBodyMember& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateProjectMemberResponseBodyMember& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // roleIdentifier Field Functions 
    bool hasRoleIdentifier() const { return this->roleIdentifier_ != nullptr;};
    void deleteRoleIdentifier() { this->roleIdentifier_ = nullptr;};
    inline string roleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(roleIdentifier_, "") };
    inline UpdateProjectMemberResponseBodyMember& setRoleIdentifier(string roleIdentifier) { DARABONBA_PTR_SET_VALUE(roleIdentifier_, roleIdentifier) };


    // targetIdentifier Field Functions 
    bool hasTargetIdentifier() const { return this->targetIdentifier_ != nullptr;};
    void deleteTargetIdentifier() { this->targetIdentifier_ = nullptr;};
    inline string targetIdentifier() const { DARABONBA_PTR_GET_DEFAULT(targetIdentifier_, "") };
    inline UpdateProjectMemberResponseBodyMember& setTargetIdentifier(string targetIdentifier) { DARABONBA_PTR_SET_VALUE(targetIdentifier_, targetIdentifier) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateProjectMemberResponseBodyMember& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userIdentifier Field Functions 
    bool hasUserIdentifier() const { return this->userIdentifier_ != nullptr;};
    void deleteUserIdentifier() { this->userIdentifier_ = nullptr;};
    inline string userIdentifier() const { DARABONBA_PTR_GET_DEFAULT(userIdentifier_, "") };
    inline UpdateProjectMemberResponseBodyMember& setUserIdentifier(string userIdentifier) { DARABONBA_PTR_SET_VALUE(userIdentifier_, userIdentifier) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline UpdateProjectMemberResponseBodyMember& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> roleIdentifier_ = nullptr;
    std::shared_ptr<string> targetIdentifier_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<string> userIdentifier_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
