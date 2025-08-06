// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODYSYSTEMPROPERTYTEMPLATEMODELSYSTEMPROPERTYINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODYSYSTEMPROPERTYTEMPLATEMODELSYSTEMPROPERTYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPropertyInfos, customPropertyInfos_);
      DARABONBA_PTR_TO_JSON(RoProductDevice, roProductDevice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPropertyInfos, customPropertyInfos_);
      DARABONBA_PTR_FROM_JSON(RoProductDevice, roProductDevice_);
    };
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo() = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo(const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo &) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo(DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo &&) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo() = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& operator=(const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo &) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& operator=(DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customPropertyInfos_ != nullptr
        && this->roProductDevice_ != nullptr; };
    // customPropertyInfos Field Functions 
    bool hasCustomPropertyInfos() const { return this->customPropertyInfos_ != nullptr;};
    void deleteCustomPropertyInfos() { this->customPropertyInfos_ = nullptr;};
    inline const vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos> & customPropertyInfos() const { DARABONBA_PTR_GET_CONST(customPropertyInfos_, vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos>) };
    inline vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos> customPropertyInfos() { DARABONBA_PTR_GET(customPropertyInfos_, vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos>) };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& setCustomPropertyInfos(const vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos> & customPropertyInfos) { DARABONBA_PTR_SET_VALUE(customPropertyInfos_, customPropertyInfos) };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& setCustomPropertyInfos(vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos> && customPropertyInfos) { DARABONBA_PTR_SET_RVALUE(customPropertyInfos_, customPropertyInfos) };


    // roProductDevice Field Functions 
    bool hasRoProductDevice() const { return this->roProductDevice_ != nullptr;};
    void deleteRoProductDevice() { this->roProductDevice_ = nullptr;};
    inline string roProductDevice() const { DARABONBA_PTR_GET_DEFAULT(roProductDevice_, "") };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo& setRoProductDevice(string roProductDevice) { DARABONBA_PTR_SET_VALUE(roProductDevice_, roProductDevice) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos>> customPropertyInfos_ = nullptr;
    std::shared_ptr<string> roProductDevice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
