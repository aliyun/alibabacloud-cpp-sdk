// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGVBRRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGVBRRELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagVbrRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagVbrRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceIds, vbrInstanceIds_);
      DARABONBA_PTR_TO_JSON(VbrRegionId, vbrRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagVbrRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceIds, vbrInstanceIds_);
      DARABONBA_PTR_FROM_JSON(VbrRegionId, vbrRegionId_);
    };
    DescribeSagVbrRelationsRequest() = default ;
    DescribeSagVbrRelationsRequest(const DescribeSagVbrRelationsRequest &) = default ;
    DescribeSagVbrRelationsRequest(DescribeSagVbrRelationsRequest &&) = default ;
    DescribeSagVbrRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagVbrRelationsRequest() = default ;
    DescribeSagVbrRelationsRequest& operator=(const DescribeSagVbrRelationsRequest &) = default ;
    DescribeSagVbrRelationsRequest& operator=(DescribeSagVbrRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vbrInstanceIds_ == nullptr
        && this->vbrRegionId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSagVbrRelationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSagVbrRelationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSagVbrRelationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSagVbrRelationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSagVbrRelationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vbrInstanceIds Field Functions 
    bool hasVbrInstanceIds() const { return this->vbrInstanceIds_ != nullptr;};
    void deleteVbrInstanceIds() { this->vbrInstanceIds_ = nullptr;};
    inline const vector<string> & getVbrInstanceIds() const { DARABONBA_PTR_GET_CONST(vbrInstanceIds_, vector<string>) };
    inline vector<string> getVbrInstanceIds() { DARABONBA_PTR_GET(vbrInstanceIds_, vector<string>) };
    inline DescribeSagVbrRelationsRequest& setVbrInstanceIds(const vector<string> & vbrInstanceIds) { DARABONBA_PTR_SET_VALUE(vbrInstanceIds_, vbrInstanceIds) };
    inline DescribeSagVbrRelationsRequest& setVbrInstanceIds(vector<string> && vbrInstanceIds) { DARABONBA_PTR_SET_RVALUE(vbrInstanceIds_, vbrInstanceIds) };


    // vbrRegionId Field Functions 
    bool hasVbrRegionId() const { return this->vbrRegionId_ != nullptr;};
    void deleteVbrRegionId() { this->vbrRegionId_ = nullptr;};
    inline string getVbrRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionId_, "") };
    inline DescribeSagVbrRelationsRequest& setVbrRegionId(string vbrRegionId) { DARABONBA_PTR_SET_VALUE(vbrRegionId_, vbrRegionId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the VBRs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> vbrInstanceIds_ {};
    // The ID of the region where the VBR is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> vbrRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
