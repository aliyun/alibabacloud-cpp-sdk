// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListenersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListListenersRequest() = default ;
    ListListenersRequest(const ListListenersRequest &) = default ;
    ListListenersRequest(ListListenersRequest &&) = default ;
    ListListenersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersRequest() = default ;
    ListListenersRequest& operator=(const ListListenersRequest &) = default ;
    ListListenersRequest& operator=(ListListenersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenerIds_ != nullptr
        && this->listenerProtocol_ != nullptr && this->loadBalancerIds_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->tag_ != nullptr; };
    // listenerIds Field Functions 
    bool hasListenerIds() const { return this->listenerIds_ != nullptr;};
    void deleteListenerIds() { this->listenerIds_ = nullptr;};
    inline const vector<string> & listenerIds() const { DARABONBA_PTR_GET_CONST(listenerIds_, vector<string>) };
    inline vector<string> listenerIds() { DARABONBA_PTR_GET(listenerIds_, vector<string>) };
    inline ListListenersRequest& setListenerIds(const vector<string> & listenerIds) { DARABONBA_PTR_SET_VALUE(listenerIds_, listenerIds) };
    inline ListListenersRequest& setListenerIds(vector<string> && listenerIds) { DARABONBA_PTR_SET_RVALUE(listenerIds_, listenerIds) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListListenersRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListListenersRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListListenersRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListListenersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListListenersRequestTag>) };
    inline vector<ListListenersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListListenersRequestTag>) };
    inline ListListenersRequest& setTag(const vector<ListListenersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListListenersRequest& setTag(vector<ListListenersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The listener IDs. You can specify at most 20 listener IDs.
    std::shared_ptr<vector<string>> listenerIds_ = nullptr;
    // The listener protocol. Valid values:
    // 
    // *   **HTTP**
    // *   **HTTPS**
    // *   **QUIC**
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ALB instance ID. You can specify at most 20 instance IDs.
    std::shared_ptr<vector<string>> loadBalancerIds_ = nullptr;
    // The maximum number of entries to return. This parameter is optional. Valid values: **1 to 100**. If you do not specify this parameter, the default value **20** is used.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   If a value is returned for NextToken, you must specify the token that is obtained from the previous query as the value of **NextToken**.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListListenersRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
