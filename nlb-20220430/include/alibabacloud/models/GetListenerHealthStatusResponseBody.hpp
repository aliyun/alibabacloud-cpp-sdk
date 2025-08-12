// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetListenerHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetListenerHealthStatusResponseBody() = default ;
    GetListenerHealthStatusResponseBody(const GetListenerHealthStatusResponseBody &) = default ;
    GetListenerHealthStatusResponseBody(GetListenerHealthStatusResponseBody &&) = default ;
    GetListenerHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBody() = default ;
    GetListenerHealthStatusResponseBody& operator=(const GetListenerHealthStatusResponseBody &) = default ;
    GetListenerHealthStatusResponseBody& operator=(GetListenerHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenerHealthStatus_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // listenerHealthStatus Field Functions 
    bool hasListenerHealthStatus() const { return this->listenerHealthStatus_ != nullptr;};
    void deleteListenerHealthStatus() { this->listenerHealthStatus_ = nullptr;};
    inline const vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> & listenerHealthStatus() const { DARABONBA_PTR_GET_CONST(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>) };
    inline vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> listenerHealthStatus() { DARABONBA_PTR_GET(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(const vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> & listenerHealthStatus) { DARABONBA_PTR_SET_VALUE(listenerHealthStatus_, listenerHealthStatus) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> && listenerHealthStatus) { DARABONBA_PTR_SET_RVALUE(listenerHealthStatus_, listenerHealthStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetListenerHealthStatusResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetListenerHealthStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListenerHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetListenerHealthStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The health check status of the server group of the listener.
    std::shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>> listenerHealthStatus_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // - If **NextToken** is empty, it indicates that no next query is to be sent.
    // - If a value of **NextToken** is returned, the value is the token used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
