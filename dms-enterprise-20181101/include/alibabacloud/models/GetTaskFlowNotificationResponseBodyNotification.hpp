// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODYNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODYNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowNotificationResponseBodyNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowNotificationResponseBodyNotification& obj) { 
      DARABONBA_PTR_TO_JSON(DagNotificationFail, dagNotificationFail_);
      DARABONBA_PTR_TO_JSON(DagNotificationSla, dagNotificationSla_);
      DARABONBA_PTR_TO_JSON(DagNotificationSuccess, dagNotificationSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowNotificationResponseBodyNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(DagNotificationFail, dagNotificationFail_);
      DARABONBA_PTR_FROM_JSON(DagNotificationSla, dagNotificationSla_);
      DARABONBA_PTR_FROM_JSON(DagNotificationSuccess, dagNotificationSuccess_);
    };
    GetTaskFlowNotificationResponseBodyNotification() = default ;
    GetTaskFlowNotificationResponseBodyNotification(const GetTaskFlowNotificationResponseBodyNotification &) = default ;
    GetTaskFlowNotificationResponseBodyNotification(GetTaskFlowNotificationResponseBodyNotification &&) = default ;
    GetTaskFlowNotificationResponseBodyNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowNotificationResponseBodyNotification() = default ;
    GetTaskFlowNotificationResponseBodyNotification& operator=(const GetTaskFlowNotificationResponseBodyNotification &) = default ;
    GetTaskFlowNotificationResponseBodyNotification& operator=(GetTaskFlowNotificationResponseBodyNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagNotificationFail_ == nullptr
        && return this->dagNotificationSla_ == nullptr && return this->dagNotificationSuccess_ == nullptr; };
    // dagNotificationFail Field Functions 
    bool hasDagNotificationFail() const { return this->dagNotificationFail_ != nullptr;};
    void deleteDagNotificationFail() { this->dagNotificationFail_ = nullptr;};
    inline bool dagNotificationFail() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationFail_, false) };
    inline GetTaskFlowNotificationResponseBodyNotification& setDagNotificationFail(bool dagNotificationFail) { DARABONBA_PTR_SET_VALUE(dagNotificationFail_, dagNotificationFail) };


    // dagNotificationSla Field Functions 
    bool hasDagNotificationSla() const { return this->dagNotificationSla_ != nullptr;};
    void deleteDagNotificationSla() { this->dagNotificationSla_ = nullptr;};
    inline bool dagNotificationSla() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSla_, false) };
    inline GetTaskFlowNotificationResponseBodyNotification& setDagNotificationSla(bool dagNotificationSla) { DARABONBA_PTR_SET_VALUE(dagNotificationSla_, dagNotificationSla) };


    // dagNotificationSuccess Field Functions 
    bool hasDagNotificationSuccess() const { return this->dagNotificationSuccess_ != nullptr;};
    void deleteDagNotificationSuccess() { this->dagNotificationSuccess_ = nullptr;};
    inline bool dagNotificationSuccess() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSuccess_, false) };
    inline GetTaskFlowNotificationResponseBodyNotification& setDagNotificationSuccess(bool dagNotificationSuccess) { DARABONBA_PTR_SET_VALUE(dagNotificationSuccess_, dagNotificationSuccess) };


  protected:
    // Indicates whether notifications for failed task flows are enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> dagNotificationFail_ = nullptr;
    // Indicates whether service level agreement (SLA) global notifications for task flows are enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> dagNotificationSla_ = nullptr;
    // Indicates whether notifications for successful task flows are enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> dagNotificationSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
