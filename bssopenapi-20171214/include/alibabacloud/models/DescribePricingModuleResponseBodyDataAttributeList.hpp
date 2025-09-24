// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataAttributeListAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataAttributeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataAttributeList& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataAttributeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
    };
    DescribePricingModuleResponseBodyDataAttributeList() = default ;
    DescribePricingModuleResponseBodyDataAttributeList(const DescribePricingModuleResponseBodyDataAttributeList &) = default ;
    DescribePricingModuleResponseBodyDataAttributeList(DescribePricingModuleResponseBodyDataAttributeList &&) = default ;
    DescribePricingModuleResponseBodyDataAttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataAttributeList() = default ;
    DescribePricingModuleResponseBodyDataAttributeList& operator=(const DescribePricingModuleResponseBodyDataAttributeList &) = default ;
    DescribePricingModuleResponseBodyDataAttributeList& operator=(DescribePricingModuleResponseBodyDataAttributeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline const vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute> & attribute() const { DARABONBA_PTR_GET_CONST(attribute_, vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute>) };
    inline vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute> attribute() { DARABONBA_PTR_GET(attribute_, vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute>) };
    inline DescribePricingModuleResponseBodyDataAttributeList& setAttribute(const vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute> & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
    inline DescribePricingModuleResponseBodyDataAttributeList& setAttribute(vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute> && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


  protected:
    std::shared_ptr<vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttribute>> attribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
