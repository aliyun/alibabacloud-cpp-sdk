// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASESTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASESTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeKnowledgeBaseStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeKnowledgeBaseStatsResponseBody() = default ;
    DescribeKnowledgeBaseStatsResponseBody(const DescribeKnowledgeBaseStatsResponseBody &) = default ;
    DescribeKnowledgeBaseStatsResponseBody(DescribeKnowledgeBaseStatsResponseBody &&) = default ;
    DescribeKnowledgeBaseStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseStatsResponseBody() = default ;
    DescribeKnowledgeBaseStatsResponseBody& operator=(const DescribeKnowledgeBaseStatsResponseBody &) = default ;
    DescribeKnowledgeBaseStatsResponseBody& operator=(DescribeKnowledgeBaseStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DocumentCount, documentCount_);
        DARABONBA_PTR_TO_JSON(KbHits, kbHits_);
        DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
        DARABONBA_PTR_TO_JSON(TotalChunkCount, totalChunkCount_);
        DARABONBA_PTR_TO_JSON(TotalFileSize, totalFileSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DocumentCount, documentCount_);
        DARABONBA_PTR_FROM_JSON(KbHits, kbHits_);
        DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
        DARABONBA_PTR_FROM_JSON(TotalChunkCount, totalChunkCount_);
        DARABONBA_PTR_FROM_JSON(TotalFileSize, totalFileSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->documentCount_ == nullptr
        && this->kbHits_ == nullptr && this->kbUuid_ == nullptr && this->totalChunkCount_ == nullptr && this->totalFileSize_ == nullptr; };
      // documentCount Field Functions 
      bool hasDocumentCount() const { return this->documentCount_ != nullptr;};
      void deleteDocumentCount() { this->documentCount_ = nullptr;};
      inline int32_t getDocumentCount() const { DARABONBA_PTR_GET_DEFAULT(documentCount_, 0) };
      inline Data& setDocumentCount(int32_t documentCount) { DARABONBA_PTR_SET_VALUE(documentCount_, documentCount) };


      // kbHits Field Functions 
      bool hasKbHits() const { return this->kbHits_ != nullptr;};
      void deleteKbHits() { this->kbHits_ = nullptr;};
      inline int64_t getKbHits() const { DARABONBA_PTR_GET_DEFAULT(kbHits_, 0L) };
      inline Data& setKbHits(int64_t kbHits) { DARABONBA_PTR_SET_VALUE(kbHits_, kbHits) };


      // kbUuid Field Functions 
      bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
      void deleteKbUuid() { this->kbUuid_ = nullptr;};
      inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
      inline Data& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


      // totalChunkCount Field Functions 
      bool hasTotalChunkCount() const { return this->totalChunkCount_ != nullptr;};
      void deleteTotalChunkCount() { this->totalChunkCount_ = nullptr;};
      inline int32_t getTotalChunkCount() const { DARABONBA_PTR_GET_DEFAULT(totalChunkCount_, 0) };
      inline Data& setTotalChunkCount(int32_t totalChunkCount) { DARABONBA_PTR_SET_VALUE(totalChunkCount_, totalChunkCount) };


      // totalFileSize Field Functions 
      bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
      void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
      inline int64_t getTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
      inline Data& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    protected:
      shared_ptr<int32_t> documentCount_ {};
      shared_ptr<int64_t> kbHits_ {};
      shared_ptr<string> kbUuid_ {};
      shared_ptr<int32_t> totalChunkCount_ {};
      shared_ptr<int64_t> totalFileSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeKnowledgeBaseStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeKnowledgeBaseStatsResponseBody::Data) };
    inline DescribeKnowledgeBaseStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeKnowledgeBaseStatsResponseBody::Data) };
    inline DescribeKnowledgeBaseStatsResponseBody& setData(const DescribeKnowledgeBaseStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeKnowledgeBaseStatsResponseBody& setData(DescribeKnowledgeBaseStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeKnowledgeBaseStatsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeKnowledgeBaseStatsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeKnowledgeBaseStatsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeKnowledgeBaseStatsResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
