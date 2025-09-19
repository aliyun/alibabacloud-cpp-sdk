// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PartitionError.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BatchDeleteDataLakePartitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchDeleteDataLakePartitionsResponseBody() = default ;
    BatchDeleteDataLakePartitionsResponseBody(const BatchDeleteDataLakePartitionsResponseBody &) = default ;
    BatchDeleteDataLakePartitionsResponseBody(BatchDeleteDataLakePartitionsResponseBody &&) = default ;
    BatchDeleteDataLakePartitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDataLakePartitionsResponseBody() = default ;
    BatchDeleteDataLakePartitionsResponseBody& operator=(const BatchDeleteDataLakePartitionsResponseBody &) = default ;
    BatchDeleteDataLakePartitionsResponseBody& operator=(BatchDeleteDataLakePartitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->partitionErrors_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BatchDeleteDataLakePartitionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchDeleteDataLakePartitionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // partitionErrors Field Functions 
    bool hasPartitionErrors() const { return this->partitionErrors_ != nullptr;};
    void deletePartitionErrors() { this->partitionErrors_ = nullptr;};
    inline const vector<PartitionError> & partitionErrors() const { DARABONBA_PTR_GET_CONST(partitionErrors_, vector<PartitionError>) };
    inline vector<PartitionError> partitionErrors() { DARABONBA_PTR_GET(partitionErrors_, vector<PartitionError>) };
    inline BatchDeleteDataLakePartitionsResponseBody& setPartitionErrors(const vector<PartitionError> & partitionErrors) { DARABONBA_PTR_SET_VALUE(partitionErrors_, partitionErrors) };
    inline BatchDeleteDataLakePartitionsResponseBody& setPartitionErrors(vector<PartitionError> && partitionErrors) { DARABONBA_PTR_SET_RVALUE(partitionErrors_, partitionErrors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteDataLakePartitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline BatchDeleteDataLakePartitionsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<PartitionError>> partitionErrors_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
