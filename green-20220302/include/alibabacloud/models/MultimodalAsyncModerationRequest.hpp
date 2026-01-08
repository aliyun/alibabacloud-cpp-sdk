// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALASYNCMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALASYNCMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultimodalAsyncModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalAsyncModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalAsyncModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    MultimodalAsyncModerationRequest() = default ;
    MultimodalAsyncModerationRequest(const MultimodalAsyncModerationRequest &) = default ;
    MultimodalAsyncModerationRequest(MultimodalAsyncModerationRequest &&) = default ;
    MultimodalAsyncModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalAsyncModerationRequest() = default ;
    MultimodalAsyncModerationRequest& operator=(const MultimodalAsyncModerationRequest &) = default ;
    MultimodalAsyncModerationRequest& operator=(MultimodalAsyncModerationRequest &&) = default ;
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
    inline MultimodalAsyncModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline MultimodalAsyncModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    shared_ptr<string> service_ {};
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
