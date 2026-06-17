// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPMODIFYDBNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEMPMODIFYDBNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class TempModifyDBNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempModifyDBNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
    };
    friend void from_json(const Darabonba::Json& j, TempModifyDBNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
    };
    TempModifyDBNodeRequest() = default ;
    TempModifyDBNodeRequest(const TempModifyDBNodeRequest &) = default ;
    TempModifyDBNodeRequest(TempModifyDBNodeRequest &&) = default ;
    TempModifyDBNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempModifyDBNodeRequest() = default ;
    TempModifyDBNodeRequest& operator=(const TempModifyDBNodeRequest &) = default ;
    TempModifyDBNodeRequest& operator=(TempModifyDBNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNode& obj) { 
        DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBNode& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBNode() = default ;
      DBNode(const DBNode &) = default ;
      DBNode(DBNode &&) = default ;
      DBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNode() = default ;
      DBNode& operator=(const DBNode &) = default ;
      DBNode& operator=(DBNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetClass_ == nullptr
        && this->zoneId_ == nullptr; };
      // targetClass Field Functions 
      bool hasTargetClass() const { return this->targetClass_ != nullptr;};
      void deleteTargetClass() { this->targetClass_ = nullptr;};
      inline string getTargetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
      inline DBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The specifications of the node to upgrade or add.
      // 
      // > - When you add a node, the node specifications must be the same as the specifications of the existing nodes.
      // >
      // > - For more information about the specifications of existing cluster nodes, see [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html).
      shared_ptr<string> targetClass_ {};
      // The zone for the new node. The zone must be the same as the zone of the existing nodes.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBNode_ == nullptr && this->modifyType_ == nullptr && this->operationType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->promotionCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->restoreTime_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline TempModifyDBNodeRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TempModifyDBNodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline TempModifyDBNodeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<TempModifyDBNodeRequest::DBNode> & getDBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<TempModifyDBNodeRequest::DBNode>) };
    inline vector<TempModifyDBNodeRequest::DBNode> getDBNode() { DARABONBA_PTR_GET(DBNode_, vector<TempModifyDBNodeRequest::DBNode>) };
    inline TempModifyDBNodeRequest& setDBNode(const vector<TempModifyDBNodeRequest::DBNode> & dBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, dBNode) };
    inline TempModifyDBNodeRequest& setDBNode(vector<TempModifyDBNodeRequest::DBNode> && dBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, dBNode) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline TempModifyDBNodeRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline TempModifyDBNodeRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TempModifyDBNodeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TempModifyDBNodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline TempModifyDBNodeRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TempModifyDBNodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TempModifyDBNodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline TempModifyDBNodeRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


  protected:
    shared_ptr<bool> autoUseCoupon_ {};
    // A client token to ensure the idempotence of the request. Generate a unique token for each request. The token is case-sensitive and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The information about the nodes to upgrade or add.
    // 
    // This parameter is required.
    shared_ptr<vector<TempModifyDBNodeRequest::DBNode>> DBNode_ {};
    // The modification type. The value is fixed to **TempUpgrade**.
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    // The operation type. Valid values:
    // 
    // - **Modify**: temporary upgrade
    // 
    // - **Add**: temporarily add a node
    // 
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time to revert the temporary upgrade. The format is YYYY-MM-DD hh:mm:ss.
    // 
    // > The revert time must be at least 1 hour later than the current time. It must also be at least 1 day before the cluster expires.
    // 
    // This parameter is required.
    shared_ptr<string> restoreTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
