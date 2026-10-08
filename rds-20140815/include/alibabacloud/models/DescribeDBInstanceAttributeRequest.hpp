// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeDBInstanceAttributeRequest() = default ;
    DescribeDBInstanceAttributeRequest(const DescribeDBInstanceAttributeRequest &) = default ;
    DescribeDBInstanceAttributeRequest(DescribeDBInstanceAttributeRequest &&) = default ;
    DescribeDBInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeRequest() = default ;
    DescribeDBInstanceAttributeRequest& operator=(const DescribeDBInstanceAttributeRequest &) = default ;
    DescribeDBInstanceAttributeRequest& operator=(DescribeDBInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->expired_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceAttributeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBInstanceAttributeRequest& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstanceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID. You can call DescribeDBInstances to obtain the instance ID.
    // >Warning: Do not specify multiple instance IDs for batch queries. Otherwise, the query times out and fails.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The expiration status of the instance. Valid values:
    // 
    // * **True**: The instance has expired.
    // * **False**: The instance has not expired.
    shared_ptr<string> expired_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
