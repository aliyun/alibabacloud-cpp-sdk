// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREPLICATIONLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREPLICATIONLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteReplicationLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteReplicationLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PromoteToMaster, promoteToMaster_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteReplicationLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PromoteToMaster, promoteToMaster_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteReplicationLinkRequest() = default ;
    DeleteReplicationLinkRequest(const DeleteReplicationLinkRequest &) = default ;
    DeleteReplicationLinkRequest(DeleteReplicationLinkRequest &&) = default ;
    DeleteReplicationLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteReplicationLinkRequest() = default ;
    DeleteReplicationLinkRequest& operator=(const DeleteReplicationLinkRequest &) = default ;
    DeleteReplicationLinkRequest& operator=(DeleteReplicationLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->promoteToMaster_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteReplicationLinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // promoteToMaster Field Functions 
    bool hasPromoteToMaster() const { return this->promoteToMaster_ != nullptr;};
    void deletePromoteToMaster() { this->promoteToMaster_ = nullptr;};
    inline bool promoteToMaster() const { DARABONBA_PTR_GET_DEFAULT(promoteToMaster_, false) };
    inline DeleteReplicationLinkRequest& setPromoteToMaster(bool promoteToMaster) { DARABONBA_PTR_SET_VALUE(promoteToMaster_, promoteToMaster) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteReplicationLinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the DR instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to delete the data synchronization link between the DR instance and the primary instance and promote the DR instance to the primary instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> promoteToMaster_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
