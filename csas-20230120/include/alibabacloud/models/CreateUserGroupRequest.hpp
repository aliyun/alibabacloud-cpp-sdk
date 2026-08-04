// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateUserGroupRequest() = default ;
    CreateUserGroupRequest(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest(CreateUserGroupRequest &&) = default ;
    CreateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupRequest() = default ;
    CreateUserGroupRequest& operator=(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest& operator=(CreateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
        DARABONBA_PTR_TO_JSON(IdpId, idpId_);
        DARABONBA_PTR_TO_JSON(Relation, relation_);
        DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
        DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
        DARABONBA_PTR_FROM_JSON(Relation, relation_);
        DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Attributes() = default ;
      Attributes(const Attributes &) = default ;
      Attributes(Attributes &&) = default ;
      Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attributes() = default ;
      Attributes& operator=(const Attributes &) = default ;
      Attributes& operator=(Attributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->idpId_ == nullptr
        && this->relation_ == nullptr && this->userGroupType_ == nullptr && this->value_ == nullptr; };
      // idpId Field Functions 
      bool hasIdpId() const { return this->idpId_ != nullptr;};
      void deleteIdpId() { this->idpId_ = nullptr;};
      inline int32_t getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
      inline Attributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


      // relation Field Functions 
      bool hasRelation() const { return this->relation_ != nullptr;};
      void deleteRelation() { this->relation_ = nullptr;};
      inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
      inline Attributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


      // userGroupType Field Functions 
      bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
      void deleteUserGroupType() { this->userGroupType_ = nullptr;};
      inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
      inline Attributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Attributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The ID of the identity provider (IdP) for the user group. This parameter is used when UserGroupType is set to **department**.
      shared_ptr<int32_t> idpId_ {};
      // The relationship for the user group. Valid values:
      // 
      // - **Equal**: Equal to.
      // 
      // - **Unequal**: Not equal to.
      // 
      // This parameter is required.
      shared_ptr<string> relation_ {};
      // The type of the user group. Valid values:
      // 
      // - **username**: Username.
      // 
      // - **department**: Department.
      // 
      // - **email**: Email.
      // 
      // - **telephone**: Mobile phone.
      // 
      // This parameter is required.
      shared_ptr<string> userGroupType_ {};
      // The value of the user group attribute.
      // 
      // - If UserGroupType is set to **username**, this parameter specifies the username value. The value must be 1 to 128 characters long. It can contain Chinese characters, letters, digits, periods (.), underscores (_), hyphens (-), asterisks (\\*), at signs (@), and spaces.
      // 
      // - If UserGroupType is set to **department**, this parameter specifies the department value. For example: OU=Department 1,OU=SASE DingTalk.
      // 
      // - If UserGroupType is set to **email**, this parameter specifies the email address. For example: username\\@example.com.
      // 
      // - If UserGroupType is set to **telephone**, this parameter specifies the mobile phone number. For example: 13900001234.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<CreateUserGroupRequest::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<CreateUserGroupRequest::Attributes>) };
    inline vector<CreateUserGroupRequest::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<CreateUserGroupRequest::Attributes>) };
    inline CreateUserGroupRequest& setAttributes(const vector<CreateUserGroupRequest::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateUserGroupRequest& setAttributes(vector<CreateUserGroupRequest::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUserGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The collection of user group attributes. You can specify a maximum of 3,000 attributes. The attributes are combined using a logical OR.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateUserGroupRequest::Attributes>> attributes_ {};
    // The user group description. The description must be 1 to 128 characters long and can contain Chinese characters, letters, digits, periods (.), underscores (_), hyphens (-), and spaces.
    shared_ptr<string> description_ {};
    // The user group name. The name must be 1 to 128 characters long and can contain Chinese characters, letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
