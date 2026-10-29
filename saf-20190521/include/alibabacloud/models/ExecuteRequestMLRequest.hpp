// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEREQUESTMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEREQUESTMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Saf20190521
{
namespace Models
{
  class ExecuteRequestMLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteRequestMLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteRequestMLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ExecuteRequestMLRequest() = default ;
    ExecuteRequestMLRequest(const ExecuteRequestMLRequest &) = default ;
    ExecuteRequestMLRequest(ExecuteRequestMLRequest &&) = default ;
    ExecuteRequestMLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteRequestMLRequest() = default ;
    ExecuteRequestMLRequest& operator=(const ExecuteRequestMLRequest &) = default ;
    ExecuteRequestMLRequest& operator=(ExecuteRequestMLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->service_ == nullptr && this->serviceParameters_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecuteRequestMLRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ExecuteRequestMLRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ExecuteRequestMLRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The language.
    shared_ptr<string> lang_ {};
    // The service product code. Set this parameter to saf_de because this operation supports only custom events.
    // 
    // This parameter is required.
    shared_ptr<string> service_ {};
    // The service input parameters in JSON format. You must include the eventCode property of the custom event in the JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Saf20190521
#endif
