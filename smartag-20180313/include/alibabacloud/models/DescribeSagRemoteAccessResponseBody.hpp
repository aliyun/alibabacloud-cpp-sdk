// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGREMOTEACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGREMOTEACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagRemoteAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagRemoteAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RemoteAccesses, remoteAccesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagRemoteAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RemoteAccesses, remoteAccesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSagRemoteAccessResponseBody() = default ;
    DescribeSagRemoteAccessResponseBody(const DescribeSagRemoteAccessResponseBody &) = default ;
    DescribeSagRemoteAccessResponseBody(DescribeSagRemoteAccessResponseBody &&) = default ;
    DescribeSagRemoteAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagRemoteAccessResponseBody() = default ;
    DescribeSagRemoteAccessResponseBody& operator=(const DescribeSagRemoteAccessResponseBody &) = default ;
    DescribeSagRemoteAccessResponseBody& operator=(DescribeSagRemoteAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoteAccesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoteAccesses& obj) { 
        DARABONBA_PTR_TO_JSON(RemoteAccess, remoteAccess_);
      };
      friend void from_json(const Darabonba::Json& j, RemoteAccesses& obj) { 
        DARABONBA_PTR_FROM_JSON(RemoteAccess, remoteAccess_);
      };
      RemoteAccesses() = default ;
      RemoteAccesses(const RemoteAccesses &) = default ;
      RemoteAccesses(RemoteAccesses &&) = default ;
      RemoteAccesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoteAccesses() = default ;
      RemoteAccesses& operator=(const RemoteAccesses &) = default ;
      RemoteAccesses& operator=(RemoteAccesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemoteAccess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoteAccess& obj) { 
          DARABONBA_PTR_TO_JSON(RemoteAccessIp, remoteAccessIp_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        };
        friend void from_json(const Darabonba::Json& j, RemoteAccess& obj) { 
          DARABONBA_PTR_FROM_JSON(RemoteAccessIp, remoteAccessIp_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        };
        RemoteAccess() = default ;
        RemoteAccess(const RemoteAccess &) = default ;
        RemoteAccess(RemoteAccess &&) = default ;
        RemoteAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoteAccess() = default ;
        RemoteAccess& operator=(const RemoteAccess &) = default ;
        RemoteAccess& operator=(RemoteAccess &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->remoteAccessIp_ == nullptr
        && this->serialNumber_ == nullptr; };
        // remoteAccessIp Field Functions 
        bool hasRemoteAccessIp() const { return this->remoteAccessIp_ != nullptr;};
        void deleteRemoteAccessIp() { this->remoteAccessIp_ = nullptr;};
        inline string getRemoteAccessIp() const { DARABONBA_PTR_GET_DEFAULT(remoteAccessIp_, "") };
        inline RemoteAccess& setRemoteAccessIp(string remoteAccessIp) { DARABONBA_PTR_SET_VALUE(remoteAccessIp_, remoteAccessIp) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline RemoteAccess& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      protected:
        shared_ptr<string> remoteAccessIp_ {};
        shared_ptr<string> serialNumber_ {};
      };

      virtual bool empty() const override { return this->remoteAccess_ == nullptr; };
      // remoteAccess Field Functions 
      bool hasRemoteAccess() const { return this->remoteAccess_ != nullptr;};
      void deleteRemoteAccess() { this->remoteAccess_ = nullptr;};
      inline const vector<RemoteAccesses::RemoteAccess> & getRemoteAccess() const { DARABONBA_PTR_GET_CONST(remoteAccess_, vector<RemoteAccesses::RemoteAccess>) };
      inline vector<RemoteAccesses::RemoteAccess> getRemoteAccess() { DARABONBA_PTR_GET(remoteAccess_, vector<RemoteAccesses::RemoteAccess>) };
      inline RemoteAccesses& setRemoteAccess(const vector<RemoteAccesses::RemoteAccess> & remoteAccess) { DARABONBA_PTR_SET_VALUE(remoteAccess_, remoteAccess) };
      inline RemoteAccesses& setRemoteAccess(vector<RemoteAccesses::RemoteAccess> && remoteAccess) { DARABONBA_PTR_SET_RVALUE(remoteAccess_, remoteAccess) };


    protected:
      shared_ptr<vector<RemoteAccesses::RemoteAccess>> remoteAccess_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->remoteAccesses_ == nullptr && this->requestId_ == nullptr && this->smartAGId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSagRemoteAccessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSagRemoteAccessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // remoteAccesses Field Functions 
    bool hasRemoteAccesses() const { return this->remoteAccesses_ != nullptr;};
    void deleteRemoteAccesses() { this->remoteAccesses_ = nullptr;};
    inline const DescribeSagRemoteAccessResponseBody::RemoteAccesses & getRemoteAccesses() const { DARABONBA_PTR_GET_CONST(remoteAccesses_, DescribeSagRemoteAccessResponseBody::RemoteAccesses) };
    inline DescribeSagRemoteAccessResponseBody::RemoteAccesses getRemoteAccesses() { DARABONBA_PTR_GET(remoteAccesses_, DescribeSagRemoteAccessResponseBody::RemoteAccesses) };
    inline DescribeSagRemoteAccessResponseBody& setRemoteAccesses(const DescribeSagRemoteAccessResponseBody::RemoteAccesses & remoteAccesses) { DARABONBA_PTR_SET_VALUE(remoteAccesses_, remoteAccesses) };
    inline DescribeSagRemoteAccessResponseBody& setRemoteAccesses(DescribeSagRemoteAccessResponseBody::RemoteAccesses && remoteAccesses) { DARABONBA_PTR_SET_RVALUE(remoteAccesses_, remoteAccesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagRemoteAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeSagRemoteAccessResponseBody& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSagRemoteAccessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. The 200 error code indicates that the query task is successful.
    shared_ptr<string> code_ {};
    // The error message. The Successful error message indicates that the query task is successful.
    shared_ptr<string> message_ {};
    shared_ptr<DescribeSagRemoteAccessResponseBody::RemoteAccesses> remoteAccesses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // Indicates whether the query task is successful. Valid values:
    // 
    // *   **true**: The query task is successful.
    // *   **false**: The query task failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
