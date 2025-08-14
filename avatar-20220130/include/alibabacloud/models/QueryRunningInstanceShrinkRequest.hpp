// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryRunningInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRunningInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, appShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRunningInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, appShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryRunningInstanceShrinkRequest() = default ;
    QueryRunningInstanceShrinkRequest(const QueryRunningInstanceShrinkRequest &) = default ;
    QueryRunningInstanceShrinkRequest(QueryRunningInstanceShrinkRequest &&) = default ;
    QueryRunningInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRunningInstanceShrinkRequest() = default ;
    QueryRunningInstanceShrinkRequest& operator=(const QueryRunningInstanceShrinkRequest &) = default ;
    QueryRunningInstanceShrinkRequest& operator=(QueryRunningInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appShrink_ != nullptr
        && this->sessionId_ != nullptr && this->tenantId_ != nullptr; };
    // appShrink Field Functions 
    bool hasAppShrink() const { return this->appShrink_ != nullptr;};
    void deleteAppShrink() { this->appShrink_ = nullptr;};
    inline string appShrink() const { DARABONBA_PTR_GET_DEFAULT(appShrink_, "") };
    inline QueryRunningInstanceShrinkRequest& setAppShrink(string appShrink) { DARABONBA_PTR_SET_VALUE(appShrink_, appShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline QueryRunningInstanceShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline QueryRunningInstanceShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
