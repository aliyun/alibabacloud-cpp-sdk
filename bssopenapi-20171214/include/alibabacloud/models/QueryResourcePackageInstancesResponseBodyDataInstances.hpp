// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryResourcePackageInstancesResponseBodyDataInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    QueryResourcePackageInstancesResponseBodyDataInstances() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstances(const QueryResourcePackageInstancesResponseBodyDataInstances &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstances(QueryResourcePackageInstancesResponseBodyDataInstances &&) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesResponseBodyDataInstances() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstances& operator=(const QueryResourcePackageInstancesResponseBodyDataInstances &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstances& operator=(QueryResourcePackageInstancesResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance>) };
    inline vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance>) };
    inline QueryResourcePackageInstancesResponseBodyDataInstances& setInstance(const vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline QueryResourcePackageInstancesResponseBodyDataInstances& setInstance(vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
