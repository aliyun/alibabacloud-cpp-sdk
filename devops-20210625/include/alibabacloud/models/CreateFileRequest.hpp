// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
      DARABONBA_PTR_TO_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(encoding, encoding_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
      DARABONBA_PTR_FROM_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateFileRequest() = default ;
    CreateFileRequest(const CreateFileRequest &) = default ;
    CreateFileRequest(CreateFileRequest &&) = default ;
    CreateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileRequest() = default ;
    CreateFileRequest& operator=(const CreateFileRequest &) = default ;
    CreateFileRequest& operator=(CreateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->branchName_ == nullptr && return this->commitMessage_ == nullptr && return this->content_ == nullptr && return this->encoding_ == nullptr && return this->filePath_ == nullptr
        && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateFileRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateFileRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // commitMessage Field Functions 
    bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
    void deleteCommitMessage() { this->commitMessage_ = nullptr;};
    inline string commitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
    inline CreateFileRequest& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline CreateFileRequest& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateFileRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branchName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commitMessage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> encoding_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filePath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
