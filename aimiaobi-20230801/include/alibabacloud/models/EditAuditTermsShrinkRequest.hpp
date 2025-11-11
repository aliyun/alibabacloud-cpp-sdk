// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAUDITTERMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITAUDITTERMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class EditAuditTermsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWordShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, EditAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWordShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    EditAuditTermsShrinkRequest() = default ;
    EditAuditTermsShrinkRequest(const EditAuditTermsShrinkRequest &) = default ;
    EditAuditTermsShrinkRequest(EditAuditTermsShrinkRequest &&) = default ;
    EditAuditTermsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAuditTermsShrinkRequest() = default ;
    EditAuditTermsShrinkRequest& operator=(const EditAuditTermsShrinkRequest &) = default ;
    EditAuditTermsShrinkRequest& operator=(EditAuditTermsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionWordShrink_ == nullptr
        && return this->id_ == nullptr && return this->keyword_ == nullptr && return this->suggestWord_ == nullptr && return this->termsDesc_ == nullptr && return this->workspaceId_ == nullptr; };
    // exceptionWordShrink Field Functions 
    bool hasExceptionWordShrink() const { return this->exceptionWordShrink_ != nullptr;};
    void deleteExceptionWordShrink() { this->exceptionWordShrink_ = nullptr;};
    inline string exceptionWordShrink() const { DARABONBA_PTR_GET_DEFAULT(exceptionWordShrink_, "") };
    inline EditAuditTermsShrinkRequest& setExceptionWordShrink(string exceptionWordShrink) { DARABONBA_PTR_SET_VALUE(exceptionWordShrink_, exceptionWordShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline EditAuditTermsShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline EditAuditTermsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // suggestWord Field Functions 
    bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
    void deleteSuggestWord() { this->suggestWord_ = nullptr;};
    inline string suggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
    inline EditAuditTermsShrinkRequest& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


    // termsDesc Field Functions 
    bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
    void deleteTermsDesc() { this->termsDesc_ = nullptr;};
    inline string termsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
    inline EditAuditTermsShrinkRequest& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline EditAuditTermsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> exceptionWordShrink_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> suggestWord_ = nullptr;
    std::shared_ptr<string> termsDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
