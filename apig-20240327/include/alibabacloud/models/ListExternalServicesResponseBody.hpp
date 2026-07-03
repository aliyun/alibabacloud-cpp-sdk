// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListExternalServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListExternalServicesResponseBody() = default ;
    ListExternalServicesResponseBody(const ListExternalServicesResponseBody &) = default ;
    ListExternalServicesResponseBody(ListExternalServicesResponseBody &&) = default ;
    ListExternalServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalServicesResponseBody() = default ;
    ListExternalServicesResponseBody& operator=(const ListExternalServicesResponseBody &) = default ;
    ListExternalServicesResponseBody& operator=(ListExternalServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(namespaceShowName, namespaceShowName_);
          DARABONBA_PTR_TO_JSON(services, services_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(namespaceShowName, namespaceShowName_);
          DARABONBA_PTR_FROM_JSON(services, services_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Services : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Services& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(namespace, namespace_);
          };
          friend void from_json(const Darabonba::Json& j, Services& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          };
          Services() = default ;
          Services(const Services &) = default ;
          Services(Services &&) = default ;
          Services(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Services() = default ;
          Services& operator=(const Services &) = default ;
          Services& operator=(Services &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->namespace_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline Services& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        protected:
          // The name.
          shared_ptr<string> name_ {};
          // The namespace.
          shared_ptr<string> namespace_ {};
        };

        virtual bool empty() const override { return this->namespace_ == nullptr
        && this->namespaceShowName_ == nullptr && this->services_ == nullptr; };
        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Items& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // namespaceShowName Field Functions 
        bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
        void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
        inline string getNamespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
        inline Items& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


        // services Field Functions 
        bool hasServices() const { return this->services_ != nullptr;};
        void deleteServices() { this->services_ = nullptr;};
        inline const vector<Items::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<Items::Services>) };
        inline vector<Items::Services> getServices() { DARABONBA_PTR_GET(services_, vector<Items::Services>) };
        inline Items& setServices(const vector<Items::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
        inline Items& setServices(vector<Items::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


      protected:
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The display name of the namespace.
        shared_ptr<string> namespaceShowName_ {};
        // The backend services.
        shared_ptr<vector<Items::Services>> services_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The service information.
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListExternalServicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListExternalServicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListExternalServicesResponseBody::Data) };
    inline ListExternalServicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListExternalServicesResponseBody::Data) };
    inline ListExternalServicesResponseBody& setData(const ListExternalServicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExternalServicesResponseBody& setData(ListExternalServicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExternalServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The list of APIs.
    shared_ptr<ListExternalServicesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
