// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTRESPONSEBODY_HPP_
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
  class ListAvailableHoneypotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableHoneypotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableHoneypotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAvailableHoneypotResponseBody() = default ;
    ListAvailableHoneypotResponseBody(const ListAvailableHoneypotResponseBody &) = default ;
    ListAvailableHoneypotResponseBody(ListAvailableHoneypotResponseBody &&) = default ;
    ListAvailableHoneypotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableHoneypotResponseBody() = default ;
    ListAvailableHoneypotResponseBody& operator=(const ListAvailableHoneypotResponseBody &) = default ;
    ListAvailableHoneypotResponseBody& operator=(ListAvailableHoneypotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageId, honeypotImageId_);
        DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageType, honeypotImageType_);
        DARABONBA_PTR_TO_JSON(HoneypotImageVersion, honeypotImageVersion_);
        DARABONBA_PTR_TO_JSON(Multiports, multiports_);
        DARABONBA_PTR_TO_JSON(Proto, proto_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageId, honeypotImageId_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageType, honeypotImageType_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageVersion, honeypotImageVersion_);
        DARABONBA_PTR_FROM_JSON(Multiports, multiports_);
        DARABONBA_PTR_FROM_JSON(Proto, proto_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
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
      virtual bool empty() const override { return this->honeypotImageDisplayName_ == nullptr
        && this->honeypotImageId_ == nullptr && this->honeypotImageName_ == nullptr && this->honeypotImageType_ == nullptr && this->honeypotImageVersion_ == nullptr && this->multiports_ == nullptr
        && this->proto_ == nullptr && this->servicePort_ == nullptr && this->template_ == nullptr; };
      // honeypotImageDisplayName Field Functions 
      bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
      void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
      inline string getHoneypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
      inline Data& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


      // honeypotImageId Field Functions 
      bool hasHoneypotImageId() const { return this->honeypotImageId_ != nullptr;};
      void deleteHoneypotImageId() { this->honeypotImageId_ = nullptr;};
      inline string getHoneypotImageId() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageId_, "") };
      inline Data& setHoneypotImageId(string honeypotImageId) { DARABONBA_PTR_SET_VALUE(honeypotImageId_, honeypotImageId) };


      // honeypotImageName Field Functions 
      bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
      void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
      inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
      inline Data& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


      // honeypotImageType Field Functions 
      bool hasHoneypotImageType() const { return this->honeypotImageType_ != nullptr;};
      void deleteHoneypotImageType() { this->honeypotImageType_ = nullptr;};
      inline string getHoneypotImageType() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageType_, "") };
      inline Data& setHoneypotImageType(string honeypotImageType) { DARABONBA_PTR_SET_VALUE(honeypotImageType_, honeypotImageType) };


      // honeypotImageVersion Field Functions 
      bool hasHoneypotImageVersion() const { return this->honeypotImageVersion_ != nullptr;};
      void deleteHoneypotImageVersion() { this->honeypotImageVersion_ = nullptr;};
      inline string getHoneypotImageVersion() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageVersion_, "") };
      inline Data& setHoneypotImageVersion(string honeypotImageVersion) { DARABONBA_PTR_SET_VALUE(honeypotImageVersion_, honeypotImageVersion) };


      // multiports Field Functions 
      bool hasMultiports() const { return this->multiports_ != nullptr;};
      void deleteMultiports() { this->multiports_ = nullptr;};
      inline string getMultiports() const { DARABONBA_PTR_GET_DEFAULT(multiports_, "") };
      inline Data& setMultiports(string multiports) { DARABONBA_PTR_SET_VALUE(multiports_, multiports) };


      // proto Field Functions 
      bool hasProto() const { return this->proto_ != nullptr;};
      void deleteProto() { this->proto_ = nullptr;};
      inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
      inline Data& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
      inline Data& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Data& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    protected:
      // The display name of the image.
      shared_ptr<string> honeypotImageDisplayName_ {};
      // The ID of the image.
      shared_ptr<string> honeypotImageId_ {};
      // The name of the image that is used for the honeypot.
      shared_ptr<string> honeypotImageName_ {};
      // The type of the image.
      shared_ptr<string> honeypotImageType_ {};
      // The version of the image.
      shared_ptr<string> honeypotImageVersion_ {};
      // The port that is supported by the honeypot. The value is in the JSON format. Valid values:
      // 
      // *   **log_type**: the log type
      // *   **proto**: the supported protocol
      // *   **description**: the description
      // *   **ports**: the supported ports
      // *   **port_str**: the supported port number of the string type
      // *   **type**: the type
      shared_ptr<string> multiports_ {};
      // The protocol that is supported by the honeypot.
      shared_ptr<string> proto_ {};
      // The service port of the honeypot.
      shared_ptr<string> servicePort_ {};
      // The configuration template of the honeypot.
      shared_ptr<string> template_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAvailableHoneypotResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAvailableHoneypotResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAvailableHoneypotResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAvailableHoneypotResponseBody::Data>) };
    inline vector<ListAvailableHoneypotResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAvailableHoneypotResponseBody::Data>) };
    inline ListAvailableHoneypotResponseBody& setData(const vector<ListAvailableHoneypotResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAvailableHoneypotResponseBody& setData(vector<ListAvailableHoneypotResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAvailableHoneypotResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAvailableHoneypotResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableHoneypotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvailableHoneypotResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The number of images that are used for the honeypot.
    shared_ptr<int32_t> count_ {};
    // An array consisting of the information about the images that are used for the honeypot.
    shared_ptr<vector<ListAvailableHoneypotResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
