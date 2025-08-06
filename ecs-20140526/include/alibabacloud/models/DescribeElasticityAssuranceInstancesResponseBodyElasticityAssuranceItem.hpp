// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODYELASTICITYASSURANCEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODYELASTICITYASSURANCEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
    };
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem() = default ;
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem(const DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem &) = default ;
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem(DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem &&) = default ;
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem() = default ;
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& operator=(const DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem &) = default ;
    DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& operator=(DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIdSet_ != nullptr; };
    // instanceIdSet Field Functions 
    bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
    void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
    inline const vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet> & instanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet>) };
    inline vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet> instanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet>) };
    inline DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& setInstanceIdSet(const vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
    inline DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem& setInstanceIdSet(vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItemInstanceIdSet>> instanceIdSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
