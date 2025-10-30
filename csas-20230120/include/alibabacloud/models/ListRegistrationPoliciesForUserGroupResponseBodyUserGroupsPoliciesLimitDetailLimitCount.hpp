// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODYUSERGROUPSPOLICIESLIMITDETAILLIMITCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESFORUSERGROUPRESPONSEBODYUSERGROUPSPOLICIESLIMITDETAILLIMITCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PC, PC_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PC, PC_);
    };
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount() = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount(const ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount(ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount &&) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount() = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& operator=(const ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount &) = default ;
    ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& operator=(ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->mobile_ == nullptr && return this->PC_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline string all() const { DARABONBA_PTR_GET_DEFAULT(all_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& setAll(string all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // PC Field Functions 
    bool hasPC() const { return this->PC_ != nullptr;};
    void deletePC() { this->PC_ = nullptr;};
    inline string PC() const { DARABONBA_PTR_GET_DEFAULT(PC_, "") };
    inline ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount& setPC(string PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


  protected:
    std::shared_ptr<string> all_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> PC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
