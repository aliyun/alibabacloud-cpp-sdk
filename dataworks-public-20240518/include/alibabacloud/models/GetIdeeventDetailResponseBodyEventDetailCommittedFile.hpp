// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILE_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailCommittedFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailCommittedFile& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Committor, committor_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePropertyContent, filePropertyContent_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailCommittedFile& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Committor, committor_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePropertyContent, filePropertyContent_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    GetIDEEventDetailResponseBodyEventDetailCommittedFile() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFile(const GetIDEEventDetailResponseBodyEventDetailCommittedFile &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFile(GetIDEEventDetailResponseBodyEventDetailCommittedFile &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailCommittedFile() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFile& operator=(const GetIDEEventDetailResponseBodyEventDetailCommittedFile &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFile& operator=(GetIDEEventDetailResponseBodyEventDetailCommittedFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeType_ != nullptr
        && this->comment_ != nullptr && this->committor_ != nullptr && this->content_ != nullptr && this->fileId_ != nullptr && this->fileName_ != nullptr
        && this->filePropertyContent_ != nullptr && this->fileType_ != nullptr && this->nodeConfiguration_ != nullptr && this->nodeId_ != nullptr && this->useType_ != nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // committor Field Functions 
    bool hasCommittor() const { return this->committor_ != nullptr;};
    void deleteCommittor() { this->committor_ = nullptr;};
    inline string committor() const { DARABONBA_PTR_GET_DEFAULT(committor_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setCommittor(string committor) { DARABONBA_PTR_SET_VALUE(committor_, committor) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePropertyContent Field Functions 
    bool hasFilePropertyContent() const { return this->filePropertyContent_ != nullptr;};
    void deleteFilePropertyContent() { this->filePropertyContent_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent & filePropertyContent() const { DARABONBA_PTR_GET_CONST(filePropertyContent_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent filePropertyContent() { DARABONBA_PTR_GET(filePropertyContent_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setFilePropertyContent(const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent & filePropertyContent) { DARABONBA_PTR_SET_VALUE(filePropertyContent_, filePropertyContent) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setFilePropertyContent(Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent && filePropertyContent) { DARABONBA_PTR_SET_RVALUE(filePropertyContent_, filePropertyContent) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int64_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // nodeConfiguration Field Functions 
    bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
    void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration & nodeConfiguration() const { DARABONBA_PTR_GET_CONST(nodeConfiguration_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration nodeConfiguration() { DARABONBA_PTR_GET(nodeConfiguration_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setNodeConfiguration(const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration & nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setNodeConfiguration(Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration && nodeConfiguration) { DARABONBA_PTR_SET_RVALUE(nodeConfiguration_, nodeConfiguration) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFile& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The type of the change to the file of the current version. Valid values: CREATE, UPDATE, and DELETE.
    std::shared_ptr<string> changeType_ = nullptr;
    // The description of the file version.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to generate the file of the current version.
    std::shared_ptr<string> committor_ = nullptr;
    // The code in the file of the current version.
    std::shared_ptr<string> content_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The details of the file.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent> filePropertyContent_ = nullptr;
    // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int64_t> fileType_ = nullptr;
    // The scheduling properties of the node that corresponds to the file.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration> nodeConfiguration_ = nullptr;
    // The ID of the node that is scheduled.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The module to which the file belongs. Valid values:
    // 
    // *   NORMAL: The file is used for DataStudio.
    // *   MANUAL: The file is used for a manually triggered node.
    // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
    // *   SKIP: The file is used for a dry-run node in DataStudio.
    // *   ADHOCQUERY: The file is used for an ad hoc query.
    // *   COMPONENT: The file is used for a script template.
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
