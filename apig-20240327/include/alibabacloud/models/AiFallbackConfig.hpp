// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIFALLBACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIFALLBACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiFallbackConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiFallbackConfig& obj) { 
      DARABONBA_PTR_TO_JSON(onlyRedirectUpstreamCode, onlyRedirectUpstreamCode_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, AiFallbackConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(onlyRedirectUpstreamCode, onlyRedirectUpstreamCode_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
    };
    AiFallbackConfig() = default ;
    AiFallbackConfig(const AiFallbackConfig &) = default ;
    AiFallbackConfig(AiFallbackConfig &&) = default ;
    AiFallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiFallbackConfig() = default ;
    AiFallbackConfig& operator=(const AiFallbackConfig &) = default ;
    AiFallbackConfig& operator=(AiFallbackConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(passThroughModelName, passThroughModelName_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(targetModelName, targetModelName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(passThroughModelName, passThroughModelName_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(targetModelName, targetModelName_);
      };
      ServiceConfigs() = default ;
      ServiceConfigs(const ServiceConfigs &) = default ;
      ServiceConfigs(ServiceConfigs &&) = default ;
      ServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceConfigs() = default ;
      ServiceConfigs& operator=(const ServiceConfigs &) = default ;
      ServiceConfigs& operator=(ServiceConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->passThroughModelName_ == nullptr && this->serviceId_ == nullptr && this->targetModelName_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // passThroughModelName Field Functions 
      bool hasPassThroughModelName() const { return this->passThroughModelName_ != nullptr;};
      void deletePassThroughModelName() { this->passThroughModelName_ = nullptr;};
      inline bool getPassThroughModelName() const { DARABONBA_PTR_GET_DEFAULT(passThroughModelName_, false) };
      inline ServiceConfigs& setPassThroughModelName(bool passThroughModelName) { DARABONBA_PTR_SET_VALUE(passThroughModelName_, passThroughModelName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // targetModelName Field Functions 
      bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
      void deleteTargetModelName() { this->targetModelName_ = nullptr;};
      inline string getTargetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
      inline ServiceConfigs& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


    protected:
      // The name of the fallback service.
      shared_ptr<string> name_ {};
      // Determines whether to pass the original model name to the fallback service. If `true`, the model name from the original request is used. If `false`, the value of `targetModelName` is used instead.
      shared_ptr<bool> passThroughModelName_ {};
      // The unique ID of the fallback service.
      shared_ptr<string> serviceId_ {};
      // The name of the model to use for the fallback request.
      shared_ptr<string> targetModelName_ {};
    };

    virtual bool empty() const override { return this->onlyRedirectUpstreamCode_ == nullptr
        && this->serviceConfigs_ == nullptr; };
    // onlyRedirectUpstreamCode Field Functions 
    bool hasOnlyRedirectUpstreamCode() const { return this->onlyRedirectUpstreamCode_ != nullptr;};
    void deleteOnlyRedirectUpstreamCode() { this->onlyRedirectUpstreamCode_ = nullptr;};
    inline bool getOnlyRedirectUpstreamCode() const { DARABONBA_PTR_GET_DEFAULT(onlyRedirectUpstreamCode_, false) };
    inline AiFallbackConfig& setOnlyRedirectUpstreamCode(bool onlyRedirectUpstreamCode) { DARABONBA_PTR_SET_VALUE(onlyRedirectUpstreamCode_, onlyRedirectUpstreamCode) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<AiFallbackConfig::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
    inline vector<AiFallbackConfig::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
    inline AiFallbackConfig& setServiceConfigs(const vector<AiFallbackConfig::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline AiFallbackConfig& setServiceConfigs(vector<AiFallbackConfig::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


  protected:
    // Determines whether fallback is triggered solely by the upstream service\\"s status code. If `true`, fallback occurs only if the upstream service returns an error code. If `false`, other conditions, such as timeouts, can also trigger the fallback.
    shared_ptr<bool> onlyRedirectUpstreamCode_ {};
    // A list of fallback service configurations.
    shared_ptr<vector<AiFallbackConfig::ServiceConfigs>> serviceConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
