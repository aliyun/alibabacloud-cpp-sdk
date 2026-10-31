// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECTIFYFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECTIFYFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRectifyFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateRectifyFlowResponseBody() = default ;
    CreateRectifyFlowResponseBody(const CreateRectifyFlowResponseBody &) = default ;
    CreateRectifyFlowResponseBody(CreateRectifyFlowResponseBody &&) = default ;
    CreateRectifyFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRectifyFlowResponseBody() = default ;
    CreateRectifyFlowResponseBody& operator=(const CreateRectifyFlowResponseBody &) = default ;
    CreateRectifyFlowResponseBody& operator=(CreateRectifyFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProcessedIssueCount, processedIssueCount_);
        DARABONBA_PTR_TO_JSON(RectifyIds, rectifyIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProcessedIssueCount, processedIssueCount_);
        DARABONBA_PTR_FROM_JSON(RectifyIds, rectifyIds_);
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
      virtual bool empty() const override { return this->processedIssueCount_ == nullptr
        && this->rectifyIds_ == nullptr; };
      // processedIssueCount Field Functions 
      bool hasProcessedIssueCount() const { return this->processedIssueCount_ != nullptr;};
      void deleteProcessedIssueCount() { this->processedIssueCount_ = nullptr;};
      inline int64_t getProcessedIssueCount() const { DARABONBA_PTR_GET_DEFAULT(processedIssueCount_, 0L) };
      inline Data& setProcessedIssueCount(int64_t processedIssueCount) { DARABONBA_PTR_SET_VALUE(processedIssueCount_, processedIssueCount) };


      // rectifyIds Field Functions 
      bool hasRectifyIds() const { return this->rectifyIds_ != nullptr;};
      void deleteRectifyIds() { this->rectifyIds_ = nullptr;};
      inline const vector<int64_t> & getRectifyIds() const { DARABONBA_PTR_GET_CONST(rectifyIds_, vector<int64_t>) };
      inline vector<int64_t> getRectifyIds() { DARABONBA_PTR_GET(rectifyIds_, vector<int64_t>) };
      inline Data& setRectifyIds(const vector<int64_t> & rectifyIds) { DARABONBA_PTR_SET_VALUE(rectifyIds_, rectifyIds) };
      inline Data& setRectifyIds(vector<int64_t> && rectifyIds) { DARABONBA_PTR_SET_RVALUE(rectifyIds_, rectifyIds) };


    protected:
      // The actual number of deduplicated issues successfully included in this operation. Skipped issues and historical issues of the original process are excluded. Issues brought in by scope expansion are included.
      shared_ptr<int64_t> processedIssueCount_ {};
      // The list of process IDs for this operation.
      shared_ptr<vector<int64_t>> rectifyIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateRectifyFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateRectifyFlowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateRectifyFlowResponseBody::Data) };
    inline CreateRectifyFlowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateRectifyFlowResponseBody::Data) };
    inline CreateRectifyFlowResponseBody& setData(const CreateRectifyFlowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRectifyFlowResponseBody& setData(CreateRectifyFlowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateRectifyFlowResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateRectifyFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRectifyFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateRectifyFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The operation result.
    shared_ptr<CreateRectifyFlowResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
