// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSOURCEUSAGESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSOURCEUSAGESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySourceUsageSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySourceUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(retrievalCount, retrievalCount_);
      DARABONBA_PTR_TO_JSON(retrievedSourceCount, retrievedSourceCount_);
      DARABONBA_PTR_TO_JSON(sourceCount, sourceCount_);
      DARABONBA_PTR_TO_JSON(usageCount, usageCount_);
      DARABONBA_PTR_TO_JSON(usedSourceCount, usedSourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySourceUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(retrievalCount, retrievalCount_);
      DARABONBA_PTR_FROM_JSON(retrievedSourceCount, retrievedSourceCount_);
      DARABONBA_PTR_FROM_JSON(sourceCount, sourceCount_);
      DARABONBA_PTR_FROM_JSON(usageCount, usageCount_);
      DARABONBA_PTR_FROM_JSON(usedSourceCount, usedSourceCount_);
    };
    QuerySourceUsageSummaryResponseBody() = default ;
    QuerySourceUsageSummaryResponseBody(const QuerySourceUsageSummaryResponseBody &) = default ;
    QuerySourceUsageSummaryResponseBody(QuerySourceUsageSummaryResponseBody &&) = default ;
    QuerySourceUsageSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySourceUsageSummaryResponseBody() = default ;
    QuerySourceUsageSummaryResponseBody& operator=(const QuerySourceUsageSummaryResponseBody &) = default ;
    QuerySourceUsageSummaryResponseBody& operator=(QuerySourceUsageSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->retrievalCount_ == nullptr && this->retrievedSourceCount_ == nullptr && this->sourceCount_ == nullptr
        && this->usageCount_ == nullptr && this->usedSourceCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySourceUsageSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySourceUsageSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySourceUsageSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retrievalCount Field Functions 
    bool hasRetrievalCount() const { return this->retrievalCount_ != nullptr;};
    void deleteRetrievalCount() { this->retrievalCount_ = nullptr;};
    inline int64_t getRetrievalCount() const { DARABONBA_PTR_GET_DEFAULT(retrievalCount_, 0L) };
    inline QuerySourceUsageSummaryResponseBody& setRetrievalCount(int64_t retrievalCount) { DARABONBA_PTR_SET_VALUE(retrievalCount_, retrievalCount) };


    // retrievedSourceCount Field Functions 
    bool hasRetrievedSourceCount() const { return this->retrievedSourceCount_ != nullptr;};
    void deleteRetrievedSourceCount() { this->retrievedSourceCount_ = nullptr;};
    inline int64_t getRetrievedSourceCount() const { DARABONBA_PTR_GET_DEFAULT(retrievedSourceCount_, 0L) };
    inline QuerySourceUsageSummaryResponseBody& setRetrievedSourceCount(int64_t retrievedSourceCount) { DARABONBA_PTR_SET_VALUE(retrievedSourceCount_, retrievedSourceCount) };


    // sourceCount Field Functions 
    bool hasSourceCount() const { return this->sourceCount_ != nullptr;};
    void deleteSourceCount() { this->sourceCount_ = nullptr;};
    inline int64_t getSourceCount() const { DARABONBA_PTR_GET_DEFAULT(sourceCount_, 0L) };
    inline QuerySourceUsageSummaryResponseBody& setSourceCount(int64_t sourceCount) { DARABONBA_PTR_SET_VALUE(sourceCount_, sourceCount) };


    // usageCount Field Functions 
    bool hasUsageCount() const { return this->usageCount_ != nullptr;};
    void deleteUsageCount() { this->usageCount_ = nullptr;};
    inline int64_t getUsageCount() const { DARABONBA_PTR_GET_DEFAULT(usageCount_, 0L) };
    inline QuerySourceUsageSummaryResponseBody& setUsageCount(int64_t usageCount) { DARABONBA_PTR_SET_VALUE(usageCount_, usageCount) };


    // usedSourceCount Field Functions 
    bool hasUsedSourceCount() const { return this->usedSourceCount_ != nullptr;};
    void deleteUsedSourceCount() { this->usedSourceCount_ = nullptr;};
    inline int64_t getUsedSourceCount() const { DARABONBA_PTR_GET_DEFAULT(usedSourceCount_, 0L) };
    inline QuerySourceUsageSummaryResponseBody& setUsedSourceCount(int64_t usedSourceCount) { DARABONBA_PTR_SET_VALUE(usedSourceCount_, usedSourceCount) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of retrieval recalls.
    shared_ptr<int64_t> retrievalCount_ {};
    // The deduplicated number of sources with retrieval events.
    shared_ptr<int64_t> retrievedSourceCount_ {};
    // The number of rows in the source data.
    shared_ptr<int64_t> sourceCount_ {};
    // The number of times the source has been used in agents.
    shared_ptr<int64_t> usageCount_ {};
    // The deduplicated number of sources with usage events.
    shared_ptr<int64_t> usedSourceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
