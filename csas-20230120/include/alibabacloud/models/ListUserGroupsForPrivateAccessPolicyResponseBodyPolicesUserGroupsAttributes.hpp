// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESUSERGROUPSATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESUSERGROUPSATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes(ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes &&) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& operator=(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& operator=(ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes &&) = default ;
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
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int32_t> idpId_ = nullptr;
    std::shared_ptr<string> relation_ = nullptr;
    std::shared_ptr<string> userGroupType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
