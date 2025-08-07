// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceLogsResponseBodyServiceInstancesLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstancesLogs, serviceInstancesLogs_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstancesLogs, serviceInstancesLogs_);
    };
    ListServiceInstanceLogsResponseBody() = default ;
    ListServiceInstanceLogsResponseBody(const ListServiceInstanceLogsResponseBody &) = default ;
    ListServiceInstanceLogsResponseBody(ListServiceInstanceLogsResponseBody &&) = default ;
    ListServiceInstanceLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceLogsResponseBody() = default ;
    ListServiceInstanceLogsResponseBody& operator=(const ListServiceInstanceLogsResponseBody &) = default ;
    ListServiceInstanceLogsResponseBody& operator=(ListServiceInstanceLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->serviceInstancesLogs_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstancesLogs Field Functions 
    bool hasServiceInstancesLogs() const { return this->serviceInstancesLogs_ != nullptr;};
    void deleteServiceInstancesLogs() { this->serviceInstancesLogs_ = nullptr;};
    inline const vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs> & serviceInstancesLogs() const { DARABONBA_PTR_GET_CONST(serviceInstancesLogs_, vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs>) };
    inline vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs> serviceInstancesLogs() { DARABONBA_PTR_GET(serviceInstancesLogs_, vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs>) };
    inline ListServiceInstanceLogsResponseBody& setServiceInstancesLogs(const vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs> & serviceInstancesLogs) { DARABONBA_PTR_SET_VALUE(serviceInstancesLogs_, serviceInstancesLogs) };
    inline ListServiceInstanceLogsResponseBody& setServiceInstancesLogs(vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs> && serviceInstancesLogs) { DARABONBA_PTR_SET_RVALUE(serviceInstancesLogs_, serviceInstancesLogs) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The logs of the service instance.
    std::shared_ptr<vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs>> serviceInstancesLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
