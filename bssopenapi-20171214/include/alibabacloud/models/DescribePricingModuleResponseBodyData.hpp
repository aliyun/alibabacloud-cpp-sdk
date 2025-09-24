// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataAttributeList.hpp>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataModuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeList, attributeList_);
      DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeList, attributeList_);
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
    };
    DescribePricingModuleResponseBodyData() = default ;
    DescribePricingModuleResponseBodyData(const DescribePricingModuleResponseBodyData &) = default ;
    DescribePricingModuleResponseBodyData(DescribePricingModuleResponseBodyData &&) = default ;
    DescribePricingModuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyData() = default ;
    DescribePricingModuleResponseBodyData& operator=(const DescribePricingModuleResponseBodyData &) = default ;
    DescribePricingModuleResponseBodyData& operator=(DescribePricingModuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeList_ != nullptr
        && this->moduleList_ != nullptr; };
    // attributeList Field Functions 
    bool hasAttributeList() const { return this->attributeList_ != nullptr;};
    void deleteAttributeList() { this->attributeList_ = nullptr;};
    inline const Models::DescribePricingModuleResponseBodyDataAttributeList & attributeList() const { DARABONBA_PTR_GET_CONST(attributeList_, Models::DescribePricingModuleResponseBodyDataAttributeList) };
    inline Models::DescribePricingModuleResponseBodyDataAttributeList attributeList() { DARABONBA_PTR_GET(attributeList_, Models::DescribePricingModuleResponseBodyDataAttributeList) };
    inline DescribePricingModuleResponseBodyData& setAttributeList(const Models::DescribePricingModuleResponseBodyDataAttributeList & attributeList) { DARABONBA_PTR_SET_VALUE(attributeList_, attributeList) };
    inline DescribePricingModuleResponseBodyData& setAttributeList(Models::DescribePricingModuleResponseBodyDataAttributeList && attributeList) { DARABONBA_PTR_SET_RVALUE(attributeList_, attributeList) };


    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const Models::DescribePricingModuleResponseBodyDataModuleList & moduleList() const { DARABONBA_PTR_GET_CONST(moduleList_, Models::DescribePricingModuleResponseBodyDataModuleList) };
    inline Models::DescribePricingModuleResponseBodyDataModuleList moduleList() { DARABONBA_PTR_GET(moduleList_, Models::DescribePricingModuleResponseBodyDataModuleList) };
    inline DescribePricingModuleResponseBodyData& setModuleList(const Models::DescribePricingModuleResponseBodyDataModuleList & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline DescribePricingModuleResponseBodyData& setModuleList(Models::DescribePricingModuleResponseBodyDataModuleList && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


  protected:
    // The module attributes.
    std::shared_ptr<Models::DescribePricingModuleResponseBodyDataAttributeList> attributeList_ = nullptr;
    // The pricing information of modules.
    std::shared_ptr<Models::DescribePricingModuleResponseBodyDataModuleList> moduleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
