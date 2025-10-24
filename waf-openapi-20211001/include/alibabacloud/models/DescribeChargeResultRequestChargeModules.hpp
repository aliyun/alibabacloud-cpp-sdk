// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUESTCHARGEMODULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUESTCHARGEMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeResultRequestChargeModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeResultRequestChargeModules& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeResultRequestChargeModules& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    DescribeChargeResultRequestChargeModules() = default ;
    DescribeChargeResultRequestChargeModules(const DescribeChargeResultRequestChargeModules &) = default ;
    DescribeChargeResultRequestChargeModules(DescribeChargeResultRequestChargeModules &&) = default ;
    DescribeChargeResultRequestChargeModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeResultRequestChargeModules() = default ;
    DescribeChargeResultRequestChargeModules& operator=(const DescribeChargeResultRequestChargeModules &) = default ;
    DescribeChargeResultRequestChargeModules& operator=(DescribeChargeResultRequestChargeModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleCode_ == nullptr
        && return this->usage_ == nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeChargeResultRequestChargeModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline DescribeChargeResultRequestChargeModules& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
