// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNDELIVERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNDELIVERTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnDeliverTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Deliver, deliver_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Deliver, deliver_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    CreateDcdnDeliverTaskRequest() = default ;
    CreateDcdnDeliverTaskRequest(const CreateDcdnDeliverTaskRequest &) = default ;
    CreateDcdnDeliverTaskRequest(CreateDcdnDeliverTaskRequest &&) = default ;
    CreateDcdnDeliverTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnDeliverTaskRequest() = default ;
    CreateDcdnDeliverTaskRequest& operator=(const CreateDcdnDeliverTaskRequest &) = default ;
    CreateDcdnDeliverTaskRequest& operator=(CreateDcdnDeliverTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliver_ != nullptr
        && this->domainName_ != nullptr && this->name_ != nullptr && this->reports_ != nullptr && this->schedule_ != nullptr; };
    // deliver Field Functions 
    bool hasDeliver() const { return this->deliver_ != nullptr;};
    void deleteDeliver() { this->deliver_ = nullptr;};
    inline string deliver() const { DARABONBA_PTR_GET_DEFAULT(deliver_, "") };
    inline CreateDcdnDeliverTaskRequest& setDeliver(string deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateDcdnDeliverTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDcdnDeliverTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline string reports() const { DARABONBA_PTR_GET_DEFAULT(reports_, "") };
    inline CreateDcdnDeliverTaskRequest& setReports(string reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline CreateDcdnDeliverTaskRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


  protected:
    // The method that is used to send operations reports. Operations reports are sent to you only by email. The settings must be escaped in JSON.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliver_ = nullptr;
    // The domain names to be tracked. Separate multiple domain names with commas (,). You can specify up to 500 domain names. If you want to specify more than 500 domain names, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
    // 
    // > If you do not specify a domain name, the tracking task is created for all domain names that belong to your Alibaba Cloud account.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the tracking task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The operations reports that are tracked by the task. The data must be escaped in JSON.
    // 
    // This parameter is required.
    std::shared_ptr<string> reports_ = nullptr;
    // The parameters that specify the time interval at which the tracking task sends operations reports. The settings must be escaped in JSON.
    // 
    // This parameter is required.
    std::shared_ptr<string> schedule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
