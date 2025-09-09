// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRuleUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRuleUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRuleUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    GetRuleResponseBodyRuleUserGroups() = default ;
    GetRuleResponseBodyRuleUserGroups(const GetRuleResponseBodyRuleUserGroups &) = default ;
    GetRuleResponseBodyRuleUserGroups(GetRuleResponseBodyRuleUserGroups &&) = default ;
    GetRuleResponseBodyRuleUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRuleUserGroups() = default ;
    GetRuleResponseBodyRuleUserGroups& operator=(const GetRuleResponseBodyRuleUserGroups &) = default ;
    GetRuleResponseBodyRuleUserGroups& operator=(GetRuleResponseBodyRuleUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupId_ != nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline GetRuleResponseBodyRuleUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the authorized user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
