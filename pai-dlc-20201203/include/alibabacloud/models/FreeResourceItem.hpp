// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FREERESOURCEITEM_HPP_
#define ALIBABACLOUD_MODELS_FREERESOURCEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class FreeResourceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FreeResourceItem& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableNumber, availableNumber_);
      DARABONBA_PTR_TO_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(FreeResourceId, freeResourceId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, FreeResourceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableNumber, availableNumber_);
      DARABONBA_PTR_FROM_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(FreeResourceId, freeResourceId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    FreeResourceItem() = default ;
    FreeResourceItem(const FreeResourceItem &) = default ;
    FreeResourceItem(FreeResourceItem &&) = default ;
    FreeResourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FreeResourceItem() = default ;
    FreeResourceItem& operator=(const FreeResourceItem &) = default ;
    FreeResourceItem& operator=(FreeResourceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableNumber_ == nullptr
        && this->clusterID_ == nullptr && this->clusterName_ == nullptr && this->freeResourceId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifyTime_ == nullptr
        && this->regionID_ == nullptr && this->resourceType_ == nullptr; };
    // availableNumber Field Functions 
    bool hasAvailableNumber() const { return this->availableNumber_ != nullptr;};
    void deleteAvailableNumber() { this->availableNumber_ = nullptr;};
    inline int64_t getAvailableNumber() const { DARABONBA_PTR_GET_DEFAULT(availableNumber_, 0L) };
    inline FreeResourceItem& setAvailableNumber(int64_t availableNumber) { DARABONBA_PTR_SET_VALUE(availableNumber_, availableNumber) };


    // clusterID Field Functions 
    bool hasClusterID() const { return this->clusterID_ != nullptr;};
    void deleteClusterID() { this->clusterID_ = nullptr;};
    inline string getClusterID() const { DARABONBA_PTR_GET_DEFAULT(clusterID_, "") };
    inline FreeResourceItem& setClusterID(string clusterID) { DARABONBA_PTR_SET_VALUE(clusterID_, clusterID) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline FreeResourceItem& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // freeResourceId Field Functions 
    bool hasFreeResourceId() const { return this->freeResourceId_ != nullptr;};
    void deleteFreeResourceId() { this->freeResourceId_ = nullptr;};
    inline string getFreeResourceId() const { DARABONBA_PTR_GET_DEFAULT(freeResourceId_, "") };
    inline FreeResourceItem& setFreeResourceId(string freeResourceId) { DARABONBA_PTR_SET_VALUE(freeResourceId_, freeResourceId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline FreeResourceItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline FreeResourceItem& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string getRegionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline FreeResourceItem& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline FreeResourceItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<int64_t> availableNumber_ {};
    shared_ptr<string> clusterID_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> freeResourceId_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifyTime_ {};
    shared_ptr<string> regionID_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
