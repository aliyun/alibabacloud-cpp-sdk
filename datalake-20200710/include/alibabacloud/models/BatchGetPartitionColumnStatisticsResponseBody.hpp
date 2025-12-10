// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPARTITIONCOLUMNSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPARTITIONCOLUMNSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ColumnStatisticsObj.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetPartitionColumnStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetPartitionColumnStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PartitionStatisticsMap, partitionStatisticsMap_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetPartitionColumnStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PartitionStatisticsMap, partitionStatisticsMap_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchGetPartitionColumnStatisticsResponseBody() = default ;
    BatchGetPartitionColumnStatisticsResponseBody(const BatchGetPartitionColumnStatisticsResponseBody &) = default ;
    BatchGetPartitionColumnStatisticsResponseBody(BatchGetPartitionColumnStatisticsResponseBody &&) = default ;
    BatchGetPartitionColumnStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetPartitionColumnStatisticsResponseBody() = default ;
    BatchGetPartitionColumnStatisticsResponseBody& operator=(const BatchGetPartitionColumnStatisticsResponseBody &) = default ;
    BatchGetPartitionColumnStatisticsResponseBody& operator=(BatchGetPartitionColumnStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->partitionStatisticsMap_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchGetPartitionColumnStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchGetPartitionColumnStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // partitionStatisticsMap Field Functions 
    bool hasPartitionStatisticsMap() const { return this->partitionStatisticsMap_ != nullptr;};
    void deletePartitionStatisticsMap() { this->partitionStatisticsMap_ = nullptr;};
    inline const map<string, vector<ColumnStatisticsObj>> & partitionStatisticsMap() const { DARABONBA_PTR_GET_CONST(partitionStatisticsMap_, map<string, vector<ColumnStatisticsObj>>) };
    inline map<string, vector<ColumnStatisticsObj>> partitionStatisticsMap() { DARABONBA_PTR_GET(partitionStatisticsMap_, map<string, vector<ColumnStatisticsObj>>) };
    inline BatchGetPartitionColumnStatisticsResponseBody& setPartitionStatisticsMap(const map<string, vector<ColumnStatisticsObj>> & partitionStatisticsMap) { DARABONBA_PTR_SET_VALUE(partitionStatisticsMap_, partitionStatisticsMap) };
    inline BatchGetPartitionColumnStatisticsResponseBody& setPartitionStatisticsMap(map<string, vector<ColumnStatisticsObj>> && partitionStatisticsMap) { DARABONBA_PTR_SET_RVALUE(partitionStatisticsMap_, partitionStatisticsMap) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetPartitionColumnStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchGetPartitionColumnStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The partition statistics.
    std::shared_ptr<map<string, vector<ColumnStatisticsObj>>> partitionStatisticsMap_ = nullptr;
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
