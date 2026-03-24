// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECDNDELIVERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECDNDELIVERTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class UpdateCdnDeliverTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Deliver, deliver_);
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Deliver, deliver_);
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    UpdateCdnDeliverTaskRequest() = default ;
    UpdateCdnDeliverTaskRequest(const UpdateCdnDeliverTaskRequest &) = default ;
    UpdateCdnDeliverTaskRequest(UpdateCdnDeliverTaskRequest &&) = default ;
    UpdateCdnDeliverTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCdnDeliverTaskRequest() = default ;
    UpdateCdnDeliverTaskRequest& operator=(const UpdateCdnDeliverTaskRequest &) = default ;
    UpdateCdnDeliverTaskRequest& operator=(UpdateCdnDeliverTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliver_ == nullptr
        && this->deliverId_ == nullptr && this->domainName_ == nullptr && this->name_ == nullptr && this->reports_ == nullptr && this->schedule_ == nullptr; };
    // deliver Field Functions 
    bool hasDeliver() const { return this->deliver_ != nullptr;};
    void deleteDeliver() { this->deliver_ = nullptr;};
    inline string getDeliver() const { DARABONBA_PTR_GET_DEFAULT(deliver_, "") };
    inline UpdateCdnDeliverTaskRequest& setDeliver(string deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };


    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t getDeliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline UpdateCdnDeliverTaskRequest& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateCdnDeliverTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCdnDeliverTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline string getReports() const { DARABONBA_PTR_GET_DEFAULT(reports_, "") };
    inline UpdateCdnDeliverTaskRequest& setReports(string reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateCdnDeliverTaskRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


  protected:
    // The method that is used to send operations reports. Operations reports are sent to you only by email. The settings must be escaped in JSON.
    shared_ptr<string> deliver_ {};
    // The ID of the tracking task that you want to update.
    // 
    // This parameter is required.
    shared_ptr<int64_t> deliverId_ {};
    // The domain name that you want to track. You can specify up to 500 domain names in each request. Separate multiple domain names with commas (,). If you do not specify a domain name, the task collects data from all domain names that belong to your Alibaba Cloud account.
    shared_ptr<string> domainName_ {};
    // The name of the tracking task.
    shared_ptr<string> name_ {};
    // The operations reports that are tracked by the task. The data must be escaped in JSON.
    shared_ptr<string> reports_ {};
    // The parameters that specify the time interval at which the tracking task sends operations reports. The settings must be escaped in JSON.
    shared_ptr<string> schedule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
