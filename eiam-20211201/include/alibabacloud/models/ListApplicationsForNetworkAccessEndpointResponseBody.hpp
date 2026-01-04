// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForNetworkAccessEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationsForNetworkAccessEndpoint, applicationsForNetworkAccessEndpoint_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationsForNetworkAccessEndpoint, applicationsForNetworkAccessEndpoint_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsForNetworkAccessEndpointResponseBody() = default ;
    ListApplicationsForNetworkAccessEndpointResponseBody(const ListApplicationsForNetworkAccessEndpointResponseBody &) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBody(ListApplicationsForNetworkAccessEndpointResponseBody &&) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForNetworkAccessEndpointResponseBody() = default ;
    ListApplicationsForNetworkAccessEndpointResponseBody& operator=(const ListApplicationsForNetworkAccessEndpointResponseBody &) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBody& operator=(ListApplicationsForNetworkAccessEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationsForNetworkAccessEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationsForNetworkAccessEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationsForNetworkAccessEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      ApplicationsForNetworkAccessEndpoint() = default ;
      ApplicationsForNetworkAccessEndpoint(const ApplicationsForNetworkAccessEndpoint &) = default ;
      ApplicationsForNetworkAccessEndpoint(ApplicationsForNetworkAccessEndpoint &&) = default ;
      ApplicationsForNetworkAccessEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationsForNetworkAccessEndpoint() = default ;
      ApplicationsForNetworkAccessEndpoint& operator=(const ApplicationsForNetworkAccessEndpoint &) = default ;
      ApplicationsForNetworkAccessEndpoint& operator=(ApplicationsForNetworkAccessEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->instanceId_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationsForNetworkAccessEndpoint& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationsForNetworkAccessEndpoint& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationsForNetworkAccessEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 应用ID。
      shared_ptr<string> applicationId_ {};
      // 应用名称。
      shared_ptr<string> applicationName_ {};
      // IDaaS EIAM 实例ID
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->applicationsForNetworkAccessEndpoint_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationsForNetworkAccessEndpoint Field Functions 
    bool hasApplicationsForNetworkAccessEndpoint() const { return this->applicationsForNetworkAccessEndpoint_ != nullptr;};
    void deleteApplicationsForNetworkAccessEndpoint() { this->applicationsForNetworkAccessEndpoint_ = nullptr;};
    inline const vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint> & getApplicationsForNetworkAccessEndpoint() const { DARABONBA_PTR_GET_CONST(applicationsForNetworkAccessEndpoint_, vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint>) };
    inline vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint> getApplicationsForNetworkAccessEndpoint() { DARABONBA_PTR_GET(applicationsForNetworkAccessEndpoint_, vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint>) };
    inline ListApplicationsForNetworkAccessEndpointResponseBody& setApplicationsForNetworkAccessEndpoint(const vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint> & applicationsForNetworkAccessEndpoint) { DARABONBA_PTR_SET_VALUE(applicationsForNetworkAccessEndpoint_, applicationsForNetworkAccessEndpoint) };
    inline ListApplicationsForNetworkAccessEndpointResponseBody& setApplicationsForNetworkAccessEndpoint(vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint> && applicationsForNetworkAccessEndpoint) { DARABONBA_PTR_SET_RVALUE(applicationsForNetworkAccessEndpoint_, applicationsForNetworkAccessEndpoint) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsForNetworkAccessEndpointResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForNetworkAccessEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsForNetworkAccessEndpointResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationsForNetworkAccessEndpointResponseBody::ApplicationsForNetworkAccessEndpoint>> applicationsForNetworkAccessEndpoint_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
