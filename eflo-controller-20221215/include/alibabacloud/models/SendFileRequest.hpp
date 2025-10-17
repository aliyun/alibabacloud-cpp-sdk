// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class SendFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_TO_JSON(FileMode, fileMode_);
      DARABONBA_PTR_TO_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_FROM_JSON(FileMode, fileMode_);
      DARABONBA_PTR_FROM_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    SendFileRequest() = default ;
    SendFileRequest(const SendFileRequest &) = default ;
    SendFileRequest(SendFileRequest &&) = default ;
    SendFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFileRequest() = default ;
    SendFileRequest& operator=(const SendFileRequest &) = default ;
    SendFileRequest& operator=(SendFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentType_ == nullptr && return this->description_ == nullptr && return this->fileGroup_ == nullptr && return this->fileMode_ == nullptr && return this->fileOwner_ == nullptr
        && return this->name_ == nullptr && return this->nodeIdList_ == nullptr && return this->overwrite_ == nullptr && return this->targetDir_ == nullptr && return this->timeout_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendFileRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SendFileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileGroup Field Functions 
    bool hasFileGroup() const { return this->fileGroup_ != nullptr;};
    void deleteFileGroup() { this->fileGroup_ = nullptr;};
    inline string fileGroup() const { DARABONBA_PTR_GET_DEFAULT(fileGroup_, "") };
    inline SendFileRequest& setFileGroup(string fileGroup) { DARABONBA_PTR_SET_VALUE(fileGroup_, fileGroup) };


    // fileMode Field Functions 
    bool hasFileMode() const { return this->fileMode_ != nullptr;};
    void deleteFileMode() { this->fileMode_ = nullptr;};
    inline string fileMode() const { DARABONBA_PTR_GET_DEFAULT(fileMode_, "") };
    inline SendFileRequest& setFileMode(string fileMode) { DARABONBA_PTR_SET_VALUE(fileMode_, fileMode) };


    // fileOwner Field Functions 
    bool hasFileOwner() const { return this->fileOwner_ != nullptr;};
    void deleteFileOwner() { this->fileOwner_ = nullptr;};
    inline string fileOwner() const { DARABONBA_PTR_GET_DEFAULT(fileOwner_, "") };
    inline SendFileRequest& setFileOwner(string fileOwner) { DARABONBA_PTR_SET_VALUE(fileOwner_, fileOwner) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SendFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<string> & nodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
    inline vector<string> nodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
    inline SendFileRequest& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline SendFileRequest& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline SendFileRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // targetDir Field Functions 
    bool hasTargetDir() const { return this->targetDir_ != nullptr;};
    void deleteTargetDir() { this->targetDir_ = nullptr;};
    inline string targetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
    inline SendFileRequest& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline SendFileRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The content of the file. The file must not exceed 32 KB in size after it is encoded in Base64.
    // 
    // *   If `ContentType` is set to `PlainText`, the value of Content is in plaintext.
    // *   If `ContentType` is set to `Base64`, the value of Content is Base64-encoded.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The content type of the file. Valid values:
    // 
    // PlainText Base64 Default value: PlainText.
    std::shared_ptr<string> contentType_ = nullptr;
    // The description of the file. The description can be up to 512 characters in length and can contain any characters.
    std::shared_ptr<string> description_ = nullptr;
    // The user group of the file. This parameter takes effect only on Linux instances. Default value: root. The value can be up to 64 characters in length.
    // 
    // Note If you want to use a non-root user group, make sure that the user group exists in the instances.
    std::shared_ptr<string> fileGroup_ = nullptr;
    // The permissions on the file. This parameter takes effect only on Linux instances. You can configure this parameter in the same way as you configure the chmod command.
    // 
    // Default value: 0644: the owner of the file has the read and write permission. The user group of the file and other users have read-only permission.
    std::shared_ptr<string> fileMode_ = nullptr;
    // The owner of the file. This parameter takes effect only on Linux instances. Default value: root.
    std::shared_ptr<string> fileOwner_ = nullptr;
    // The file name. The name can be up to 255 characters in length and can contain any characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The node list.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> nodeIdList_ = nullptr;
    // Specifies whether to overwrite file with the same name in the destination directory.
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> overwrite_ = nullptr;
    // The directory in the Lingjun node to which the file is sent. If the specified directory does not exist, the system creates the directory automatically.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDir_ = nullptr;
    // The timeout period for the file sending task. Unit: seconds.
    // 
    // *   A timeout error occurs when a file cannot be sent because the process slows down or because a specific module or Cloud Assistant Agent does not exist.
    // *   If the specified timeout period is less than 10 seconds, the system sets the timeout period to 10 seconds to ensure that the file can be sent.
    // 
    // Default value: 60.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
