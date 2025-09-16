// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGVALUEFILESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CONFIGVALUEFILESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ConfigValueFilesConfigVariablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ConfigValueFilesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigValueFilesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigValueFilesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ConfigValueFilesConfig() = default ;
    ConfigValueFilesConfig(const ConfigValueFilesConfig &) = default ;
    ConfigValueFilesConfig(ConfigValueFilesConfig &&) = default ;
    ConfigValueFilesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigValueFilesConfig() = default ;
    ConfigValueFilesConfig& operator=(const ConfigValueFilesConfig &) = default ;
    ConfigValueFilesConfig& operator=(ConfigValueFilesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->variables_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ConfigValueFilesConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Models::ConfigValueFilesConfigVariablesValue> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Models::ConfigValueFilesConfigVariablesValue>) };
    inline map<string, Models::ConfigValueFilesConfigVariablesValue> variables() { DARABONBA_PTR_GET(variables_, map<string, Models::ConfigValueFilesConfigVariablesValue>) };
    inline ConfigValueFilesConfig& setVariables(const map<string, Models::ConfigValueFilesConfigVariablesValue> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ConfigValueFilesConfig& setVariables(map<string, Models::ConfigValueFilesConfigVariablesValue> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    // The variables.
    std::shared_ptr<map<string, Models::ConfigValueFilesConfigVariablesValue>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
