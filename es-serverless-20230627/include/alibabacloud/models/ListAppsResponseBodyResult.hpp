// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppsResponseBodyResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListAppsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(appType, appType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(appType, appType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListAppsResponseBodyResult() = default ;
    ListAppsResponseBodyResult(const ListAppsResponseBodyResult &) = default ;
    ListAppsResponseBodyResult(ListAppsResponseBodyResult &&) = default ;
    ListAppsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBodyResult() = default ;
    ListAppsResponseBodyResult& operator=(const ListAppsResponseBodyResult &) = default ;
    ListAppsResponseBodyResult& operator=(ListAppsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr
        && this->modifiedTime_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->version_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppsResponseBodyResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppsResponseBodyResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListAppsResponseBodyResult& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAppsResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAppsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAppsResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListAppsResponseBodyResult& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListAppsResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAppsResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAppsResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAppsResponseBodyResultTags>) };
    inline vector<Models::ListAppsResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAppsResponseBodyResultTags>) };
    inline ListAppsResponseBodyResult& setTags(const vector<Models::ListAppsResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAppsResponseBodyResult& setTags(vector<Models::ListAppsResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAppsResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // 代表资源名称的资源属性字段
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    // 代表创建时间的资源属性字段
    std::shared_ptr<string> createTime_ = nullptr;
    // 应用备注
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // OwnerID账号ID
    std::shared_ptr<string> ownerId_ = nullptr;
    // 代表region的资源属性字段
    std::shared_ptr<string> regionId_ = nullptr;
    // 代表资源状态的资源属性字段
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListAppsResponseBodyResultTags>> tags_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
