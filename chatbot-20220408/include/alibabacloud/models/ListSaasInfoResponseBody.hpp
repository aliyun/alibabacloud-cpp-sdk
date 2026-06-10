// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaasToken, saasToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaasToken, saasToken_);
    };
    ListSaasInfoResponseBody() = default ;
    ListSaasInfoResponseBody(const ListSaasInfoResponseBody &) = default ;
    ListSaasInfoResponseBody(ListSaasInfoResponseBody &&) = default ;
    ListSaasInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasInfoResponseBody() = default ;
    ListSaasInfoResponseBody& operator=(const ListSaasInfoResponseBody &) = default ;
    ListSaasInfoResponseBody& operator=(ListSaasInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ServiceUrl, serviceUrl_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ServiceUrl, serviceUrl_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->enName_ == nullptr && this->name_ == nullptr && this->serviceUrl_ == nullptr && this->url_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline Data& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceUrl Field Functions 
      bool hasServiceUrl() const { return this->serviceUrl_ != nullptr;};
      void deleteServiceUrl() { this->serviceUrl_ = nullptr;};
      inline string getServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceUrl_, "") };
      inline Data& setServiceUrl(string serviceUrl) { DARABONBA_PTR_SET_VALUE(serviceUrl_, serviceUrl) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The unique identifier of the SaaS atomic page. Use this code to reference the page and query its information.
      shared_ptr<string> code_ {};
      // The English name of the atomic page.
      shared_ptr<string> enName_ {};
      // The Chinese name of the atomic page.
      shared_ptr<string> name_ {};
      // The URL to embed the SaaS page in an iframe.
      shared_ptr<string> serviceUrl_ {};
      // The URL of the atomic page.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->saasToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSaasInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSaasInfoResponseBody::Data>) };
    inline vector<ListSaasInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSaasInfoResponseBody::Data>) };
    inline ListSaasInfoResponseBody& setData(const vector<ListSaasInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSaasInfoResponseBody& setData(vector<ListSaasInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSaasInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saasToken Field Functions 
    bool hasSaasToken() const { return this->saasToken_ != nullptr;};
    void deleteSaasToken() { this->saasToken_ = nullptr;};
    inline string getSaasToken() const { DARABONBA_PTR_GET_DEFAULT(saasToken_, "") };
    inline ListSaasInfoResponseBody& setSaasToken(string saasToken) { DARABONBA_PTR_SET_VALUE(saasToken_, saasToken) };


  protected:
    // A list of SaaS integrations.
    shared_ptr<vector<ListSaasInfoResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The SaaS integration token issued by Chatbot.
    shared_ptr<string> saasToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
