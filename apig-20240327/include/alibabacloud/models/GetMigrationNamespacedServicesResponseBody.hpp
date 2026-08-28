// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONNAMESPACEDSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONNAMESPACEDSERVICESRESPONSEBODY_HPP_
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
  class GetMigrationNamespacedServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationNamespacedServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationNamespacedServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMigrationNamespacedServicesResponseBody() = default ;
    GetMigrationNamespacedServicesResponseBody(const GetMigrationNamespacedServicesResponseBody &) = default ;
    GetMigrationNamespacedServicesResponseBody(GetMigrationNamespacedServicesResponseBody &&) = default ;
    GetMigrationNamespacedServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationNamespacedServicesResponseBody() = default ;
    GetMigrationNamespacedServicesResponseBody& operator=(const GetMigrationNamespacedServicesResponseBody &) = default ;
    GetMigrationNamespacedServicesResponseBody& operator=(GetMigrationNamespacedServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(namespacedServices, namespacedServices_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(namespacedServices, namespacedServices_);
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
      class NamespacedServices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NamespacedServices& obj) { 
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(services, services_);
        };
        friend void from_json(const Darabonba::Json& j, NamespacedServices& obj) { 
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(services, services_);
        };
        NamespacedServices() = default ;
        NamespacedServices(const NamespacedServices &) = default ;
        NamespacedServices(NamespacedServices &&) = default ;
        NamespacedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NamespacedServices() = default ;
        NamespacedServices& operator=(const NamespacedServices &) = default ;
        NamespacedServices& operator=(NamespacedServices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Services : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Services& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(slbId, slbId_);
          };
          friend void from_json(const Darabonba::Json& j, Services& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(slbId, slbId_);
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
        && this->slbId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // slbId Field Functions 
          bool hasSlbId() const { return this->slbId_ != nullptr;};
          void deleteSlbId() { this->slbId_ = nullptr;};
          inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
          inline Services& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> slbId_ {};
        };

        virtual bool empty() const override { return this->namespace_ == nullptr
        && this->services_ == nullptr; };
        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline NamespacedServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // services Field Functions 
        bool hasServices() const { return this->services_ != nullptr;};
        void deleteServices() { this->services_ = nullptr;};
        inline const vector<NamespacedServices::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<NamespacedServices::Services>) };
        inline vector<NamespacedServices::Services> getServices() { DARABONBA_PTR_GET(services_, vector<NamespacedServices::Services>) };
        inline NamespacedServices& setServices(const vector<NamespacedServices::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
        inline NamespacedServices& setServices(vector<NamespacedServices::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


      protected:
        shared_ptr<string> namespace_ {};
        shared_ptr<vector<NamespacedServices::Services>> services_ {};
      };

      virtual bool empty() const override { return this->namespacedServices_ == nullptr; };
      // namespacedServices Field Functions 
      bool hasNamespacedServices() const { return this->namespacedServices_ != nullptr;};
      void deleteNamespacedServices() { this->namespacedServices_ = nullptr;};
      inline const vector<Data::NamespacedServices> & getNamespacedServices() const { DARABONBA_PTR_GET_CONST(namespacedServices_, vector<Data::NamespacedServices>) };
      inline vector<Data::NamespacedServices> getNamespacedServices() { DARABONBA_PTR_GET(namespacedServices_, vector<Data::NamespacedServices>) };
      inline Data& setNamespacedServices(const vector<Data::NamespacedServices> & namespacedServices) { DARABONBA_PTR_SET_VALUE(namespacedServices_, namespacedServices) };
      inline Data& setNamespacedServices(vector<Data::NamespacedServices> && namespacedServices) { DARABONBA_PTR_SET_RVALUE(namespacedServices_, namespacedServices) };


    protected:
      shared_ptr<vector<Data::NamespacedServices>> namespacedServices_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMigrationNamespacedServicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMigrationNamespacedServicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMigrationNamespacedServicesResponseBody::Data) };
    inline GetMigrationNamespacedServicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMigrationNamespacedServicesResponseBody::Data) };
    inline GetMigrationNamespacedServicesResponseBody& setData(const GetMigrationNamespacedServicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMigrationNamespacedServicesResponseBody& setData(GetMigrationNamespacedServicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMigrationNamespacedServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMigrationNamespacedServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetMigrationNamespacedServicesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
