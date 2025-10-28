// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONRESPONSEBODYUSERDEFINEREGIONENTITY_HPP_
#define ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONRESPONSEBODYUSERDEFINEREGIONENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertOrUpdateRegionResponseBodyUserDefineRegionEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& obj) { 
      DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_TO_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity() = default ;
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity(const InsertOrUpdateRegionResponseBodyUserDefineRegionEntity &) = default ;
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity(InsertOrUpdateRegionResponseBodyUserDefineRegionEntity &&) = default ;
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertOrUpdateRegionResponseBodyUserDefineRegionEntity() = default ;
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& operator=(const InsertOrUpdateRegionResponseBodyUserDefineRegionEntity &) = default ;
    InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& operator=(InsertOrUpdateRegionResponseBodyUserDefineRegionEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongRegion_ == nullptr
        && return this->debugEnable_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->regionId_ == nullptr && return this->regionName_ == nullptr
        && return this->userId_ == nullptr; };
    // belongRegion Field Functions 
    bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
    void deleteBelongRegion() { this->belongRegion_ = nullptr;};
    inline string belongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


    // debugEnable Field Functions 
    bool hasDebugEnable() const { return this->debugEnable_ != nullptr;};
    void deleteDebugEnable() { this->debugEnable_ = nullptr;};
    inline bool debugEnable() const { DARABONBA_PTR_GET_DEFAULT(debugEnable_, false) };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setDebugEnable(bool debugEnable) { DARABONBA_PTR_SET_VALUE(debugEnable_, debugEnable) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InsertOrUpdateRegionResponseBodyUserDefineRegionEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the region to which the namespace belongs.
    std::shared_ptr<string> belongRegion_ = nullptr;
    // Indicates whether remote debugging is enabled. Valid values:
    // 
    // *   true: Remote debugging is enabled.
    // *   false: Remote debugging is disabled.
    std::shared_ptr<bool> debugEnable_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the namespace is created or modified. If this parameter is left empty or 0 is returned, the namespace is created. Otherwise, the namespace is modified.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the namespace.
    // 
    // *   The ID of a custom namespace is in the `region ID:namespace identifier` format. Example: cn-beijing:tdy218.
    // *   The ID of the default namespace is in the `region ID` format. Example: cn-beijing.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the custom namespace belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
