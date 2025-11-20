// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSFILEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSFILEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AdvPolicy, advPolicy_);
      DARABONBA_PTR_TO_JSON(UseVSS, useVSS_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvPolicy, advPolicy_);
      DARABONBA_PTR_FROM_JSON(UseVSS, useVSS_);
    };
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& operator=(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& operator=(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail &&) = default ;
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
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& setAdvPolicy(bool advPolicy) { DARABONBA_PTR_SET_VALUE(advPolicy_, advPolicy) };


    // useVSS Field Functions 
    bool hasUseVSS() const { return this->useVSS_ != nullptr;};
    void deleteUseVSS() { this->useVSS_ = nullptr;};
    inline bool useVSS() const { DARABONBA_PTR_GET_DEFAULT(useVSS_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail& setUseVSS(bool useVSS) { DARABONBA_PTR_SET_VALUE(useVSS_, useVSS) };


  protected:
    // Specifies whether to use an advanced policy. Valid values:
    // 
    // *   **true**: uses the advanced policy.
    // *   **false**: does not use the advanced policy.
    std::shared_ptr<bool> advPolicy_ = nullptr;
    // Specifies whether to enable the Volume Shadow Copy Service (VSS) feature. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false**: disables the feature.
    std::shared_ptr<bool> useVSS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
