// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSFILEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSFILEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AdvPolicy, advPolicy_);
      DARABONBA_PTR_TO_JSON(UseVSS, useVSS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvPolicy, advPolicy_);
      DARABONBA_PTR_FROM_JSON(UseVSS, useVSS_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advPolicy_ == nullptr
        && return this->useVSS_ == nullptr; };
    // advPolicy Field Functions 
    bool hasAdvPolicy() const { return this->advPolicy_ != nullptr;};
    void deleteAdvPolicy() { this->advPolicy_ = nullptr;};
    inline bool advPolicy() const { DARABONBA_PTR_GET_DEFAULT(advPolicy_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& setAdvPolicy(bool advPolicy) { DARABONBA_PTR_SET_VALUE(advPolicy_, advPolicy) };


    // useVSS Field Functions 
    bool hasUseVSS() const { return this->useVSS_ != nullptr;};
    void deleteUseVSS() { this->useVSS_ = nullptr;};
    inline bool useVSS() const { DARABONBA_PTR_GET_DEFAULT(useVSS_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail& setUseVSS(bool useVSS) { DARABONBA_PTR_SET_VALUE(useVSS_, useVSS) };


  protected:
    // Whether to use advanced policies. Values:
    // - **true**: Use.
    // - **false**: Do not use.
    std::shared_ptr<bool> advPolicy_ = nullptr;
    // Whether to enable VSS (Windows) functionality. Values:
    // - **true**: Enable.
    // - **false**: Disable.
    std::shared_ptr<bool> useVSS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
