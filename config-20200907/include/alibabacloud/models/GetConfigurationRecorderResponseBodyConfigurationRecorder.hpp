// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODYCONFIGURATIONRECORDER_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODYCONFIGURATIONRECORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigurationRecorderResponseBodyConfigurationRecorder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigurationRecorderResponseBodyConfigurationRecorder& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationRecorderStatus, configurationRecorderStatus_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigurationRecorderResponseBodyConfigurationRecorder& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationRecorderStatus, configurationRecorderStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    GetConfigurationRecorderResponseBodyConfigurationRecorder() = default ;
    GetConfigurationRecorderResponseBodyConfigurationRecorder(const GetConfigurationRecorderResponseBodyConfigurationRecorder &) = default ;
    GetConfigurationRecorderResponseBodyConfigurationRecorder(GetConfigurationRecorderResponseBodyConfigurationRecorder &&) = default ;
    GetConfigurationRecorderResponseBodyConfigurationRecorder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigurationRecorderResponseBodyConfigurationRecorder() = default ;
    GetConfigurationRecorderResponseBodyConfigurationRecorder& operator=(const GetConfigurationRecorderResponseBodyConfigurationRecorder &) = default ;
    GetConfigurationRecorderResponseBodyConfigurationRecorder& operator=(GetConfigurationRecorderResponseBodyConfigurationRecorder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationRecorderStatus_ == nullptr
        && return this->resourceTypes_ == nullptr; };
    // configurationRecorderStatus Field Functions 
    bool hasConfigurationRecorderStatus() const { return this->configurationRecorderStatus_ != nullptr;};
    void deleteConfigurationRecorderStatus() { this->configurationRecorderStatus_ = nullptr;};
    inline string configurationRecorderStatus() const { DARABONBA_PTR_GET_DEFAULT(configurationRecorderStatus_, "") };
    inline GetConfigurationRecorderResponseBodyConfigurationRecorder& setConfigurationRecorderStatus(string configurationRecorderStatus) { DARABONBA_PTR_SET_VALUE(configurationRecorderStatus_, configurationRecorderStatus) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline GetConfigurationRecorderResponseBodyConfigurationRecorder& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline GetConfigurationRecorderResponseBodyConfigurationRecorder& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The status of the configuration recorder. Valid values:
    // 
    // *   REGISTRABLE: The configuration recorder has not been registered.
    // *   BUILDING: The configuration recorder is being deployed.
    // *   REGISTERED: The configuration recorder has been registered.
    // *   REBUILDING: The configuration recorder is being redeployed.
    std::shared_ptr<string> configurationRecorderStatus_ = nullptr;
    // The types of resources that are monitored.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
