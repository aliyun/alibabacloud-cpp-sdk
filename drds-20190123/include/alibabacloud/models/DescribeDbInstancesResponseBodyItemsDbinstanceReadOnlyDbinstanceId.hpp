// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEID_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEID_HPP_
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
  class DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId() = default ;
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId(const DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId &) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId(DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId &&) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId() = default ;
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& operator=(const DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId &) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& operator=(DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readOnlyDBInstanceId_ != nullptr; };
    // readOnlyDBInstanceId Field Functions 
    bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
    void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
    inline const vector<string> & readOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<string>) };
    inline vector<string> readOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<string>) };
    inline DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& setReadOnlyDBInstanceId(const vector<string> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId& setReadOnlyDBInstanceId(vector<string> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


  protected:
    std::shared_ptr<vector<string>> readOnlyDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
