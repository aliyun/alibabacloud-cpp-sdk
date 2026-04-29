// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLARCLAWCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLARCLAWCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GetPolarClawConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolarClawConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ConfigPath, configPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolarClawConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ConfigPath, configPath_);
    };
    GetPolarClawConfigRequest() = default ;
    GetPolarClawConfigRequest(const GetPolarClawConfigRequest &) = default ;
    GetPolarClawConfigRequest(GetPolarClawConfigRequest &&) = default ;
    GetPolarClawConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolarClawConfigRequest() = default ;
    GetPolarClawConfigRequest& operator=(const GetPolarClawConfigRequest &) = default ;
    GetPolarClawConfigRequest& operator=(GetPolarClawConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->configPath_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetPolarClawConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configPath Field Functions 
    bool hasConfigPath() const { return this->configPath_ != nullptr;};
    void deleteConfigPath() { this->configPath_ = nullptr;};
    inline string getConfigPath() const { DARABONBA_PTR_GET_DEFAULT(configPath_, "") };
    inline GetPolarClawConfigRequest& setConfigPath(string configPath) { DARABONBA_PTR_SET_VALUE(configPath_, configPath) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> configPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
