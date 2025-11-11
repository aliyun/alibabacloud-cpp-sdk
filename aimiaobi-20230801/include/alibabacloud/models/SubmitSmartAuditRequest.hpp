// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitSmartAuditRequestImageUrlList.hpp>
#include <alibabacloud/models/SubmitSmartAuditRequestImageUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrlList, imageUrlList_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrlList, imageUrlList_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
    };
    SubmitSmartAuditRequest() = default ;
    SubmitSmartAuditRequest(const SubmitSmartAuditRequest &) = default ;
    SubmitSmartAuditRequest(SubmitSmartAuditRequest &&) = default ;
    SubmitSmartAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartAuditRequest() = default ;
    SubmitSmartAuditRequest& operator=(const SubmitSmartAuditRequest &) = default ;
    SubmitSmartAuditRequest& operator=(SubmitSmartAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrlList_ == nullptr
        && return this->noteId_ == nullptr && return this->subCodes_ == nullptr && return this->termsName_ == nullptr && return this->text_ == nullptr && return this->workspaceId_ == nullptr
        && return this->imageUrls_ == nullptr; };
    // imageUrlList Field Functions 
    bool hasImageUrlList() const { return this->imageUrlList_ != nullptr;};
    void deleteImageUrlList() { this->imageUrlList_ = nullptr;};
    inline const vector<SubmitSmartAuditRequestImageUrlList> & imageUrlList() const { DARABONBA_PTR_GET_CONST(imageUrlList_, vector<SubmitSmartAuditRequestImageUrlList>) };
    inline vector<SubmitSmartAuditRequestImageUrlList> imageUrlList() { DARABONBA_PTR_GET(imageUrlList_, vector<SubmitSmartAuditRequestImageUrlList>) };
    inline SubmitSmartAuditRequest& setImageUrlList(const vector<SubmitSmartAuditRequestImageUrlList> & imageUrlList) { DARABONBA_PTR_SET_VALUE(imageUrlList_, imageUrlList) };
    inline SubmitSmartAuditRequest& setImageUrlList(vector<SubmitSmartAuditRequestImageUrlList> && imageUrlList) { DARABONBA_PTR_SET_RVALUE(imageUrlList_, imageUrlList) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline SubmitSmartAuditRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // subCodes Field Functions 
    bool hasSubCodes() const { return this->subCodes_ != nullptr;};
    void deleteSubCodes() { this->subCodes_ = nullptr;};
    inline const vector<string> & subCodes() const { DARABONBA_PTR_GET_CONST(subCodes_, vector<string>) };
    inline vector<string> subCodes() { DARABONBA_PTR_GET(subCodes_, vector<string>) };
    inline SubmitSmartAuditRequest& setSubCodes(const vector<string> & subCodes) { DARABONBA_PTR_SET_VALUE(subCodes_, subCodes) };
    inline SubmitSmartAuditRequest& setSubCodes(vector<string> && subCodes) { DARABONBA_PTR_SET_RVALUE(subCodes_, subCodes) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string termsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline SubmitSmartAuditRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitSmartAuditRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartAuditRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<SubmitSmartAuditRequestImageUrls> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<SubmitSmartAuditRequestImageUrls>) };
    inline vector<SubmitSmartAuditRequestImageUrls> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<SubmitSmartAuditRequestImageUrls>) };
    inline SubmitSmartAuditRequest& setImageUrls(const vector<SubmitSmartAuditRequestImageUrls> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline SubmitSmartAuditRequest& setImageUrls(vector<SubmitSmartAuditRequestImageUrls> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


  protected:
    std::shared_ptr<vector<SubmitSmartAuditRequestImageUrlList>> imageUrlList_ = nullptr;
    std::shared_ptr<string> noteId_ = nullptr;
    std::shared_ptr<vector<string>> subCodes_ = nullptr;
    std::shared_ptr<string> termsName_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<vector<SubmitSmartAuditRequestImageUrls>> imageUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
