// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePerformanceViewRequestViewDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreatePerformanceViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePerformanceViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePerformanceViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    CreatePerformanceViewRequest() = default ;
    CreatePerformanceViewRequest(const CreatePerformanceViewRequest &) = default ;
    CreatePerformanceViewRequest(CreatePerformanceViewRequest &&) = default ;
    CreatePerformanceViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePerformanceViewRequest() = default ;
    CreatePerformanceViewRequest& operator=(const CreatePerformanceViewRequest &) = default ;
    CreatePerformanceViewRequest& operator=(CreatePerformanceViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createFromViewType_ != nullptr
        && this->DBClusterId_ != nullptr && this->fillOriginViewKeys_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->viewDetail_ != nullptr && this->viewName_ != nullptr; };
    // createFromViewType Field Functions 
    bool hasCreateFromViewType() const { return this->createFromViewType_ != nullptr;};
    void deleteCreateFromViewType() { this->createFromViewType_ = nullptr;};
    inline string createFromViewType() const { DARABONBA_PTR_GET_DEFAULT(createFromViewType_, "") };
    inline CreatePerformanceViewRequest& setCreateFromViewType(string createFromViewType) { DARABONBA_PTR_SET_VALUE(createFromViewType_, createFromViewType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreatePerformanceViewRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fillOriginViewKeys Field Functions 
    bool hasFillOriginViewKeys() const { return this->fillOriginViewKeys_ != nullptr;};
    void deleteFillOriginViewKeys() { this->fillOriginViewKeys_ = nullptr;};
    inline bool fillOriginViewKeys() const { DARABONBA_PTR_GET_DEFAULT(fillOriginViewKeys_, false) };
    inline CreatePerformanceViewRequest& setFillOriginViewKeys(bool fillOriginViewKeys) { DARABONBA_PTR_SET_VALUE(fillOriginViewKeys_, fillOriginViewKeys) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePerformanceViewRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePerformanceViewRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePerformanceViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePerformanceViewRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePerformanceViewRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // viewDetail Field Functions 
    bool hasViewDetail() const { return this->viewDetail_ != nullptr;};
    void deleteViewDetail() { this->viewDetail_ = nullptr;};
    inline const CreatePerformanceViewRequestViewDetail & viewDetail() const { DARABONBA_PTR_GET_CONST(viewDetail_, CreatePerformanceViewRequestViewDetail) };
    inline CreatePerformanceViewRequestViewDetail viewDetail() { DARABONBA_PTR_GET(viewDetail_, CreatePerformanceViewRequestViewDetail) };
    inline CreatePerformanceViewRequest& setViewDetail(const CreatePerformanceViewRequestViewDetail & viewDetail) { DARABONBA_PTR_SET_VALUE(viewDetail_, viewDetail) };
    inline CreatePerformanceViewRequest& setViewDetail(CreatePerformanceViewRequestViewDetail && viewDetail) { DARABONBA_PTR_SET_RVALUE(viewDetail_, viewDetail) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string viewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline CreatePerformanceViewRequest& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The type of the view.
    std::shared_ptr<string> createFromViewType_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to populate the names of the metrics in the original monitoring view when you view the monitoring view. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fillOriginViewKeys_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the monitoring view.
    // 
    // This parameter is required.
    std::shared_ptr<CreatePerformanceViewRequestViewDetail> viewDetail_ = nullptr;
    // The name of the view.
    // 
    // This parameter is required.
    std::shared_ptr<string> viewName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
