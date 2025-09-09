// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRdsSuperAccountInstancesResponseBodyDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsSuperAccountInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstance, dbInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsSuperAccountInstancesResponseBodyDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstance, dbInstance_);
    };
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances() = default ;
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances(const DescribeRdsSuperAccountInstancesResponseBodyDbInstances &) = default ;
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances(DescribeRdsSuperAccountInstancesResponseBodyDbInstances &&) = default ;
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsSuperAccountInstancesResponseBodyDbInstances() = default ;
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances& operator=(const DescribeRdsSuperAccountInstancesResponseBodyDbInstances &) = default ;
    DescribeRdsSuperAccountInstancesResponseBodyDbInstances& operator=(DescribeRdsSuperAccountInstancesResponseBodyDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstance_ != nullptr; };
    // dbInstance Field Functions 
    bool hasDbInstance() const { return this->dbInstance_ != nullptr;};
    void deleteDbInstance() { this->dbInstance_ = nullptr;};
    inline const vector<string> & dbInstance() const { DARABONBA_PTR_GET_CONST(dbInstance_, vector<string>) };
    inline vector<string> dbInstance() { DARABONBA_PTR_GET(dbInstance_, vector<string>) };
    inline DescribeRdsSuperAccountInstancesResponseBodyDbInstances& setDbInstance(const vector<string> & dbInstance) { DARABONBA_PTR_SET_VALUE(dbInstance_, dbInstance) };
    inline DescribeRdsSuperAccountInstancesResponseBodyDbInstances& setDbInstance(vector<string> && dbInstance) { DARABONBA_PTR_SET_RVALUE(dbInstance_, dbInstance) };


  protected:
    std::shared_ptr<vector<string>> dbInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
