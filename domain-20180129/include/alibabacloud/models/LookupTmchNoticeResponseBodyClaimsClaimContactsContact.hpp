// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTSCONTACT_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCONTACTSCONTACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimContactsContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimContactsContact& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Fax, fax_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Org, org_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimContactsContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Fax, fax_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Org, org_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact(const LookupTmchNoticeResponseBodyClaimsClaimContactsContact &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact(LookupTmchNoticeResponseBodyClaimsClaimContactsContact &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimContactsContact() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact& operator=(const LookupTmchNoticeResponseBodyClaimsClaimContactsContact &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimContactsContact& operator=(LookupTmchNoticeResponseBodyClaimsClaimContactsContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->email_ == nullptr && return this->fax_ == nullptr && return this->name_ == nullptr && return this->org_ == nullptr && return this->type_ == nullptr
        && return this->voice_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr & addr() const { DARABONBA_PTR_GET_CONST(addr_, Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr addr() { DARABONBA_PTR_GET(addr_, Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setAddr(const Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setAddr(Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fax Field Functions 
    bool hasFax() const { return this->fax_ != nullptr;};
    void deleteFax() { this->fax_ = nullptr;};
    inline string fax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // org Field Functions 
    bool hasOrg() const { return this->org_ != nullptr;};
    void deleteOrg() { this->org_ = nullptr;};
    inline string org() const { DARABONBA_PTR_GET_DEFAULT(org_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setOrg(string org) { DARABONBA_PTR_SET_VALUE(org_, org) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimContactsContact& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


  protected:
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr> addr_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> fax_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> org_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
