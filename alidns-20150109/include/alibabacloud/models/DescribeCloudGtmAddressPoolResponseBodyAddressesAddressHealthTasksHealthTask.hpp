// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSHEALTHTASKSHEALTHTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSHEALTHTASKSHEALTHTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask &&) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& operator=(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& operator=(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->templateId_ != nullptr && this->templateName_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The target service port for health check probes. When the health check protocol is set to Ping, configuration of the service port is not supported.
    std::shared_ptr<int32_t> port_ = nullptr;
    // ID of the health check template associated with the address.
    std::shared_ptr<string> templateId_ = nullptr;
    // Health check template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
