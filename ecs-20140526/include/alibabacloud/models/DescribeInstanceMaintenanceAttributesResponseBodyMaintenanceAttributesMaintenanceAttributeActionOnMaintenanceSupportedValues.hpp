// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTESMAINTENANCEATTRIBUTEACTIONONMAINTENANCESUPPORTEDVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTESMAINTENANCEATTRIBUTEACTIONONMAINTENANCESUPPORTEDVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedValue, supportedValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedValue, supportedValue_);
    };
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues &&) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& operator=(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& operator=(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedValue_ == nullptr; };
    // supportedValue Field Functions 
    bool hasSupportedValue() const { return this->supportedValue_ != nullptr;};
    void deleteSupportedValue() { this->supportedValue_ = nullptr;};
    inline const vector<string> & supportedValue() const { DARABONBA_PTR_GET_CONST(supportedValue_, vector<string>) };
    inline vector<string> supportedValue() { DARABONBA_PTR_GET(supportedValue_, vector<string>) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& setSupportedValue(const vector<string> & supportedValue) { DARABONBA_PTR_SET_VALUE(supportedValue_, supportedValue) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenanceSupportedValues& setSupportedValue(vector<string> && supportedValue) { DARABONBA_PTR_SET_RVALUE(supportedValue_, supportedValue) };


  protected:
    std::shared_ptr<vector<string>> supportedValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
