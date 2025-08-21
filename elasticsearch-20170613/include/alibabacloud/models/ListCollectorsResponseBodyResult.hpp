// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTORSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTORSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCollectorsResponseBodyResultConfigs.hpp>
#include <alibabacloud/models/ListCollectorsResponseBodyResultExtendConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListCollectorsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectorsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(collectorPaths, collectorPaths_);
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(gmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(gmtUpdateTime, gmtUpdateTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(resId, resId_);
      DARABONBA_PTR_TO_JSON(resType, resType_);
      DARABONBA_PTR_TO_JSON(resVersion, resVersion_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectorsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(collectorPaths, collectorPaths_);
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(gmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(gmtUpdateTime, gmtUpdateTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(resId, resId_);
      DARABONBA_PTR_FROM_JSON(resType, resType_);
      DARABONBA_PTR_FROM_JSON(resVersion, resVersion_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListCollectorsResponseBodyResult() = default ;
    ListCollectorsResponseBodyResult(const ListCollectorsResponseBodyResult &) = default ;
    ListCollectorsResponseBodyResult(ListCollectorsResponseBodyResult &&) = default ;
    ListCollectorsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectorsResponseBodyResult() = default ;
    ListCollectorsResponseBodyResult& operator=(const ListCollectorsResponseBodyResult &) = default ;
    ListCollectorsResponseBodyResult& operator=(ListCollectorsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectorPaths_ != nullptr
        && this->configs_ != nullptr && this->dryRun_ != nullptr && this->extendConfigs_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtUpdateTime_ != nullptr
        && this->name_ != nullptr && this->ownerId_ != nullptr && this->resId_ != nullptr && this->resType_ != nullptr && this->resVersion_ != nullptr
        && this->status_ != nullptr && this->vpcId_ != nullptr; };
    // collectorPaths Field Functions 
    bool hasCollectorPaths() const { return this->collectorPaths_ != nullptr;};
    void deleteCollectorPaths() { this->collectorPaths_ = nullptr;};
    inline const vector<string> & collectorPaths() const { DARABONBA_PTR_GET_CONST(collectorPaths_, vector<string>) };
    inline vector<string> collectorPaths() { DARABONBA_PTR_GET(collectorPaths_, vector<string>) };
    inline ListCollectorsResponseBodyResult& setCollectorPaths(const vector<string> & collectorPaths) { DARABONBA_PTR_SET_VALUE(collectorPaths_, collectorPaths) };
    inline ListCollectorsResponseBodyResult& setCollectorPaths(vector<string> && collectorPaths) { DARABONBA_PTR_SET_RVALUE(collectorPaths_, collectorPaths) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<Models::ListCollectorsResponseBodyResultConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Models::ListCollectorsResponseBodyResultConfigs>) };
    inline vector<Models::ListCollectorsResponseBodyResultConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<Models::ListCollectorsResponseBodyResultConfigs>) };
    inline ListCollectorsResponseBodyResult& setConfigs(const vector<Models::ListCollectorsResponseBodyResultConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListCollectorsResponseBodyResult& setConfigs(vector<Models::ListCollectorsResponseBodyResultConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListCollectorsResponseBodyResult& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Models::ListCollectorsResponseBodyResultExtendConfigs> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Models::ListCollectorsResponseBodyResultExtendConfigs>) };
    inline vector<Models::ListCollectorsResponseBodyResultExtendConfigs> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Models::ListCollectorsResponseBodyResultExtendConfigs>) };
    inline ListCollectorsResponseBodyResult& setExtendConfigs(const vector<Models::ListCollectorsResponseBodyResultExtendConfigs> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline ListCollectorsResponseBodyResult& setExtendConfigs(vector<Models::ListCollectorsResponseBodyResultExtendConfigs> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline ListCollectorsResponseBodyResult& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtUpdateTime Field Functions 
    bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
    void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
    inline string gmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
    inline ListCollectorsResponseBodyResult& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCollectorsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListCollectorsResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string resId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline ListCollectorsResponseBodyResult& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    // resType Field Functions 
    bool hasResType() const { return this->resType_ != nullptr;};
    void deleteResType() { this->resType_ = nullptr;};
    inline string resType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
    inline ListCollectorsResponseBodyResult& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


    // resVersion Field Functions 
    bool hasResVersion() const { return this->resVersion_ != nullptr;};
    void deleteResVersion() { this->resVersion_ = nullptr;};
    inline string resVersion() const { DARABONBA_PTR_GET_DEFAULT(resVersion_, "") };
    inline ListCollectorsResponseBodyResult& setResVersion(string resVersion) { DARABONBA_PTR_SET_VALUE(resVersion_, resVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCollectorsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListCollectorsResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<vector<string>> collectorPaths_ = nullptr;
    // The information about the configuration file of the shipper.
    std::shared_ptr<vector<Models::ListCollectorsResponseBodyResultConfigs>> configs_ = nullptr;
    // Indicates whether a dry run is performed. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The extended configurations of the shipper.
    std::shared_ptr<vector<Models::ListCollectorsResponseBodyResultExtendConfigs>> extendConfigs_ = nullptr;
    // The time when the shipper was created.
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    // The time when the shipper was updated.
    std::shared_ptr<string> gmtUpdateTime_ = nullptr;
    // The name of the shipper.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the shipper.
    std::shared_ptr<string> resId_ = nullptr;
    // The type of the shipper. Valid values: fileBeat, metricBeat, heartBeat, and auditBeat.
    std::shared_ptr<string> resType_ = nullptr;
    // The version of the shipper.
    std::shared_ptr<string> resVersion_ = nullptr;
    // The status of the shipper. Valid values:
    // 
    // *   activating
    // *   active
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the virtual private cloud (VPC) where the shipper resides.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
