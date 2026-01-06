// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class RunCloudBenchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCloudBenchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RunCloudBenchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RunCloudBenchTaskResponseBody() = default ;
    RunCloudBenchTaskResponseBody(const RunCloudBenchTaskResponseBody &) = default ;
    RunCloudBenchTaskResponseBody(RunCloudBenchTaskResponseBody &&) = default ;
    RunCloudBenchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCloudBenchTaskResponseBody() = default ;
    RunCloudBenchTaskResponseBody& operator=(const RunCloudBenchTaskResponseBody &) = default ;
    RunCloudBenchTaskResponseBody& operator=(RunCloudBenchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PreCheckItem, preCheckItem_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PreCheckItem, preCheckItem_);
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
      class PreCheckItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckItem& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PreCheckItem() = default ;
        PreCheckItem(const PreCheckItem &) = default ;
        PreCheckItem(PreCheckItem &&) = default ;
        PreCheckItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckItem() = default ;
        PreCheckItem& operator=(const PreCheckItem &) = default ;
        PreCheckItem& operator=(PreCheckItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->status_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline PreCheckItem& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
        inline PreCheckItem& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PreCheckItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PreCheckItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline PreCheckItem& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PreCheckItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The HTTP status code returned.
        shared_ptr<int32_t> code_ {};
        // The detailed information of the check item.
        shared_ptr<string> details_ {};
        // The returned message.
        // 
        // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
        shared_ptr<string> message_ {};
        // The name of the check item. Valid values:
        // 
        // * **SqlArchiveStatusChecker**: checks whether SQL Explorer is available.
        // * **BenchClientEnvChecker**: checks whether the runtime environment for programs on the stress testing client is available.
        // * **SpecChecker**: checks whether the destination instance type and the instance type of the stress testing client support this API operation.
        // * **SourceInstanceChecker**: checks whether the account of the source instance is available and whether the source instance is connected to the destination instance.
        // * **BenchTargetChecker**: checks whether the account of the destination instance is available and whether the source instance is connected to the destination instance.
        shared_ptr<string> name_ {};
        // The sequence number of the check item. Valid values: **0** to **10**.
        shared_ptr<int32_t> order_ {};
        // The status of the task. Valid values:
        // 
        // *   **SUCCESS**: The task is successful.
        // *   **IGNORED**: The task is ignored.
        // *   **RUNNING**: The task is running.
        // *   **EXCEPTION**: An error occurred.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->preCheckItem_ == nullptr; };
      // preCheckItem Field Functions 
      bool hasPreCheckItem() const { return this->preCheckItem_ != nullptr;};
      void deletePreCheckItem() { this->preCheckItem_ = nullptr;};
      inline const vector<Data::PreCheckItem> & getPreCheckItem() const { DARABONBA_PTR_GET_CONST(preCheckItem_, vector<Data::PreCheckItem>) };
      inline vector<Data::PreCheckItem> getPreCheckItem() { DARABONBA_PTR_GET(preCheckItem_, vector<Data::PreCheckItem>) };
      inline Data& setPreCheckItem(const vector<Data::PreCheckItem> & preCheckItem) { DARABONBA_PTR_SET_VALUE(preCheckItem_, preCheckItem) };
      inline Data& setPreCheckItem(vector<Data::PreCheckItem> && preCheckItem) { DARABONBA_PTR_SET_RVALUE(preCheckItem_, preCheckItem) };


    protected:
      shared_ptr<vector<Data::PreCheckItem>> preCheckItem_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunCloudBenchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RunCloudBenchTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RunCloudBenchTaskResponseBody::Data) };
    inline RunCloudBenchTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RunCloudBenchTaskResponseBody::Data) };
    inline RunCloudBenchTaskResponseBody& setData(const RunCloudBenchTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RunCloudBenchTaskResponseBody& setData(RunCloudBenchTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunCloudBenchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCloudBenchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline RunCloudBenchTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information, including the error codes and the number of returned entries.
    shared_ptr<RunCloudBenchTaskResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
