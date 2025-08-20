// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserGroupRequestAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    UpdateUserGroupRequest() = default ;
    UpdateUserGroupRequest(const UpdateUserGroupRequest &) = default ;
    UpdateUserGroupRequest(UpdateUserGroupRequest &&) = default ;
    UpdateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserGroupRequest() = default ;
    UpdateUserGroupRequest& operator=(const UpdateUserGroupRequest &) = default ;
    UpdateUserGroupRequest& operator=(UpdateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->description_ != nullptr && this->modifyType_ != nullptr && this->userGroupId_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<UpdateUserGroupRequestAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<UpdateUserGroupRequestAttributes>) };
    inline vector<UpdateUserGroupRequestAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<UpdateUserGroupRequestAttributes>) };
    inline UpdateUserGroupRequest& setAttributes(const vector<UpdateUserGroupRequestAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline UpdateUserGroupRequest& setAttributes(vector<UpdateUserGroupRequestAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateUserGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdateUserGroupRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline UpdateUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<vector<UpdateUserGroupRequestAttributes>> attributes_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> modifyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
