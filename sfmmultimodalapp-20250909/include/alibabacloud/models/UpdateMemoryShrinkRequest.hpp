// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMemoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(MemoryNodeId, memoryNodeId_);
      DARABONBA_PTR_TO_JSON(MetaData, metaDataShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(MemoryNodeId, memoryNodeId_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaDataShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMemoryShrinkRequest() = default ;
    UpdateMemoryShrinkRequest(const UpdateMemoryShrinkRequest &) = default ;
    UpdateMemoryShrinkRequest(UpdateMemoryShrinkRequest &&) = default ;
    UpdateMemoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryShrinkRequest() = default ;
    UpdateMemoryShrinkRequest& operator=(const UpdateMemoryShrinkRequest &) = default ;
    UpdateMemoryShrinkRequest& operator=(UpdateMemoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->content_ == nullptr && this->memoryNodeId_ == nullptr && this->metaDataShrink_ == nullptr && this->source_ == nullptr && this->userDefinedId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMemoryShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateMemoryShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // memoryNodeId Field Functions 
    bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
    void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
    inline string getMemoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
    inline UpdateMemoryShrinkRequest& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


    // metaDataShrink Field Functions 
    bool hasMetaDataShrink() const { return this->metaDataShrink_ != nullptr;};
    void deleteMetaDataShrink() { this->metaDataShrink_ = nullptr;};
    inline string getMetaDataShrink() const { DARABONBA_PTR_GET_DEFAULT(metaDataShrink_, "") };
    inline UpdateMemoryShrinkRequest& setMetaDataShrink(string metaDataShrink) { DARABONBA_PTR_SET_VALUE(metaDataShrink_, metaDataShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateMemoryShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline UpdateMemoryShrinkRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMemoryShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> memoryNodeId_ {};
    shared_ptr<string> metaDataShrink_ {};
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
