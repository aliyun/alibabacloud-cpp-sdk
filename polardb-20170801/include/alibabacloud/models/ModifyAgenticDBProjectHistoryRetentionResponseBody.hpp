// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTICDBPROJECTHISTORYRETENTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTICDBPROJECTHISTORYRETENTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyAgenticDBProjectHistoryRetentionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgenticDBProjectHistoryRetentionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgenticDBProjectHistoryRetentionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ModifyAgenticDBProjectHistoryRetentionResponseBody() = default ;
    ModifyAgenticDBProjectHistoryRetentionResponseBody(const ModifyAgenticDBProjectHistoryRetentionResponseBody &) = default ;
    ModifyAgenticDBProjectHistoryRetentionResponseBody(ModifyAgenticDBProjectHistoryRetentionResponseBody &&) = default ;
    ModifyAgenticDBProjectHistoryRetentionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgenticDBProjectHistoryRetentionResponseBody() = default ;
    ModifyAgenticDBProjectHistoryRetentionResponseBody& operator=(const ModifyAgenticDBProjectHistoryRetentionResponseBody &) = default ;
    ModifyAgenticDBProjectHistoryRetentionResponseBody& operator=(ModifyAgenticDBProjectHistoryRetentionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->historyRetentionSeconds_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr && this->tenantId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // historyRetentionSeconds Field Functions 
    bool hasHistoryRetentionSeconds() const { return this->historyRetentionSeconds_ != nullptr;};
    void deleteHistoryRetentionSeconds() { this->historyRetentionSeconds_ = nullptr;};
    inline int64_t getHistoryRetentionSeconds() const { DARABONBA_PTR_GET_DEFAULT(historyRetentionSeconds_, 0L) };
    inline ModifyAgenticDBProjectHistoryRetentionResponseBody& setHistoryRetentionSeconds(int64_t historyRetentionSeconds) { DARABONBA_PTR_SET_VALUE(historyRetentionSeconds_, historyRetentionSeconds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // DBClusterId
    shared_ptr<string> DBClusterId_ {};
    // The current effective history retention period of the project. To check the actual recoverable range, query the branch recovery window.
    shared_ptr<int64_t> historyRetentionSeconds_ {};
    // ProjectId
    shared_ptr<string> projectId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // TenantId
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
