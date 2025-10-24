// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODYMODULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODYMODULEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeResultResponseBodyModuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeResultResponseBodyModuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(SeCu, seCu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeResultResponseBodyModuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(SeCu, seCu_);
    };
    DescribeChargeResultResponseBodyModuleDetails() = default ;
    DescribeChargeResultResponseBodyModuleDetails(const DescribeChargeResultResponseBodyModuleDetails &) = default ;
    DescribeChargeResultResponseBodyModuleDetails(DescribeChargeResultResponseBodyModuleDetails &&) = default ;
    DescribeChargeResultResponseBodyModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeResultResponseBodyModuleDetails() = default ;
    DescribeChargeResultResponseBodyModuleDetails& operator=(const DescribeChargeResultResponseBodyModuleDetails &) = default ;
    DescribeChargeResultResponseBodyModuleDetails& operator=(DescribeChargeResultResponseBodyModuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleCode_ == nullptr
        && return this->seCu_ == nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeChargeResultResponseBodyModuleDetails& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // seCu Field Functions 
    bool hasSeCu() const { return this->seCu_ != nullptr;};
    void deleteSeCu() { this->seCu_ = nullptr;};
    inline double seCu() const { DARABONBA_PTR_GET_DEFAULT(seCu_, 0.0) };
    inline DescribeChargeResultResponseBodyModuleDetails& setSeCu(double seCu) { DARABONBA_PTR_SET_VALUE(seCu_, seCu) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<double> seCu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
