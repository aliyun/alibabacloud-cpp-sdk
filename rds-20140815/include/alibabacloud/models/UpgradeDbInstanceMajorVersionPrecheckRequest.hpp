// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEMAJORVERSIONPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEMAJORVERSIONPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class UpgradeDBInstanceMajorVersionPrecheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceMajorVersionPrecheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceMajorVersionPrecheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
    };
    UpgradeDBInstanceMajorVersionPrecheckRequest() = default ;
    UpgradeDBInstanceMajorVersionPrecheckRequest(const UpgradeDBInstanceMajorVersionPrecheckRequest &) = default ;
    UpgradeDBInstanceMajorVersionPrecheckRequest(UpgradeDBInstanceMajorVersionPrecheckRequest &&) = default ;
    UpgradeDBInstanceMajorVersionPrecheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceMajorVersionPrecheckRequest() = default ;
    UpgradeDBInstanceMajorVersionPrecheckRequest& operator=(const UpgradeDBInstanceMajorVersionPrecheckRequest &) = default ;
    UpgradeDBInstanceMajorVersionPrecheckRequest& operator=(UpgradeDBInstanceMajorVersionPrecheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->targetMajorVersion_ == nullptr && return this->upgradeMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceMajorVersionPrecheckRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceMajorVersionPrecheckRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetMajorVersion Field Functions 
    bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
    void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
    inline string targetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
    inline UpgradeDBInstanceMajorVersionPrecheckRequest& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string upgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline UpgradeDBInstanceMajorVersionPrecheckRequest& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


  protected:
    // The ID of the instance. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to query the ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new major engine version of the instance. The new major engine version must be later than the original major engine version.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetMajorVersion_ = nullptr;
    std::shared_ptr<string> upgradeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
