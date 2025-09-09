// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstancesResponseBodyDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstance, dbInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstance, dbInstance_);
    };
    DescribeDrdsDbInstancesResponseBodyDbInstances() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstances(const DescribeDrdsDbInstancesResponseBodyDbInstances &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstances(DescribeDrdsDbInstancesResponseBodyDbInstances &&) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstancesResponseBodyDbInstances() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstances& operator=(const DescribeDrdsDbInstancesResponseBodyDbInstances &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstances& operator=(DescribeDrdsDbInstancesResponseBodyDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstance_ != nullptr; };
    // dbInstance Field Functions 
    bool hasDbInstance() const { return this->dbInstance_ != nullptr;};
    void deleteDbInstance() { this->dbInstance_ = nullptr;};
    inline const vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance> & dbInstance() const { DARABONBA_PTR_GET_CONST(dbInstance_, vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance>) };
    inline vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance> dbInstance() { DARABONBA_PTR_GET(dbInstance_, vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance>) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstances& setDbInstance(const vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance> & dbInstance) { DARABONBA_PTR_SET_VALUE(dbInstance_, dbInstance) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstances& setDbInstance(vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance> && dbInstance) { DARABONBA_PTR_SET_RVALUE(dbInstance_, dbInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance>> dbInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
