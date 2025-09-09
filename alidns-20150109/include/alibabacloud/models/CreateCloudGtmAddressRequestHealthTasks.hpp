// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUESTHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSREQUESTHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateCloudGtmAddressRequestHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudGtmAddressRequestHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudGtmAddressRequestHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateCloudGtmAddressRequestHealthTasks() = default ;
    CreateCloudGtmAddressRequestHealthTasks(const CreateCloudGtmAddressRequestHealthTasks &) = default ;
    CreateCloudGtmAddressRequestHealthTasks(CreateCloudGtmAddressRequestHealthTasks &&) = default ;
    CreateCloudGtmAddressRequestHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudGtmAddressRequestHealthTasks() = default ;
    CreateCloudGtmAddressRequestHealthTasks& operator=(const CreateCloudGtmAddressRequestHealthTasks &) = default ;
    CreateCloudGtmAddressRequestHealthTasks& operator=(CreateCloudGtmAddressRequestHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->templateId_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateCloudGtmAddressRequestHealthTasks& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateCloudGtmAddressRequestHealthTasks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The service port of the address on which health check tasks are performed. If the ping protocol is used for health checks, the configuration of the service port is not supported.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the health check template associated with the address.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
