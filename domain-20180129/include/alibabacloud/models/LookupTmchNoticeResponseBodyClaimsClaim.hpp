// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIM_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimClassDescs.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimContacts.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimHolders.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimJurDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaim : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaim& obj) { 
      DARABONBA_PTR_TO_JSON(ClassDescs, classDescs_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(GoodsAndServices, goodsAndServices_);
      DARABONBA_PTR_TO_JSON(Holders, holders_);
      DARABONBA_PTR_TO_JSON(JurDesc, jurDesc_);
      DARABONBA_PTR_TO_JSON(MarkName, markName_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaim& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassDescs, classDescs_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(GoodsAndServices, goodsAndServices_);
      DARABONBA_PTR_FROM_JSON(Holders, holders_);
      DARABONBA_PTR_FROM_JSON(JurDesc, jurDesc_);
      DARABONBA_PTR_FROM_JSON(MarkName, markName_);
    };
    LookupTmchNoticeResponseBodyClaimsClaim() = default ;
    LookupTmchNoticeResponseBodyClaimsClaim(const LookupTmchNoticeResponseBodyClaimsClaim &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaim(LookupTmchNoticeResponseBodyClaimsClaim &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaim(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaim() = default ;
    LookupTmchNoticeResponseBodyClaimsClaim& operator=(const LookupTmchNoticeResponseBodyClaimsClaim &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaim& operator=(LookupTmchNoticeResponseBodyClaimsClaim &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classDescs_ == nullptr
        && return this->contacts_ == nullptr && return this->goodsAndServices_ == nullptr && return this->holders_ == nullptr && return this->jurDesc_ == nullptr && return this->markName_ == nullptr; };
    // classDescs Field Functions 
    bool hasClassDescs() const { return this->classDescs_ != nullptr;};
    void deleteClassDescs() { this->classDescs_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs & classDescs() const { DARABONBA_PTR_GET_CONST(classDescs_, Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs classDescs() { DARABONBA_PTR_GET(classDescs_, Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setClassDescs(const Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs & classDescs) { DARABONBA_PTR_SET_VALUE(classDescs_, classDescs) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setClassDescs(Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs && classDescs) { DARABONBA_PTR_SET_RVALUE(classDescs_, classDescs) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimContacts & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, Models::LookupTmchNoticeResponseBodyClaimsClaimContacts) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimContacts contacts() { DARABONBA_PTR_GET(contacts_, Models::LookupTmchNoticeResponseBodyClaimsClaimContacts) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setContacts(const Models::LookupTmchNoticeResponseBodyClaimsClaimContacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setContacts(Models::LookupTmchNoticeResponseBodyClaimsClaimContacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // goodsAndServices Field Functions 
    bool hasGoodsAndServices() const { return this->goodsAndServices_ != nullptr;};
    void deleteGoodsAndServices() { this->goodsAndServices_ = nullptr;};
    inline string goodsAndServices() const { DARABONBA_PTR_GET_DEFAULT(goodsAndServices_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setGoodsAndServices(string goodsAndServices) { DARABONBA_PTR_SET_VALUE(goodsAndServices_, goodsAndServices) };


    // holders Field Functions 
    bool hasHolders() const { return this->holders_ != nullptr;};
    void deleteHolders() { this->holders_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimHolders & holders() const { DARABONBA_PTR_GET_CONST(holders_, Models::LookupTmchNoticeResponseBodyClaimsClaimHolders) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimHolders holders() { DARABONBA_PTR_GET(holders_, Models::LookupTmchNoticeResponseBodyClaimsClaimHolders) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setHolders(const Models::LookupTmchNoticeResponseBodyClaimsClaimHolders & holders) { DARABONBA_PTR_SET_VALUE(holders_, holders) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setHolders(Models::LookupTmchNoticeResponseBodyClaimsClaimHolders && holders) { DARABONBA_PTR_SET_RVALUE(holders_, holders) };


    // jurDesc Field Functions 
    bool hasJurDesc() const { return this->jurDesc_ != nullptr;};
    void deleteJurDesc() { this->jurDesc_ = nullptr;};
    inline const Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc & jurDesc() const { DARABONBA_PTR_GET_CONST(jurDesc_, Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc) };
    inline Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc jurDesc() { DARABONBA_PTR_GET(jurDesc_, Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setJurDesc(const Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc & jurDesc) { DARABONBA_PTR_SET_VALUE(jurDesc_, jurDesc) };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setJurDesc(Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc && jurDesc) { DARABONBA_PTR_SET_RVALUE(jurDesc_, jurDesc) };


    // markName Field Functions 
    bool hasMarkName() const { return this->markName_ != nullptr;};
    void deleteMarkName() { this->markName_ = nullptr;};
    inline string markName() const { DARABONBA_PTR_GET_DEFAULT(markName_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaim& setMarkName(string markName) { DARABONBA_PTR_SET_VALUE(markName_, markName) };


  protected:
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescs> classDescs_ = nullptr;
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimContacts> contacts_ = nullptr;
    std::shared_ptr<string> goodsAndServices_ = nullptr;
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimHolders> holders_ = nullptr;
    std::shared_ptr<Models::LookupTmchNoticeResponseBodyClaimsClaimJurDesc> jurDesc_ = nullptr;
    std::shared_ptr<string> markName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
