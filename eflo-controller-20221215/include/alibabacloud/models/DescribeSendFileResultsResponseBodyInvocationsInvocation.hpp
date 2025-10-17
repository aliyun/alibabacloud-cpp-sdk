// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeSendFileResultsResponseBodyInvocationsInvocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBodyInvocationsInvocation& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_TO_JSON(FileMode, fileMode_);
      DARABONBA_PTR_TO_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeNodes, invokeNodes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBodyInvocationsInvocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_FROM_JSON(FileMode, fileMode_);
      DARABONBA_PTR_FROM_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeNodes, invokeNodes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
    };
    DescribeSendFileResultsResponseBodyInvocationsInvocation() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocation(const DescribeSendFileResultsResponseBodyInvocationsInvocation &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocation(DescribeSendFileResultsResponseBodyInvocationsInvocation &&) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocation() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocation& operator=(const DescribeSendFileResultsResponseBodyInvocationsInvocation &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocation& operator=(DescribeSendFileResultsResponseBodyInvocationsInvocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentType_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->fileGroup_ == nullptr && return this->fileMode_ == nullptr
        && return this->fileOwner_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeNodes_ == nullptr && return this->name_ == nullptr && return this->nodeCount_ == nullptr
        && return this->overwrite_ == nullptr && return this->targetDir_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileGroup Field Functions 
    bool hasFileGroup() const { return this->fileGroup_ != nullptr;};
    void deleteFileGroup() { this->fileGroup_ = nullptr;};
    inline string fileGroup() const { DARABONBA_PTR_GET_DEFAULT(fileGroup_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setFileGroup(string fileGroup) { DARABONBA_PTR_SET_VALUE(fileGroup_, fileGroup) };


    // fileMode Field Functions 
    bool hasFileMode() const { return this->fileMode_ != nullptr;};
    void deleteFileMode() { this->fileMode_ = nullptr;};
    inline string fileMode() const { DARABONBA_PTR_GET_DEFAULT(fileMode_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setFileMode(string fileMode) { DARABONBA_PTR_SET_VALUE(fileMode_, fileMode) };


    // fileOwner Field Functions 
    bool hasFileOwner() const { return this->fileOwner_ != nullptr;};
    void deleteFileOwner() { this->fileOwner_ = nullptr;};
    inline string fileOwner() const { DARABONBA_PTR_GET_DEFAULT(fileOwner_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setFileOwner(string fileOwner) { DARABONBA_PTR_SET_VALUE(fileOwner_, fileOwner) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeNodes Field Functions 
    bool hasInvokeNodes() const { return this->invokeNodes_ != nullptr;};
    void deleteInvokeNodes() { this->invokeNodes_ = nullptr;};
    inline const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes & invokeNodes() const { DARABONBA_PTR_GET_CONST(invokeNodes_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes) };
    inline Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes invokeNodes() { DARABONBA_PTR_GET(invokeNodes_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvokeNodes(const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes & invokeNodes) { DARABONBA_PTR_SET_VALUE(invokeNodes_, invokeNodes) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvokeNodes(Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes && invokeNodes) { DARABONBA_PTR_SET_RVALUE(invokeNodes_, invokeNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // targetDir Field Functions 
    bool hasTargetDir() const { return this->targetDir_ != nullptr;};
    void deleteTargetDir() { this->targetDir_ = nullptr;};
    inline string targetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


  protected:
    // The command output.
    // 
    // If ContentEncoding is set to PlainText in the request, the original command output is returned. If ContentEncoding is set to Base64 in the request, the Base64-encoded command output is returned.
    std::shared_ptr<string> content_ = nullptr;
    // The content type of the file.
    // 
    // PlainText: The file content is not encoded. Base64: The file content is encoded in Base64. Default value: PlainText.
    std::shared_ptr<string> contentType_ = nullptr;
    // The time when the file sending task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The command description.
    std::shared_ptr<string> description_ = nullptr;
    // The user group of the file.
    std::shared_ptr<string> fileGroup_ = nullptr;
    // The permissions on the file.
    std::shared_ptr<string> fileMode_ = nullptr;
    // The owner of the file.
    std::shared_ptr<string> fileOwner_ = nullptr;
    // The overall sending status of the file. The overall sending status of the file varies based on the sending status of the file on all destination instances. Valid values:
    // 
    // *   Pending: The file is being verified or sent. If the sending state of the file on at least one instance is Pending, the overall sending state of the file is Pending.
    // 
    // *   Running: The file is being sent to the instance. If the sending state of the file on at least one instance is Running, the overall sending state of the file is Running.
    // 
    // *   Success: If the sending state of the file on all instances is Success, the overall sending state of the file is Success.
    // 
    // *   Failed: If the sending state of the file on all instances is Failed, the overall sending state of the file is Failed. If the sending state of the file on one or more instances is one of the following values, the overall sending state of the file is Failed:
    // 
    //     *   Invalid: The file is invalid.
    //     *   Aborted: The file failed to be sent to the instances.
    //     *   Failed: The file failed to be created on the instances.
    //     *   Timeout: The file sending task timed out.
    //     *   Error: An error occurred and interrupted the file sending task.
    // 
    // *   PartialFailed: The file sending task was completed on some instances but failed on other instances. If the sending state of the file is Success on some instances and is Failed on other instances, the overall sending state of the file is PartialFailed.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The file sending records.
    std::shared_ptr<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes> invokeNodes_ = nullptr;
    // The name of the file sending task.
    std::shared_ptr<string> name_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    // Indicates whether a file was overwritten in the destination directory if the file has the same name as the sent file.
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> overwrite_ = nullptr;
    // The destination directory.
    std::shared_ptr<string> targetDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
