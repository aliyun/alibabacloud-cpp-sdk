// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONCONFIGFILE_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONCONFIGFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ApplicationConfigFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationConfigFile& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationConfigFile& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
    };
    ApplicationConfigFile() = default ;
    ApplicationConfigFile(const ApplicationConfigFile &) = default ;
    ApplicationConfigFile(ApplicationConfigFile &&) = default ;
    ApplicationConfigFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationConfigFile() = default ;
    ApplicationConfigFile& operator=(const ApplicationConfigFile &) = default ;
    ApplicationConfigFile& operator=(ApplicationConfigFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->configFileName_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ApplicationConfigFile& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ApplicationConfigFile& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


  protected:
    // 应用名称。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // 配置文件名称。
    std::shared_ptr<string> configFileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
