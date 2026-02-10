// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAttackPathWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathWhitelist, attackPathWhitelist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathWhitelist, attackPathWhitelist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAttackPathWhitelistResponseBody() = default ;
    CreateAttackPathWhitelistResponseBody(const CreateAttackPathWhitelistResponseBody &) = default ;
    CreateAttackPathWhitelistResponseBody(CreateAttackPathWhitelistResponseBody &&) = default ;
    CreateAttackPathWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathWhitelistResponseBody() = default ;
    CreateAttackPathWhitelistResponseBody& operator=(const CreateAttackPathWhitelistResponseBody &) = default ;
    CreateAttackPathWhitelistResponseBody& operator=(CreateAttackPathWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
      };
      AttackPathWhitelist() = default ;
      AttackPathWhitelist(const AttackPathWhitelist &) = default ;
      AttackPathWhitelist(AttackPathWhitelist &&) = default ;
      AttackPathWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathWhitelist() = default ;
      AttackPathWhitelist& operator=(const AttackPathWhitelist &) = default ;
      AttackPathWhitelist& operator=(AttackPathWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackPathWhitelistId_ == nullptr; };
      // attackPathWhitelistId Field Functions 
      bool hasAttackPathWhitelistId() const { return this->attackPathWhitelistId_ != nullptr;};
      void deleteAttackPathWhitelistId() { this->attackPathWhitelistId_ = nullptr;};
      inline string getAttackPathWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(attackPathWhitelistId_, "") };
      inline AttackPathWhitelist& setAttackPathWhitelistId(string attackPathWhitelistId) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistId_, attackPathWhitelistId) };


    protected:
      // Attack path whitelist ID.
      shared_ptr<string> attackPathWhitelistId_ {};
    };

    virtual bool empty() const override { return this->attackPathWhitelist_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathWhitelist Field Functions 
    bool hasAttackPathWhitelist() const { return this->attackPathWhitelist_ != nullptr;};
    void deleteAttackPathWhitelist() { this->attackPathWhitelist_ = nullptr;};
    inline const CreateAttackPathWhitelistResponseBody::AttackPathWhitelist & getAttackPathWhitelist() const { DARABONBA_PTR_GET_CONST(attackPathWhitelist_, CreateAttackPathWhitelistResponseBody::AttackPathWhitelist) };
    inline CreateAttackPathWhitelistResponseBody::AttackPathWhitelist getAttackPathWhitelist() { DARABONBA_PTR_GET(attackPathWhitelist_, CreateAttackPathWhitelistResponseBody::AttackPathWhitelist) };
    inline CreateAttackPathWhitelistResponseBody& setAttackPathWhitelist(const CreateAttackPathWhitelistResponseBody::AttackPathWhitelist & attackPathWhitelist) { DARABONBA_PTR_SET_VALUE(attackPathWhitelist_, attackPathWhitelist) };
    inline CreateAttackPathWhitelistResponseBody& setAttackPathWhitelist(CreateAttackPathWhitelistResponseBody::AttackPathWhitelist && attackPathWhitelist) { DARABONBA_PTR_SET_RVALUE(attackPathWhitelist_, attackPathWhitelist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAttackPathWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Attack path whitelist.
    shared_ptr<CreateAttackPathWhitelistResponseBody::AttackPathWhitelist> attackPathWhitelist_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
