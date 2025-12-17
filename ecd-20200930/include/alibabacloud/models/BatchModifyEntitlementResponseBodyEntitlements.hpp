// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODYENTITLEMENTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODYENTITLEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchModifyEntitlementResponseBodyEntitlementsAssignModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BatchModifyEntitlementResponseBodyEntitlements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyEntitlementResponseBodyEntitlements& obj) { 
      DARABONBA_PTR_TO_JSON(AssignModels, assignModels_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyEntitlementResponseBodyEntitlements& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignModels, assignModels_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    BatchModifyEntitlementResponseBodyEntitlements() = default ;
    BatchModifyEntitlementResponseBodyEntitlements(const BatchModifyEntitlementResponseBodyEntitlements &) = default ;
    BatchModifyEntitlementResponseBodyEntitlements(BatchModifyEntitlementResponseBodyEntitlements &&) = default ;
    BatchModifyEntitlementResponseBodyEntitlements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyEntitlementResponseBodyEntitlements() = default ;
    BatchModifyEntitlementResponseBodyEntitlements& operator=(const BatchModifyEntitlementResponseBodyEntitlements &) = default ;
    BatchModifyEntitlementResponseBodyEntitlements& operator=(BatchModifyEntitlementResponseBodyEntitlements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignModels_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // assignModels Field Functions 
    bool hasAssignModels() const { return this->assignModels_ != nullptr;};
    void deleteAssignModels() { this->assignModels_ = nullptr;};
    inline const vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels> & assignModels() const { DARABONBA_PTR_GET_CONST(assignModels_, vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels>) };
    inline vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels> assignModels() { DARABONBA_PTR_GET(assignModels_, vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels>) };
    inline BatchModifyEntitlementResponseBodyEntitlements& setAssignModels(const vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels> & assignModels) { DARABONBA_PTR_SET_VALUE(assignModels_, assignModels) };
    inline BatchModifyEntitlementResponseBodyEntitlements& setAssignModels(vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels> && assignModels) { DARABONBA_PTR_SET_RVALUE(assignModels_, assignModels) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchModifyEntitlementResponseBodyEntitlements& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchModifyEntitlementResponseBodyEntitlements& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<Models::BatchModifyEntitlementResponseBodyEntitlementsAssignModels>> assignModels_ = nullptr;
    // The result.
    // 
    // Valid values:
    // 
    // *   FAILED
    // *   NOT_STARTED
    // *   STARTED
    // *   PROCESSING
    // *   FINISHED
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
