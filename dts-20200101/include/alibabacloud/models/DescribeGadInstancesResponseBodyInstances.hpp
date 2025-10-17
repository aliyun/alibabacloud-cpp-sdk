// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGadInstancesResponseBodyInstancesInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeGadInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    DescribeGadInstancesResponseBodyInstances() = default ;
    DescribeGadInstancesResponseBodyInstances(const DescribeGadInstancesResponseBodyInstances &) = default ;
    DescribeGadInstancesResponseBodyInstances(DescribeGadInstancesResponseBodyInstances &&) = default ;
    DescribeGadInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBodyInstances() = default ;
    DescribeGadInstancesResponseBodyInstances& operator=(const DescribeGadInstancesResponseBodyInstances &) = default ;
    DescribeGadInstancesResponseBodyInstances& operator=(DescribeGadInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::DescribeGadInstancesResponseBodyInstancesInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::DescribeGadInstancesResponseBodyInstancesInstances>) };
    inline vector<Models::DescribeGadInstancesResponseBodyInstancesInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::DescribeGadInstancesResponseBodyInstancesInstances>) };
    inline DescribeGadInstancesResponseBodyInstances& setInstances(const vector<Models::DescribeGadInstancesResponseBodyInstancesInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGadInstancesResponseBodyInstances& setInstances(vector<Models::DescribeGadInstancesResponseBodyInstancesInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    std::shared_ptr<vector<Models::DescribeGadInstancesResponseBodyInstancesInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
