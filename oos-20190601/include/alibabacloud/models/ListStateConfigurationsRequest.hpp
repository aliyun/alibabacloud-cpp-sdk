// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListStateConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStateConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StateConfigurationIds, stateConfigurationIds_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListStateConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StateConfigurationIds, stateConfigurationIds_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    ListStateConfigurationsRequest() = default ;
    ListStateConfigurationsRequest(const ListStateConfigurationsRequest &) = default ;
    ListStateConfigurationsRequest(ListStateConfigurationsRequest &&) = default ;
    ListStateConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStateConfigurationsRequest() = default ;
    ListStateConfigurationsRequest& operator=(const ListStateConfigurationsRequest &) = default ;
    ListStateConfigurationsRequest& operator=(ListStateConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->stateConfigurationIds_ == nullptr && this->tags_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListStateConfigurationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStateConfigurationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStateConfigurationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListStateConfigurationsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stateConfigurationIds Field Functions 
    bool hasStateConfigurationIds() const { return this->stateConfigurationIds_ != nullptr;};
    void deleteStateConfigurationIds() { this->stateConfigurationIds_ = nullptr;};
    inline string getStateConfigurationIds() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationIds_, "") };
    inline ListStateConfigurationsRequest& setStateConfigurationIds(string stateConfigurationIds) { DARABONBA_PTR_SET_VALUE(stateConfigurationIds_, stateConfigurationIds) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline ListStateConfigurationsRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListStateConfigurationsRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListStateConfigurationsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListStateConfigurationsRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the desired-state configuration.
    shared_ptr<string> stateConfigurationIds_ {};
    // The tags to be added to the configuration.
    Darabonba::Json tags_ {};
    // The name of the template. The name must be 1 to 200 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    shared_ptr<string> templateName_ {};
    // The version number of the template. If you do not specify this parameter, the latest version of the template is used.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
