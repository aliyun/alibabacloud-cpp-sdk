// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDMODELPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDMODELPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListPredefinedModelProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListPredefinedModelProvidersResponseBody() = default ;
    ListPredefinedModelProvidersResponseBody(const ListPredefinedModelProvidersResponseBody &) = default ;
    ListPredefinedModelProvidersResponseBody(ListPredefinedModelProvidersResponseBody &&) = default ;
    ListPredefinedModelProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedModelProvidersResponseBody() = default ;
    ListPredefinedModelProvidersResponseBody& operator=(const ListPredefinedModelProvidersResponseBody &) = default ;
    ListPredefinedModelProvidersResponseBody& operator=(ListPredefinedModelProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(defaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_TO_JSON(defaultProtocol, defaultProtocol_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(providerType, providerType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(defaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_FROM_JSON(defaultProtocol, defaultProtocol_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(providerType, providerType_);
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
      virtual bool empty() const override { return this->defaultEndpoint_ == nullptr
        && this->defaultProtocol_ == nullptr && this->displayName_ == nullptr && this->providerType_ == nullptr; };
      // defaultEndpoint Field Functions 
      bool hasDefaultEndpoint() const { return this->defaultEndpoint_ != nullptr;};
      void deleteDefaultEndpoint() { this->defaultEndpoint_ = nullptr;};
      inline string getDefaultEndpoint() const { DARABONBA_PTR_GET_DEFAULT(defaultEndpoint_, "") };
      inline Data& setDefaultEndpoint(string defaultEndpoint) { DARABONBA_PTR_SET_VALUE(defaultEndpoint_, defaultEndpoint) };


      // defaultProtocol Field Functions 
      bool hasDefaultProtocol() const { return this->defaultProtocol_ != nullptr;};
      void deleteDefaultProtocol() { this->defaultProtocol_ = nullptr;};
      inline string getDefaultProtocol() const { DARABONBA_PTR_GET_DEFAULT(defaultProtocol_, "") };
      inline Data& setDefaultProtocol(string defaultProtocol) { DARABONBA_PTR_SET_VALUE(defaultProtocol_, defaultProtocol) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // providerType Field Functions 
      bool hasProviderType() const { return this->providerType_ != nullptr;};
      void deleteProviderType() { this->providerType_ = nullptr;};
      inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
      inline Data& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    protected:
      shared_ptr<string> defaultEndpoint_ {};
      shared_ptr<string> defaultProtocol_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> providerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPredefinedModelProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListPredefinedModelProvidersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListPredefinedModelProvidersResponseBody::Data>) };
    inline vector<ListPredefinedModelProvidersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListPredefinedModelProvidersResponseBody::Data>) };
    inline ListPredefinedModelProvidersResponseBody& setData(const vector<ListPredefinedModelProvidersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPredefinedModelProvidersResponseBody& setData(vector<ListPredefinedModelProvidersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPredefinedModelProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPredefinedModelProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPredefinedModelProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPredefinedModelProvidersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListPredefinedModelProvidersResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
