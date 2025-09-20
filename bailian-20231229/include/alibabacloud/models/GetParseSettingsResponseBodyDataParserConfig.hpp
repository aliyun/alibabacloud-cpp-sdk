// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODYDATAPARSERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODYDATAPARSERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetParseSettingsResponseBodyDataParserConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseSettingsResponseBodyDataParserConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelPrompt, modelPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseSettingsResponseBodyDataParserConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelPrompt, modelPrompt_);
    };
    GetParseSettingsResponseBodyDataParserConfig() = default ;
    GetParseSettingsResponseBodyDataParserConfig(const GetParseSettingsResponseBodyDataParserConfig &) = default ;
    GetParseSettingsResponseBodyDataParserConfig(GetParseSettingsResponseBodyDataParserConfig &&) = default ;
    GetParseSettingsResponseBodyDataParserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseSettingsResponseBodyDataParserConfig() = default ;
    GetParseSettingsResponseBodyDataParserConfig& operator=(const GetParseSettingsResponseBodyDataParserConfig &) = default ;
    GetParseSettingsResponseBodyDataParserConfig& operator=(GetParseSettingsResponseBodyDataParserConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelName_ != nullptr
        && this->modelPrompt_ != nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetParseSettingsResponseBodyDataParserConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelPrompt Field Functions 
    bool hasModelPrompt() const { return this->modelPrompt_ != nullptr;};
    void deleteModelPrompt() { this->modelPrompt_ = nullptr;};
    inline string modelPrompt() const { DARABONBA_PTR_GET_DEFAULT(modelPrompt_, "") };
    inline GetParseSettingsResponseBodyDataParserConfig& setModelPrompt(string modelPrompt) { DARABONBA_PTR_SET_VALUE(modelPrompt_, modelPrompt) };


  protected:
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> modelPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
