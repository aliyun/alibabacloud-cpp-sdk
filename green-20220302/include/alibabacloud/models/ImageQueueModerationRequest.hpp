// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ImageQueueModerationRequest() = default ;
    ImageQueueModerationRequest(const ImageQueueModerationRequest &) = default ;
    ImageQueueModerationRequest(ImageQueueModerationRequest &&) = default ;
    ImageQueueModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationRequest() = default ;
    ImageQueueModerationRequest& operator=(const ImageQueueModerationRequest &) = default ;
    ImageQueueModerationRequest& operator=(ImageQueueModerationRequest &&) = default ;
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
    inline ImageQueueModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ImageQueueModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    std::shared_ptr<string> service_ = nullptr;
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
