// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_TO_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_FROM_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      // The tag key.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->disableDevelopment_ == nullptr && this->isAllowDownload_ == nullptr && this->projectDescription_ == nullptr && this->projectIdentifier_ == nullptr && this->projectMode_ == nullptr
        && this->projectName_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProjectRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disableDevelopment Field Functions 
    bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
    void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
    inline bool getDisableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
    inline CreateProjectRequest& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


    // isAllowDownload Field Functions 
    bool hasIsAllowDownload() const { return this->isAllowDownload_ != nullptr;};
    void deleteIsAllowDownload() { this->isAllowDownload_ = nullptr;};
    inline int32_t getIsAllowDownload() const { DARABONBA_PTR_GET_DEFAULT(isAllowDownload_, 0) };
    inline CreateProjectRequest& setIsAllowDownload(int32_t isAllowDownload) { DARABONBA_PTR_SET_VALUE(isAllowDownload_, isAllowDownload) };


    // projectDescription Field Functions 
    bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
    void deleteProjectDescription() { this->projectDescription_ = nullptr;};
    inline string getProjectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
    inline CreateProjectRequest& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateProjectRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // projectMode Field Functions 
    bool hasProjectMode() const { return this->projectMode_ != nullptr;};
    void deleteProjectMode() { this->projectMode_ = nullptr;};
    inline int32_t getProjectMode() const { DARABONBA_PTR_GET_DEFAULT(projectMode_, 0) };
    inline CreateProjectRequest& setProjectMode(int32_t projectMode) { DARABONBA_PTR_SET_VALUE(projectMode_, projectMode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateProjectRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateProjectRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateProjectRequest::Tags>) };
    inline vector<CreateProjectRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateProjectRequest::Tags>) };
    inline CreateProjectRequest& setTags(const vector<CreateProjectRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateProjectRequest& setTags(vector<CreateProjectRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The client token that is used to ensure the idempotence of the request. This parameter can be left empty.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to disable the Develop role. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> disableDevelopment_ {};
    // Specifies whether to allow you to download the query result from DataStudio. Valid values:
    // 
    // *   **1** (default): allows you to download the query result from DataStudio.
    // *   **0**: does not allow you to download the query result from DataStudio.
    shared_ptr<int32_t> isAllowDownload_ {};
    // The description of the workspace.
    shared_ptr<string> projectDescription_ {};
    // The name of the workspace. The name can contain only letters, digits, and underscores (_) and must start with a letter or digit.
    // 
    // This parameter is required.
    shared_ptr<string> projectIdentifier_ {};
    // The mode of the workspace. For more information about the differences between the modes of workspaces, see [Differences between workspaces in basic mode and workspaces in standard mode](https://help.aliyun.com/document_detail/85772.html).
    // 
    // Valid values:
    // 
    // *   **2** (default): basic mode
    // *   **3**: standard mode
    shared_ptr<int32_t> projectMode_ {};
    // The display name of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The resource group ID.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The tags added to the workspace.
    shared_ptr<vector<CreateProjectRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
