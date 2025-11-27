// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(const DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &&) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& operator=(const DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& operator=(DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readOnlyDBInstanceId_ == nullptr; };
    // readOnlyDBInstanceId Field Functions 
    bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
    void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> & readOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>) };
    inline vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> readOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>) };
    inline DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>> readOnlyDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
