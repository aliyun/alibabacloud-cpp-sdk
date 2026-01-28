// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKDEFAULTKMSKEYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKDEFAULTKMSKEYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskDefaultKMSKeyIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskDefaultKMSKeyIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskDefaultKMSKeyIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeDiskDefaultKMSKeyIdRequest() = default ;
    DescribeDiskDefaultKMSKeyIdRequest(const DescribeDiskDefaultKMSKeyIdRequest &) = default ;
    DescribeDiskDefaultKMSKeyIdRequest(DescribeDiskDefaultKMSKeyIdRequest &&) = default ;
    DescribeDiskDefaultKMSKeyIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskDefaultKMSKeyIdRequest() = default ;
    DescribeDiskDefaultKMSKeyIdRequest& operator=(const DescribeDiskDefaultKMSKeyIdRequest &) = default ;
    DescribeDiskDefaultKMSKeyIdRequest& operator=(DescribeDiskDefaultKMSKeyIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDiskDefaultKMSKeyIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskDefaultKMSKeyIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDiskDefaultKMSKeyIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
