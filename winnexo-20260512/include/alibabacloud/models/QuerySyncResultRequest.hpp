// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSYNCRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSYNCRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySyncResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySyncResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySyncResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    QuerySyncResultRequest() = default ;
    QuerySyncResultRequest(const QuerySyncResultRequest &) = default ;
    QuerySyncResultRequest(QuerySyncResultRequest &&) = default ;
    QuerySyncResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySyncResultRequest() = default ;
    QuerySyncResultRequest& operator=(const QuerySyncResultRequest &) = default ;
    QuerySyncResultRequest& operator=(QuerySyncResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->tenantId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QuerySyncResultRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QuerySyncResultRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
