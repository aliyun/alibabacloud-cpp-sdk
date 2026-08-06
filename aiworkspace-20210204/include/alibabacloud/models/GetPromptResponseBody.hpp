// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetPromptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPromptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PromptName, promptName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPromptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PromptName, promptName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPromptResponseBody() = default ;
    GetPromptResponseBody(const GetPromptResponseBody &) = default ;
    GetPromptResponseBody(GetPromptResponseBody &&) = default ;
    GetPromptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPromptResponseBody() = default ;
    GetPromptResponseBody& operator=(const GetPromptResponseBody &) = default ;
    GetPromptResponseBody& operator=(GetPromptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->frameworkContent_ == nullptr && this->frameworkType_ == nullptr && this->modifyTime_ == nullptr
        && this->promptName_ == nullptr && this->requestId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetPromptResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPromptResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPromptResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frameworkContent Field Functions 
    bool hasFrameworkContent() const { return this->frameworkContent_ != nullptr;};
    void deleteFrameworkContent() { this->frameworkContent_ = nullptr;};
    inline string getFrameworkContent() const { DARABONBA_PTR_GET_DEFAULT(frameworkContent_, "") };
    inline GetPromptResponseBody& setFrameworkContent(string frameworkContent) { DARABONBA_PTR_SET_VALUE(frameworkContent_, frameworkContent) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline GetPromptResponseBody& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetPromptResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // promptName Field Functions 
    bool hasPromptName() const { return this->promptName_ != nullptr;};
    void deletePromptName() { this->promptName_ = nullptr;};
    inline string getPromptName() const { DARABONBA_PTR_GET_DEFAULT(promptName_, "") };
    inline GetPromptResponseBody& setPromptName(string promptName) { DARABONBA_PTR_SET_VALUE(promptName_, promptName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPromptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access type. Valid values:
    // 
    // - PUBLIC: All members in the current workspace can access the prompt.
    // - PRIVATE: Only the creator can access the prompt.
    shared_ptr<string> accessibility_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The prompt description.
    shared_ptr<string> description_ {};
    // The prompt content.
    shared_ptr<string> frameworkContent_ {};
    // The prompt template framework type.
    shared_ptr<string> frameworkType_ {};
    // The modification time.
    shared_ptr<string> modifyTime_ {};
    // The prompt name.
    shared_ptr<string> promptName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
