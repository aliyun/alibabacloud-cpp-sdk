// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances.hpp>
#include <alibabacloud/models/DescribeSendFileResultsResponseBodyInvocationsInvocationTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
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
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeInstances, invokeInstances_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_TO_JSON(VmCount, vmCount_);
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
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeInstances, invokeInstances_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_FROM_JSON(VmCount, vmCount_);
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
        && return this->fileOwner_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeId_ == nullptr && return this->invokeInstances_ == nullptr && return this->name_ == nullptr
        && return this->overwrite_ == nullptr && return this->tags_ == nullptr && return this->targetDir_ == nullptr && return this->vmCount_ == nullptr; };
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


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeInstances Field Functions 
    bool hasInvokeInstances() const { return this->invokeInstances_ != nullptr;};
    void deleteInvokeInstances() { this->invokeInstances_ = nullptr;};
    inline const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances & invokeInstances() const { DARABONBA_PTR_GET_CONST(invokeInstances_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances) };
    inline Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances invokeInstances() { DARABONBA_PTR_GET(invokeInstances_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvokeInstances(const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances & invokeInstances) { DARABONBA_PTR_SET_VALUE(invokeInstances_, invokeInstances) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setInvokeInstances(Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances && invokeInstances) { DARABONBA_PTR_SET_RVALUE(invokeInstances_, invokeInstances) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline string overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setOverwrite(string overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags) };
    inline Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setTags(const Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setTags(Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetDir Field Functions 
    bool hasTargetDir() const { return this->targetDir_ != nullptr;};
    void deleteTargetDir() { this->targetDir_ = nullptr;};
    inline string targetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


    // vmCount Field Functions 
    bool hasVmCount() const { return this->vmCount_ != nullptr;};
    void deleteVmCount() { this->vmCount_ = nullptr;};
    inline int32_t vmCount() const { DARABONBA_PTR_GET_DEFAULT(vmCount_, 0) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocation& setVmCount(int32_t vmCount) { DARABONBA_PTR_SET_VALUE(vmCount_, vmCount) };


  protected:
    // The content of the file.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the file content. Valid values:
    // 
    // *   PlainText: The file content is not encoded.
    // *   Base64: The file content is encoded in Base64.
    std::shared_ptr<string> contentType_ = nullptr;
    // The time when the file sending task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the file.
    std::shared_ptr<string> description_ = nullptr;
    // The group of the file.
    std::shared_ptr<string> fileGroup_ = nullptr;
    // The permissions on the file.
    std::shared_ptr<string> fileMode_ = nullptr;
    // The owner of the file.
    std::shared_ptr<string> fileOwner_ = nullptr;
    // The overall sending status of the file. The overall sending status of the file varies based on the sending status of the file on all destination instances. Valid values:
    // 
    // *   Pending: The file is being verified or sent. If the sending state of the file on at least one instance is Pending, the overall sending state of the file is Pending.
    // 
    // *   Running: The file is being sent to the instances. If the sending state of the file on at least one instance is Running, the overall sending state of the file is Running.
    // 
    // *   Success: If the sending state of the file on all instances is Success, the overall sending state of the file is Success.
    // 
    // *   If the sending state of the file on all instances is Failed, the overall sending state of the file is Failed. If the sending state of the file on one or more instances is one of the following values, the overall sending state of the file is Failed:
    // 
    //     *   Invalid: The file is invalid.
    //     *   Aborted: The file failed to be sent to the instances.
    //     *   Failed: The file failed to be created on the instances.
    //     *   Timeout: The file sending task timed out.
    //     *   Error: An error occurred and interrupted the file sending task.
    // 
    // *   PartialFailed: The file sending task was completed on some instances but failed on other instances. If the sending state of the file is Success on some instances and is Failed on other instances, the overall sending state of the file is PartialFailed.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The ID of the file sending task.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The destination instances.
    std::shared_ptr<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstances> invokeInstances_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether a file in the destination directory is overwritten if the file has the same name as the sent file.
    std::shared_ptr<string> overwrite_ = nullptr;
    // The tags of the file sending task.
    std::shared_ptr<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationTags> tags_ = nullptr;
    // The destination directory.
    std::shared_ptr<string> targetDir_ = nullptr;
    // The number of the destination instances.
    std::shared_ptr<int32_t> vmCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
