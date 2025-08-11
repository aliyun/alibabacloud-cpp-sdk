// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINTERPRETATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DATAINTERPRETATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataInterpretationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataInterpretationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(PromptForceOverride, promptForceOverride_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
      DARABONBA_PTR_TO_JSON(UserQuestion, userQuestion_);
    };
    friend void from_json(const Darabonba::Json& j, DataInterpretationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(PromptForceOverride, promptForceOverride_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
      DARABONBA_PTR_FROM_JSON(UserQuestion, userQuestion_);
    };
    DataInterpretationRequest() = default ;
    DataInterpretationRequest(const DataInterpretationRequest &) = default ;
    DataInterpretationRequest(DataInterpretationRequest &&) = default ;
    DataInterpretationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataInterpretationRequest() = default ;
    DataInterpretationRequest& operator=(const DataInterpretationRequest &) = default ;
    DataInterpretationRequest& operator=(DataInterpretationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->modelCode_ != nullptr && this->promptForceOverride_ != nullptr && this->userPrompt_ != nullptr && this->userQuestion_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DataInterpretationRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline DataInterpretationRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // promptForceOverride Field Functions 
    bool hasPromptForceOverride() const { return this->promptForceOverride_ != nullptr;};
    void deletePromptForceOverride() { this->promptForceOverride_ = nullptr;};
    inline bool promptForceOverride() const { DARABONBA_PTR_GET_DEFAULT(promptForceOverride_, false) };
    inline DataInterpretationRequest& setPromptForceOverride(bool promptForceOverride) { DARABONBA_PTR_SET_VALUE(promptForceOverride_, promptForceOverride) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string userPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline DataInterpretationRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


    // userQuestion Field Functions 
    bool hasUserQuestion() const { return this->userQuestion_ != nullptr;};
    void deleteUserQuestion() { this->userQuestion_ = nullptr;};
    inline string userQuestion() const { DARABONBA_PTR_GET_DEFAULT(userQuestion_, "") };
    inline DataInterpretationRequest& setUserQuestion(string userQuestion) { DARABONBA_PTR_SET_VALUE(userQuestion_, userQuestion) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<bool> promptForceOverride_ = nullptr;
    std::shared_ptr<string> userPrompt_ = nullptr;
    std::shared_ptr<string> userQuestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
