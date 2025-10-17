// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FREERESOURCECLUSTERCONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_FREERESOURCECLUSTERCONTROLITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class FreeResourceClusterControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FreeResourceClusterControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CrossClusters, crossClusters_);
      DARABONBA_PTR_TO_JSON(EnableFreeResource, enableFreeResource_);
      DARABONBA_PTR_TO_JSON(FreeResourceClusterControlId, freeResourceClusterControlId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
    };
    friend void from_json(const Darabonba::Json& j, FreeResourceClusterControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CrossClusters, crossClusters_);
      DARABONBA_PTR_FROM_JSON(EnableFreeResource, enableFreeResource_);
      DARABONBA_PTR_FROM_JSON(FreeResourceClusterControlId, freeResourceClusterControlId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
    };
    FreeResourceClusterControlItem() = default ;
    FreeResourceClusterControlItem(const FreeResourceClusterControlItem &) = default ;
    FreeResourceClusterControlItem(FreeResourceClusterControlItem &&) = default ;
    FreeResourceClusterControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FreeResourceClusterControlItem() = default ;
    FreeResourceClusterControlItem& operator=(const FreeResourceClusterControlItem &) = default ;
    FreeResourceClusterControlItem& operator=(FreeResourceClusterControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterID_ == nullptr
        && return this->clusterName_ == nullptr && return this->crossClusters_ == nullptr && return this->enableFreeResource_ == nullptr && return this->freeResourceClusterControlId_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtModifyTime_ == nullptr && return this->regionID_ == nullptr; };
    // clusterID Field Functions 
    bool hasClusterID() const { return this->clusterID_ != nullptr;};
    void deleteClusterID() { this->clusterID_ = nullptr;};
    inline string clusterID() const { DARABONBA_PTR_GET_DEFAULT(clusterID_, "") };
    inline FreeResourceClusterControlItem& setClusterID(string clusterID) { DARABONBA_PTR_SET_VALUE(clusterID_, clusterID) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline FreeResourceClusterControlItem& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // crossClusters Field Functions 
    bool hasCrossClusters() const { return this->crossClusters_ != nullptr;};
    void deleteCrossClusters() { this->crossClusters_ = nullptr;};
    inline bool crossClusters() const { DARABONBA_PTR_GET_DEFAULT(crossClusters_, false) };
    inline FreeResourceClusterControlItem& setCrossClusters(bool crossClusters) { DARABONBA_PTR_SET_VALUE(crossClusters_, crossClusters) };


    // enableFreeResource Field Functions 
    bool hasEnableFreeResource() const { return this->enableFreeResource_ != nullptr;};
    void deleteEnableFreeResource() { this->enableFreeResource_ = nullptr;};
    inline bool enableFreeResource() const { DARABONBA_PTR_GET_DEFAULT(enableFreeResource_, false) };
    inline FreeResourceClusterControlItem& setEnableFreeResource(bool enableFreeResource) { DARABONBA_PTR_SET_VALUE(enableFreeResource_, enableFreeResource) };


    // freeResourceClusterControlId Field Functions 
    bool hasFreeResourceClusterControlId() const { return this->freeResourceClusterControlId_ != nullptr;};
    void deleteFreeResourceClusterControlId() { this->freeResourceClusterControlId_ = nullptr;};
    inline string freeResourceClusterControlId() const { DARABONBA_PTR_GET_DEFAULT(freeResourceClusterControlId_, "") };
    inline FreeResourceClusterControlItem& setFreeResourceClusterControlId(string freeResourceClusterControlId) { DARABONBA_PTR_SET_VALUE(freeResourceClusterControlId_, freeResourceClusterControlId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline FreeResourceClusterControlItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline FreeResourceClusterControlItem& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline FreeResourceClusterControlItem& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


  protected:
    std::shared_ptr<string> clusterID_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<bool> crossClusters_ = nullptr;
    std::shared_ptr<bool> enableFreeResource_ = nullptr;
    std::shared_ptr<string> freeResourceClusterControlId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    std::shared_ptr<string> regionID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
