// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODYPOLICYCUSTOMUSERATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODYPOLICYCUSTOMUSERATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes() = default ;
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes(const GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes &) = default ;
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes(GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes &&) = default ;
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes() = default ;
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& operator=(const GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes &) = default ;
    GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& operator=(GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idpId_ != nullptr
        && this->relation_ != nullptr && this->userGroupType_ != nullptr && this->value_ != nullptr; };
    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline int32_t idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
    inline GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The identity provider ID for the custom user group. This field is required when the custom user group type is **department**.
    std::shared_ptr<int32_t> idpId_ = nullptr;
    // Custom user group relationship. Values: - **Equal**: Equal to. - **Unequal**: Not equal to.
    std::shared_ptr<string> relation_ = nullptr;
    // Type of the custom user group. Values:
    // - **username**: Username.
    // - **department**: Department.
    // - **email**: Email.
    // - **telephone**: Telephone.
    std::shared_ptr<string> userGroupType_ = nullptr;
    // The value of the custom user group attribute.
    // - When the user group type is **username**, it represents the value of the username. The length should be 1 to 128 characters, supporting Chinese and case-sensitive English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
    // - When the user group type is **department**, it represents the value of the department. For example: OU=Department1,OU=SASE DingTalk.
    // - When the user group type is **email**, it represents the value of the email. For example: username@example.com.
    // - When the user group type is **telephone**, it represents the value of the phone number. For example: 13900001234.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
