// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAvailableHoneypotResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableHoneypotResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_TO_JSON(HoneypotImageId, honeypotImageId_);
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(HoneypotImageType, honeypotImageType_);
      DARABONBA_PTR_TO_JSON(HoneypotImageVersion, honeypotImageVersion_);
      DARABONBA_PTR_TO_JSON(Multiports, multiports_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableHoneypotResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageId, honeypotImageId_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageType, honeypotImageType_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageVersion, honeypotImageVersion_);
      DARABONBA_PTR_FROM_JSON(Multiports, multiports_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ListAvailableHoneypotResponseBodyData() = default ;
    ListAvailableHoneypotResponseBodyData(const ListAvailableHoneypotResponseBodyData &) = default ;
    ListAvailableHoneypotResponseBodyData(ListAvailableHoneypotResponseBodyData &&) = default ;
    ListAvailableHoneypotResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableHoneypotResponseBodyData() = default ;
    ListAvailableHoneypotResponseBodyData& operator=(const ListAvailableHoneypotResponseBodyData &) = default ;
    ListAvailableHoneypotResponseBodyData& operator=(ListAvailableHoneypotResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotImageDisplayName_ == nullptr
        && return this->honeypotImageId_ == nullptr && return this->honeypotImageName_ == nullptr && return this->honeypotImageType_ == nullptr && return this->honeypotImageVersion_ == nullptr && return this->multiports_ == nullptr
        && return this->proto_ == nullptr && return this->servicePort_ == nullptr && return this->template_ == nullptr; };
    // honeypotImageDisplayName Field Functions 
    bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
    void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
    inline string honeypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
    inline ListAvailableHoneypotResponseBodyData& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


    // honeypotImageId Field Functions 
    bool hasHoneypotImageId() const { return this->honeypotImageId_ != nullptr;};
    void deleteHoneypotImageId() { this->honeypotImageId_ = nullptr;};
    inline string honeypotImageId() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageId_, "") };
    inline ListAvailableHoneypotResponseBodyData& setHoneypotImageId(string honeypotImageId) { DARABONBA_PTR_SET_VALUE(honeypotImageId_, honeypotImageId) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline ListAvailableHoneypotResponseBodyData& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotImageType Field Functions 
    bool hasHoneypotImageType() const { return this->honeypotImageType_ != nullptr;};
    void deleteHoneypotImageType() { this->honeypotImageType_ = nullptr;};
    inline string honeypotImageType() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageType_, "") };
    inline ListAvailableHoneypotResponseBodyData& setHoneypotImageType(string honeypotImageType) { DARABONBA_PTR_SET_VALUE(honeypotImageType_, honeypotImageType) };


    // honeypotImageVersion Field Functions 
    bool hasHoneypotImageVersion() const { return this->honeypotImageVersion_ != nullptr;};
    void deleteHoneypotImageVersion() { this->honeypotImageVersion_ = nullptr;};
    inline string honeypotImageVersion() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageVersion_, "") };
    inline ListAvailableHoneypotResponseBodyData& setHoneypotImageVersion(string honeypotImageVersion) { DARABONBA_PTR_SET_VALUE(honeypotImageVersion_, honeypotImageVersion) };


    // multiports Field Functions 
    bool hasMultiports() const { return this->multiports_ != nullptr;};
    void deleteMultiports() { this->multiports_ = nullptr;};
    inline string multiports() const { DARABONBA_PTR_GET_DEFAULT(multiports_, "") };
    inline ListAvailableHoneypotResponseBodyData& setMultiports(string multiports) { DARABONBA_PTR_SET_VALUE(multiports_, multiports) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline ListAvailableHoneypotResponseBodyData& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline ListAvailableHoneypotResponseBodyData& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline ListAvailableHoneypotResponseBodyData& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The display name of the image.
    std::shared_ptr<string> honeypotImageDisplayName_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> honeypotImageId_ = nullptr;
    // The name of the image that is used for the honeypot.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The type of the image.
    std::shared_ptr<string> honeypotImageType_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> honeypotImageVersion_ = nullptr;
    // The port that is supported by the honeypot. The value is in the JSON format. Valid values:
    // 
    // *   **log_type**: the log type
    // *   **proto**: the supported protocol
    // *   **description**: the description
    // *   **ports**: the supported ports
    // *   **port_str**: the supported port number of the string type
    // *   **type**: the type
    std::shared_ptr<string> multiports_ = nullptr;
    // The protocol that is supported by the honeypot.
    std::shared_ptr<string> proto_ = nullptr;
    // The service port of the honeypot.
    std::shared_ptr<string> servicePort_ = nullptr;
    // The configuration template of the honeypot.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
