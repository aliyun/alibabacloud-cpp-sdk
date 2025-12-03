// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODYSUBSCRIPTIONSDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODYSUBSCRIPTIONSDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionsResponseBodySubscriptionsDBInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionsResponseBodySubscriptionsDBInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionsResponseBodySubscriptionsDBInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances() = default ;
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances(const DescribeSubscriptionsResponseBodySubscriptionsDBInstances &) = default ;
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances(DescribeSubscriptionsResponseBodySubscriptionsDBInstances &&) = default ;
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionsResponseBodySubscriptionsDBInstances() = default ;
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances& operator=(const DescribeSubscriptionsResponseBodySubscriptionsDBInstances &) = default ;
    DescribeSubscriptionsResponseBodySubscriptionsDBInstances& operator=(DescribeSubscriptionsResponseBodySubscriptionsDBInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->role_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptionsDBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptionsDBInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptionsDBInstances& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
