// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMPT_HPP_
#define ALIBABACLOUD_MODELS_PROMPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class Prompt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Prompt& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PromptId, promptId_);
      DARABONBA_PTR_TO_JSON(PromptName, promptName_);
    };
    friend void from_json(const Darabonba::Json& j, Prompt& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
      DARABONBA_PTR_FROM_JSON(PromptName, promptName_);
    };
    Prompt() = default ;
    Prompt(const Prompt &) = default ;
    Prompt(Prompt &&) = default ;
    Prompt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Prompt() = default ;
    Prompt& operator=(const Prompt &) = default ;
    Prompt& operator=(Prompt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->frameworkContent_ == nullptr && this->frameworkType_ == nullptr && this->modifyTime_ == nullptr
        && this->promptId_ == nullptr && this->promptName_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Prompt& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Prompt& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Prompt& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frameworkContent Field Functions 
    bool hasFrameworkContent() const { return this->frameworkContent_ != nullptr;};
    void deleteFrameworkContent() { this->frameworkContent_ = nullptr;};
    inline string getFrameworkContent() const { DARABONBA_PTR_GET_DEFAULT(frameworkContent_, "") };
    inline Prompt& setFrameworkContent(string frameworkContent) { DARABONBA_PTR_SET_VALUE(frameworkContent_, frameworkContent) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline Prompt& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline Prompt& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline Prompt& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


    // promptName Field Functions 
    bool hasPromptName() const { return this->promptName_ != nullptr;};
    void deletePromptName() { this->promptName_ = nullptr;};
    inline string getPromptName() const { DARABONBA_PTR_GET_DEFAULT(promptName_, "") };
    inline Prompt& setPromptName(string promptName) { DARABONBA_PTR_SET_VALUE(promptName_, promptName) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> frameworkContent_ {};
    shared_ptr<string> frameworkType_ {};
    shared_ptr<string> modifyTime_ {};
    shared_ptr<string> promptId_ {};
    shared_ptr<string> promptName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
