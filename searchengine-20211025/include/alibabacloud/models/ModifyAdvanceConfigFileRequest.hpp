// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADVANCECONFIGFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADVANCECONFIGFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/VariablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyAdvanceConfigFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAdvanceConfigFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAdvanceConfigFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
    };
    ModifyAdvanceConfigFileRequest() = default ;
    ModifyAdvanceConfigFileRequest(const ModifyAdvanceConfigFileRequest &) = default ;
    ModifyAdvanceConfigFileRequest(ModifyAdvanceConfigFileRequest &&) = default ;
    ModifyAdvanceConfigFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAdvanceConfigFileRequest() = default ;
    ModifyAdvanceConfigFileRequest& operator=(const ModifyAdvanceConfigFileRequest &) = default ;
    ModifyAdvanceConfigFileRequest& operator=(ModifyAdvanceConfigFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->variables_ != nullptr && this->fileName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModifyAdvanceConfigFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, VariablesValue> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, VariablesValue>) };
    inline map<string, VariablesValue> variables() { DARABONBA_PTR_GET(variables_, map<string, VariablesValue>) };
    inline ModifyAdvanceConfigFileRequest& setVariables(const map<string, VariablesValue> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ModifyAdvanceConfigFileRequest& setVariables(map<string, VariablesValue> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ModifyAdvanceConfigFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    // The variables.
    std::shared_ptr<map<string, VariablesValue>> variables_ = nullptr;
    // The name of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
