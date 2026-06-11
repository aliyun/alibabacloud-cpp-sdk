// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdatePromptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePromptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTags, bizTagsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePromptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTags, bizTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
    };
    UpdatePromptShrinkRequest() = default ;
    UpdatePromptShrinkRequest(const UpdatePromptShrinkRequest &) = default ;
    UpdatePromptShrinkRequest(UpdatePromptShrinkRequest &&) = default ;
    UpdatePromptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePromptShrinkRequest() = default ;
    UpdatePromptShrinkRequest& operator=(const UpdatePromptShrinkRequest &) = default ;
    UpdatePromptShrinkRequest& operator=(UpdatePromptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTagsShrink_ == nullptr
        && this->description_ == nullptr && this->labelsShrink_ == nullptr && this->namespaceId_ == nullptr && this->promptKey_ == nullptr; };
    // bizTagsShrink Field Functions 
    bool hasBizTagsShrink() const { return this->bizTagsShrink_ != nullptr;};
    void deleteBizTagsShrink() { this->bizTagsShrink_ = nullptr;};
    inline string getBizTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(bizTagsShrink_, "") };
    inline UpdatePromptShrinkRequest& setBizTagsShrink(string bizTagsShrink) { DARABONBA_PTR_SET_VALUE(bizTagsShrink_, bizTagsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePromptShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline UpdatePromptShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdatePromptShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline UpdatePromptShrinkRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


  protected:
    shared_ptr<string> bizTagsShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> labelsShrink_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
