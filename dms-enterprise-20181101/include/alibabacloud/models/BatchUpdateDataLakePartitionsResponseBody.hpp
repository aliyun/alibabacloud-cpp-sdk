// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEDATALAKEPARTITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DmsEnterprise20181101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BatchUpdateDataLakePartitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateDataLakePartitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PartitionErrors, partitionErrors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchUpdateDataLakePartitionsResponseBody() = default ;
    BatchUpdateDataLakePartitionsResponseBody(const BatchUpdateDataLakePartitionsResponseBody &) = default ;
    BatchUpdateDataLakePartitionsResponseBody(BatchUpdateDataLakePartitionsResponseBody &&) = default ;
    BatchUpdateDataLakePartitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateDataLakePartitionsResponseBody() = default ;
    BatchUpdateDataLakePartitionsResponseBody& operator=(const BatchUpdateDataLakePartitionsResponseBody &) = default ;
    BatchUpdateDataLakePartitionsResponseBody& operator=(BatchUpdateDataLakePartitionsResponseBody &&) = default ;
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
    inline BatchUpdateDataLakePartitionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchUpdateDataLakePartitionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // partitionErrors Field Functions 
    bool hasPartitionErrors() const { return this->partitionErrors_ != nullptr;};
    void deletePartitionErrors() { this->partitionErrors_ = nullptr;};
    inline const vector<PartitionError> & partitionErrors() const { DARABONBA_PTR_GET_CONST(partitionErrors_, vector<PartitionError>) };
    inline vector<PartitionError> partitionErrors() { DARABONBA_PTR_GET(partitionErrors_, vector<PartitionError>) };
    inline BatchUpdateDataLakePartitionsResponseBody& setPartitionErrors(const vector<PartitionError> & partitionErrors) { DARABONBA_PTR_SET_VALUE(partitionErrors_, partitionErrors) };
    inline BatchUpdateDataLakePartitionsResponseBody& setPartitionErrors(vector<PartitionError> && partitionErrors) { DARABONBA_PTR_SET_RVALUE(partitionErrors_, partitionErrors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUpdateDataLakePartitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchUpdateDataLakePartitionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<PartitionError>> partitionErrors_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
