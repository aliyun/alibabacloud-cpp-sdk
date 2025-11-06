// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimContactsContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimContacts() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContacts(const LookupTmchNoticeResponseBodyClaimsClaimContacts &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContacts(LookupTmchNoticeResponseBodyClaimsClaimContacts &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimContacts() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContacts& operator=(const LookupTmchNoticeResponseBodyClaimsClaimContacts &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContacts& operator=(LookupTmchNoticeResponseBodyClaimsClaimContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact> & contact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact>) };
    inline vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact> contact() { DARABONBA_PTR_GET(contact_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact>) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContacts& setContact(const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContacts& setContact(vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


  protected:
    std::shared_ptr<vector<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContact>> contact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
