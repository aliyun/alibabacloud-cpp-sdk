// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODYGTMINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODYGTMINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstancesResponseBodyGtmInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstancesResponseBodyGtmInstances& obj) { 
      DARABONBA_PTR_TO_JSON(GtmInstance, gtmInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstancesResponseBodyGtmInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(GtmInstance, gtmInstance_);
    };
    DescribeGtmInstancesResponseBodyGtmInstances() = default ;
    DescribeGtmInstancesResponseBodyGtmInstances(const DescribeGtmInstancesResponseBodyGtmInstances &) = default ;
    DescribeGtmInstancesResponseBodyGtmInstances(DescribeGtmInstancesResponseBodyGtmInstances &&) = default ;
    DescribeGtmInstancesResponseBodyGtmInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstancesResponseBodyGtmInstances() = default ;
    DescribeGtmInstancesResponseBodyGtmInstances& operator=(const DescribeGtmInstancesResponseBodyGtmInstances &) = default ;
    DescribeGtmInstancesResponseBodyGtmInstances& operator=(DescribeGtmInstancesResponseBodyGtmInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gtmInstance_ != nullptr; };
    // gtmInstance Field Functions 
    bool hasGtmInstance() const { return this->gtmInstance_ != nullptr;};
    void deleteGtmInstance() { this->gtmInstance_ = nullptr;};
    inline const vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance> & gtmInstance() const { DARABONBA_PTR_GET_CONST(gtmInstance_, vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance>) };
    inline vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance> gtmInstance() { DARABONBA_PTR_GET(gtmInstance_, vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance>) };
    inline DescribeGtmInstancesResponseBodyGtmInstances& setGtmInstance(const vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance> & gtmInstance) { DARABONBA_PTR_SET_VALUE(gtmInstance_, gtmInstance) };
    inline DescribeGtmInstancesResponseBodyGtmInstances& setGtmInstance(vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance> && gtmInstance) { DARABONBA_PTR_SET_RVALUE(gtmInstance_, gtmInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance>> gtmInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
