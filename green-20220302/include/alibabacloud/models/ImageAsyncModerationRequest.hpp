// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEASYNCMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEASYNCMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageAsyncModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageAsyncModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ImageAsyncModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ImageAsyncModerationRequest() = default ;
    ImageAsyncModerationRequest(const ImageAsyncModerationRequest &) = default ;
    ImageAsyncModerationRequest(ImageAsyncModerationRequest &&) = default ;
    ImageAsyncModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageAsyncModerationRequest() = default ;
    ImageAsyncModerationRequest& operator=(const ImageAsyncModerationRequest &) = default ;
    ImageAsyncModerationRequest& operator=(ImageAsyncModerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ImageAsyncModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ImageAsyncModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The type of the moderation service.
    shared_ptr<string> service_ {};
    // The parameters required by the moderation service. The value is a JSON string.
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
