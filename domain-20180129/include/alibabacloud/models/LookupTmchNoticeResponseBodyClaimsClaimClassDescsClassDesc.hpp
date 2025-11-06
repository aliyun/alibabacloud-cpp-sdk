// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCLASSDESCSCLASSDESC_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODYCLAIMSCLAIMCLASSDESCSCLASSDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& obj) { 
      DARABONBA_PTR_TO_JSON(ClassNum, classNum_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassNum, classNum_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
    };
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc(const LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc(LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc &&) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc() = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& operator=(const LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc &) = default ;
    LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& operator=(LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classNum_ == nullptr
        && return this->desc_ == nullptr; };
    // classNum Field Functions 
    bool hasClassNum() const { return this->classNum_ != nullptr;};
    void deleteClassNum() { this->classNum_ = nullptr;};
    inline int32_t classNum() const { DARABONBA_PTR_GET_DEFAULT(classNum_, 0) };
    inline LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& setClassNum(int32_t classNum) { DARABONBA_PTR_SET_VALUE(classNum_, classNum) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


  protected:
    std::shared_ptr<int32_t> classNum_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
