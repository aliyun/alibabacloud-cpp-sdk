// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMJURDESC_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMJURDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimJurDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimJurDesc& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(JurCC, jurCC_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimJurDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(JurCC, jurCC_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc(const LookupTmchNoticeResponseBodyClaimsClaimJurDesc &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc(LookupTmchNoticeResponseBodyClaimsClaimJurDesc &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimJurDesc() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc& operator=(const LookupTmchNoticeResponseBodyClaimsClaimJurDesc &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimJurDesc& operator=(LookupTmchNoticeResponseBodyClaimsClaimJurDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->jurCC_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimJurDesc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // jurCC Field Functions 
    bool hasJurCC() const { return this->jurCC_ != nullptr;};
    void deleteJurCC() { this->jurCC_ = nullptr;};
    inline string jurCC() const { DARABONBA_PTR_GET_DEFAULT(jurCC_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimJurDesc& setJurCC(string jurCC) { DARABONBA_PTR_SET_VALUE(jurCC_, jurCC) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> jurCC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
