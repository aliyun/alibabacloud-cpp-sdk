// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODYAPPLICATIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODYAPPLICATIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ExportApplicationConfigsResponseBodyApplicationConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportApplicationConfigsResponseBodyApplicationConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, ExportApplicationConfigsResponseBodyApplicationConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    ExportApplicationConfigsResponseBodyApplicationConfigs() = default ;
    ExportApplicationConfigsResponseBodyApplicationConfigs(const ExportApplicationConfigsResponseBodyApplicationConfigs &) = default ;
    ExportApplicationConfigsResponseBodyApplicationConfigs(ExportApplicationConfigsResponseBodyApplicationConfigs &&) = default ;
    ExportApplicationConfigsResponseBodyApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportApplicationConfigsResponseBodyApplicationConfigs() = default ;
    ExportApplicationConfigsResponseBodyApplicationConfigs& operator=(const ExportApplicationConfigsResponseBodyApplicationConfigs &) = default ;
    ExportApplicationConfigsResponseBodyApplicationConfigs& operator=(ExportApplicationConfigsResponseBodyApplicationConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->configFileName_ == nullptr && return this->content_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ExportApplicationConfigsResponseBodyApplicationConfigs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ExportApplicationConfigsResponseBodyApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExportApplicationConfigsResponseBodyApplicationConfigs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // 文件名称。
    std::shared_ptr<string> configFileName_ = nullptr;
    // 文件内容，base64加密。
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
