// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModulesModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuModules& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuModules& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
    };
    DescribeProductResponseBodyProductSkusProductSkuModules() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModules(const DescribeProductResponseBodyProductSkusProductSkuModules &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModules(DescribeProductResponseBodyProductSkusProductSkuModules &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuModules() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModules& operator=(const DescribeProductResponseBodyProductSkusProductSkuModules &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModules& operator=(DescribeProductResponseBodyProductSkusProductSkuModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->module_ != nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule>) };
    inline vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule> module() { DARABONBA_PTR_GET(module_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule>) };
    inline DescribeProductResponseBodyProductSkusProductSkuModules& setModule(const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline DescribeProductResponseBodyProductSkusProductSkuModules& setModule(vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModule>> module_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
