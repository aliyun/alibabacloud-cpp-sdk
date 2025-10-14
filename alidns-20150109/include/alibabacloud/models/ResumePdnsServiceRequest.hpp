// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPDNSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPDNSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ResumePdnsServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePdnsServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePdnsServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    ResumePdnsServiceRequest() = default ;
    ResumePdnsServiceRequest(const ResumePdnsServiceRequest &) = default ;
    ResumePdnsServiceRequest(ResumePdnsServiceRequest &&) = default ;
    ResumePdnsServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePdnsServiceRequest() = default ;
    ResumePdnsServiceRequest& operator=(const ResumePdnsServiceRequest &) = default ;
    ResumePdnsServiceRequest& operator=(ResumePdnsServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->serviceType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ResumePdnsServiceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ResumePdnsServiceRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
