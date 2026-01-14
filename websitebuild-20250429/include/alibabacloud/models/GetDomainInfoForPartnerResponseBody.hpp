// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetDomainInfoForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDomainInfoForPartnerResponseBody() = default ;
    GetDomainInfoForPartnerResponseBody(const GetDomainInfoForPartnerResponseBody &) = default ;
    GetDomainInfoForPartnerResponseBody(GetDomainInfoForPartnerResponseBody &&) = default ;
    GetDomainInfoForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainInfoForPartnerResponseBody() = default ;
    GetDomainInfoForPartnerResponseBody& operator=(const GetDomainInfoForPartnerResponseBody &) = default ;
    GetDomainInfoForPartnerResponseBody& operator=(GetDomainInfoForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(NameServers, nameServers_);
        DARABONBA_PTR_TO_JSON(Ownership, ownership_);
        DARABONBA_PTR_TO_JSON(Registrar, registrar_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(NameServers, nameServers_);
        DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
        DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
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
      class Ownership : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ownership& obj) { 
          DARABONBA_PTR_TO_JSON(Account, account_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
        };
        friend void from_json(const Darabonba::Json& j, Ownership& obj) { 
          DARABONBA_PTR_FROM_JSON(Account, account_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
        };
        Ownership() = default ;
        Ownership(const Ownership &) = default ;
        Ownership(Ownership &&) = default ;
        Ownership(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ownership() = default ;
        Ownership& operator=(const Ownership &) = default ;
        Ownership& operator=(Ownership &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->account_ == nullptr
        && this->provider_ == nullptr; };
        // account Field Functions 
        bool hasAccount() const { return this->account_ != nullptr;};
        void deleteAccount() { this->account_ = nullptr;};
        inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
        inline Ownership& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline Ownership& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      protected:
        shared_ptr<string> account_ {};
        shared_ptr<string> provider_ {};
      };

      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->nameServers_ == nullptr && this->ownership_ == nullptr && this->registrar_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // nameServers Field Functions 
      bool hasNameServers() const { return this->nameServers_ != nullptr;};
      void deleteNameServers() { this->nameServers_ = nullptr;};
      inline string getNameServers() const { DARABONBA_PTR_GET_DEFAULT(nameServers_, "") };
      inline Data& setNameServers(string nameServers) { DARABONBA_PTR_SET_VALUE(nameServers_, nameServers) };


      // ownership Field Functions 
      bool hasOwnership() const { return this->ownership_ != nullptr;};
      void deleteOwnership() { this->ownership_ = nullptr;};
      inline const Data::Ownership & getOwnership() const { DARABONBA_PTR_GET_CONST(ownership_, Data::Ownership) };
      inline Data::Ownership getOwnership() { DARABONBA_PTR_GET(ownership_, Data::Ownership) };
      inline Data& setOwnership(const Data::Ownership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
      inline Data& setOwnership(Data::Ownership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


      // registrar Field Functions 
      bool hasRegistrar() const { return this->registrar_ != nullptr;};
      void deleteRegistrar() { this->registrar_ = nullptr;};
      inline string getRegistrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
      inline Data& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


    protected:
      shared_ptr<string> domainName_ {};
      shared_ptr<string> nameServers_ {};
      shared_ptr<Data::Ownership> ownership_ {};
      shared_ptr<string> registrar_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDomainInfoForPartnerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDomainInfoForPartnerResponseBody::Data) };
    inline GetDomainInfoForPartnerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDomainInfoForPartnerResponseBody::Data) };
    inline GetDomainInfoForPartnerResponseBody& setData(const GetDomainInfoForPartnerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDomainInfoForPartnerResponseBody& setData(GetDomainInfoForPartnerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainInfoForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDomainInfoForPartnerResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
