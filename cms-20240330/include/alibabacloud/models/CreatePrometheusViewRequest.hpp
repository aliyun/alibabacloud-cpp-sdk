// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrometheusViewRequestPrometheusInstances.hpp>
#include <alibabacloud/models/CreatePrometheusViewRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreatePrometheusViewRequest() = default ;
    CreatePrometheusViewRequest(const CreatePrometheusViewRequest &) = default ;
    CreatePrometheusViewRequest(CreatePrometheusViewRequest &&) = default ;
    CreatePrometheusViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusViewRequest() = default ;
    CreatePrometheusViewRequest& operator=(const CreatePrometheusViewRequest &) = default ;
    CreatePrometheusViewRequest& operator=(CreatePrometheusViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authFreeReadPolicy_ == nullptr
        && return this->enableAuthFreeRead_ == nullptr && return this->enableAuthToken_ == nullptr && return this->prometheusInstances_ == nullptr && return this->prometheusViewName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->version_ == nullptr && return this->workspace_ == nullptr; };
    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline CreatePrometheusViewRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline CreatePrometheusViewRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline CreatePrometheusViewRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<CreatePrometheusViewRequestPrometheusInstances> & prometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<CreatePrometheusViewRequestPrometheusInstances>) };
    inline vector<CreatePrometheusViewRequestPrometheusInstances> prometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<CreatePrometheusViewRequestPrometheusInstances>) };
    inline CreatePrometheusViewRequest& setPrometheusInstances(const vector<CreatePrometheusViewRequestPrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline CreatePrometheusViewRequest& setPrometheusInstances(vector<CreatePrometheusViewRequestPrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string prometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline CreatePrometheusViewRequest& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrometheusViewRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePrometheusViewRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePrometheusViewRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePrometheusViewRequestTags>) };
    inline vector<CreatePrometheusViewRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreatePrometheusViewRequestTags>) };
    inline CreatePrometheusViewRequest& setTags(const vector<CreatePrometheusViewRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePrometheusViewRequest& setTags(vector<CreatePrometheusViewRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreatePrometheusViewRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreatePrometheusViewRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreatePrometheusViewRequestPrometheusInstances>> prometheusInstances_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prometheusViewName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<CreatePrometheusViewRequestTags>> tags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
