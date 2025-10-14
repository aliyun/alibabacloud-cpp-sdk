// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODYEPNINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODYEPNINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstancesResponseBodyEPNInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstancesResponseBodyEPNInstances& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstance, EPNInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstancesResponseBodyEPNInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstance, EPNInstance_);
    };
    DescribeEpnInstancesResponseBodyEPNInstances() = default ;
    DescribeEpnInstancesResponseBodyEPNInstances(const DescribeEpnInstancesResponseBodyEPNInstances &) = default ;
    DescribeEpnInstancesResponseBodyEPNInstances(DescribeEpnInstancesResponseBodyEPNInstances &&) = default ;
    DescribeEpnInstancesResponseBodyEPNInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstancesResponseBodyEPNInstances() = default ;
    DescribeEpnInstancesResponseBodyEPNInstances& operator=(const DescribeEpnInstancesResponseBodyEPNInstances &) = default ;
    DescribeEpnInstancesResponseBodyEPNInstances& operator=(DescribeEpnInstancesResponseBodyEPNInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstance_ == nullptr; };
    // EPNInstance Field Functions 
    bool hasEPNInstance() const { return this->EPNInstance_ != nullptr;};
    void deleteEPNInstance() { this->EPNInstance_ = nullptr;};
    inline const vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance> & EPNInstance() const { DARABONBA_PTR_GET_CONST(EPNInstance_, vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance>) };
    inline vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance> EPNInstance() { DARABONBA_PTR_GET(EPNInstance_, vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance>) };
    inline DescribeEpnInstancesResponseBodyEPNInstances& setEPNInstance(const vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance> & EPNInstance) { DARABONBA_PTR_SET_VALUE(EPNInstance_, EPNInstance) };
    inline DescribeEpnInstancesResponseBodyEPNInstances& setEPNInstance(vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance> && EPNInstance) { DARABONBA_PTR_SET_RVALUE(EPNInstance_, EPNInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance>> EPNInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
