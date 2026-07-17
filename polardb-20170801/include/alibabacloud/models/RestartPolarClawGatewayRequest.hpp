// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTPOLARCLAWGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTPOLARCLAWGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RestartPolarClawGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartPolarClawGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, RestartPolarClawGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    RestartPolarClawGatewayRequest() = default ;
    RestartPolarClawGatewayRequest(const RestartPolarClawGatewayRequest &) = default ;
    RestartPolarClawGatewayRequest(RestartPolarClawGatewayRequest &&) = default ;
    RestartPolarClawGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartPolarClawGatewayRequest() = default ;
    RestartPolarClawGatewayRequest& operator=(const RestartPolarClawGatewayRequest &) = default ;
    RestartPolarClawGatewayRequest& operator=(RestartPolarClawGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->mode_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RestartPolarClawGatewayRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RestartPolarClawGatewayRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
