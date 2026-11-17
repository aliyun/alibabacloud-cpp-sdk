// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONFIGRUNTIMECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONFIGRUNTIMECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class BatchConfigRuntimeChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchConfigRuntimeChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, BatchConfigRuntimeChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    BatchConfigRuntimeChannelResponseBody() = default ;
    BatchConfigRuntimeChannelResponseBody(const BatchConfigRuntimeChannelResponseBody &) = default ;
    BatchConfigRuntimeChannelResponseBody(BatchConfigRuntimeChannelResponseBody &&) = default ;
    BatchConfigRuntimeChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchConfigRuntimeChannelResponseBody() = default ;
    BatchConfigRuntimeChannelResponseBody& operator=(const BatchConfigRuntimeChannelResponseBody &) = default ;
    BatchConfigRuntimeChannelResponseBody& operator=(BatchConfigRuntimeChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->runtimeId_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // runtimeId Field Functions 
      bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
      void deleteRuntimeId() { this->runtimeId_ = nullptr;};
      inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
      inline Data& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The third-party channel code.
      shared_ptr<string> code_ {};
      // The error code returned when the configuration fails. This parameter is returned only when Success is false.
      shared_ptr<string> errorCode_ {};
      // The error description returned when the configuration fails. This parameter is returned only when Success is false.
      shared_ptr<string> message_ {};
      // The agent runtime ID.
      shared_ptr<string> runtimeId_ {};
      // Indicates whether the channel configuration item is configured successfully. Valid values:
      // 
      // - true: The configuration is successful.
      // - false: The configuration fails. For the cause of the failure, see ErrorCode and Message.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<BatchConfigRuntimeChannelResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<BatchConfigRuntimeChannelResponseBody::Data>) };
    inline vector<BatchConfigRuntimeChannelResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<BatchConfigRuntimeChannelResponseBody::Data>) };
    inline BatchConfigRuntimeChannelResponseBody& setData(const vector<BatchConfigRuntimeChannelResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchConfigRuntimeChannelResponseBody& setData(vector<BatchConfigRuntimeChannelResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchConfigRuntimeChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline BatchConfigRuntimeChannelResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of batch configuration results. Each channel configuration item corresponds to one result.
    shared_ptr<vector<BatchConfigRuntimeChannelResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of configuration results, which is the same as the number of configuration items in ChannelConfigs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
