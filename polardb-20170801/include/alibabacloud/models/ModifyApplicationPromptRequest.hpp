// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationPromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationPromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PromptId, promptId_);
      DARABONBA_PTR_TO_JSON(PromptName, promptName_);
      DARABONBA_PTR_TO_JSON(PromptValue, promptValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationPromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
      DARABONBA_PTR_FROM_JSON(PromptName, promptName_);
      DARABONBA_PTR_FROM_JSON(PromptValue, promptValue_);
    };
    ModifyApplicationPromptRequest() = default ;
    ModifyApplicationPromptRequest(const ModifyApplicationPromptRequest &) = default ;
    ModifyApplicationPromptRequest(ModifyApplicationPromptRequest &&) = default ;
    ModifyApplicationPromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationPromptRequest() = default ;
    ModifyApplicationPromptRequest& operator=(const ModifyApplicationPromptRequest &) = default ;
    ModifyApplicationPromptRequest& operator=(ModifyApplicationPromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->promptId_ == nullptr && this->promptName_ == nullptr && this->promptValue_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationPromptRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline ModifyApplicationPromptRequest& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


    // promptName Field Functions 
    bool hasPromptName() const { return this->promptName_ != nullptr;};
    void deletePromptName() { this->promptName_ = nullptr;};
    inline string getPromptName() const { DARABONBA_PTR_GET_DEFAULT(promptName_, "") };
    inline ModifyApplicationPromptRequest& setPromptName(string promptName) { DARABONBA_PTR_SET_VALUE(promptName_, promptName) };


    // promptValue Field Functions 
    bool hasPromptValue() const { return this->promptValue_ != nullptr;};
    void deletePromptValue() { this->promptValue_ = nullptr;};
    inline string getPromptValue() const { DARABONBA_PTR_GET_DEFAULT(promptValue_, "") };
    inline ModifyApplicationPromptRequest& setPromptValue(string promptValue) { DARABONBA_PTR_SET_VALUE(promptValue_, promptValue) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // papt-xx
    // 
    // This parameter is required.
    shared_ptr<string> promptId_ {};
    shared_ptr<string> promptName_ {};
    shared_ptr<string> promptValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
