// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTIMEDRESETOPERATESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTIMEDRESETOPERATESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryTimedResetOperateStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTimedResetOperateStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusStr, statusStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTimedResetOperateStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusStr, statusStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryTimedResetOperateStatusResponseBodyData() = default ;
    QueryTimedResetOperateStatusResponseBodyData(const QueryTimedResetOperateStatusResponseBodyData &) = default ;
    QueryTimedResetOperateStatusResponseBodyData(QueryTimedResetOperateStatusResponseBodyData &&) = default ;
    QueryTimedResetOperateStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTimedResetOperateStatusResponseBodyData() = default ;
    QueryTimedResetOperateStatusResponseBodyData& operator=(const QueryTimedResetOperateStatusResponseBodyData &) = default ;
    QueryTimedResetOperateStatusResponseBodyData& operator=(QueryTimedResetOperateStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->status_ != nullptr && this->statusStr_ != nullptr && this->tenantId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTimedResetOperateStatusResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryTimedResetOperateStatusResponseBodyData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusStr Field Functions 
    bool hasStatusStr() const { return this->statusStr_ != nullptr;};
    void deleteStatusStr() { this->statusStr_ = nullptr;};
    inline string statusStr() const { DARABONBA_PTR_GET_DEFAULT(statusStr_, "") };
    inline QueryTimedResetOperateStatusResponseBodyData& setStatusStr(string statusStr) { DARABONBA_PTR_SET_VALUE(statusStr_, statusStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryTimedResetOperateStatusResponseBodyData& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> statusStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
