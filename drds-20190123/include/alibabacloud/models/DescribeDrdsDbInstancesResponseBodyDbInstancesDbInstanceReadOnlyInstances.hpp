// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCEREADONLYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCEREADONLYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyInstance, readOnlyInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstance, readOnlyInstance_);
    };
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances(const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances(DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances &&) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& operator=(const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& operator=(DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readOnlyInstance_ != nullptr; };
    // readOnlyInstance Field Functions 
    bool hasReadOnlyInstance() const { return this->readOnlyInstance_ != nullptr;};
    void deleteReadOnlyInstance() { this->readOnlyInstance_ = nullptr;};
    inline const vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance> & readOnlyInstance() const { DARABONBA_PTR_GET_CONST(readOnlyInstance_, vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance>) };
    inline vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance> readOnlyInstance() { DARABONBA_PTR_GET(readOnlyInstance_, vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance>) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& setReadOnlyInstance(const vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance> & readOnlyInstance) { DARABONBA_PTR_SET_VALUE(readOnlyInstance_, readOnlyInstance) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances& setReadOnlyInstance(vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance> && readOnlyInstance) { DARABONBA_PTR_SET_RVALUE(readOnlyInstance_, readOnlyInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance>> readOnlyInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
