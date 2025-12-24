// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPLAYBOOKINPUTOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPLAYBOOKINPUTOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ModifyPlaybookInputOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPlaybookInputOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExeConfig, exeConfig_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPlaybookInputOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExeConfig, exeConfig_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    ModifyPlaybookInputOutputRequest() = default ;
    ModifyPlaybookInputOutputRequest(const ModifyPlaybookInputOutputRequest &) = default ;
    ModifyPlaybookInputOutputRequest(ModifyPlaybookInputOutputRequest &&) = default ;
    ModifyPlaybookInputOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPlaybookInputOutputRequest() = default ;
    ModifyPlaybookInputOutputRequest& operator=(const ModifyPlaybookInputOutputRequest &) = default ;
    ModifyPlaybookInputOutputRequest& operator=(ModifyPlaybookInputOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exeConfig_ == nullptr
        && return this->inputParams_ == nullptr && return this->lang_ == nullptr && return this->outputParams_ == nullptr && return this->paramType_ == nullptr && return this->playbookUuid_ == nullptr; };
    // exeConfig Field Functions 
    bool hasExeConfig() const { return this->exeConfig_ != nullptr;};
    void deleteExeConfig() { this->exeConfig_ = nullptr;};
    inline string exeConfig() const { DARABONBA_PTR_GET_DEFAULT(exeConfig_, "") };
    inline ModifyPlaybookInputOutputRequest& setExeConfig(string exeConfig) { DARABONBA_PTR_SET_VALUE(exeConfig_, exeConfig) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline ModifyPlaybookInputOutputRequest& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyPlaybookInputOutputRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // outputParams Field Functions 
    bool hasOutputParams() const { return this->outputParams_ != nullptr;};
    void deleteOutputParams() { this->outputParams_ = nullptr;};
    inline string outputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
    inline ModifyPlaybookInputOutputRequest& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline ModifyPlaybookInputOutputRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ModifyPlaybookInputOutputRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The executed mode of a playbook. The value is a JSON array.
    std::shared_ptr<string> exeConfig_ = nullptr;
    // The configuration of the input parameters. The value is a JSON array.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The configuration of the output parameters. This parameter is unavailable. Leave it empty.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputParams_ = nullptr;
    // The input parameter type.
    // 
    // *   **template-ip**
    // *   **template-file**
    // *   **template-process**
    // *   **custom**
    std::shared_ptr<string> paramType_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
