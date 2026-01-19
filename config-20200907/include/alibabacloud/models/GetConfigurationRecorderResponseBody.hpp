// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODY_HPP_
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
  class GetConfigurationRecorderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigurationRecorderResponseBody() = default ;
    GetConfigurationRecorderResponseBody(const GetConfigurationRecorderResponseBody &) = default ;
    GetConfigurationRecorderResponseBody(GetConfigurationRecorderResponseBody &&) = default ;
    GetConfigurationRecorderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigurationRecorderResponseBody() = default ;
    GetConfigurationRecorderResponseBody& operator=(const GetConfigurationRecorderResponseBody &) = default ;
    GetConfigurationRecorderResponseBody& operator=(GetConfigurationRecorderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigurationRecorder : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigurationRecorder& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigurationRecorderStatus, configurationRecorderStatus_);
        DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigurationRecorder& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigurationRecorderStatus, configurationRecorderStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      };
      ConfigurationRecorder() = default ;
      ConfigurationRecorder(const ConfigurationRecorder &) = default ;
      ConfigurationRecorder(ConfigurationRecorder &&) = default ;
      ConfigurationRecorder(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigurationRecorder() = default ;
      ConfigurationRecorder& operator=(const ConfigurationRecorder &) = default ;
      ConfigurationRecorder& operator=(ConfigurationRecorder &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configurationRecorderStatus_ == nullptr
        && this->resourceTypes_ == nullptr; };
      // configurationRecorderStatus Field Functions 
      bool hasConfigurationRecorderStatus() const { return this->configurationRecorderStatus_ != nullptr;};
      void deleteConfigurationRecorderStatus() { this->configurationRecorderStatus_ = nullptr;};
      inline string getConfigurationRecorderStatus() const { DARABONBA_PTR_GET_DEFAULT(configurationRecorderStatus_, "") };
      inline ConfigurationRecorder& setConfigurationRecorderStatus(string configurationRecorderStatus) { DARABONBA_PTR_SET_VALUE(configurationRecorderStatus_, configurationRecorderStatus) };


      // resourceTypes Field Functions 
      bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
      void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
      inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
      inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
      inline ConfigurationRecorder& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
      inline ConfigurationRecorder& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    protected:
      // The status of the configuration recorder. Valid values:
      // 
      // *   REGISTRABLE: The configuration recorder has not been registered.
      // *   BUILDING: The configuration recorder is being deployed.
      // *   REGISTERED: The configuration recorder has been registered.
      // *   REBUILDING: The configuration recorder is being redeployed.
      shared_ptr<string> configurationRecorderStatus_ {};
      // The types of resources that are monitored.
      shared_ptr<vector<string>> resourceTypes_ {};
    };

    virtual bool empty() const override { return this->configurationRecorder_ == nullptr
        && this->requestId_ == nullptr; };
    // configurationRecorder Field Functions 
    bool hasConfigurationRecorder() const { return this->configurationRecorder_ != nullptr;};
    void deleteConfigurationRecorder() { this->configurationRecorder_ = nullptr;};
    inline const GetConfigurationRecorderResponseBody::ConfigurationRecorder & getConfigurationRecorder() const { DARABONBA_PTR_GET_CONST(configurationRecorder_, GetConfigurationRecorderResponseBody::ConfigurationRecorder) };
    inline GetConfigurationRecorderResponseBody::ConfigurationRecorder getConfigurationRecorder() { DARABONBA_PTR_GET(configurationRecorder_, GetConfigurationRecorderResponseBody::ConfigurationRecorder) };
    inline GetConfigurationRecorderResponseBody& setConfigurationRecorder(const GetConfigurationRecorderResponseBody::ConfigurationRecorder & configurationRecorder) { DARABONBA_PTR_SET_VALUE(configurationRecorder_, configurationRecorder) };
    inline GetConfigurationRecorderResponseBody& setConfigurationRecorder(GetConfigurationRecorderResponseBody::ConfigurationRecorder && configurationRecorder) { DARABONBA_PTR_SET_RVALUE(configurationRecorder_, configurationRecorder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigurationRecorderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the configuration recorder that monitors resources.
    shared_ptr<GetConfigurationRecorderResponseBody::ConfigurationRecorder> configurationRecorder_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
