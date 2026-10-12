// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVELOPERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVELOPERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDeveloperResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeveloperResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeveloperResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDeveloperResponseBody() = default ;
    GetDeveloperResponseBody(const GetDeveloperResponseBody &) = default ;
    GetDeveloperResponseBody(GetDeveloperResponseBody &&) = default ;
    GetDeveloperResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeveloperResponseBody() = default ;
    GetDeveloperResponseBody& operator=(const GetDeveloperResponseBody &) = default ;
    GetDeveloperResponseBody& operator=(GetDeveloperResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(developerId, developerId_);
        DARABONBA_PTR_TO_JSON(portalId, portalId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(developerId, developerId_);
        DARABONBA_PTR_FROM_JSON(portalId, portalId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(username, username_);
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
      virtual bool empty() const override { return this->developerId_ == nullptr
        && this->portalId_ == nullptr && this->status_ == nullptr && this->username_ == nullptr; };
      // developerId Field Functions 
      bool hasDeveloperId() const { return this->developerId_ != nullptr;};
      void deleteDeveloperId() { this->developerId_ = nullptr;};
      inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
      inline Data& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


      // portalId Field Functions 
      bool hasPortalId() const { return this->portalId_ != nullptr;};
      void deletePortalId() { this->portalId_ = nullptr;};
      inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
      inline Data& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Data& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The developer ID. This ID can be used to identify the developer in API operations such as SetHiMarketDeveloperStatus and DeleteHiMarketDeveloper.
      shared_ptr<string> developerId_ {};
      // The ID of the portal to which the developer belongs. This ID can be used to identify the portal in API operations such as GetPortal, UpdatePortal, and DeletePortal.
      shared_ptr<string> portalId_ {};
      // The developer status. Valid values: PENDING, APPROVED, and REJECTED.
      shared_ptr<string> status_ {};
      // The logon username of the developer.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeveloperResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeveloperResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeveloperResponseBody::Data) };
    inline GetDeveloperResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeveloperResponseBody::Data) };
    inline GetDeveloperResponseBody& setData(const GetDeveloperResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeveloperResponseBody& setData(GetDeveloperResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeveloperResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeveloperResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetDeveloperResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
