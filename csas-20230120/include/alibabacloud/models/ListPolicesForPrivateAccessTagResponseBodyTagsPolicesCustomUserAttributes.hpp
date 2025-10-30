// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODYTAGSPOLICESCUSTOMUSERATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODYTAGSPOLICESCUSTOMUSERATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes() = default ;
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes(const ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes &) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes(ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes &&) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes() = default ;
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& operator=(const ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes &) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& operator=(ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idpId_ == nullptr
        && return this->relation_ == nullptr && return this->userGroupType_ == nullptr && return this->value_ == nullptr; };
    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline int32_t idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
    inline ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 用户组的身份源ID。当自定义用户组类型为**department**时，存在该值。
    std::shared_ptr<int32_t> idpId_ = nullptr;
    // 用户组的关系。取值：
    // - **Equal**：等于。
    // - **Unequal**：不等于。
    std::shared_ptr<string> relation_ = nullptr;
    // 用户组的类型。取值：
    // - **username**：用户名。
    // - **department**：部门。
    // - **email**：邮箱。
    // - **telephone**：手机。
    std::shared_ptr<string> userGroupType_ = nullptr;
    // 用户组属性的值。
    // - 当用户组类型为**username**时，表示用户名的值。长度为1~128个字符，支持中文和大小写英文字母，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
    // - 当用户组类型为**department**时，表示部门的值。如：OU=部门1,OU=SASE钉钉。
    // - 当用户组类型为**email**时，表示邮箱的值。如：username@example.com。
    // - 当用户组类型为**telephone**时，表示手机的值。如：13900001234。
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
