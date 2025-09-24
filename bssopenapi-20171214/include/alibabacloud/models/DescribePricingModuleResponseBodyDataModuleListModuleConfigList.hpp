// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELISTMODULECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELISTMODULECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataModuleListModuleConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataModuleListModuleConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataModuleListModuleConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
    };
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList() = default ;
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList(const DescribePricingModuleResponseBodyDataModuleListModuleConfigList &) = default ;
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList(DescribePricingModuleResponseBodyDataModuleListModuleConfigList &&) = default ;
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataModuleListModuleConfigList() = default ;
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList& operator=(const DescribePricingModuleResponseBodyDataModuleListModuleConfigList &) = default ;
    DescribePricingModuleResponseBodyDataModuleListModuleConfigList& operator=(DescribePricingModuleResponseBodyDataModuleListModuleConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<string> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<string>) };
    inline vector<string> configList() { DARABONBA_PTR_GET(configList_, vector<string>) };
    inline DescribePricingModuleResponseBodyDataModuleListModuleConfigList& setConfigList(const vector<string> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribePricingModuleResponseBodyDataModuleListModuleConfigList& setConfigList(vector<string> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


  protected:
    std::shared_ptr<vector<string>> configList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
