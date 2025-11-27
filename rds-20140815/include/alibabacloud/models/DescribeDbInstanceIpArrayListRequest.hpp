// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceIPArrayListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(WhitelistNetworkType, whitelistNetworkType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetworkType, whitelistNetworkType_);
    };
    DescribeDBInstanceIPArrayListRequest() = default ;
    DescribeDBInstanceIPArrayListRequest(const DescribeDBInstanceIPArrayListRequest &) = default ;
    DescribeDBInstanceIPArrayListRequest(DescribeDBInstanceIPArrayListRequest &&) = default ;
    DescribeDBInstanceIPArrayListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListRequest() = default ;
    DescribeDBInstanceIPArrayListRequest& operator=(const DescribeDBInstanceIPArrayListRequest &) = default ;
    DescribeDBInstanceIPArrayListRequest& operator=(DescribeDBInstanceIPArrayListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->whitelistNetworkType_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstanceIPArrayListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // whitelistNetworkType Field Functions 
    bool hasWhitelistNetworkType() const { return this->whitelistNetworkType_ != nullptr;};
    void deleteWhitelistNetworkType() { this->whitelistNetworkType_ = nullptr;};
    inline string whitelistNetworkType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetworkType_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setWhitelistNetworkType(string whitelistNetworkType) { DARABONBA_PTR_SET_VALUE(whitelistNetworkType_, whitelistNetworkType) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The network type of the IP address whitelist. Valid values:
    // 
    // *   **Classic**: classic network in enhanced whitelist mode
    // *   **VPC**: virtual private cloud (VPC) in enhanced whitelist mode
    // *   **MIX**: standard whitelist mode
    // 
    // By default, this operation returns IP address whitelists of all network types.
    std::shared_ptr<string> whitelistNetworkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
