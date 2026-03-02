// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
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
  class UpdateMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(MemoryNodeId, memoryNodeId_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(MemoryNodeId, memoryNodeId_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMemoryRequest() = default ;
    UpdateMemoryRequest(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest(UpdateMemoryRequest &&) = default ;
    UpdateMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryRequest() = default ;
    UpdateMemoryRequest& operator=(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest& operator=(UpdateMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->content_ == nullptr && this->memoryNodeId_ == nullptr && this->metaData_ == nullptr && this->source_ == nullptr && this->userDefinedId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMemoryRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateMemoryRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // memoryNodeId Field Functions 
    bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
    void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
    inline string getMemoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
    inline UpdateMemoryRequest& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> getMetaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline UpdateMemoryRequest& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline UpdateMemoryRequest& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateMemoryRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline UpdateMemoryRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMemoryRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> memoryNodeId_ {};
    shared_ptr<map<string, string>> metaData_ {};
    shared_ptr<string> source_ {};
    // This parameter is required.
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
