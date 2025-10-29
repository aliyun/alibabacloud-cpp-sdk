// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHATINSTANCESESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHATINSTANCESESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class QueryChatInstanceSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChatInstanceSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionIds, sessionIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChatInstanceSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionIds, sessionIds_);
    };
    QueryChatInstanceSessionsRequest() = default ;
    QueryChatInstanceSessionsRequest(const QueryChatInstanceSessionsRequest &) = default ;
    QueryChatInstanceSessionsRequest(QueryChatInstanceSessionsRequest &&) = default ;
    QueryChatInstanceSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChatInstanceSessionsRequest() = default ;
    QueryChatInstanceSessionsRequest& operator=(const QueryChatInstanceSessionsRequest &) = default ;
    QueryChatInstanceSessionsRequest& operator=(QueryChatInstanceSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionIds_ == nullptr; };
    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline const vector<string> & sessionIds() const { DARABONBA_PTR_GET_CONST(sessionIds_, vector<string>) };
    inline vector<string> sessionIds() { DARABONBA_PTR_GET(sessionIds_, vector<string>) };
    inline QueryChatInstanceSessionsRequest& setSessionIds(const vector<string> & sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };
    inline QueryChatInstanceSessionsRequest& setSessionIds(vector<string> && sessionIds) { DARABONBA_PTR_SET_RVALUE(sessionIds_, sessionIds) };


  protected:
    std::shared_ptr<vector<string>> sessionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
