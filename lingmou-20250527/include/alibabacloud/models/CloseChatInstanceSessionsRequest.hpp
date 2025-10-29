// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSECHATINSTANCESESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSECHATINSTANCESESSIONSREQUEST_HPP_
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
  class CloseChatInstanceSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseChatInstanceSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionIds, sessionIds_);
    };
    friend void from_json(const Darabonba::Json& j, CloseChatInstanceSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionIds, sessionIds_);
    };
    CloseChatInstanceSessionsRequest() = default ;
    CloseChatInstanceSessionsRequest(const CloseChatInstanceSessionsRequest &) = default ;
    CloseChatInstanceSessionsRequest(CloseChatInstanceSessionsRequest &&) = default ;
    CloseChatInstanceSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseChatInstanceSessionsRequest() = default ;
    CloseChatInstanceSessionsRequest& operator=(const CloseChatInstanceSessionsRequest &) = default ;
    CloseChatInstanceSessionsRequest& operator=(CloseChatInstanceSessionsRequest &&) = default ;
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
    inline CloseChatInstanceSessionsRequest& setSessionIds(const vector<string> & sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };
    inline CloseChatInstanceSessionsRequest& setSessionIds(vector<string> && sessionIds) { DARABONBA_PTR_SET_RVALUE(sessionIds_, sessionIds) };


  protected:
    std::shared_ptr<vector<string>> sessionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
