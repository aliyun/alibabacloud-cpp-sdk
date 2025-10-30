// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATIONACTIONSGUIDANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATIONACTIONSGUIDANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& obj) { 
      DARABONBA_PTR_TO_JSON(ButtonName, buttonName_);
      DARABONBA_PTR_TO_JSON(ButtonRef, buttonRef_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& obj) { 
      DARABONBA_PTR_FROM_JSON(ButtonName, buttonName_);
      DARABONBA_PTR_FROM_JSON(ButtonRef, buttonRef_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buttonName_ == nullptr
        && return this->buttonRef_ == nullptr && return this->content_ == nullptr && return this->title_ == nullptr; };
    // buttonName Field Functions 
    bool hasButtonName() const { return this->buttonName_ != nullptr;};
    void deleteButtonName() { this->buttonName_ = nullptr;};
    inline string buttonName() const { DARABONBA_PTR_GET_DEFAULT(buttonName_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& setButtonName(string buttonName) { DARABONBA_PTR_SET_VALUE(buttonName_, buttonName) };


    // buttonRef Field Functions 
    bool hasButtonRef() const { return this->buttonRef_ != nullptr;};
    void deleteButtonRef() { this->buttonRef_ = nullptr;};
    inline string buttonRef() const { DARABONBA_PTR_GET_DEFAULT(buttonRef_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& setButtonRef(string buttonRef) { DARABONBA_PTR_SET_VALUE(buttonRef_, buttonRef) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The display name of the fixing button.
    std::shared_ptr<string> buttonName_ = nullptr;
    // The navigation URL of the fixing button.
    std::shared_ptr<string> buttonRef_ = nullptr;
    // The fixing procedure.
    std::shared_ptr<string> content_ = nullptr;
    // The title of the fixing procedure.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
