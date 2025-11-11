// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUDITTERMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUDITTERMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddAuditTermsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWordShrink_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWordShrink_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddAuditTermsShrinkRequest() = default ;
    AddAuditTermsShrinkRequest(const AddAuditTermsShrinkRequest &) = default ;
    AddAuditTermsShrinkRequest(AddAuditTermsShrinkRequest &&) = default ;
    AddAuditTermsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuditTermsShrinkRequest() = default ;
    AddAuditTermsShrinkRequest& operator=(const AddAuditTermsShrinkRequest &) = default ;
    AddAuditTermsShrinkRequest& operator=(AddAuditTermsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionWordShrink_ == nullptr
        && return this->keyword_ == nullptr && return this->suggestWord_ == nullptr && return this->termsDesc_ == nullptr && return this->termsName_ == nullptr && return this->workspaceId_ == nullptr; };
    // exceptionWordShrink Field Functions 
    bool hasExceptionWordShrink() const { return this->exceptionWordShrink_ != nullptr;};
    void deleteExceptionWordShrink() { this->exceptionWordShrink_ = nullptr;};
    inline string exceptionWordShrink() const { DARABONBA_PTR_GET_DEFAULT(exceptionWordShrink_, "") };
    inline AddAuditTermsShrinkRequest& setExceptionWordShrink(string exceptionWordShrink) { DARABONBA_PTR_SET_VALUE(exceptionWordShrink_, exceptionWordShrink) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline AddAuditTermsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // suggestWord Field Functions 
    bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
    void deleteSuggestWord() { this->suggestWord_ = nullptr;};
    inline string suggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
    inline AddAuditTermsShrinkRequest& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


    // termsDesc Field Functions 
    bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
    void deleteTermsDesc() { this->termsDesc_ = nullptr;};
    inline string termsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
    inline AddAuditTermsShrinkRequest& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string termsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline AddAuditTermsShrinkRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddAuditTermsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> exceptionWordShrink_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> suggestWord_ = nullptr;
    std::shared_ptr<string> termsDesc_ = nullptr;
    std::shared_ptr<string> termsName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
