// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODYUSERDEFINEREGIONLISTUSERDEFINEREGIONENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODYUSERDEFINEREGIONLISTUSERDEFINEREGIONENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& obj) { 
      DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_TO_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity() = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity(const ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity &) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity(ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity &&) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity() = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& operator=(const ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity &) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& operator=(ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongRegion_ == nullptr
        && return this->debugEnable_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->mseInstanceId_ == nullptr && return this->regionId_ == nullptr
        && return this->regionName_ == nullptr && return this->registryType_ == nullptr && return this->userId_ == nullptr; };
    // belongRegion Field Functions 
    bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
    void deleteBelongRegion() { this->belongRegion_ = nullptr;};
    inline string belongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


    // debugEnable Field Functions 
    bool hasDebugEnable() const { return this->debugEnable_ != nullptr;};
    void deleteDebugEnable() { this->debugEnable_ = nullptr;};
    inline bool debugEnable() const { DARABONBA_PTR_GET_DEFAULT(debugEnable_, false) };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setDebugEnable(bool debugEnable) { DARABONBA_PTR_SET_VALUE(debugEnable_, debugEnable) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mseInstanceId Field Functions 
    bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
    void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
    inline string mseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the region to which the namespace belongs.
    std::shared_ptr<string> belongRegion_ = nullptr;
    // Indicates whether remote debugging is allowed.
    std::shared_ptr<bool> debugEnable_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The unique identifier of the namespace.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The type of the registry. Valid values:
    // 
    // *   default: shared service registry of Enterprise Distributed Application Service (EDAS)
    // *   exclusive_mse: Microservices Engine (MSE) Nacos registry
    std::shared_ptr<string> mseInstanceId_ = nullptr;
    // The ID of the namespace.
    // 
    // > The ID cannot be changed after the namespace is created. The ID is in the `Physical region ID:Logical region identifier` format .
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the MSE instance.
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the Alibaba Cloud account to which the namespace belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
