// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProjectAttachmentsResponseBody() = default ;
    DescribeProjectAttachmentsResponseBody(const DescribeProjectAttachmentsResponseBody &) = default ;
    DescribeProjectAttachmentsResponseBody(DescribeProjectAttachmentsResponseBody &&) = default ;
    DescribeProjectAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectAttachmentsResponseBody() = default ;
    DescribeProjectAttachmentsResponseBody& operator=(const DescribeProjectAttachmentsResponseBody &) = default ;
    DescribeProjectAttachmentsResponseBody& operator=(DescribeProjectAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachmentToken_ == nullptr
        && this->attachmentType_ == nullptr && this->content_ == nullptr && this->fileLink_ == nullptr && this->fileLinkGmtExpired_ == nullptr && this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->fileSuffix_ == nullptr && this->gmtCreate_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->operator_ == nullptr && this->operatorName_ == nullptr && this->operatorRole_ == nullptr && this->stepNo_ == nullptr; };
      // attachmentToken Field Functions 
      bool hasAttachmentToken() const { return this->attachmentToken_ != nullptr;};
      void deleteAttachmentToken() { this->attachmentToken_ = nullptr;};
      inline string getAttachmentToken() const { DARABONBA_PTR_GET_DEFAULT(attachmentToken_, "") };
      inline Result& setAttachmentToken(string attachmentToken) { DARABONBA_PTR_SET_VALUE(attachmentToken_, attachmentToken) };


      // attachmentType Field Functions 
      bool hasAttachmentType() const { return this->attachmentType_ != nullptr;};
      void deleteAttachmentType() { this->attachmentType_ = nullptr;};
      inline string getAttachmentType() const { DARABONBA_PTR_GET_DEFAULT(attachmentType_, "") };
      inline Result& setAttachmentType(string attachmentType) { DARABONBA_PTR_SET_VALUE(attachmentType_, attachmentType) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fileLink Field Functions 
      bool hasFileLink() const { return this->fileLink_ != nullptr;};
      void deleteFileLink() { this->fileLink_ = nullptr;};
      inline string getFileLink() const { DARABONBA_PTR_GET_DEFAULT(fileLink_, "") };
      inline Result& setFileLink(string fileLink) { DARABONBA_PTR_SET_VALUE(fileLink_, fileLink) };


      // fileLinkGmtExpired Field Functions 
      bool hasFileLinkGmtExpired() const { return this->fileLinkGmtExpired_ != nullptr;};
      void deleteFileLinkGmtExpired() { this->fileLinkGmtExpired_ = nullptr;};
      inline int64_t getFileLinkGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(fileLinkGmtExpired_, 0L) };
      inline Result& setFileLinkGmtExpired(int64_t fileLinkGmtExpired) { DARABONBA_PTR_SET_VALUE(fileLinkGmtExpired_, fileLinkGmtExpired) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Result& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Result& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileSuffix Field Functions 
      bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
      void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
      inline string getFileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
      inline Result& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Result& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline Result& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Result& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline int64_t getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
      inline Result& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Result& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorRole Field Functions 
      bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
      void deleteOperatorRole() { this->operatorRole_ = nullptr;};
      inline string getOperatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
      inline Result& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


      // stepNo Field Functions 
      bool hasStepNo() const { return this->stepNo_ != nullptr;};
      void deleteStepNo() { this->stepNo_ = nullptr;};
      inline int32_t getStepNo() const { DARABONBA_PTR_GET_DEFAULT(stepNo_, 0) };
      inline Result& setStepNo(int32_t stepNo) { DARABONBA_PTR_SET_VALUE(stepNo_, stepNo) };


    protected:
      shared_ptr<string> attachmentToken_ {};
      shared_ptr<string> attachmentType_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> fileLink_ {};
      shared_ptr<int64_t> fileLinkGmtExpired_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> fileSuffix_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> nodeId_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<int64_t> operator_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> operatorRole_ {};
      shared_ptr<int32_t> stepNo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProjectAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeProjectAttachmentsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeProjectAttachmentsResponseBody::Result>) };
    inline vector<DescribeProjectAttachmentsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeProjectAttachmentsResponseBody::Result>) };
    inline DescribeProjectAttachmentsResponseBody& setResult(const vector<DescribeProjectAttachmentsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeProjectAttachmentsResponseBody& setResult(vector<DescribeProjectAttachmentsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProjectAttachmentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeProjectAttachmentsResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
