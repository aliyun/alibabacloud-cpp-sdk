// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCLASSDESCS_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCLASSDESCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimClassDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimClassDescs& obj) { 
      DARABONBA_PTR_TO_JSON(ClassDesc, classDesc_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimClassDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassDesc, classDesc_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs(const LookupTmchNoticeResponseBodyClaimsClaimClassDescs &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs(LookupTmchNoticeResponseBodyClaimsClaimClassDescs &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimClassDescs() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs& operator=(const LookupTmchNoticeResponseBodyClaimsClaimClassDescs &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescs& operator=(LookupTmchNoticeResponseBodyClaimsClaimClassDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classDesc_ == nullptr; };
    // classDesc Field Functions 
    bool hasClassDesc() const { return this->classDesc_ != nullptr;};
    void deleteClassDesc() { this->classDesc_ = nullptr;};
    inline const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc> & classDesc() const { DARABONBA_PTR_GET_CONST(classDesc_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc>) };
    inline vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc> classDesc() { DARABONBA_PTR_GET(classDesc_, vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc>) };
    inline LookupTmchNoticeResponseBodyClaimsClaimClassDescs& setClassDesc(const vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc> & classDesc) { DARABONBA_PTR_SET_VALUE(classDesc_, classDesc) };
    inline LookupTmchNoticeResponseBodyClaimsClaimClassDescs& setClassDesc(vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc> && classDesc) { DARABONBA_PTR_SET_RVALUE(classDesc_, classDesc) };


  protected:
    std::shared_ptr<vector<Models::LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc>> classDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
