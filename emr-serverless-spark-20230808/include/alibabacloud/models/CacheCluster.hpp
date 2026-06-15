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
      DARABONBA_PTR_TO_JSON(cacheClusterId, cacheClusterId_);
      DARABONBA_PTR_TO_JSON(cacheClusterName, cacheClusterName_);
      DARABONBA_PTR_TO_JSON(cachesets, cachesets_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(usedResourceSpec, usedResourceSpec_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CacheCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(bindedWorkspaces, bindedWorkspaces_);
      DARABONBA_PTR_FROM_JSON(cacheClusterId, cacheClusterId_);
      DARABONBA_PTR_FROM_JSON(cacheClusterName, cacheClusterName_);
      DARABONBA_PTR_FROM_JSON(cachesets, cachesets_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(usedResourceSpec, usedResourceSpec_);
      DARABONBA_PTR_FROM_JSON(version, version_);
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

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
        DARABONBA_PTR_TO_JSON(catalogProvider, catalogProvider_);
        DARABONBA_PTR_TO_JSON(database, database_);
        DARABONBA_PTR_TO_JSON(table, table_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
        DARABONBA_PTR_FROM_JSON(catalogProvider, catalogProvider_);
        DARABONBA_PTR_FROM_JSON(database, database_);
        DARABONBA_PTR_FROM_JSON(table, table_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catalogId_ == nullptr
        && this->catalogProvider_ == nullptr && this->database_ == nullptr && this->table_ == nullptr && this->workspaceId_ == nullptr; };
      // catalogId Field Functions 
      bool hasCatalogId() const { return this->catalogId_ != nullptr;};
      void deleteCatalogId() { this->catalogId_ = nullptr;};
      inline string getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
      inline Tables& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


      // catalogProvider Field Functions 
      bool hasCatalogProvider() const { return this->catalogProvider_ != nullptr;};
      void deleteCatalogProvider() { this->catalogProvider_ = nullptr;};
      inline string getCatalogProvider() const { DARABONBA_PTR_GET_DEFAULT(catalogProvider_, "") };
      inline Tables& setCatalogProvider(string catalogProvider) { DARABONBA_PTR_SET_VALUE(catalogProvider_, catalogProvider) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Tables& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
      inline Tables& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Tables& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> catalogId_ {};
      shared_ptr<string> catalogProvider_ {};
      shared_ptr<string> database_ {};
      shared_ptr<string> table_ {};
      shared_ptr<string> workspaceId_ {};
    };

    class ResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(ha, ha_);
        DARABONBA_PTR_TO_JSON(storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(bandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(ha, ha_);
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
        && this->ha_ == nullptr && this->storage_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline ResourceSpec& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline ResourceSpec& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
      inline ResourceSpec& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      shared_ptr<int64_t> bandWidth_ {};
      shared_ptr<bool> ha_ {};
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
        && this->cacheClusterId_ == nullptr && this->cacheClusterName_ == nullptr && this->cachesets_ == nullptr && this->clusterId_ == nullptr && this->configuration_ == nullptr
        && this->configurations_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->extra_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->modifier_ == nullptr && this->name_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceSpec_ == nullptr && this->state_ == nullptr && this->tables_ == nullptr && this->tags_ == nullptr
        && this->usedResourceSpec_ == nullptr && this->version_ == nullptr; };
    // bindedWorkspaces Field Functions 
    bool hasBindedWorkspaces() const { return this->bindedWorkspaces_ != nullptr;};
    void deleteBindedWorkspaces() { this->bindedWorkspaces_ = nullptr;};
    inline const vector<string> & getBindedWorkspaces() const { DARABONBA_PTR_GET_CONST(bindedWorkspaces_, vector<string>) };
    inline vector<string> getBindedWorkspaces() { DARABONBA_PTR_GET(bindedWorkspaces_, vector<string>) };
    inline CacheCluster& setBindedWorkspaces(const vector<string> & bindedWorkspaces) { DARABONBA_PTR_SET_VALUE(bindedWorkspaces_, bindedWorkspaces) };
    inline CacheCluster& setBindedWorkspaces(vector<string> && bindedWorkspaces) { DARABONBA_PTR_SET_RVALUE(bindedWorkspaces_, bindedWorkspaces) };


    // cacheClusterId Field Functions 
    bool hasCacheClusterId() const { return this->cacheClusterId_ != nullptr;};
    void deleteCacheClusterId() { this->cacheClusterId_ = nullptr;};
    inline string getCacheClusterId() const { DARABONBA_PTR_GET_DEFAULT(cacheClusterId_, "") };
    inline CacheCluster& setCacheClusterId(string cacheClusterId) { DARABONBA_PTR_SET_VALUE(cacheClusterId_, cacheClusterId) };


    // cacheClusterName Field Functions 
    bool hasCacheClusterName() const { return this->cacheClusterName_ != nullptr;};
    void deleteCacheClusterName() { this->cacheClusterName_ = nullptr;};
    inline string getCacheClusterName() const { DARABONBA_PTR_GET_DEFAULT(cacheClusterName_, "") };
    inline CacheCluster& setCacheClusterName(string cacheClusterName) { DARABONBA_PTR_SET_VALUE(cacheClusterName_, cacheClusterName) };


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


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CacheCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CacheCluster& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline CacheCluster& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


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


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CacheCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<CacheCluster::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<CacheCluster::Tables>) };
    inline vector<CacheCluster::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<CacheCluster::Tables>) };
    inline CacheCluster& setTables(const vector<CacheCluster::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CacheCluster& setTables(vector<CacheCluster::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CacheCluster::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CacheCluster::Tags>) };
    inline vector<CacheCluster::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CacheCluster::Tags>) };
    inline CacheCluster& setTags(const vector<CacheCluster::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CacheCluster& setTags(vector<CacheCluster::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usedResourceSpec Field Functions 
    bool hasUsedResourceSpec() const { return this->usedResourceSpec_ != nullptr;};
    void deleteUsedResourceSpec() { this->usedResourceSpec_ = nullptr;};
    inline const CacheCluster::UsedResourceSpec & getUsedResourceSpec() const { DARABONBA_PTR_GET_CONST(usedResourceSpec_, CacheCluster::UsedResourceSpec) };
    inline CacheCluster::UsedResourceSpec getUsedResourceSpec() { DARABONBA_PTR_GET(usedResourceSpec_, CacheCluster::UsedResourceSpec) };
    inline CacheCluster& setUsedResourceSpec(const CacheCluster::UsedResourceSpec & usedResourceSpec) { DARABONBA_PTR_SET_VALUE(usedResourceSpec_, usedResourceSpec) };
    inline CacheCluster& setUsedResourceSpec(CacheCluster::UsedResourceSpec && usedResourceSpec) { DARABONBA_PTR_SET_RVALUE(usedResourceSpec_, usedResourceSpec) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CacheCluster& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<vector<string>> bindedWorkspaces_ {};
    shared_ptr<string> cacheClusterId_ {};
    shared_ptr<string> cacheClusterName_ {};
    shared_ptr<vector<CacheCluster::Cachesets>> cachesets_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> configuration_ {};
    shared_ptr<vector<CacheCluster::Configurations>> configurations_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> extra_ {};
    shared_ptr<int64_t> gmtCreated_ {};
    shared_ptr<int64_t> gmtModified_ {};
    shared_ptr<string> modifier_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<CacheCluster::ResourceSpec> resourceSpec_ {};
    shared_ptr<string> state_ {};
    shared_ptr<vector<CacheCluster::Tables>> tables_ {};
    shared_ptr<vector<CacheCluster::Tags>> tags_ {};
    shared_ptr<CacheCluster::UsedResourceSpec> usedResourceSpec_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
