// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERSHOLDER_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERSHOLDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(Entitlement, entitlement_);
      DARABONBA_PTR_TO_JSON(Org, org_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(Entitlement, entitlement_);
      DARABONBA_PTR_FROM_JSON(Org, org_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder(const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder(LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& operator=(const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& operator=(LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->entitlement_ == nullptr && return this->org_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr & addr() const { DARABONBA_PTR_GET_CONST(addr_, Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr addr() { DARABONBA_PTR_GET(addr_, Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& setAddr(const Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& setAddr(Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // entitlement Field Functions 
    bool hasEntitlement() const { return this->entitlement_ != nullptr;};
    void deleteEntitlement() { this->entitlement_ = nullptr;};
    inline string entitlement() const { DARABONBA_PTR_GET_DEFAULT(entitlement_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& setEntitlement(string entitlement) { DARABONBA_PTR_SET_VALUE(entitlement_, entitlement) };


    // org Field Functions 
    bool hasOrg() const { return this->org_ != nullptr;};
    void deleteOrg() { this->org_ = nullptr;};
    inline string org() const { DARABONBA_PTR_GET_DEFAULT(org_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder& setOrg(string org) { DARABONBA_PTR_SET_VALUE(org_, org) };


  protected:
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr> addr_ = nullptr;
    std::shared_ptr<string> entitlement_ = nullptr;
    std::shared_ptr<string> org_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
