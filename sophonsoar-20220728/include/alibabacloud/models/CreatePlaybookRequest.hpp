// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CreatePlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_TO_JSON(TaskflowType, taskflowType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_FROM_JSON(TaskflowType, taskflowType_);
    };
    CreatePlaybookRequest() = default ;
    CreatePlaybookRequest(const CreatePlaybookRequest &) = default ;
    CreatePlaybookRequest(CreatePlaybookRequest &&) = default ;
    CreatePlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlaybookRequest() = default ;
    CreatePlaybookRequest& operator=(const CreatePlaybookRequest &) = default ;
    CreatePlaybookRequest& operator=(CreatePlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->inputParams_ == nullptr && return this->lang_ == nullptr && return this->outputParams_ == nullptr && return this->taskflowType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePlaybookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreatePlaybookRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline CreatePlaybookRequest& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreatePlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // outputParams Field Functions 
    bool hasOutputParams() const { return this->outputParams_ != nullptr;};
    void deleteOutputParams() { this->outputParams_ = nullptr;};
    inline string outputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
    inline CreatePlaybookRequest& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


    // taskflowType Field Functions 
    bool hasTaskflowType() const { return this->taskflowType_ != nullptr;};
    void deleteTaskflowType() { this->taskflowType_ = nullptr;};
    inline string taskflowType() const { DARABONBA_PTR_GET_DEFAULT(taskflowType_, "") };
    inline CreatePlaybookRequest& setTaskflowType(string taskflowType) { DARABONBA_PTR_SET_VALUE(taskflowType_, taskflowType) };


  protected:
    // Description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // Name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> inputParams_ = nullptr;
    // Language type for receiving messages. Values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> outputParams_ = nullptr;
    // Playbook TaskFlow type.
    // - **x6** : x6
    // - **bpmn**: bpmn
    std::shared_ptr<string> taskflowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
