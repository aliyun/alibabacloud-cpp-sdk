// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGAPPPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGAPPPACKAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfigAppPackagePackageSigns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigAppPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigAppPackage& obj) { 
      DARABONBA_PTR_TO_JSON(PackageSigns, packageSigns_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigAppPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageSigns, packageSigns_);
    };
    WafRuleConfigAppPackage() = default ;
    WafRuleConfigAppPackage(const WafRuleConfigAppPackage &) = default ;
    WafRuleConfigAppPackage(WafRuleConfigAppPackage &&) = default ;
    WafRuleConfigAppPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigAppPackage() = default ;
    WafRuleConfigAppPackage& operator=(const WafRuleConfigAppPackage &) = default ;
    WafRuleConfigAppPackage& operator=(WafRuleConfigAppPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageSigns_ == nullptr; };
    // packageSigns Field Functions 
    bool hasPackageSigns() const { return this->packageSigns_ != nullptr;};
    void deletePackageSigns() { this->packageSigns_ = nullptr;};
    inline const vector<Models::WafRuleConfigAppPackagePackageSigns> & packageSigns() const { DARABONBA_PTR_GET_CONST(packageSigns_, vector<Models::WafRuleConfigAppPackagePackageSigns>) };
    inline vector<Models::WafRuleConfigAppPackagePackageSigns> packageSigns() { DARABONBA_PTR_GET(packageSigns_, vector<Models::WafRuleConfigAppPackagePackageSigns>) };
    inline WafRuleConfigAppPackage& setPackageSigns(const vector<Models::WafRuleConfigAppPackagePackageSigns> & packageSigns) { DARABONBA_PTR_SET_VALUE(packageSigns_, packageSigns) };
    inline WafRuleConfigAppPackage& setPackageSigns(vector<Models::WafRuleConfigAppPackagePackageSigns> && packageSigns) { DARABONBA_PTR_SET_RVALUE(packageSigns_, packageSigns) };


  protected:
    std::shared_ptr<vector<Models::WafRuleConfigAppPackagePackageSigns>> packageSigns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
