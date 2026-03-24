// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAttackEventDetailResponseBody() = default ;
    GetAttackEventDetailResponseBody(const GetAttackEventDetailResponseBody &) = default ;
    GetAttackEventDetailResponseBody(GetAttackEventDetailResponseBody &&) = default ;
    GetAttackEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackEventDetailResponseBody() = default ;
    GetAttackEventDetailResponseBody& operator=(const GetAttackEventDetailResponseBody &) = default ;
    GetAttackEventDetailResponseBody& operator=(GetAttackEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CveBeans, cveBeans_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CveBeans, cveBeans_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
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
      class CveBeans : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CveBeans& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CveBeans& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        CveBeans() = default ;
        CveBeans(const CveBeans &) = default ;
        CveBeans(CveBeans &&) = default ;
        CveBeans(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CveBeans() = default ;
        CveBeans& operator=(const CveBeans &) = default ;
        CveBeans& operator=(CveBeans &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline CveBeans& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CveBeans& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // ID of the CVE vulnerability.
        shared_ptr<string> id_ {};
        // Name of the CVE vulnerability.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->cveBeans_ == nullptr
        && this->payload_ == nullptr; };
      // cveBeans Field Functions 
      bool hasCveBeans() const { return this->cveBeans_ != nullptr;};
      void deleteCveBeans() { this->cveBeans_ = nullptr;};
      inline const vector<Data::CveBeans> & getCveBeans() const { DARABONBA_PTR_GET_CONST(cveBeans_, vector<Data::CveBeans>) };
      inline vector<Data::CveBeans> getCveBeans() { DARABONBA_PTR_GET(cveBeans_, vector<Data::CveBeans>) };
      inline Data& setCveBeans(const vector<Data::CveBeans> & cveBeans) { DARABONBA_PTR_SET_VALUE(cveBeans_, cveBeans) };
      inline Data& setCveBeans(vector<Data::CveBeans> && cveBeans) { DARABONBA_PTR_SET_RVALUE(cveBeans_, cveBeans) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
      inline Data& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    protected:
      // List of CVE vulnerabilities associated with the attack.
      shared_ptr<vector<Data::CveBeans>> cveBeans_ {};
      // Attack payload.
      shared_ptr<string> payload_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAttackEventDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAttackEventDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAttackEventDetailResponseBody::Data) };
    inline GetAttackEventDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAttackEventDetailResponseBody::Data) };
    inline GetAttackEventDetailResponseBody& setData(const GetAttackEventDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAttackEventDetailResponseBody& setData(GetAttackEventDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAttackEventDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAttackEventDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAttackEventDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code, **200** indicates success, any other value indicates failure. The caller can use this field to determine the reason for the failure.
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<GetAttackEventDetailResponseBody::Data> data_ {};
    // HTTP status code of the request result.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Export result prompt message. Fixed value: **success**. Indicates that the export was successful.
    shared_ptr<string> message_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request. It can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Indicates whether this request was successful. Values:
    // - **true**: The API call was successful
    // - **false**: The API call failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
