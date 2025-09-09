// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESREQUEST_HPP_
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
  class DescribeRdsSuperAccountInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsSuperAccountInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RdsInstance, rdsInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsSuperAccountInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RdsInstance, rdsInstance_);
    };
    DescribeRdsSuperAccountInstancesRequest() = default ;
    DescribeRdsSuperAccountInstancesRequest(const DescribeRdsSuperAccountInstancesRequest &) = default ;
    DescribeRdsSuperAccountInstancesRequest(DescribeRdsSuperAccountInstancesRequest &&) = default ;
    DescribeRdsSuperAccountInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsSuperAccountInstancesRequest() = default ;
    DescribeRdsSuperAccountInstancesRequest& operator=(const DescribeRdsSuperAccountInstancesRequest &) = default ;
    DescribeRdsSuperAccountInstancesRequest& operator=(DescribeRdsSuperAccountInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstType_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->rdsInstance_ != nullptr; };
    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeRdsSuperAccountInstancesRequest& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeRdsSuperAccountInstancesRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // rdsInstance Field Functions 
    bool hasRdsInstance() const { return this->rdsInstance_ != nullptr;};
    void deleteRdsInstance() { this->rdsInstance_ = nullptr;};
    inline const vector<string> & rdsInstance() const { DARABONBA_PTR_GET_CONST(rdsInstance_, vector<string>) };
    inline vector<string> rdsInstance() { DARABONBA_PTR_GET(rdsInstance_, vector<string>) };
    inline DescribeRdsSuperAccountInstancesRequest& setRdsInstance(const vector<string> & rdsInstance) { DARABONBA_PTR_SET_VALUE(rdsInstance_, rdsInstance) };
    inline DescribeRdsSuperAccountInstancesRequest& setRdsInstance(vector<string> && rdsInstance) { DARABONBA_PTR_SET_RVALUE(rdsInstance_, rdsInstance) };


  protected:
    // The type of the ApsaraDB RDS for MySQL instances. Default value: **RDS**.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> rdsInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
