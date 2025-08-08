// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTATTACHMENTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTATTACHMENTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectAttachmentsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectAttachmentsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentToken, attachmentToken_);
      DARABONBA_PTR_TO_JSON(AttachmentType, attachmentType_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileLink, fileLink_);
      DARABONBA_PTR_TO_JSON(FileLinkGmtExpired, fileLinkGmtExpired_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileSuffix, fileSuffix_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
      DARABONBA_PTR_TO_JSON(StepNo, stepNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectAttachmentsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentToken, attachmentToken_);
      DARABONBA_PTR_FROM_JSON(AttachmentType, attachmentType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileLink, fileLink_);
      DARABONBA_PTR_FROM_JSON(FileLinkGmtExpired, fileLinkGmtExpired_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileSuffix, fileSuffix_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
      DARABONBA_PTR_FROM_JSON(StepNo, stepNo_);
    };
    DescribeProjectAttachmentsResponseBodyResult() = default ;
    DescribeProjectAttachmentsResponseBodyResult(const DescribeProjectAttachmentsResponseBodyResult &) = default ;
    DescribeProjectAttachmentsResponseBodyResult(DescribeProjectAttachmentsResponseBodyResult &&) = default ;
    DescribeProjectAttachmentsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectAttachmentsResponseBodyResult() = default ;
    DescribeProjectAttachmentsResponseBodyResult& operator=(const DescribeProjectAttachmentsResponseBodyResult &) = default ;
    DescribeProjectAttachmentsResponseBodyResult& operator=(DescribeProjectAttachmentsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentToken_ != nullptr
        && this->attachmentType_ != nullptr && this->content_ != nullptr && this->fileLink_ != nullptr && this->fileLinkGmtExpired_ != nullptr && this->fileName_ != nullptr
        && this->fileSize_ != nullptr && this->fileSuffix_ != nullptr && this->gmtCreate_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr
        && this->operator_ != nullptr && this->operatorName_ != nullptr && this->operatorRole_ != nullptr && this->stepNo_ != nullptr; };
    // attachmentToken Field Functions 
    bool hasAttachmentToken() const { return this->attachmentToken_ != nullptr;};
    void deleteAttachmentToken() { this->attachmentToken_ = nullptr;};
    inline string attachmentToken() const { DARABONBA_PTR_GET_DEFAULT(attachmentToken_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setAttachmentToken(string attachmentToken) { DARABONBA_PTR_SET_VALUE(attachmentToken_, attachmentToken) };


    // attachmentType Field Functions 
    bool hasAttachmentType() const { return this->attachmentType_ != nullptr;};
    void deleteAttachmentType() { this->attachmentType_ = nullptr;};
    inline string attachmentType() const { DARABONBA_PTR_GET_DEFAULT(attachmentType_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setAttachmentType(string attachmentType) { DARABONBA_PTR_SET_VALUE(attachmentType_, attachmentType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileLink Field Functions 
    bool hasFileLink() const { return this->fileLink_ != nullptr;};
    void deleteFileLink() { this->fileLink_ = nullptr;};
    inline string fileLink() const { DARABONBA_PTR_GET_DEFAULT(fileLink_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setFileLink(string fileLink) { DARABONBA_PTR_SET_VALUE(fileLink_, fileLink) };


    // fileLinkGmtExpired Field Functions 
    bool hasFileLinkGmtExpired() const { return this->fileLinkGmtExpired_ != nullptr;};
    void deleteFileLinkGmtExpired() { this->fileLinkGmtExpired_ = nullptr;};
    inline int64_t fileLinkGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(fileLinkGmtExpired_, 0L) };
    inline DescribeProjectAttachmentsResponseBodyResult& setFileLinkGmtExpired(int64_t fileLinkGmtExpired) { DARABONBA_PTR_SET_VALUE(fileLinkGmtExpired_, fileLinkGmtExpired) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeProjectAttachmentsResponseBodyResult& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileSuffix Field Functions 
    bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
    void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
    inline string fileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeProjectAttachmentsResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline DescribeProjectAttachmentsResponseBodyResult& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline int64_t _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
    inline DescribeProjectAttachmentsResponseBodyResult& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorRole Field Functions 
    bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
    void deleteOperatorRole() { this->operatorRole_ = nullptr;};
    inline string operatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
    inline DescribeProjectAttachmentsResponseBodyResult& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


    // stepNo Field Functions 
    bool hasStepNo() const { return this->stepNo_ != nullptr;};
    void deleteStepNo() { this->stepNo_ = nullptr;};
    inline int32_t stepNo() const { DARABONBA_PTR_GET_DEFAULT(stepNo_, 0) };
    inline DescribeProjectAttachmentsResponseBodyResult& setStepNo(int32_t stepNo) { DARABONBA_PTR_SET_VALUE(stepNo_, stepNo) };


  protected:
    std::shared_ptr<string> attachmentToken_ = nullptr;
    std::shared_ptr<string> attachmentType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> fileLink_ = nullptr;
    std::shared_ptr<int64_t> fileLinkGmtExpired_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> fileSuffix_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<int64_t> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> operatorRole_ = nullptr;
    std::shared_ptr<int32_t> stepNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
