// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGRANTPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGRANTPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrantRevokeFailureEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGrantPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGrantPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchGrantRevokeFailureResult, batchGrantRevokeFailureResult_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGrantPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchGrantRevokeFailureResult, batchGrantRevokeFailureResult_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchGrantPermissionsResponseBody() = default ;
    BatchGrantPermissionsResponseBody(const BatchGrantPermissionsResponseBody &) = default ;
    BatchGrantPermissionsResponseBody(BatchGrantPermissionsResponseBody &&) = default ;
    BatchGrantPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGrantPermissionsResponseBody() = default ;
    BatchGrantPermissionsResponseBody& operator=(const BatchGrantPermissionsResponseBody &) = default ;
    BatchGrantPermissionsResponseBody& operator=(BatchGrantPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchGrantRevokeFailureResult_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // batchGrantRevokeFailureResult Field Functions 
    bool hasBatchGrantRevokeFailureResult() const { return this->batchGrantRevokeFailureResult_ != nullptr;};
    void deleteBatchGrantRevokeFailureResult() { this->batchGrantRevokeFailureResult_ = nullptr;};
    inline const vector<GrantRevokeFailureEntry> & batchGrantRevokeFailureResult() const { DARABONBA_PTR_GET_CONST(batchGrantRevokeFailureResult_, vector<GrantRevokeFailureEntry>) };
    inline vector<GrantRevokeFailureEntry> batchGrantRevokeFailureResult() { DARABONBA_PTR_GET(batchGrantRevokeFailureResult_, vector<GrantRevokeFailureEntry>) };
    inline BatchGrantPermissionsResponseBody& setBatchGrantRevokeFailureResult(const vector<GrantRevokeFailureEntry> & batchGrantRevokeFailureResult) { DARABONBA_PTR_SET_VALUE(batchGrantRevokeFailureResult_, batchGrantRevokeFailureResult) };
    inline BatchGrantPermissionsResponseBody& setBatchGrantRevokeFailureResult(vector<GrantRevokeFailureEntry> && batchGrantRevokeFailureResult) { DARABONBA_PTR_SET_RVALUE(batchGrantRevokeFailureResult_, batchGrantRevokeFailureResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchGrantPermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchGrantPermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGrantPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchGrantPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result returned when batch authorization failed.
    std::shared_ptr<vector<GrantRevokeFailureEntry>> batchGrantRevokeFailureResult_ = nullptr;
    // The returned message.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
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
