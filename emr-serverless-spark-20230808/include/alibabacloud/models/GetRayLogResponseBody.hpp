// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRAYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRayLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRayLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRayLogResponseBody() = default ;
    GetRayLogResponseBody(const GetRayLogResponseBody &) = default ;
    GetRayLogResponseBody(GetRayLogResponseBody &&) = default ;
    GetRayLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayLogResponseBody() = default ;
    GetRayLogResponseBody& operator=(const GetRayLogResponseBody &) = default ;
    GetRayLogResponseBody& operator=(GetRayLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accessUrl, accessUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accessUrl, accessUrl_);
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
      virtual bool empty() const override { return this->accessUrl_ == nullptr; };
      // accessUrl Field Functions 
      bool hasAccessUrl() const { return this->accessUrl_ != nullptr;};
      void deleteAccessUrl() { this->accessUrl_ = nullptr;};
      inline string getAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(accessUrl_, "") };
      inline Data& setAccessUrl(string accessUrl) { DARABONBA_PTR_SET_VALUE(accessUrl_, accessUrl) };


    protected:
      // The file download URL.
      shared_ptr<string> accessUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRayLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRayLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRayLogResponseBody::Data) };
    inline GetRayLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRayLogResponseBody::Data) };
    inline GetRayLogResponseBody& setData(const GetRayLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRayLogResponseBody& setData(GetRayLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRayLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRayLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. A value of 1000000 indicates a successful request. Other values indicate a failed request. You can view the specific error description in the message parameter.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetRayLogResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
