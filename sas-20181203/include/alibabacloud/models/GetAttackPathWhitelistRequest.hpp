// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
    };
    GetAttackPathWhitelistRequest() = default ;
    GetAttackPathWhitelistRequest(const GetAttackPathWhitelistRequest &) = default ;
    GetAttackPathWhitelistRequest(GetAttackPathWhitelistRequest &&) = default ;
    GetAttackPathWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathWhitelistRequest() = default ;
    GetAttackPathWhitelistRequest& operator=(const GetAttackPathWhitelistRequest &) = default ;
    GetAttackPathWhitelistRequest& operator=(GetAttackPathWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathWhitelistId_ == nullptr; };
    // attackPathWhitelistId Field Functions 
    bool hasAttackPathWhitelistId() const { return this->attackPathWhitelistId_ != nullptr;};
    void deleteAttackPathWhitelistId() { this->attackPathWhitelistId_ = nullptr;};
    inline string getAttackPathWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(attackPathWhitelistId_, "") };
    inline GetAttackPathWhitelistRequest& setAttackPathWhitelistId(string attackPathWhitelistId) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistId_, attackPathWhitelistId) };


  protected:
    // Attack path whitelist ID.
    // > You can call [ListAttackPathWhitelist](~~ListAttackPathWhitelist~~) to query the attack path whitelist ID.
    // 
    // This parameter is required.
    shared_ptr<string> attackPathWhitelistId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
