// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(MaintenanceAttribute, maintenanceAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(MaintenanceAttribute, maintenanceAttribute_);
    };
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes &&) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& operator=(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& operator=(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maintenanceAttribute_ != nullptr; };
    // maintenanceAttribute Field Functions 
    bool hasMaintenanceAttribute() const { return this->maintenanceAttribute_ != nullptr;};
    void deleteMaintenanceAttribute() { this->maintenanceAttribute_ = nullptr;};
    inline const vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute> & maintenanceAttribute() const { DARABONBA_PTR_GET_CONST(maintenanceAttribute_, vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute>) };
    inline vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute> maintenanceAttribute() { DARABONBA_PTR_GET(maintenanceAttribute_, vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute>) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& setMaintenanceAttribute(const vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute> & maintenanceAttribute) { DARABONBA_PTR_SET_VALUE(maintenanceAttribute_, maintenanceAttribute) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes& setMaintenanceAttribute(vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute> && maintenanceAttribute) { DARABONBA_PTR_SET_RVALUE(maintenanceAttribute_, maintenanceAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute>> maintenanceAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
