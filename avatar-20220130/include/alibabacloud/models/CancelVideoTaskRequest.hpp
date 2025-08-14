// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelVideoTaskRequestApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class CancelVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CancelVideoTaskRequest() = default ;
    CancelVideoTaskRequest(const CancelVideoTaskRequest &) = default ;
    CancelVideoTaskRequest(CancelVideoTaskRequest &&) = default ;
    CancelVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelVideoTaskRequest() = default ;
    CancelVideoTaskRequest& operator=(const CancelVideoTaskRequest &) = default ;
    CancelVideoTaskRequest& operator=(CancelVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->taskUuid_ != nullptr && this->tenantId_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const CancelVideoTaskRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, CancelVideoTaskRequestApp) };
    inline CancelVideoTaskRequestApp app() { DARABONBA_PTR_GET(app_, CancelVideoTaskRequestApp) };
    inline CancelVideoTaskRequest& setApp(const CancelVideoTaskRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline CancelVideoTaskRequest& setApp(CancelVideoTaskRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline CancelVideoTaskRequest& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CancelVideoTaskRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<CancelVideoTaskRequestApp> app_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
