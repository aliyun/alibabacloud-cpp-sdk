// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTSCONTACTADDRSTREET_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTSCONTACTADDRSTREET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& obj) { 
      DARABONBA_PTR_TO_JSON(Street, street_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& obj) { 
      DARABONBA_PTR_FROM_JSON(Street, street_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet(const LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet(LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& operator=(const LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& operator=(LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->street_ == nullptr; };
    // street Field Functions 
    bool hasStreet() const { return this->street_ != nullptr;};
    void deleteStreet() { this->street_ = nullptr;};
    inline const vector<string> & street() const { DARABONBA_PTR_GET_CONST(street_, vector<string>) };
    inline vector<string> street() { DARABONBA_PTR_GET(street_, vector<string>) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& setStreet(const vector<string> & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet& setStreet(vector<string> && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


  protected:
    std::shared_ptr<vector<string>> street_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
