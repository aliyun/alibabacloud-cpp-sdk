// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEEXPIREDPREPAIDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEEXPIREDPREPAIDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ReleaseExpiredPrepaidInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseExpiredPrepaidInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Class, class_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseExpiredPrepaidInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Class, class_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReleaseExpiredPrepaidInstanceResponseBody() = default ;
    ReleaseExpiredPrepaidInstanceResponseBody(const ReleaseExpiredPrepaidInstanceResponseBody &) = default ;
    ReleaseExpiredPrepaidInstanceResponseBody(ReleaseExpiredPrepaidInstanceResponseBody &&) = default ;
    ReleaseExpiredPrepaidInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseExpiredPrepaidInstanceResponseBody() = default ;
    ReleaseExpiredPrepaidInstanceResponseBody& operator=(const ReleaseExpiredPrepaidInstanceResponseBody &) = default ;
    ReleaseExpiredPrepaidInstanceResponseBody& operator=(ReleaseExpiredPrepaidInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(InstanceResults, instanceResults_);
        DARABONBA_PTR_TO_JSON(ReleaseResult, releaseResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(InstanceResults, instanceResults_);
        DARABONBA_PTR_FROM_JSON(ReleaseResult, releaseResult_);
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
      class InstanceResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceResults& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceResults& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        InstanceResults() = default ;
        InstanceResults(const InstanceResults &) = default ;
        InstanceResults(InstanceResults &&) = default ;
        InstanceResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceResults() = default ;
        InstanceResults& operator=(const InstanceResults &) = default ;
        InstanceResults& operator=(InstanceResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->success_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline InstanceResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the operation is successful.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instanceResults_ == nullptr && this->releaseResult_ == nullptr; };
      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // instanceResults Field Functions 
      bool hasInstanceResults() const { return this->instanceResults_ != nullptr;};
      void deleteInstanceResults() { this->instanceResults_ = nullptr;};
      inline const vector<Data::InstanceResults> & getInstanceResults() const { DARABONBA_PTR_GET_CONST(instanceResults_, vector<Data::InstanceResults>) };
      inline vector<Data::InstanceResults> getInstanceResults() { DARABONBA_PTR_GET(instanceResults_, vector<Data::InstanceResults>) };
      inline Data& setInstanceResults(const vector<Data::InstanceResults> & instanceResults) { DARABONBA_PTR_SET_VALUE(instanceResults_, instanceResults) };
      inline Data& setInstanceResults(vector<Data::InstanceResults> && instanceResults) { DARABONBA_PTR_SET_RVALUE(instanceResults_, instanceResults) };


      // releaseResult Field Functions 
      bool hasReleaseResult() const { return this->releaseResult_ != nullptr;};
      void deleteReleaseResult() { this->releaseResult_ = nullptr;};
      inline bool getReleaseResult() const { DARABONBA_PTR_GET_DEFAULT(releaseResult_, false) };
      inline Data& setReleaseResult(bool releaseResult) { DARABONBA_PTR_SET_VALUE(releaseResult_, releaseResult) };


    protected:
      // **[Deprecated]** The field is deprecated.
      shared_ptr<string> hostId_ {};
      // The list of instance results.
      shared_ptr<vector<Data::InstanceResults>> instanceResults_ {};
      // Indicates whether the release operation is successful.
      shared_ptr<bool> releaseResult_ {};
    };

    virtual bool empty() const override { return this->class_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // class Field Functions 
    bool hasClass() const { return this->class_ != nullptr;};
    void deleteClass() { this->class_ = nullptr;};
    inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReleaseExpiredPrepaidInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReleaseExpiredPrepaidInstanceResponseBody::Data) };
    inline ReleaseExpiredPrepaidInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReleaseExpiredPrepaidInstanceResponseBody::Data) };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setData(const ReleaseExpiredPrepaidInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setData(ReleaseExpiredPrepaidInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReleaseExpiredPrepaidInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // **[Deprecated]** The field is deprecated.
    shared_ptr<string> class_ {};
    // The error code returned when the call fails. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ReleaseExpiredPrepaidInstanceResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
