// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRunningInstanceRequestApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryRunningInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRunningInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRunningInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryRunningInstanceRequest() = default ;
    QueryRunningInstanceRequest(const QueryRunningInstanceRequest &) = default ;
    QueryRunningInstanceRequest(QueryRunningInstanceRequest &&) = default ;
    QueryRunningInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRunningInstanceRequest() = default ;
    QueryRunningInstanceRequest& operator=(const QueryRunningInstanceRequest &) = default ;
    QueryRunningInstanceRequest& operator=(QueryRunningInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->sessionId_ != nullptr && this->tenantId_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const QueryRunningInstanceRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, QueryRunningInstanceRequestApp) };
    inline QueryRunningInstanceRequestApp app() { DARABONBA_PTR_GET(app_, QueryRunningInstanceRequestApp) };
    inline QueryRunningInstanceRequest& setApp(const QueryRunningInstanceRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline QueryRunningInstanceRequest& setApp(QueryRunningInstanceRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline QueryRunningInstanceRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline QueryRunningInstanceRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryRunningInstanceRequestApp> app_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
