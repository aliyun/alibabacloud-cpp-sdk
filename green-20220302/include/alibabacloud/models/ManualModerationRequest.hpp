// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANUALMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ManualModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ManualModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ManualModerationRequest() = default ;
    ManualModerationRequest(const ManualModerationRequest &) = default ;
    ManualModerationRequest(ManualModerationRequest &&) = default ;
    ManualModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualModerationRequest() = default ;
    ManualModerationRequest& operator=(const ManualModerationRequest &) = default ;
    ManualModerationRequest& operator=(ManualModerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && return this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ManualModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ManualModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // Service.
    std::shared_ptr<string> service_ = nullptr;
    // Parameter set required for the review service, in JSON string format.
    // - url: The URL of the object to be checked. Please ensure that this URL is publicly accessible.
    // - dataId: Optional, the data ID corresponding to the object being checked.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
