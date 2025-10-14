// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGAPPPACKAGEPACKAGESIGNS_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGAPPPACKAGEPACKAGESIGNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigAppPackagePackageSigns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigAppPackagePackageSigns& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Sign, sign_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigAppPackagePackageSigns& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Sign, sign_);
    };
    WafRuleConfigAppPackagePackageSigns() = default ;
    WafRuleConfigAppPackagePackageSigns(const WafRuleConfigAppPackagePackageSigns &) = default ;
    WafRuleConfigAppPackagePackageSigns(WafRuleConfigAppPackagePackageSigns &&) = default ;
    WafRuleConfigAppPackagePackageSigns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigAppPackagePackageSigns() = default ;
    WafRuleConfigAppPackagePackageSigns& operator=(const WafRuleConfigAppPackagePackageSigns &) = default ;
    WafRuleConfigAppPackagePackageSigns& operator=(WafRuleConfigAppPackagePackageSigns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->sign_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WafRuleConfigAppPackagePackageSigns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline WafRuleConfigAppPackagePackageSigns& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sign_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
