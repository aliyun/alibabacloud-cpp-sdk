// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEEXTRADBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEEXTRADBINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline const vector<string> & DBInstanceId() const { DARABONBA_PTR_GET_CONST(DBInstanceId_, vector<string>) };
    inline vector<string> DBInstanceId() { DARABONBA_PTR_GET(DBInstanceId_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& setDBInstanceId(const vector<string> & DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds& setDBInstanceId(vector<string> && DBInstanceId) { DARABONBA_PTR_SET_RVALUE(DBInstanceId_, DBInstanceId) };


  protected:
    std::shared_ptr<vector<string>> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
