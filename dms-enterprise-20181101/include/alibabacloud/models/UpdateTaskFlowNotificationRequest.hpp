// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWNOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWNOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagNotificationFail, dagNotificationFail_);
      DARABONBA_PTR_TO_JSON(DagNotificationSla, dagNotificationSla_);
      DARABONBA_PTR_TO_JSON(DagNotificationSuccess, dagNotificationSuccess_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagNotificationFail, dagNotificationFail_);
      DARABONBA_PTR_FROM_JSON(DagNotificationSla, dagNotificationSla_);
      DARABONBA_PTR_FROM_JSON(DagNotificationSuccess, dagNotificationSuccess_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowNotificationRequest() = default ;
    UpdateTaskFlowNotificationRequest(const UpdateTaskFlowNotificationRequest &) = default ;
    UpdateTaskFlowNotificationRequest(UpdateTaskFlowNotificationRequest &&) = default ;
    UpdateTaskFlowNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowNotificationRequest() = default ;
    UpdateTaskFlowNotificationRequest& operator=(const UpdateTaskFlowNotificationRequest &) = default ;
    UpdateTaskFlowNotificationRequest& operator=(UpdateTaskFlowNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->dagNotificationFail_ != nullptr && this->dagNotificationSla_ != nullptr && this->dagNotificationSuccess_ != nullptr && this->tid_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowNotificationRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagNotificationFail Field Functions 
    bool hasDagNotificationFail() const { return this->dagNotificationFail_ != nullptr;};
    void deleteDagNotificationFail() { this->dagNotificationFail_ = nullptr;};
    inline bool dagNotificationFail() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationFail_, false) };
    inline UpdateTaskFlowNotificationRequest& setDagNotificationFail(bool dagNotificationFail) { DARABONBA_PTR_SET_VALUE(dagNotificationFail_, dagNotificationFail) };


    // dagNotificationSla Field Functions 
    bool hasDagNotificationSla() const { return this->dagNotificationSla_ != nullptr;};
    void deleteDagNotificationSla() { this->dagNotificationSla_ = nullptr;};
    inline bool dagNotificationSla() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSla_, false) };
    inline UpdateTaskFlowNotificationRequest& setDagNotificationSla(bool dagNotificationSla) { DARABONBA_PTR_SET_VALUE(dagNotificationSla_, dagNotificationSla) };


    // dagNotificationSuccess Field Functions 
    bool hasDagNotificationSuccess() const { return this->dagNotificationSuccess_ != nullptr;};
    void deleteDagNotificationSuccess() { this->dagNotificationSuccess_ = nullptr;};
    inline bool dagNotificationSuccess() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSuccess_, false) };
    inline UpdateTaskFlowNotificationRequest& setDagNotificationSuccess(bool dagNotificationSuccess) { DARABONBA_PTR_SET_VALUE(dagNotificationSuccess_, dagNotificationSuccess) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowNotificationRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The unique ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // Specifies whether to enable notifications for failed task flows. Notifications are disabled by default. You can enable notifications based on your business requirements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dagNotificationFail_ = nullptr;
    // Specifies whether to enable SLA global notifications for task flows. Notifications are disabled by default. You can enable notifications based on your business requirements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dagNotificationSla_ = nullptr;
    // Specifies whether to enable notifications for successful task flows. Notifications are disabled by default. You can enable notifications based on your business requirements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dagNotificationSuccess_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
