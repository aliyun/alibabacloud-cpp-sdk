// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataModuleListModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataModuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataModuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataModuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
    };
    DescribePricingModuleResponseBodyDataModuleList() = default ;
    DescribePricingModuleResponseBodyDataModuleList(const DescribePricingModuleResponseBodyDataModuleList &) = default ;
    DescribePricingModuleResponseBodyDataModuleList(DescribePricingModuleResponseBodyDataModuleList &&) = default ;
    DescribePricingModuleResponseBodyDataModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataModuleList() = default ;
    DescribePricingModuleResponseBodyDataModuleList& operator=(const DescribePricingModuleResponseBodyDataModuleList &) = default ;
    DescribePricingModuleResponseBodyDataModuleList& operator=(DescribePricingModuleResponseBodyDataModuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->module_ != nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<Models::DescribePricingModuleResponseBodyDataModuleListModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<Models::DescribePricingModuleResponseBodyDataModuleListModule>) };
    inline vector<Models::DescribePricingModuleResponseBodyDataModuleListModule> module() { DARABONBA_PTR_GET(module_, vector<Models::DescribePricingModuleResponseBodyDataModuleListModule>) };
    inline DescribePricingModuleResponseBodyDataModuleList& setModule(const vector<Models::DescribePricingModuleResponseBodyDataModuleListModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline DescribePricingModuleResponseBodyDataModuleList& setModule(vector<Models::DescribePricingModuleResponseBodyDataModuleListModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


  protected:
    std::shared_ptr<vector<Models::DescribePricingModuleResponseBodyDataModuleListModule>> module_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
