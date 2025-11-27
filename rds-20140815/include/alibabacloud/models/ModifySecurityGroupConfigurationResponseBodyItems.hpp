// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifySecurityGroupConfigurationResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupConfigurationResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupConfigurationResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
    };
    ModifySecurityGroupConfigurationResponseBodyItems() = default ;
    ModifySecurityGroupConfigurationResponseBodyItems(const ModifySecurityGroupConfigurationResponseBodyItems &) = default ;
    ModifySecurityGroupConfigurationResponseBodyItems(ModifySecurityGroupConfigurationResponseBodyItems &&) = default ;
    ModifySecurityGroupConfigurationResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupConfigurationResponseBodyItems() = default ;
    ModifySecurityGroupConfigurationResponseBodyItems& operator=(const ModifySecurityGroupConfigurationResponseBodyItems &) = default ;
    ModifySecurityGroupConfigurationResponseBodyItems& operator=(ModifySecurityGroupConfigurationResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsSecurityGroupRelation_ == nullptr; };
    // ecsSecurityGroupRelation Field Functions 
    bool hasEcsSecurityGroupRelation() const { return this->ecsSecurityGroupRelation_ != nullptr;};
    void deleteEcsSecurityGroupRelation() { this->ecsSecurityGroupRelation_ = nullptr;};
    inline const vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> & ecsSecurityGroupRelation() const { DARABONBA_PTR_GET_CONST(ecsSecurityGroupRelation_, vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>) };
    inline vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> ecsSecurityGroupRelation() { DARABONBA_PTR_GET(ecsSecurityGroupRelation_, vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>) };
    inline ModifySecurityGroupConfigurationResponseBodyItems& setEcsSecurityGroupRelation(const vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> & ecsSecurityGroupRelation) { DARABONBA_PTR_SET_VALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };
    inline ModifySecurityGroupConfigurationResponseBodyItems& setEcsSecurityGroupRelation(vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> && ecsSecurityGroupRelation) { DARABONBA_PTR_SET_RVALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };


  protected:
    std::shared_ptr<vector<Models::ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>> ecsSecurityGroupRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
