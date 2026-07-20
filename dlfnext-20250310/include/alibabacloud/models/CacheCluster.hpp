// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CACHECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_CACHECLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CacheCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CacheCluster& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(deployInstanceVersion, deployInstanceVersion_);
      DARABONBA_PTR_TO_JSON(deployOptionsVersion, deployOptionsVersion_);
      DARABONBA_PTR_TO_JSON(instanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(optionsVersion, optionsVersion_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CacheCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(deployInstanceVersion, deployInstanceVersion_);
      DARABONBA_PTR_FROM_JSON(deployOptionsVersion, deployOptionsVersion_);
      DARABONBA_PTR_FROM_JSON(instanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(optionsVersion, optionsVersion_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    CacheCluster() = default ;
    CacheCluster(const CacheCluster &) = default ;
    CacheCluster(CacheCluster &&) = default ;
    CacheCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CacheCluster() = default ;
    CacheCluster& operator=(const CacheCluster &) = default ;
    CacheCluster& operator=(CacheCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(zone, zone_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zone_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline VSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
      inline VSwitches& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    protected:
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zone_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->deployInstanceVersion_ == nullptr && this->deployOptionsVersion_ == nullptr
        && this->instanceVersion_ == nullptr && this->options_ == nullptr && this->optionsVersion_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr
        && this->updatedBy_ == nullptr && this->vSwitches_ == nullptr && this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CacheCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CacheCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline CacheCluster& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CacheCluster& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // deployInstanceVersion Field Functions 
    bool hasDeployInstanceVersion() const { return this->deployInstanceVersion_ != nullptr;};
    void deleteDeployInstanceVersion() { this->deployInstanceVersion_ = nullptr;};
    inline string getDeployInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(deployInstanceVersion_, "") };
    inline CacheCluster& setDeployInstanceVersion(string deployInstanceVersion) { DARABONBA_PTR_SET_VALUE(deployInstanceVersion_, deployInstanceVersion) };


    // deployOptionsVersion Field Functions 
    bool hasDeployOptionsVersion() const { return this->deployOptionsVersion_ != nullptr;};
    void deleteDeployOptionsVersion() { this->deployOptionsVersion_ = nullptr;};
    inline int64_t getDeployOptionsVersion() const { DARABONBA_PTR_GET_DEFAULT(deployOptionsVersion_, 0L) };
    inline CacheCluster& setDeployOptionsVersion(int64_t deployOptionsVersion) { DARABONBA_PTR_SET_VALUE(deployOptionsVersion_, deployOptionsVersion) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline CacheCluster& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline CacheCluster& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline CacheCluster& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // optionsVersion Field Functions 
    bool hasOptionsVersion() const { return this->optionsVersion_ != nullptr;};
    void deleteOptionsVersion() { this->optionsVersion_ = nullptr;};
    inline int64_t getOptionsVersion() const { DARABONBA_PTR_GET_DEFAULT(optionsVersion_, 0L) };
    inline CacheCluster& setOptionsVersion(int64_t optionsVersion) { DARABONBA_PTR_SET_VALUE(optionsVersion_, optionsVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CacheCluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline CacheCluster& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline CacheCluster& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<CacheCluster::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<CacheCluster::VSwitches>) };
    inline vector<CacheCluster::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<CacheCluster::VSwitches>) };
    inline CacheCluster& setVSwitches(const vector<CacheCluster::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline CacheCluster& setVSwitches(vector<CacheCluster::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CacheCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> createdBy_ {};
    shared_ptr<string> deployInstanceVersion_ {};
    shared_ptr<int64_t> deployOptionsVersion_ {};
    shared_ptr<string> instanceVersion_ {};
    shared_ptr<map<string, string>> options_ {};
    shared_ptr<int64_t> optionsVersion_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> updatedAt_ {};
    shared_ptr<string> updatedBy_ {};
    shared_ptr<vector<CacheCluster::VSwitches>> vSwitches_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
