// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CACHECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_CACHECLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CacheCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CacheCluster& obj) { 
      DARABONBA_PTR_TO_JSON(bindedWorkspaces, bindedWorkspaces_);
      DARABONBA_PTR_TO_JSON(cachesets, cachesets_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(usedResourceSpec, usedResourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CacheCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(bindedWorkspaces, bindedWorkspaces_);
      DARABONBA_PTR_FROM_JSON(cachesets, cachesets_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(usedResourceSpec, usedResourceSpec_);
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
    class UsedResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsedResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, UsedResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(storage, storage_);
      };
      UsedResourceSpec() = default ;
      UsedResourceSpec(const UsedResourceSpec &) = default ;
      UsedResourceSpec(UsedResourceSpec &&) = default ;
      UsedResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsedResourceSpec() = default ;
      UsedResourceSpec& operator=(const UsedResourceSpec &) = default ;
      UsedResourceSpec& operator=(UsedResourceSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->storage_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline UsedResourceSpec& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
      inline UsedResourceSpec& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      shared_ptr<int64_t> bandWidth_ {};
      shared_ptr<int64_t> storage_ {};
    };

    class ResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(storage, storage_);
      };
      ResourceSpec() = default ;
      ResourceSpec(const ResourceSpec &) = default ;
      ResourceSpec(ResourceSpec &&) = default ;
      ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSpec() = default ;
      ResourceSpec& operator=(const ResourceSpec &) = default ;
      ResourceSpec& operator=(ResourceSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->storage_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline ResourceSpec& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
      inline ResourceSpec& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      shared_ptr<int64_t> bandWidth_ {};
      shared_ptr<int64_t> storage_ {};
    };

    class Configurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configurations& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Configurations& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Configurations() = default ;
      Configurations(const Configurations &) = default ;
      Configurations(Configurations &&) = default ;
      Configurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configurations() = default ;
      Configurations& operator=(const Configurations &) = default ;
      Configurations& operator=(Configurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Configurations& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Configurations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> name_ {};
    };

    class Cachesets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cachesets& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Cachesets& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(path, path_);
      };
      Cachesets() = default ;
      Cachesets(const Cachesets &) = default ;
      Cachesets(Cachesets &&) = default ;
      Cachesets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cachesets() = default ;
      Cachesets& operator=(const Cachesets &) = default ;
      Cachesets& operator=(Cachesets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Cachesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Cachesets& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->bindedWorkspaces_ == nullptr
        && this->cachesets_ == nullptr && this->clusterId_ == nullptr && this->configuration_ == nullptr && this->configurations_ == nullptr && this->creator_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->modifier_ == nullptr && this->name_ == nullptr && this->paymentType_ == nullptr
        && this->regionId_ == nullptr && this->resourceSpec_ == nullptr && this->state_ == nullptr && this->usedResourceSpec_ == nullptr; };
    // bindedWorkspaces Field Functions 
    bool hasBindedWorkspaces() const { return this->bindedWorkspaces_ != nullptr;};
    void deleteBindedWorkspaces() { this->bindedWorkspaces_ = nullptr;};
    inline const vector<string> & getBindedWorkspaces() const { DARABONBA_PTR_GET_CONST(bindedWorkspaces_, vector<string>) };
    inline vector<string> getBindedWorkspaces() { DARABONBA_PTR_GET(bindedWorkspaces_, vector<string>) };
    inline CacheCluster& setBindedWorkspaces(const vector<string> & bindedWorkspaces) { DARABONBA_PTR_SET_VALUE(bindedWorkspaces_, bindedWorkspaces) };
    inline CacheCluster& setBindedWorkspaces(vector<string> && bindedWorkspaces) { DARABONBA_PTR_SET_RVALUE(bindedWorkspaces_, bindedWorkspaces) };


    // cachesets Field Functions 
    bool hasCachesets() const { return this->cachesets_ != nullptr;};
    void deleteCachesets() { this->cachesets_ = nullptr;};
    inline const vector<CacheCluster::Cachesets> & getCachesets() const { DARABONBA_PTR_GET_CONST(cachesets_, vector<CacheCluster::Cachesets>) };
    inline vector<CacheCluster::Cachesets> getCachesets() { DARABONBA_PTR_GET(cachesets_, vector<CacheCluster::Cachesets>) };
    inline CacheCluster& setCachesets(const vector<CacheCluster::Cachesets> & cachesets) { DARABONBA_PTR_SET_VALUE(cachesets_, cachesets) };
    inline CacheCluster& setCachesets(vector<CacheCluster::Cachesets> && cachesets) { DARABONBA_PTR_SET_RVALUE(cachesets_, cachesets) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CacheCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline CacheCluster& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<CacheCluster::Configurations> & getConfigurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<CacheCluster::Configurations>) };
    inline vector<CacheCluster::Configurations> getConfigurations() { DARABONBA_PTR_GET(configurations_, vector<CacheCluster::Configurations>) };
    inline CacheCluster& setConfigurations(const vector<CacheCluster::Configurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline CacheCluster& setConfigurations(vector<CacheCluster::Configurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CacheCluster& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline CacheCluster& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CacheCluster& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline CacheCluster& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CacheCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CacheCluster& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CacheCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const CacheCluster::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CacheCluster::ResourceSpec) };
    inline CacheCluster::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CacheCluster::ResourceSpec) };
    inline CacheCluster& setResourceSpec(const CacheCluster::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CacheCluster& setResourceSpec(CacheCluster::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CacheCluster& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // usedResourceSpec Field Functions 
    bool hasUsedResourceSpec() const { return this->usedResourceSpec_ != nullptr;};
    void deleteUsedResourceSpec() { this->usedResourceSpec_ = nullptr;};
    inline const CacheCluster::UsedResourceSpec & getUsedResourceSpec() const { DARABONBA_PTR_GET_CONST(usedResourceSpec_, CacheCluster::UsedResourceSpec) };
    inline CacheCluster::UsedResourceSpec getUsedResourceSpec() { DARABONBA_PTR_GET(usedResourceSpec_, CacheCluster::UsedResourceSpec) };
    inline CacheCluster& setUsedResourceSpec(const CacheCluster::UsedResourceSpec & usedResourceSpec) { DARABONBA_PTR_SET_VALUE(usedResourceSpec_, usedResourceSpec) };
    inline CacheCluster& setUsedResourceSpec(CacheCluster::UsedResourceSpec && usedResourceSpec) { DARABONBA_PTR_SET_RVALUE(usedResourceSpec_, usedResourceSpec) };


  protected:
    shared_ptr<vector<string>> bindedWorkspaces_ {};
    shared_ptr<vector<CacheCluster::Cachesets>> cachesets_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> configuration_ {};
    shared_ptr<vector<CacheCluster::Configurations>> configurations_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<int64_t> gmtCreated_ {};
    shared_ptr<int64_t> gmtModified_ {};
    shared_ptr<string> modifier_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<CacheCluster::ResourceSpec> resourceSpec_ {};
    shared_ptr<string> state_ {};
    shared_ptr<CacheCluster::UsedResourceSpec> usedResourceSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
