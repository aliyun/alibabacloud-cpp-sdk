// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARMSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ARMSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ArmsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArmsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(licenseKey, licenseKey_);
    };
    friend void from_json(const Darabonba::Json& j, ArmsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(licenseKey, licenseKey_);
    };
    ArmsConfig() = default ;
    ArmsConfig(const ArmsConfig &) = default ;
    ArmsConfig(ArmsConfig &&) = default ;
    ArmsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArmsConfig() = default ;
    ArmsConfig& operator=(const ArmsConfig &) = default ;
    ArmsConfig& operator=(ArmsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->appId_ == nullptr && this->licenseKey_ == nullptr; };
    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline ArmsConfig& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ArmsConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // licenseKey Field Functions 
    bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
    void deleteLicenseKey() { this->licenseKey_ = nullptr;};
    inline string getLicenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
    inline ArmsConfig& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


  protected:
    shared_ptr<string> agentVersion_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> licenseKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
