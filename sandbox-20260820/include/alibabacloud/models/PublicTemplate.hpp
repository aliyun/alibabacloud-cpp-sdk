// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PublicTemplateRuntimeConfig.hpp>
#include <alibabacloud/models/PublicTemplateStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class PublicTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    PublicTemplate() = default ;
    PublicTemplate(const PublicTemplate &) = default ;
    PublicTemplate(PublicTemplate &&) = default ;
    PublicTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplate() = default ;
    PublicTemplate& operator=(const PublicTemplate &) = default ;
    PublicTemplate& operator=(PublicTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      ResourceTags() = default ;
      ResourceTags(const ResourceTags &) = default ;
      ResourceTags(ResourceTags &&) = default ;
      ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTags() = default ;
      ResourceTags& operator=(const ResourceTags &) = default ;
      ResourceTags& operator=(ResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline ResourceTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline ResourceTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->name_ == nullptr && this->resourceGroupID_ == nullptr && this->resourceTags_ == nullptr && this->runtimeConfig_ == nullptr && this->status_ == nullptr
        && this->teamID_ == nullptr && this->teamName_ == nullptr && this->templateID_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline PublicTemplate& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PublicTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline PublicTemplate& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<PublicTemplate::ResourceTags> & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<PublicTemplate::ResourceTags>) };
    inline vector<PublicTemplate::ResourceTags> getResourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<PublicTemplate::ResourceTags>) };
    inline PublicTemplate& setResourceTags(const vector<PublicTemplate::ResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline PublicTemplate& setResourceTags(vector<PublicTemplate::ResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const PublicTemplateRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, PublicTemplateRuntimeConfig) };
    inline PublicTemplateRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, PublicTemplateRuntimeConfig) };
    inline PublicTemplate& setRuntimeConfig(const PublicTemplateRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline PublicTemplate& setRuntimeConfig(PublicTemplateRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const PublicTemplateStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, PublicTemplateStatus) };
    inline PublicTemplateStatus getStatus() { DARABONBA_PTR_GET(status_, PublicTemplateStatus) };
    inline PublicTemplate& setStatus(const PublicTemplateStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline PublicTemplate& setStatus(PublicTemplateStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline PublicTemplate& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline PublicTemplate& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline PublicTemplate& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The time when the template was created, in UTC and RFC 3339 format.
    shared_ptr<string> createdTime_ {};
    // The name of the template, which is unique within a team.
    shared_ptr<string> name_ {};
    // The ID of the Alibaba Cloud resource group to which the team belongs.
    shared_ptr<string> resourceGroupID_ {};
    // The resource tags.
    shared_ptr<vector<PublicTemplate::ResourceTags>> resourceTags_ {};
    // The runtime configuration of the template, which determines the specifications and environment of the sandbox instances created from the template.
    shared_ptr<PublicTemplateRuntimeConfig> runtimeConfig_ {};
    // The current status of the template.
    shared_ptr<PublicTemplateStatus> status_ {};
    // The ID of the team to which the resource belongs, in UUID format.
    shared_ptr<string> teamID_ {};
    // The name of the team.
    shared_ptr<string> teamName_ {};
    // The ID of the sandbox template.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
