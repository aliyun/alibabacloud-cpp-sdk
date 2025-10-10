// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeRule, includeRule_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeRule, includeRule_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetListenerHealthStatusRequest() = default ;
    GetListenerHealthStatusRequest(const GetListenerHealthStatusRequest &) = default ;
    GetListenerHealthStatusRequest(GetListenerHealthStatusRequest &&) = default ;
    GetListenerHealthStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusRequest() = default ;
    GetListenerHealthStatusRequest& operator=(const GetListenerHealthStatusRequest &) = default ;
    GetListenerHealthStatusRequest& operator=(GetListenerHealthStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->includeRule_ != nullptr
        && this->listenerId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // includeRule Field Functions 
    bool hasIncludeRule() const { return this->includeRule_ != nullptr;};
    void deleteIncludeRule() { this->includeRule_ = nullptr;};
    inline bool includeRule() const { DARABONBA_PTR_GET_DEFAULT(includeRule_, false) };
    inline GetListenerHealthStatusRequest& setIncludeRule(bool includeRule) { DARABONBA_PTR_SET_VALUE(includeRule_, includeRule) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerHealthStatusRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetListenerHealthStatusRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetListenerHealthStatusRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // Specifies whether to return the health check results of forwarding rules. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> includeRule_ = nullptr;
    // The listener ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **30**. Default value: **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query or no next queries are to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
