// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLPartition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BatchCreateDataLakePartitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchCreateDataLakePartitionsResponseBody() = default ;
    BatchCreateDataLakePartitionsResponseBody(const BatchCreateDataLakePartitionsResponseBody &) = default ;
    BatchCreateDataLakePartitionsResponseBody(BatchCreateDataLakePartitionsResponseBody &&) = default ;
    BatchCreateDataLakePartitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDataLakePartitionsResponseBody() = default ;
    BatchCreateDataLakePartitionsResponseBody& operator=(const BatchCreateDataLakePartitionsResponseBody &) = default ;
    BatchCreateDataLakePartitionsResponseBody& operator=(BatchCreateDataLakePartitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->partitions_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BatchCreateDataLakePartitionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchCreateDataLakePartitionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<DLPartition> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<DLPartition>) };
    inline vector<DLPartition> partitions() { DARABONBA_PTR_GET(partitions_, vector<DLPartition>) };
    inline BatchCreateDataLakePartitionsResponseBody& setPartitions(const vector<DLPartition> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline BatchCreateDataLakePartitionsResponseBody& setPartitions(vector<DLPartition> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateDataLakePartitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline BatchCreateDataLakePartitionsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details about the new partitions. This parameter is returned when the NeedResult parameter is set to true.
    std::shared_ptr<vector<DLPartition>> partitions_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request succeeded.
    // *   **false**: The request failed.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
