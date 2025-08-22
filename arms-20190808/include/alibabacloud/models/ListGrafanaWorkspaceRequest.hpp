// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGrafanaWorkspaceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListGrafanaWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrafanaWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrafanaWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListGrafanaWorkspaceRequest() = default ;
    ListGrafanaWorkspaceRequest(const ListGrafanaWorkspaceRequest &) = default ;
    ListGrafanaWorkspaceRequest(ListGrafanaWorkspaceRequest &&) = default ;
    ListGrafanaWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrafanaWorkspaceRequest() = default ;
    ListGrafanaWorkspaceRequest& operator=(const ListGrafanaWorkspaceRequest &) = default ;
    ListGrafanaWorkspaceRequest& operator=(ListGrafanaWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline ListGrafanaWorkspaceRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListGrafanaWorkspaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListGrafanaWorkspaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListGrafanaWorkspaceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListGrafanaWorkspaceRequestTags>) };
    inline vector<ListGrafanaWorkspaceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListGrafanaWorkspaceRequestTags>) };
    inline ListGrafanaWorkspaceRequest& setTags(const vector<ListGrafanaWorkspaceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListGrafanaWorkspaceRequest& setTags(vector<ListGrafanaWorkspaceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The region ID. Default value: cn-hangzhou.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the Prometheus instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListGrafanaWorkspaceRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
