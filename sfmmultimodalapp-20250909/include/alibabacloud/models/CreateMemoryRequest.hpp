// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(MessagesJson, messagesJson_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(MessagesJson, messagesJson_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMemoryRequest() = default ;
    CreateMemoryRequest(const CreateMemoryRequest &) = default ;
    CreateMemoryRequest(CreateMemoryRequest &&) = default ;
    CreateMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryRequest() = default ;
    CreateMemoryRequest& operator=(const CreateMemoryRequest &) = default ;
    CreateMemoryRequest& operator=(CreateMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->content_ == nullptr && this->messagesJson_ == nullptr && this->metaData_ == nullptr && this->projectId_ == nullptr && this->userDefinedId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMemoryRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateMemoryRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // messagesJson Field Functions 
    bool hasMessagesJson() const { return this->messagesJson_ != nullptr;};
    void deleteMessagesJson() { this->messagesJson_ = nullptr;};
    inline string getMessagesJson() const { DARABONBA_PTR_GET_DEFAULT(messagesJson_, "") };
    inline CreateMemoryRequest& setMessagesJson(string messagesJson) { DARABONBA_PTR_SET_VALUE(messagesJson_, messagesJson) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> getMetaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline CreateMemoryRequest& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline CreateMemoryRequest& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateMemoryRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline CreateMemoryRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMemoryRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> messagesJson_ {};
    shared_ptr<map<string, string>> metaData_ {};
    shared_ptr<string> projectId_ {};
    // This parameter is required.
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
