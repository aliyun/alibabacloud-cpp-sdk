// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMSDBINSTANCEREADONLYDBINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(const DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &&) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& operator=(const DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& operator=(DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readOnlyDBInstanceId_ == nullptr; };
    // readOnlyDBInstanceId Field Functions 
    bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
    void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> & readOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>) };
    inline vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> readOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIdsReadOnlyDBInstanceId>> readOnlyDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
