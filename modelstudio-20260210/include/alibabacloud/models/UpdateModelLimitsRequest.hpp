// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELLIMITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELLIMITSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class UpdateModelLimitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelLimitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceLimits, workspaceLimits_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelLimitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceLimits, workspaceLimits_);
    };
    UpdateModelLimitsRequest() = default ;
    UpdateModelLimitsRequest(const UpdateModelLimitsRequest &) = default ;
    UpdateModelLimitsRequest(UpdateModelLimitsRequest &&) = default ;
    UpdateModelLimitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelLimitsRequest() = default ;
    UpdateModelLimitsRequest& operator=(const UpdateModelLimitsRequest &) = default ;
    UpdateModelLimitsRequest& operator=(UpdateModelLimitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkspaceLimits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkspaceLimits& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(operationType, operationType_);
        DARABONBA_PTR_TO_JSON(requestLimit, requestLimit_);
        DARABONBA_PTR_TO_JSON(requestLimitPeriod, requestLimitPeriod_);
        DARABONBA_PTR_TO_JSON(usageLimit, usageLimit_);
        DARABONBA_PTR_TO_JSON(usageLimitPeriod, usageLimitPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, WorkspaceLimits& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(operationType, operationType_);
        DARABONBA_PTR_FROM_JSON(requestLimit, requestLimit_);
        DARABONBA_PTR_FROM_JSON(requestLimitPeriod, requestLimitPeriod_);
        DARABONBA_PTR_FROM_JSON(usageLimit, usageLimit_);
        DARABONBA_PTR_FROM_JSON(usageLimitPeriod, usageLimitPeriod_);
      };
      WorkspaceLimits() = default ;
      WorkspaceLimits(const WorkspaceLimits &) = default ;
      WorkspaceLimits(WorkspaceLimits &&) = default ;
      WorkspaceLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkspaceLimits() = default ;
      WorkspaceLimits& operator=(const WorkspaceLimits &) = default ;
      WorkspaceLimits& operator=(WorkspaceLimits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->model_ == nullptr
        && this->operationType_ == nullptr && this->requestLimit_ == nullptr && this->requestLimitPeriod_ == nullptr && this->usageLimit_ == nullptr && this->usageLimitPeriod_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline WorkspaceLimits& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline WorkspaceLimits& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // requestLimit Field Functions 
      bool hasRequestLimit() const { return this->requestLimit_ != nullptr;};
      void deleteRequestLimit() { this->requestLimit_ = nullptr;};
      inline int64_t getRequestLimit() const { DARABONBA_PTR_GET_DEFAULT(requestLimit_, 0L) };
      inline WorkspaceLimits& setRequestLimit(int64_t requestLimit) { DARABONBA_PTR_SET_VALUE(requestLimit_, requestLimit) };


      // requestLimitPeriod Field Functions 
      bool hasRequestLimitPeriod() const { return this->requestLimitPeriod_ != nullptr;};
      void deleteRequestLimitPeriod() { this->requestLimitPeriod_ = nullptr;};
      inline int64_t getRequestLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(requestLimitPeriod_, 0L) };
      inline WorkspaceLimits& setRequestLimitPeriod(int64_t requestLimitPeriod) { DARABONBA_PTR_SET_VALUE(requestLimitPeriod_, requestLimitPeriod) };


      // usageLimit Field Functions 
      bool hasUsageLimit() const { return this->usageLimit_ != nullptr;};
      void deleteUsageLimit() { this->usageLimit_ = nullptr;};
      inline int64_t getUsageLimit() const { DARABONBA_PTR_GET_DEFAULT(usageLimit_, 0L) };
      inline WorkspaceLimits& setUsageLimit(int64_t usageLimit) { DARABONBA_PTR_SET_VALUE(usageLimit_, usageLimit) };


      // usageLimitPeriod Field Functions 
      bool hasUsageLimitPeriod() const { return this->usageLimitPeriod_ != nullptr;};
      void deleteUsageLimitPeriod() { this->usageLimitPeriod_ = nullptr;};
      inline int64_t getUsageLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(usageLimitPeriod_, 0L) };
      inline WorkspaceLimits& setUsageLimitPeriod(int64_t usageLimitPeriod) { DARABONBA_PTR_SET_VALUE(usageLimitPeriod_, usageLimitPeriod) };


    protected:
      // The model.
      shared_ptr<string> model_ {};
      // The throttling operation type. Valid values:
      // 
      // - **OVERLAY**: Sets or overwrites the throttling configuration.
      // - **DELETE**: Deletes the throttling configuration (restores to no throttling).
      shared_ptr<string> operationType_ {};
      // The request throttling value.
      shared_ptr<int64_t> requestLimit_ {};
      // The time period for request throttling. Unit: seconds.
      shared_ptr<int64_t> requestLimitPeriod_ {};
      // The usage throttling value.
      shared_ptr<int64_t> usageLimit_ {};
      // The time period for usage throttling. Unit: seconds.
      shared_ptr<int64_t> usageLimitPeriod_ {};
    };

    virtual bool empty() const override { return this->workspaceId_ == nullptr
        && this->workspaceLimits_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateModelLimitsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceLimits Field Functions 
    bool hasWorkspaceLimits() const { return this->workspaceLimits_ != nullptr;};
    void deleteWorkspaceLimits() { this->workspaceLimits_ = nullptr;};
    inline const vector<UpdateModelLimitsRequest::WorkspaceLimits> & getWorkspaceLimits() const { DARABONBA_PTR_GET_CONST(workspaceLimits_, vector<UpdateModelLimitsRequest::WorkspaceLimits>) };
    inline vector<UpdateModelLimitsRequest::WorkspaceLimits> getWorkspaceLimits() { DARABONBA_PTR_GET(workspaceLimits_, vector<UpdateModelLimitsRequest::WorkspaceLimits>) };
    inline UpdateModelLimitsRequest& setWorkspaceLimits(const vector<UpdateModelLimitsRequest::WorkspaceLimits> & workspaceLimits) { DARABONBA_PTR_SET_VALUE(workspaceLimits_, workspaceLimits) };
    inline UpdateModelLimitsRequest& setWorkspaceLimits(vector<UpdateModelLimitsRequest::WorkspaceLimits> && workspaceLimits) { DARABONBA_PTR_SET_RVALUE(workspaceLimits_, workspaceLimits) };


  protected:
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    // The throttling values for the workspace.
    shared_ptr<vector<UpdateModelLimitsRequest::WorkspaceLimits>> workspaceLimits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
