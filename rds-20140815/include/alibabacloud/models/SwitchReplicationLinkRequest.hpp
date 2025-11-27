// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHREPLICATIONLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHREPLICATIONLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class SwitchReplicationLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchReplicationLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(TargetInstanceRegionId, targetInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchReplicationLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceRegionId, targetInstanceRegionId_);
    };
    SwitchReplicationLinkRequest() = default ;
    SwitchReplicationLinkRequest(const SwitchReplicationLinkRequest &) = default ;
    SwitchReplicationLinkRequest(SwitchReplicationLinkRequest &&) = default ;
    SwitchReplicationLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchReplicationLinkRequest() = default ;
    SwitchReplicationLinkRequest& operator=(const SwitchReplicationLinkRequest &) = default ;
    SwitchReplicationLinkRequest& operator=(SwitchReplicationLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->targetInstanceName_ == nullptr && return this->targetInstanceRegionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline SwitchReplicationLinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SwitchReplicationLinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string targetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline SwitchReplicationLinkRequest& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // targetInstanceRegionId Field Functions 
    bool hasTargetInstanceRegionId() const { return this->targetInstanceRegionId_ != nullptr;};
    void deleteTargetInstanceRegionId() { this->targetInstanceRegionId_ = nullptr;};
    inline string targetInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceRegionId_, "") };
    inline SwitchReplicationLinkRequest& setTargetInstanceRegionId(string targetInstanceRegionId) { DARABONBA_PTR_SET_VALUE(targetInstanceRegionId_, targetInstanceRegionId) };


  protected:
    // The ID of the source or primary instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the destination DR instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInstanceName_ = nullptr;
    // The ID of the region in which the destination DR instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
