// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODYHEALTHTASKSHEALTHTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODYHEALTHTASKSHEALTHTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask() = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask(const DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask &) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask(DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask &&) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask() = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& operator=(const DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask &) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& operator=(DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorStatus_ == nullptr
        && return this->port_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The state of the health check task. Valid values:
    // 
    // *   ok: The task is normal.
    // *   alert: An alert is triggered.
    // *   no_data: No data is available. In most cases, the health check task is newly created and no data is collected.
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The target service port for health checks. When the Ping protocol is selected for health checks, configuration of the service port is not supported.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the health check template associated with the address.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the health check template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
