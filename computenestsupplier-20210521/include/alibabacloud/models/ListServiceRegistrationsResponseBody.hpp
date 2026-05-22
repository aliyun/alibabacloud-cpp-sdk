// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceRegistrations, serviceRegistrations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceRegistrations, serviceRegistrations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceRegistrationsResponseBody() = default ;
    ListServiceRegistrationsResponseBody(const ListServiceRegistrationsResponseBody &) = default ;
    ListServiceRegistrationsResponseBody(ListServiceRegistrationsResponseBody &&) = default ;
    ListServiceRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRegistrationsResponseBody() = default ;
    ListServiceRegistrationsResponseBody& operator=(const ListServiceRegistrationsResponseBody &) = default ;
    ListServiceRegistrationsResponseBody& operator=(ListServiceRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceRegistrations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceRegistrations& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceRegistrations& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      };
      ServiceRegistrations() = default ;
      ServiceRegistrations(const ServiceRegistrations &) = default ;
      ServiceRegistrations(ServiceRegistrations &&) = default ;
      ServiceRegistrations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceRegistrations() = default ;
      ServiceRegistrations& operator=(const ServiceRegistrations &) = default ;
      ServiceRegistrations& operator=(ServiceRegistrations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->finishTime_ == nullptr && this->registrationId_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline ServiceRegistrations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline ServiceRegistrations& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // registrationId Field Functions 
      bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
      void deleteRegistrationId() { this->registrationId_ = nullptr;};
      inline string getRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
      inline ServiceRegistrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceRegistrations& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceRegistrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline ServiceRegistrations& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    protected:
      // Comment.
      shared_ptr<string> comment_ {};
      // Finish time.
      shared_ptr<string> finishTime_ {};
      // Registration ID.
      shared_ptr<string> registrationId_ {};
      // Service ID.
      shared_ptr<string> serviceId_ {};
      // Registration status. Allowed values:
      // 
      // - Submitted
      // 
      // - Approved
      // 
      // - Rejected
      // 
      // - Canceled
      // 
      // - Executed
      // 
      // - Executed: Executed.
      shared_ptr<string> status_ {};
      // Submit time.
      shared_ptr<string> submitTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceRegistrations_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceRegistrationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceRegistrationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceRegistrations Field Functions 
    bool hasServiceRegistrations() const { return this->serviceRegistrations_ != nullptr;};
    void deleteServiceRegistrations() { this->serviceRegistrations_ = nullptr;};
    inline const vector<ListServiceRegistrationsResponseBody::ServiceRegistrations> & getServiceRegistrations() const { DARABONBA_PTR_GET_CONST(serviceRegistrations_, vector<ListServiceRegistrationsResponseBody::ServiceRegistrations>) };
    inline vector<ListServiceRegistrationsResponseBody::ServiceRegistrations> getServiceRegistrations() { DARABONBA_PTR_GET(serviceRegistrations_, vector<ListServiceRegistrationsResponseBody::ServiceRegistrations>) };
    inline ListServiceRegistrationsResponseBody& setServiceRegistrations(const vector<ListServiceRegistrationsResponseBody::ServiceRegistrations> & serviceRegistrations) { DARABONBA_PTR_SET_VALUE(serviceRegistrations_, serviceRegistrations) };
    inline ListServiceRegistrationsResponseBody& setServiceRegistrations(vector<ListServiceRegistrationsResponseBody::ServiceRegistrations> && serviceRegistrations) { DARABONBA_PTR_SET_RVALUE(serviceRegistrations_, serviceRegistrations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of items per page in a paginated query. The maximum is 100, and the default is 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Service registration information.
    shared_ptr<vector<ListServiceRegistrationsResponseBody::ServiceRegistrations>> serviceRegistrations_ {};
    // Total number of records that meet the criteria.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
