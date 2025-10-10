// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatus.hpp>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyRuleHealthStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHealthStatus, ruleHealthStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHealthStatus, ruleHealthStatus_);
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
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->ruleHealthStatus_ != nullptr; };
    // listenerHealthStatus Field Functions 
    bool hasListenerHealthStatus() const { return this->listenerHealthStatus_ != nullptr;};
    void deleteListenerHealthStatus() { this->listenerHealthStatus_ = nullptr;};
    inline const vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> & listenerHealthStatus() const { DARABONBA_PTR_GET_CONST(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>) };
    inline vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> listenerHealthStatus() { DARABONBA_PTR_GET(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(const vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> & listenerHealthStatus) { DARABONBA_PTR_SET_VALUE(listenerHealthStatus_, listenerHealthStatus) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> && listenerHealthStatus) { DARABONBA_PTR_SET_RVALUE(listenerHealthStatus_, listenerHealthStatus) };


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


    // ruleHealthStatus Field Functions 
    bool hasRuleHealthStatus() const { return this->ruleHealthStatus_ != nullptr;};
    void deleteRuleHealthStatus() { this->ruleHealthStatus_ = nullptr;};
    inline const vector<GetListenerHealthStatusResponseBodyRuleHealthStatus> & ruleHealthStatus() const { DARABONBA_PTR_GET_CONST(ruleHealthStatus_, vector<GetListenerHealthStatusResponseBodyRuleHealthStatus>) };
    inline vector<GetListenerHealthStatusResponseBodyRuleHealthStatus> ruleHealthStatus() { DARABONBA_PTR_GET(ruleHealthStatus_, vector<GetListenerHealthStatusResponseBodyRuleHealthStatus>) };
    inline GetListenerHealthStatusResponseBody& setRuleHealthStatus(const vector<GetListenerHealthStatusResponseBodyRuleHealthStatus> & ruleHealthStatus) { DARABONBA_PTR_SET_VALUE(ruleHealthStatus_, ruleHealthStatus) };
    inline GetListenerHealthStatusResponseBody& setRuleHealthStatus(vector<GetListenerHealthStatusResponseBodyRuleHealthStatus> && ruleHealthStatus) { DARABONBA_PTR_SET_RVALUE(ruleHealthStatus_, ruleHealthStatus) };


  protected:
    // The health check status of the server groups associated with the listener.
    std::shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>> listenerHealthStatus_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The health check status of the forwarding rules.
    std::shared_ptr<vector<GetListenerHealthStatusResponseBodyRuleHealthStatus>> ruleHealthStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
