// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppAttemptLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppAttemptLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppAttemptLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppAttemptLogResponseBody() = default ;
    GetSparkAppAttemptLogResponseBody(const GetSparkAppAttemptLogResponseBody &) = default ;
    GetSparkAppAttemptLogResponseBody(GetSparkAppAttemptLogResponseBody &&) = default ;
    GetSparkAppAttemptLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppAttemptLogResponseBody() = default ;
    GetSparkAppAttemptLogResponseBody& operator=(const GetSparkAppAttemptLogResponseBody &) = default ;
    GetSparkAppAttemptLogResponseBody& operator=(GetSparkAppAttemptLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(LogContent, logContent_);
        DARABONBA_PTR_TO_JSON(LogSize, logSize_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
        DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->DBClusterId_ == nullptr && this->logContent_ == nullptr && this->logSize_ == nullptr && this->message_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // logContent Field Functions 
      bool hasLogContent() const { return this->logContent_ != nullptr;};
      void deleteLogContent() { this->logContent_ = nullptr;};
      inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
      inline Data& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


      // logSize Field Functions 
      bool hasLogSize() const { return this->logSize_ != nullptr;};
      void deleteLogSize() { this->logSize_ = nullptr;};
      inline int32_t getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0) };
      inline Data& setLogSize(int32_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
      shared_ptr<string> DBClusterId_ {};
      // The content of the log.
      shared_ptr<string> logContent_ {};
      // The number of log entries. A value of 0 indicates that no valid logs are returned.
      shared_ptr<int32_t> logSize_ {};
      // The alert message returned for the request, such as task execution failure or insufficient resources. If no alert occurs, null is returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkAppAttemptLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkAppAttemptLogResponseBody::Data) };
    inline GetSparkAppAttemptLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkAppAttemptLogResponseBody::Data) };
    inline GetSparkAppAttemptLogResponseBody& setData(const GetSparkAppAttemptLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppAttemptLogResponseBody& setData(GetSparkAppAttemptLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppAttemptLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried log.
    shared_ptr<GetSparkAppAttemptLogResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
