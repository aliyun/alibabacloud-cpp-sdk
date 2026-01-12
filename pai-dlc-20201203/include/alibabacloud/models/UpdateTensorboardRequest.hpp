// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENSORBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENSORBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class UpdateTensorboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTensorboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTensorboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeMinutes, maxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateTensorboardRequest() = default ;
    UpdateTensorboardRequest(const UpdateTensorboardRequest &) = default ;
    UpdateTensorboardRequest(UpdateTensorboardRequest &&) = default ;
    UpdateTensorboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTensorboardRequest() = default ;
    UpdateTensorboardRequest& operator=(const UpdateTensorboardRequest &) = default ;
    UpdateTensorboardRequest& operator=(UpdateTensorboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->maxRunningTimeMinutes_ == nullptr && this->priority_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateTensorboardRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // maxRunningTimeMinutes Field Functions 
    bool hasMaxRunningTimeMinutes() const { return this->maxRunningTimeMinutes_ != nullptr;};
    void deleteMaxRunningTimeMinutes() { this->maxRunningTimeMinutes_ = nullptr;};
    inline int64_t getMaxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeMinutes_, 0L) };
    inline UpdateTensorboardRequest& setMaxRunningTimeMinutes(int64_t maxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeMinutes_, maxRunningTimeMinutes) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline UpdateTensorboardRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateTensorboardRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the jobs. Valid values:
    // 
    // *   PUBLIC: The jobs are public in the workspace.
    // *   PRIVATE: The jobs are visible only to you and the administrator of the workspace.
    shared_ptr<string> accessibility_ {};
    // The maximum running time. Unit: minutes.
    shared_ptr<int64_t> maxRunningTimeMinutes_ {};
    shared_ptr<string> priority_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
