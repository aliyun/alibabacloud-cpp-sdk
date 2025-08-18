// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserDeliveryTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDeliveryTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDeliveryTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListUserDeliveryTasksResponseBodyTasks() = default ;
    ListUserDeliveryTasksResponseBodyTasks(const ListUserDeliveryTasksResponseBodyTasks &) = default ;
    ListUserDeliveryTasksResponseBodyTasks(ListUserDeliveryTasksResponseBodyTasks &&) = default ;
    ListUserDeliveryTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDeliveryTasksResponseBodyTasks() = default ;
    ListUserDeliveryTasksResponseBodyTasks& operator=(const ListUserDeliveryTasksResponseBodyTasks &) = default ;
    ListUserDeliveryTasksResponseBodyTasks& operator=(ListUserDeliveryTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->dataCenter_ != nullptr && this->deliveryType_ != nullptr && this->status_ != nullptr && this->taskName_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListUserDeliveryTasksResponseBodyTasks& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListUserDeliveryTasksResponseBodyTasks& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ListUserDeliveryTasksResponseBodyTasks& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserDeliveryTasksResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListUserDeliveryTasksResponseBodyTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category.
    std::shared_ptr<string> businessType_ = nullptr;
    // The data center. Valid values:
    // 
    // 1.  cn: the Chinese mainland.
    // 2.  sg: outside the Chinese mainland.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The delivery destination.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // The status of the delivery task.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the delivery task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
