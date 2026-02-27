// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListDelegatedServicesForAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedServicesForAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelegatedServices, delegatedServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedServicesForAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegatedServices, delegatedServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDelegatedServicesForAccountResponseBody() = default ;
    ListDelegatedServicesForAccountResponseBody(const ListDelegatedServicesForAccountResponseBody &) = default ;
    ListDelegatedServicesForAccountResponseBody(ListDelegatedServicesForAccountResponseBody &&) = default ;
    ListDelegatedServicesForAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedServicesForAccountResponseBody() = default ;
    ListDelegatedServicesForAccountResponseBody& operator=(const ListDelegatedServicesForAccountResponseBody &) = default ;
    ListDelegatedServicesForAccountResponseBody& operator=(ListDelegatedServicesForAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DelegatedServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DelegatedServices& obj) { 
        DARABONBA_PTR_TO_JSON(DelegatedService, delegatedService_);
      };
      friend void from_json(const Darabonba::Json& j, DelegatedServices& obj) { 
        DARABONBA_PTR_FROM_JSON(DelegatedService, delegatedService_);
      };
      DelegatedServices() = default ;
      DelegatedServices(const DelegatedServices &) = default ;
      DelegatedServices(DelegatedServices &&) = default ;
      DelegatedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DelegatedServices() = default ;
      DelegatedServices& operator=(const DelegatedServices &) = default ;
      DelegatedServices& operator=(DelegatedServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DelegatedService : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DelegatedService& obj) { 
          DARABONBA_PTR_TO_JSON(DelegationEnabledTime, delegationEnabledTime_);
          DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DelegatedService& obj) { 
          DARABONBA_PTR_FROM_JSON(DelegationEnabledTime, delegationEnabledTime_);
          DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DelegatedService() = default ;
        DelegatedService(const DelegatedService &) = default ;
        DelegatedService(DelegatedService &&) = default ;
        DelegatedService(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DelegatedService() = default ;
        DelegatedService& operator=(const DelegatedService &) = default ;
        DelegatedService& operator=(DelegatedService &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->delegationEnabledTime_ == nullptr
        && this->servicePrincipal_ == nullptr && this->status_ == nullptr; };
        // delegationEnabledTime Field Functions 
        bool hasDelegationEnabledTime() const { return this->delegationEnabledTime_ != nullptr;};
        void deleteDelegationEnabledTime() { this->delegationEnabledTime_ = nullptr;};
        inline string getDelegationEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(delegationEnabledTime_, "") };
        inline DelegatedService& setDelegationEnabledTime(string delegationEnabledTime) { DARABONBA_PTR_SET_VALUE(delegationEnabledTime_, delegationEnabledTime) };


        // servicePrincipal Field Functions 
        bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
        void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
        inline string getServicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
        inline DelegatedService& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DelegatedService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> delegationEnabledTime_ {};
        shared_ptr<string> servicePrincipal_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->delegatedService_ == nullptr; };
      // delegatedService Field Functions 
      bool hasDelegatedService() const { return this->delegatedService_ != nullptr;};
      void deleteDelegatedService() { this->delegatedService_ = nullptr;};
      inline const vector<DelegatedServices::DelegatedService> & getDelegatedService() const { DARABONBA_PTR_GET_CONST(delegatedService_, vector<DelegatedServices::DelegatedService>) };
      inline vector<DelegatedServices::DelegatedService> getDelegatedService() { DARABONBA_PTR_GET(delegatedService_, vector<DelegatedServices::DelegatedService>) };
      inline DelegatedServices& setDelegatedService(const vector<DelegatedServices::DelegatedService> & delegatedService) { DARABONBA_PTR_SET_VALUE(delegatedService_, delegatedService) };
      inline DelegatedServices& setDelegatedService(vector<DelegatedServices::DelegatedService> && delegatedService) { DARABONBA_PTR_SET_RVALUE(delegatedService_, delegatedService) };


    protected:
      shared_ptr<vector<DelegatedServices::DelegatedService>> delegatedService_ {};
    };

    virtual bool empty() const override { return this->delegatedServices_ == nullptr
        && this->requestId_ == nullptr; };
    // delegatedServices Field Functions 
    bool hasDelegatedServices() const { return this->delegatedServices_ != nullptr;};
    void deleteDelegatedServices() { this->delegatedServices_ = nullptr;};
    inline const ListDelegatedServicesForAccountResponseBody::DelegatedServices & getDelegatedServices() const { DARABONBA_PTR_GET_CONST(delegatedServices_, ListDelegatedServicesForAccountResponseBody::DelegatedServices) };
    inline ListDelegatedServicesForAccountResponseBody::DelegatedServices getDelegatedServices() { DARABONBA_PTR_GET(delegatedServices_, ListDelegatedServicesForAccountResponseBody::DelegatedServices) };
    inline ListDelegatedServicesForAccountResponseBody& setDelegatedServices(const ListDelegatedServicesForAccountResponseBody::DelegatedServices & delegatedServices) { DARABONBA_PTR_SET_VALUE(delegatedServices_, delegatedServices) };
    inline ListDelegatedServicesForAccountResponseBody& setDelegatedServices(ListDelegatedServicesForAccountResponseBody::DelegatedServices && delegatedServices) { DARABONBA_PTR_SET_RVALUE(delegatedServices_, delegatedServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDelegatedServicesForAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListDelegatedServicesForAccountResponseBody::DelegatedServices> delegatedServices_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
