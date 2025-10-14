// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITEDELIVERYTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTSITEDELIVERYTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSiteDeliveryTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSiteDeliveryTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSiteDeliveryTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListSiteDeliveryTasksResponseBodyTasks() = default ;
    ListSiteDeliveryTasksResponseBodyTasks(const ListSiteDeliveryTasksResponseBodyTasks &) = default ;
    ListSiteDeliveryTasksResponseBodyTasks(ListSiteDeliveryTasksResponseBodyTasks &&) = default ;
    ListSiteDeliveryTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSiteDeliveryTasksResponseBodyTasks() = default ;
    ListSiteDeliveryTasksResponseBodyTasks& operator=(const ListSiteDeliveryTasksResponseBodyTasks &) = default ;
    ListSiteDeliveryTasksResponseBodyTasks& operator=(ListSiteDeliveryTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->dataCenter_ == nullptr && return this->deliveryType_ == nullptr && return this->status_ == nullptr && return this->taskName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListSiteDeliveryTasksResponseBodyTasks& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListSiteDeliveryTasksResponseBodyTasks& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ListSiteDeliveryTasksResponseBodyTasks& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSiteDeliveryTasksResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListSiteDeliveryTasksResponseBodyTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    std::shared_ptr<string> businessType_ = nullptr;
    // The data center. Valid values:
    // 
    // *   cn: the Chinese mainland.
    // *   sg: outside the Chinese mainland.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The destination of the delivery. Valid values:
    // 
    // 1.  sls: Alibaba Cloud Simple Log Service (SLS).
    // 2.  http: HTTP server.
    // 3.  aws3: Amazon Simple Storage Service (S3).
    // 4.  oss: Alibaba Cloud Object Storage Service (OSS).
    // 5.  kafka: Kafka.
    // 6.  aws3cmpt: S3-compatible storage service.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // The status of the delivery task.
    // 
    // *   **online**
    // *   **offline**
    std::shared_ptr<string> status_ = nullptr;
    // The name of the delivery task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
