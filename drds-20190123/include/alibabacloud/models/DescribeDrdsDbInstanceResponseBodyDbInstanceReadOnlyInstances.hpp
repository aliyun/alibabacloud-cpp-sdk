// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCEREADONLYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCEREADONLYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyInstance, readOnlyInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstance, readOnlyInstance_);
    };
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances(const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances(DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances &&) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& operator=(const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& operator=(DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readOnlyInstance_ != nullptr; };
    // readOnlyInstance Field Functions 
    bool hasReadOnlyInstance() const { return this->readOnlyInstance_ != nullptr;};
    void deleteReadOnlyInstance() { this->readOnlyInstance_ = nullptr;};
    inline const vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance> & readOnlyInstance() const { DARABONBA_PTR_GET_CONST(readOnlyInstance_, vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance>) };
    inline vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance> readOnlyInstance() { DARABONBA_PTR_GET(readOnlyInstance_, vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance>) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& setReadOnlyInstance(const vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance> & readOnlyInstance) { DARABONBA_PTR_SET_VALUE(readOnlyInstance_, readOnlyInstance) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances& setReadOnlyInstance(vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance> && readOnlyInstance) { DARABONBA_PTR_SET_RVALUE(readOnlyInstance_, readOnlyInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance>> readOnlyInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
