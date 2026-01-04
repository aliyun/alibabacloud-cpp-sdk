// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcEndpointServicesByEndUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultPolicyDocument, defaultPolicyDocument_);
        DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(SupportPolicy, supportPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultPolicyDocument, defaultPolicyDocument_);
        DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(SupportPolicy, supportPolicy_);
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
      virtual bool empty() const override { return this->defaultPolicyDocument_ == nullptr
        && this->serviceDomain_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->supportPolicy_ == nullptr; };
      // defaultPolicyDocument Field Functions 
      bool hasDefaultPolicyDocument() const { return this->defaultPolicyDocument_ != nullptr;};
      void deleteDefaultPolicyDocument() { this->defaultPolicyDocument_ = nullptr;};
      inline string getDefaultPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(defaultPolicyDocument_, "") };
      inline Services& setDefaultPolicyDocument(string defaultPolicyDocument) { DARABONBA_PTR_SET_VALUE(defaultPolicyDocument_, defaultPolicyDocument) };


      // serviceDomain Field Functions 
      bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
      void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
      inline string getServiceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
      inline Services& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Services& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // supportPolicy Field Functions 
      bool hasSupportPolicy() const { return this->supportPolicy_ != nullptr;};
      void deleteSupportPolicy() { this->supportPolicy_ = nullptr;};
      inline bool getSupportPolicy() const { DARABONBA_PTR_GET_DEFAULT(supportPolicy_, false) };
      inline Services& setSupportPolicy(bool supportPolicy) { DARABONBA_PTR_SET_VALUE(supportPolicy_, supportPolicy) };


    protected:
      // The default access policy.
      shared_ptr<string> defaultPolicyDocument_ {};
      // The domain name of the cloud service to which the endpoint service belongs.
      shared_ptr<string> serviceDomain_ {};
      // The ID of the endpoint service.
      shared_ptr<string> serviceId_ {};
      // The name of the endpoint service.
      shared_ptr<string> serviceName_ {};
      // Indicate whether the endpoint service supports the access policy. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<bool> supportPolicy_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListVpcEndpointServicesByEndUserResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListVpcEndpointServicesByEndUserResponseBody::Services>) };
    inline vector<ListVpcEndpointServicesByEndUserResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListVpcEndpointServicesByEndUserResponseBody::Services>) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(const vector<ListVpcEndpointServicesByEndUserResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(vector<ListVpcEndpointServicesByEndUserResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int64_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If **NextToken** is returned, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of entries returned.
    shared_ptr<vector<ListVpcEndpointServicesByEndUserResponseBody::Services>> services_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
