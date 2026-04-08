// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORUPDATINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORUPDATINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GenerateDISyncTaskConfigForUpdatingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDISyncTaskConfigForUpdatingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDISyncTaskConfigForUpdatingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GenerateDISyncTaskConfigForUpdatingResponseBody() = default ;
    GenerateDISyncTaskConfigForUpdatingResponseBody(const GenerateDISyncTaskConfigForUpdatingResponseBody &) = default ;
    GenerateDISyncTaskConfigForUpdatingResponseBody(GenerateDISyncTaskConfigForUpdatingResponseBody &&) = default ;
    GenerateDISyncTaskConfigForUpdatingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDISyncTaskConfigForUpdatingResponseBody() = default ;
    GenerateDISyncTaskConfigForUpdatingResponseBody& operator=(const GenerateDISyncTaskConfigForUpdatingResponseBody &) = default ;
    GenerateDISyncTaskConfigForUpdatingResponseBody& operator=(GenerateDISyncTaskConfigForUpdatingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->message_ == nullptr
        && this->processId_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline int64_t getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
      inline Data& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reason why the ID of the asynchronous thread fails to be generated. If the ID is successfully generated, no value is returned for this parameter.
      shared_ptr<string> message_ {};
      // The ID of the asynchronous thread. You can call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. The parameters are used to update a real-time synchronization task in Data Integration.
      shared_ptr<int64_t> processId_ {};
      // Indicates whether the ID of the asynchronous thread is generated. Valid values:
      // 
      // *   success: indicates that the ID of the asynchronous thread is generated.
      // *   fail: indicates that the ID of the asynchronous thread fails to be generated. You can view the reason for the failure and troubleshoot the issue based on the reason.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateDISyncTaskConfigForUpdatingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateDISyncTaskConfigForUpdatingResponseBody::Data) };
    inline GenerateDISyncTaskConfigForUpdatingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateDISyncTaskConfigForUpdatingResponseBody::Data) };
    inline GenerateDISyncTaskConfigForUpdatingResponseBody& setData(const GenerateDISyncTaskConfigForUpdatingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateDISyncTaskConfigForUpdatingResponseBody& setData(GenerateDISyncTaskConfigForUpdatingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDISyncTaskConfigForUpdatingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenerateDISyncTaskConfigForUpdatingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information returned for the ID of the asynchronous thread.
    shared_ptr<GenerateDISyncTaskConfigForUpdatingResponseBody::Data> data_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
