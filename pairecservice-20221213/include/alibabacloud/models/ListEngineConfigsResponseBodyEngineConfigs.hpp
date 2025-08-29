// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODYENGINECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODYENGINECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListEngineConfigsResponseBodyEngineConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEngineConfigsResponseBodyEngineConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtReleasedTime, gmtReleasedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListEngineConfigsResponseBodyEngineConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtReleasedTime, gmtReleasedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListEngineConfigsResponseBodyEngineConfigs() = default ;
    ListEngineConfigsResponseBodyEngineConfigs(const ListEngineConfigsResponseBodyEngineConfigs &) = default ;
    ListEngineConfigsResponseBodyEngineConfigs(ListEngineConfigsResponseBodyEngineConfigs &&) = default ;
    ListEngineConfigsResponseBodyEngineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEngineConfigsResponseBodyEngineConfigs() = default ;
    ListEngineConfigsResponseBodyEngineConfigs& operator=(const ListEngineConfigsResponseBodyEngineConfigs &) = default ;
    ListEngineConfigsResponseBodyEngineConfigs& operator=(ListEngineConfigsResponseBodyEngineConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configValue_ != nullptr
        && this->description_ != nullptr && this->engineConfigId_ != nullptr && this->environment_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->gmtReleasedTime_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->version_ != nullptr; };
    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineConfigId Field Functions 
    bool hasEngineConfigId() const { return this->engineConfigId_ != nullptr;};
    void deleteEngineConfigId() { this->engineConfigId_ = nullptr;};
    inline string engineConfigId() const { DARABONBA_PTR_GET_DEFAULT(engineConfigId_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setEngineConfigId(string engineConfigId) { DARABONBA_PTR_SET_VALUE(engineConfigId_, engineConfigId) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtReleasedTime Field Functions 
    bool hasGmtReleasedTime() const { return this->gmtReleasedTime_ != nullptr;};
    void deleteGmtReleasedTime() { this->gmtReleasedTime_ = nullptr;};
    inline string gmtReleasedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtReleasedTime_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setGmtReleasedTime(string gmtReleasedTime) { DARABONBA_PTR_SET_VALUE(gmtReleasedTime_, gmtReleasedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListEngineConfigsResponseBodyEngineConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> engineConfigId_ = nullptr;
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtReleasedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
