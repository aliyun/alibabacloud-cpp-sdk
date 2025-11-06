// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMS_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaim.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaims : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaims& obj) { 
      DARABONBA_PTR_TO_JSON(Claim, claim_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaims& obj) { 
      DARABONBA_PTR_FROM_JSON(Claim, claim_);
    };
    LookupTmchNoticeResponseBodyClaims() = default ;
    LookupTmchNoticeResponseBodyClaims(const LookupTmchNoticeResponseBodyClaims &) = default ;
    LookupTmchNoticeResponseBodyClaims(LookupTmchNoticeResponseBodyClaims &&) = default ;
    LookupTmchNoticeResponseBodyClaims(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaims() = default ;
    LookupTmchNoticeResponseBodyClaims& operator=(const LookupTmchNoticeResponseBodyClaims &) = default ;
    LookupTmchNoticeResponseBodyClaims& operator=(LookupTmchNoticeResponseBodyClaims &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claim_ == nullptr; };
    // claim Field Functions 
    bool hasClaim() const { return this->claim_ != nullptr;};
    void deleteClaim() { this->claim_ = nullptr;};
    inline const vector<Models::LookupTmchNoticeResponseBodyClaimsClaim> & claim() const { DARABONBA_PTR_GET_CONST(claim_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaim>) };
    inline vector<Models::LookupTmchNoticeResponseBodyClaimsClaim> claim() { DARABONBA_PTR_GET(claim_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaim>) };
    inline LookupTmchNoticeResponseBodyClaims& setClaim(const vector<Models::LookupTmchNoticeResponseBodyClaimsClaim> & claim) { DARABONBA_PTR_SET_VALUE(claim_, claim) };
    inline LookupTmchNoticeResponseBodyClaims& setClaim(vector<Models::LookupTmchNoticeResponseBodyClaimsClaim> && claim) { DARABONBA_PTR_SET_RVALUE(claim_, claim) };


  protected:
    std::shared_ptr<vector<Models::LookupTmchNoticeResponseBodyClaimsClaim>> claim_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
