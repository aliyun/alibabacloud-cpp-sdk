// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUESTPARSERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUESTPARSERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ChangeParseSettingRequestParserConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeParseSettingRequestParserConfig& obj) { 
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelPrompt, modelPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeParseSettingRequestParserConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelPrompt, modelPrompt_);
    };
    ChangeParseSettingRequestParserConfig() = default ;
    ChangeParseSettingRequestParserConfig(const ChangeParseSettingRequestParserConfig &) = default ;
    ChangeParseSettingRequestParserConfig(ChangeParseSettingRequestParserConfig &&) = default ;
    ChangeParseSettingRequestParserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeParseSettingRequestParserConfig() = default ;
    ChangeParseSettingRequestParserConfig& operator=(const ChangeParseSettingRequestParserConfig &) = default ;
    ChangeParseSettingRequestParserConfig& operator=(ChangeParseSettingRequestParserConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr
        && return this->modelPrompt_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ChangeParseSettingRequestParserConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelPrompt Field Functions 
    bool hasModelPrompt() const { return this->modelPrompt_ != nullptr;};
    void deleteModelPrompt() { this->modelPrompt_ = nullptr;};
    inline string modelPrompt() const { DARABONBA_PTR_GET_DEFAULT(modelPrompt_, "") };
    inline ChangeParseSettingRequestParserConfig& setModelPrompt(string modelPrompt) { DARABONBA_PTR_SET_VALUE(modelPrompt_, modelPrompt) };


  protected:
    // The model name.
    // 
    // Valid values:
    // 
    // *   qwen-vl-max
    // *   qwen-vl-plus
    std::shared_ptr<string> modelName_ = nullptr;
    // The prompt used for parsing.
    std::shared_ptr<string> modelPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
