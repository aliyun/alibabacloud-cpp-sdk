// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODYPOLICESCUSTOMUSERATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODYPOLICESCUSTOMUSERATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes() = default ;
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes(const ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes &) = default ;
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes(ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes &&) = default ;
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes() = default ;
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& operator=(const ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes &) = default ;
    ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& operator=(ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes &&) = default ;
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
    inline ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the identity provider (IdP) for the user group. If the value of UserGroupType is **department**, this parameter is returned.
    std::shared_ptr<int32_t> idpId_ = nullptr;
    // The logical operator for the user group. Valid values:
    // 
    // *   **Equal**
    // *   **Unequal**
    std::shared_ptr<string> relation_ = nullptr;
    // The type of the user group, which is the key of the attribute. Valid values:
    // 
    // *   **username**
    // *   **department**
    // *   **email**
    // *   **telephone**
    std::shared_ptr<string> userGroupType_ = nullptr;
    // The value of the attribute.
    // 
    // *   If the value of UserGroupType is **username**, the value of this parameter is a username. The value must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), underscores (_), and periods (.).
    // *   If the value of UserGroupType is **department**, the value of this parameter is a department. Examples: OU=Department 1, OU=SASE DingTalk.
    // *   If the value of UserGroupType is **email**, the value of this parameter is an email address. Example: username@example.com.
    // *   If the value of UserGroupType is **telephone**, the value of this parameter is a mobile phone number. Example: 13900001234.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
