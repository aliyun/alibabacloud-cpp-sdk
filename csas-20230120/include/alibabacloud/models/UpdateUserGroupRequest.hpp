// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
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
      shared_ptr<int32_t> idpId_ {};
      // This parameter is required.
      shared_ptr<string> relation_ {};
      // This parameter is required.
      shared_ptr<string> userGroupType_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->description_ == nullptr && this->modifyType_ == nullptr && this->userGroupId_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<UpdateUserGroupRequest::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<UpdateUserGroupRequest::Attributes>) };
    inline vector<UpdateUserGroupRequest::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<UpdateUserGroupRequest::Attributes>) };
    inline UpdateUserGroupRequest& setAttributes(const vector<UpdateUserGroupRequest::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline UpdateUserGroupRequest& setAttributes(vector<UpdateUserGroupRequest::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateUserGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdateUserGroupRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline UpdateUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    shared_ptr<vector<UpdateUserGroupRequest::Attributes>> attributes_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> modifyType_ {};
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
