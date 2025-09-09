// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsRdsInstancesResponseBodyDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsRdsInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstance, dbInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsRdsInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstance, dbInstance_);
    };
    DescribeDrdsRdsInstancesResponseBodyDbInstances() = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstances(const DescribeDrdsRdsInstancesResponseBodyDbInstances &) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstances(DescribeDrdsRdsInstancesResponseBodyDbInstances &&) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsRdsInstancesResponseBodyDbInstances() = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstances& operator=(const DescribeDrdsRdsInstancesResponseBodyDbInstances &) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstances& operator=(DescribeDrdsRdsInstancesResponseBodyDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstance_ != nullptr; };
    // dbInstance Field Functions 
    bool hasDbInstance() const { return this->dbInstance_ != nullptr;};
    void deleteDbInstance() { this->dbInstance_ = nullptr;};
    inline const vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance> & dbInstance() const { DARABONBA_PTR_GET_CONST(dbInstance_, vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance>) };
    inline vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance> dbInstance() { DARABONBA_PTR_GET(dbInstance_, vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance>) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstances& setDbInstance(const vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance> & dbInstance) { DARABONBA_PTR_SET_VALUE(dbInstance_, dbInstance) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstances& setDbInstance(vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance> && dbInstance) { DARABONBA_PTR_SET_RVALUE(dbInstance_, dbInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance>> dbInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
