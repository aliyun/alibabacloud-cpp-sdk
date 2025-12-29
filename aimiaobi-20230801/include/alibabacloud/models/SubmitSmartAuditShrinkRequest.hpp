// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTAUDITSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTAUDITSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartAuditShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartAuditShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrlList, imageUrlListShrink_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(SubCodes, subCodesShrink_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrlsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartAuditShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrlList, imageUrlListShrink_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(SubCodes, subCodesShrink_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrlsShrink_);
    };
    SubmitSmartAuditShrinkRequest() = default ;
    SubmitSmartAuditShrinkRequest(const SubmitSmartAuditShrinkRequest &) = default ;
    SubmitSmartAuditShrinkRequest(SubmitSmartAuditShrinkRequest &&) = default ;
    SubmitSmartAuditShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartAuditShrinkRequest() = default ;
    SubmitSmartAuditShrinkRequest& operator=(const SubmitSmartAuditShrinkRequest &) = default ;
    SubmitSmartAuditShrinkRequest& operator=(SubmitSmartAuditShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrlListShrink_ == nullptr
        && this->noteId_ == nullptr && this->subCodesShrink_ == nullptr && this->termsName_ == nullptr && this->text_ == nullptr && this->workspaceId_ == nullptr
        && this->imageUrlsShrink_ == nullptr; };
    // imageUrlListShrink Field Functions 
    bool hasImageUrlListShrink() const { return this->imageUrlListShrink_ != nullptr;};
    void deleteImageUrlListShrink() { this->imageUrlListShrink_ = nullptr;};
    inline string getImageUrlListShrink() const { DARABONBA_PTR_GET_DEFAULT(imageUrlListShrink_, "") };
    inline SubmitSmartAuditShrinkRequest& setImageUrlListShrink(string imageUrlListShrink) { DARABONBA_PTR_SET_VALUE(imageUrlListShrink_, imageUrlListShrink) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline SubmitSmartAuditShrinkRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // subCodesShrink Field Functions 
    bool hasSubCodesShrink() const { return this->subCodesShrink_ != nullptr;};
    void deleteSubCodesShrink() { this->subCodesShrink_ = nullptr;};
    inline string getSubCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(subCodesShrink_, "") };
    inline SubmitSmartAuditShrinkRequest& setSubCodesShrink(string subCodesShrink) { DARABONBA_PTR_SET_VALUE(subCodesShrink_, subCodesShrink) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string getTermsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline SubmitSmartAuditShrinkRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitSmartAuditShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartAuditShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // imageUrlsShrink Field Functions 
    bool hasImageUrlsShrink() const { return this->imageUrlsShrink_ != nullptr;};
    void deleteImageUrlsShrink() { this->imageUrlsShrink_ = nullptr;};
    inline string getImageUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(imageUrlsShrink_, "") };
    inline SubmitSmartAuditShrinkRequest& setImageUrlsShrink(string imageUrlsShrink) { DARABONBA_PTR_SET_VALUE(imageUrlsShrink_, imageUrlsShrink) };


  protected:
    shared_ptr<string> imageUrlListShrink_ {};
    shared_ptr<string> noteId_ {};
    shared_ptr<string> subCodesShrink_ {};
    shared_ptr<string> termsName_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> imageUrlsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
