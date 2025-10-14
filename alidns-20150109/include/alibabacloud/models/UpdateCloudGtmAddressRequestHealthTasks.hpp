// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSREQUESTHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSREQUESTHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmAddressRequestHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressRequestHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressRequestHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateCloudGtmAddressRequestHealthTasks() = default ;
    UpdateCloudGtmAddressRequestHealthTasks(const UpdateCloudGtmAddressRequestHealthTasks &) = default ;
    UpdateCloudGtmAddressRequestHealthTasks(UpdateCloudGtmAddressRequestHealthTasks &&) = default ;
    UpdateCloudGtmAddressRequestHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressRequestHealthTasks() = default ;
    UpdateCloudGtmAddressRequestHealthTasks& operator=(const UpdateCloudGtmAddressRequestHealthTasks &) = default ;
    UpdateCloudGtmAddressRequestHealthTasks& operator=(UpdateCloudGtmAddressRequestHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->templateId_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateCloudGtmAddressRequestHealthTasks& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudGtmAddressRequestHealthTasks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The service port of the address on which health check tasks are performed. If the ping protocol is used for health checks, the configuration of the service port is not supported.
    // 
    // *   If you leave this parameter empty, the existing service port is deleted.
    // *   If you specify this parameter, the existing service port is updated based on the value of this parameter.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the health check template that is associated with the address. This parameter is required if you specify a service port of the address for health check tasks.
    // 
    // *   If you leave this parameter empty, the associated health check template is disassociated from the address.
    // *   If you specify this parameter, the associated health check template is updated based on the value of this parameter.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
