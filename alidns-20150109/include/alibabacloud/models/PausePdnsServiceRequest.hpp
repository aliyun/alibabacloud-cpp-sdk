// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPDNSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPDNSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PausePdnsServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePdnsServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, PausePdnsServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    PausePdnsServiceRequest() = default ;
    PausePdnsServiceRequest(const PausePdnsServiceRequest &) = default ;
    PausePdnsServiceRequest(PausePdnsServiceRequest &&) = default ;
    PausePdnsServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePdnsServiceRequest() = default ;
    PausePdnsServiceRequest& operator=(const PausePdnsServiceRequest &) = default ;
    PausePdnsServiceRequest& operator=(PausePdnsServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->serviceType_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PausePdnsServiceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline PausePdnsServiceRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
