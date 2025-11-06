// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERS_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMHOLDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimHolders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimHolders& obj) { 
      DARABONBA_PTR_TO_JSON(Holder, holder_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimHolders& obj) { 
      DARABONBA_PTR_FROM_JSON(Holder, holder_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimHolders() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHolders(const LookupTmchNoticeResponseBodyClaimsClaimHolders &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHolders(LookupTmchNoticeResponseBodyClaimsClaimHolders &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHolders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimHolders() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHolders& operator=(const LookupTmchNoticeResponseBodyClaimsClaimHolders &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimHolders& operator=(LookupTmchNoticeResponseBodyClaimsClaimHolders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->holder_ == nullptr; };
    // holder Field Functions 
    bool hasHolder() const { return this->holder_ != nullptr;};
    void deleteHolder() { this->holder_ = nullptr;};
    inline const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder> & holder() const { DARABONBA_PTR_GET_CONST(holder_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder>) };
    inline vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder> holder() { DARABONBA_PTR_GET(holder_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder>) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHolders& setHolder(const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder> & holder) { DARABONBA_PTR_SET_VALUE(holder_, holder) };
    inline LookupTmchNoticeResponseBodyClaimsClaimHolders& setHolder(vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder> && holder) { DARABONBA_PTR_SET_RVALUE(holder_, holder) };


  protected:
    std::shared_ptr<vector<Models::LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder>> holder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
