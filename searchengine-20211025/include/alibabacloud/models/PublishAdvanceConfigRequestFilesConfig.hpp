// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHADVANCECONFIGREQUESTFILESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHADVANCECONFIGREQUESTFILESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FilesConfigVariablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class PublishAdvanceConfigRequestFilesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAdvanceConfigRequestFilesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAdvanceConfigRequestFilesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    PublishAdvanceConfigRequestFilesConfig() = default ;
    PublishAdvanceConfigRequestFilesConfig(const PublishAdvanceConfigRequestFilesConfig &) = default ;
    PublishAdvanceConfigRequestFilesConfig(PublishAdvanceConfigRequestFilesConfig &&) = default ;
    PublishAdvanceConfigRequestFilesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAdvanceConfigRequestFilesConfig() = default ;
    PublishAdvanceConfigRequestFilesConfig& operator=(const PublishAdvanceConfigRequestFilesConfig &) = default ;
    PublishAdvanceConfigRequestFilesConfig& operator=(PublishAdvanceConfigRequestFilesConfig &&) = default ;
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
    inline PublishAdvanceConfigRequestFilesConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Models::FilesConfigVariablesValue> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Models::FilesConfigVariablesValue>) };
    inline map<string, Models::FilesConfigVariablesValue> variables() { DARABONBA_PTR_GET(variables_, map<string, Models::FilesConfigVariablesValue>) };
    inline PublishAdvanceConfigRequestFilesConfig& setVariables(const map<string, Models::FilesConfigVariablesValue> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline PublishAdvanceConfigRequestFilesConfig& setVariables(map<string, Models::FilesConfigVariablesValue> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    // The variables.
    std::shared_ptr<map<string, Models::FilesConfigVariablesValue>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
