// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERALIUIDBYINSTANCEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERALIUIDBYINSTANCEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class GetUserAliUidByInstanceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAliUidByInstanceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerUid, resourceOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAliUidByInstanceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerUid, resourceOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetUserAliUidByInstanceIdRequest() = default ;
    GetUserAliUidByInstanceIdRequest(const GetUserAliUidByInstanceIdRequest &) = default ;
    GetUserAliUidByInstanceIdRequest(GetUserAliUidByInstanceIdRequest &&) = default ;
    GetUserAliUidByInstanceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAliUidByInstanceIdRequest() = default ;
    GetUserAliUidByInstanceIdRequest& operator=(const GetUserAliUidByInstanceIdRequest &) = default ;
    GetUserAliUidByInstanceIdRequest& operator=(GetUserAliUidByInstanceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceOwnerUid_ == nullptr && this->resourceType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUserAliUidByInstanceIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerUid Field Functions 
    bool hasResourceOwnerUid() const { return this->resourceOwnerUid_ != nullptr;};
    void deleteResourceOwnerUid() { this->resourceOwnerUid_ = nullptr;};
    inline string getResourceOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerUid_, "") };
    inline GetUserAliUidByInstanceIdRequest& setResourceOwnerUid(string resourceOwnerUid) { DARABONBA_PTR_SET_VALUE(resourceOwnerUid_, resourceOwnerUid) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetUserAliUidByInstanceIdRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerUid_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
