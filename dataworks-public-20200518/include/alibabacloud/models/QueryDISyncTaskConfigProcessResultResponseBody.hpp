// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryDISyncTaskConfigProcessResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDISyncTaskConfigProcessResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDISyncTaskConfigProcessResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDISyncTaskConfigProcessResultResponseBody() = default ;
    QueryDISyncTaskConfigProcessResultResponseBody(const QueryDISyncTaskConfigProcessResultResponseBody &) = default ;
    QueryDISyncTaskConfigProcessResultResponseBody(QueryDISyncTaskConfigProcessResultResponseBody &&) = default ;
    QueryDISyncTaskConfigProcessResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDISyncTaskConfigProcessResultResponseBody() = default ;
    QueryDISyncTaskConfigProcessResultResponseBody& operator=(const QueryDISyncTaskConfigProcessResultResponseBody &) = default ;
    QueryDISyncTaskConfigProcessResultResponseBody& operator=(QueryDISyncTaskConfigProcessResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskContent, taskContent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskContent, taskContent_);
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
        && this->status_ == nullptr && this->taskContent_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskContent Field Functions 
      bool hasTaskContent() const { return this->taskContent_ != nullptr;};
      void deleteTaskContent() { this->taskContent_ = nullptr;};
      inline string getTaskContent() const { DARABONBA_PTR_GET_DEFAULT(taskContent_, "") };
      inline Data& setTaskContent(string taskContent) { DARABONBA_PTR_SET_VALUE(taskContent_, taskContent) };


    protected:
      // The reason why the parameters fail to be obtained. If the parameters are obtained, the value null is returned.
      shared_ptr<string> message_ {};
      // Indicates whether the parameters are obtained. Valid values:
      // 
      // *   success: The parameters are obtained.
      // *   fail: The parameters fail to be obtained. You can view the reason for the failure and troubleshoot the issue based on the reason.
      shared_ptr<string> status_ {};
      // The parameters that are obtained. The parameters are used as the request parameters of the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) or [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to create or update a real-time synchronization task in Data Integration.
      shared_ptr<string> taskContent_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDISyncTaskConfigProcessResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDISyncTaskConfigProcessResultResponseBody::Data) };
    inline QueryDISyncTaskConfigProcessResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDISyncTaskConfigProcessResultResponseBody::Data) };
    inline QueryDISyncTaskConfigProcessResultResponseBody& setData(const QueryDISyncTaskConfigProcessResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDISyncTaskConfigProcessResultResponseBody& setData(QueryDISyncTaskConfigProcessResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDISyncTaskConfigProcessResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDISyncTaskConfigProcessResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information returned for the parameters that are asynchronously generated and used to create or update a real-time synchronization task in Data Integration.
    shared_ptr<QueryDISyncTaskConfigProcessResultResponseBody::Data> data_ {};
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
