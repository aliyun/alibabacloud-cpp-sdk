// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPARTITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPARTITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PartitionError.hpp>
#include <alibabacloud/models/PartitionSpec.hpp>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetPartitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetPartitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecs_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetPartitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecs_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchGetPartitionsResponseBody() = default ;
    BatchGetPartitionsResponseBody(const BatchGetPartitionsResponseBody &) = default ;
    BatchGetPartitionsResponseBody(BatchGetPartitionsResponseBody &&) = default ;
    BatchGetPartitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetPartitionsResponseBody() = default ;
    BatchGetPartitionsResponseBody& operator=(const BatchGetPartitionsResponseBody &) = default ;
    BatchGetPartitionsResponseBody& operator=(BatchGetPartitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->partitionErrors_ == nullptr && return this->partitionSpecs_ == nullptr && return this->partitions_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchGetPartitionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchGetPartitionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // partitionErrors Field Functions 
    bool hasPartitionErrors() const { return this->partitionErrors_ != nullptr;};
    void deletePartitionErrors() { this->partitionErrors_ = nullptr;};
    inline const vector<PartitionError> & partitionErrors() const { DARABONBA_PTR_GET_CONST(partitionErrors_, vector<PartitionError>) };
    inline vector<PartitionError> partitionErrors() { DARABONBA_PTR_GET(partitionErrors_, vector<PartitionError>) };
    inline BatchGetPartitionsResponseBody& setPartitionErrors(const vector<PartitionError> & partitionErrors) { DARABONBA_PTR_SET_VALUE(partitionErrors_, partitionErrors) };
    inline BatchGetPartitionsResponseBody& setPartitionErrors(vector<PartitionError> && partitionErrors) { DARABONBA_PTR_SET_RVALUE(partitionErrors_, partitionErrors) };


    // partitionSpecs Field Functions 
    bool hasPartitionSpecs() const { return this->partitionSpecs_ != nullptr;};
    void deletePartitionSpecs() { this->partitionSpecs_ = nullptr;};
    inline const vector<PartitionSpec> & partitionSpecs() const { DARABONBA_PTR_GET_CONST(partitionSpecs_, vector<PartitionSpec>) };
    inline vector<PartitionSpec> partitionSpecs() { DARABONBA_PTR_GET(partitionSpecs_, vector<PartitionSpec>) };
    inline BatchGetPartitionsResponseBody& setPartitionSpecs(const vector<PartitionSpec> & partitionSpecs) { DARABONBA_PTR_SET_VALUE(partitionSpecs_, partitionSpecs) };
    inline BatchGetPartitionsResponseBody& setPartitionSpecs(vector<PartitionSpec> && partitionSpecs) { DARABONBA_PTR_SET_RVALUE(partitionSpecs_, partitionSpecs) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Partition> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Partition>) };
    inline vector<Partition> partitions() { DARABONBA_PTR_GET(partitions_, vector<Partition>) };
    inline BatchGetPartitionsResponseBody& setPartitions(const vector<Partition> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline BatchGetPartitionsResponseBody& setPartitions(vector<Partition> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetPartitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchGetPartitionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned message.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The error messages.
    std::shared_ptr<vector<PartitionError>> partitionErrors_ = nullptr;
    // The list of partition specifications.
    std::shared_ptr<vector<PartitionSpec>> partitionSpecs_ = nullptr;
    // The list of partitions.
    std::shared_ptr<vector<Partition>> partitions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true: The request was successful.
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
