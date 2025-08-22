// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ConfigAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ConfigAppRequest() = default ;
    ConfigAppRequest(const ConfigAppRequest &) = default ;
    ConfigAppRequest(ConfigAppRequest &&) = default ;
    ConfigAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigAppRequest() = default ;
    ConfigAppRequest& operator=(const ConfigAppRequest &) = default ;
    ConfigAppRequest& operator=(ConfigAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIds_ != nullptr
        && this->enable_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline ConfigAppRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ConfigAppRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConfigAppRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The process identifier (PID) of the application. Separate multiple PIDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> appIds_ = nullptr;
    // Specifies whether to turn on or off the main switch of the ARMS agent. The monitoring stops after the switch is turned off. If you do not specify this parameter, the main switch status of the ARMS agent is queried.
    // 
    // *   `true`: turns on the switch
    // *   `false`: turns off the switch
    std::shared_ptr<string> enable_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the application. Set the value to **TRACE**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
