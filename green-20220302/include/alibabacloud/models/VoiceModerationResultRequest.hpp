// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VoiceModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    VoiceModerationResultRequest() = default ;
    VoiceModerationResultRequest(const VoiceModerationResultRequest &) = default ;
    VoiceModerationResultRequest(VoiceModerationResultRequest &&) = default ;
    VoiceModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModerationResultRequest() = default ;
    VoiceModerationResultRequest& operator=(const VoiceModerationResultRequest &) = default ;
    VoiceModerationResultRequest& operator=(VoiceModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->service_ != nullptr
        && this->serviceParameters_ != nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline VoiceModerationResultRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline VoiceModerationResultRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The type of the moderation service. Valid values: nickname_detection: user nickname
    std::shared_ptr<string> service_ = nullptr;
    // The parameters of API requests that are sent from API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameter](https://help.aliyun.com/document_detail/43988.html).
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
