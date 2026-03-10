// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHLIGHTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHLIGHTTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateHighlightTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighlightTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Edit, editShrink_);
      DARABONBA_PTR_TO_JSON(Highlight, highlightShrink_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighlightTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Edit, editShrink_);
      DARABONBA_PTR_FROM_JSON(Highlight, highlightShrink_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateHighlightTaskShrinkRequest() = default ;
    CreateHighlightTaskShrinkRequest(const CreateHighlightTaskShrinkRequest &) = default ;
    CreateHighlightTaskShrinkRequest(CreateHighlightTaskShrinkRequest &&) = default ;
    CreateHighlightTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighlightTaskShrinkRequest() = default ;
    CreateHighlightTaskShrinkRequest& operator=(const CreateHighlightTaskShrinkRequest &) = default ;
    CreateHighlightTaskShrinkRequest& operator=(CreateHighlightTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && this->editShrink_ == nullptr && this->highlightShrink_ == nullptr && this->mode_ == nullptr && this->notificationShrink_ == nullptr && this->outputShrink_ == nullptr
        && this->projectName_ == nullptr && this->sourcesShrink_ == nullptr && this->tagsShrink_ == nullptr && this->type_ == nullptr && this->userData_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // editShrink Field Functions 
    bool hasEditShrink() const { return this->editShrink_ != nullptr;};
    void deleteEditShrink() { this->editShrink_ = nullptr;};
    inline string getEditShrink() const { DARABONBA_PTR_GET_DEFAULT(editShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setEditShrink(string editShrink) { DARABONBA_PTR_SET_VALUE(editShrink_, editShrink) };


    // highlightShrink Field Functions 
    bool hasHighlightShrink() const { return this->highlightShrink_ != nullptr;};
    void deleteHighlightShrink() { this->highlightShrink_ = nullptr;};
    inline string getHighlightShrink() const { DARABONBA_PTR_GET_DEFAULT(highlightShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setHighlightShrink(string highlightShrink) { DARABONBA_PTR_SET_VALUE(highlightShrink_, highlightShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateHighlightTaskShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string getOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateHighlightTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string getSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateHighlightTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHighlightTaskShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateHighlightTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> credentialConfigShrink_ {};
    shared_ptr<string> editShrink_ {};
    shared_ptr<string> highlightShrink_ {};
    shared_ptr<string> mode_ {};
    shared_ptr<string> notificationShrink_ {};
    // This parameter is required.
    shared_ptr<string> outputShrink_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> sourcesShrink_ {};
    shared_ptr<string> tagsShrink_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
