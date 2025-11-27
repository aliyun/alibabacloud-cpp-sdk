// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSecurityGroupConfigurationResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupConfigurationResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupConfigurationResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
    };
    DescribeSecurityGroupConfigurationResponseBodyItems() = default ;
    DescribeSecurityGroupConfigurationResponseBodyItems(const DescribeSecurityGroupConfigurationResponseBodyItems &) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItems(DescribeSecurityGroupConfigurationResponseBodyItems &&) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupConfigurationResponseBodyItems() = default ;
    DescribeSecurityGroupConfigurationResponseBodyItems& operator=(const DescribeSecurityGroupConfigurationResponseBodyItems &) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItems& operator=(DescribeSecurityGroupConfigurationResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsSecurityGroupRelation_ == nullptr; };
    // ecsSecurityGroupRelation Field Functions 
    bool hasEcsSecurityGroupRelation() const { return this->ecsSecurityGroupRelation_ != nullptr;};
    void deleteEcsSecurityGroupRelation() { this->ecsSecurityGroupRelation_ = nullptr;};
    inline const vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> & ecsSecurityGroupRelation() const { DARABONBA_PTR_GET_CONST(ecsSecurityGroupRelation_, vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>) };
    inline vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> ecsSecurityGroupRelation() { DARABONBA_PTR_GET(ecsSecurityGroupRelation_, vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>) };
    inline DescribeSecurityGroupConfigurationResponseBodyItems& setEcsSecurityGroupRelation(const vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> & ecsSecurityGroupRelation) { DARABONBA_PTR_SET_VALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };
    inline DescribeSecurityGroupConfigurationResponseBodyItems& setEcsSecurityGroupRelation(vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> && ecsSecurityGroupRelation) { DARABONBA_PTR_SET_RVALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>> ecsSecurityGroupRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
