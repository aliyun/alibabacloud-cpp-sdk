// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODYUSERGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODYUSERGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserGroupResponseBodyUserGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBodyUserGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBodyUserGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetUserGroupResponseBodyUserGroupAttributes() = default ;
    GetUserGroupResponseBodyUserGroupAttributes(const GetUserGroupResponseBodyUserGroupAttributes &) = default ;
    GetUserGroupResponseBodyUserGroupAttributes(GetUserGroupResponseBodyUserGroupAttributes &&) = default ;
    GetUserGroupResponseBodyUserGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBodyUserGroupAttributes() = default ;
    GetUserGroupResponseBodyUserGroupAttributes& operator=(const GetUserGroupResponseBodyUserGroupAttributes &) = default ;
    GetUserGroupResponseBodyUserGroupAttributes& operator=(GetUserGroupResponseBodyUserGroupAttributes &&) = default ;
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
    inline GetUserGroupResponseBodyUserGroupAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline GetUserGroupResponseBodyUserGroupAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline GetUserGroupResponseBodyUserGroupAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetUserGroupResponseBodyUserGroupAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
