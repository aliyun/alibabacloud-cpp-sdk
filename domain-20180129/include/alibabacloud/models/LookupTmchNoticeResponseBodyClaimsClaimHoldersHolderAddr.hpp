// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERSHOLDERADDR_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERSHOLDERADDR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Pc, pc_);
      DARABONBA_PTR_TO_JSON(Sp, sp_);
      DARABONBA_PTR_TO_JSON(Street, street_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Pc, pc_);
      DARABONBA_PTR_FROM_JSON(Sp, sp_);
      DARABONBA_PTR_FROM_JSON(Street, street_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr(const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr(LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& operator=(const LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& operator=(LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cc_ == nullptr
        && return this->city_ == nullptr && return this->pc_ == nullptr && return this->sp_ == nullptr && return this->street_ == nullptr; };
    // cc Field Functions 
    bool hasCc() const { return this->cc_ != nullptr;};
    void deleteCc() { this->cc_ = nullptr;};
    inline string cc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // pc Field Functions 
    bool hasPc() const { return this->pc_ != nullptr;};
    void deletePc() { this->pc_ = nullptr;};
    inline string pc() const { DARABONBA_PTR_GET_DEFAULT(pc_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setPc(string pc) { DARABONBA_PTR_SET_VALUE(pc_, pc) };


    // sp Field Functions 
    bool hasSp() const { return this->sp_ != nullptr;};
    void deleteSp() { this->sp_ = nullptr;};
    inline string sp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


    // street Field Functions 
    bool hasStreet() const { return this->street_ != nullptr;};
    void deleteStreet() { this->street_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet & street() const { DARABONBA_PTR_GET_CONST(street_, Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet street() { DARABONBA_PTR_GET(street_, Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setStreet(const Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr& setStreet(Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


  protected:
    std::shared_ptr<string> cc_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> pc_ = nullptr;
    std::shared_ptr<string> sp_ = nullptr;
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet> street_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
