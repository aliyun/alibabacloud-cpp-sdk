// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAUDITTERMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITAUDITTERMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class EditAuditTermsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAuditTermsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, EditAuditTermsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    EditAuditTermsRequest() = default ;
    EditAuditTermsRequest(const EditAuditTermsRequest &) = default ;
    EditAuditTermsRequest(EditAuditTermsRequest &&) = default ;
    EditAuditTermsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAuditTermsRequest() = default ;
    EditAuditTermsRequest& operator=(const EditAuditTermsRequest &) = default ;
    EditAuditTermsRequest& operator=(EditAuditTermsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionWord_ == nullptr
        && this->id_ == nullptr && this->keyword_ == nullptr && this->suggestWord_ == nullptr && this->termsDesc_ == nullptr && this->workspaceId_ == nullptr; };
    // exceptionWord Field Functions 
    bool hasExceptionWord() const { return this->exceptionWord_ != nullptr;};
    void deleteExceptionWord() { this->exceptionWord_ = nullptr;};
    inline const vector<string> & getExceptionWord() const { DARABONBA_PTR_GET_CONST(exceptionWord_, vector<string>) };
    inline vector<string> getExceptionWord() { DARABONBA_PTR_GET(exceptionWord_, vector<string>) };
    inline EditAuditTermsRequest& setExceptionWord(const vector<string> & exceptionWord) { DARABONBA_PTR_SET_VALUE(exceptionWord_, exceptionWord) };
    inline EditAuditTermsRequest& setExceptionWord(vector<string> && exceptionWord) { DARABONBA_PTR_SET_RVALUE(exceptionWord_, exceptionWord) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline EditAuditTermsRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline EditAuditTermsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // suggestWord Field Functions 
    bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
    void deleteSuggestWord() { this->suggestWord_ = nullptr;};
    inline string getSuggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
    inline EditAuditTermsRequest& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


    // termsDesc Field Functions 
    bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
    void deleteTermsDesc() { this->termsDesc_ = nullptr;};
    inline string getTermsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
    inline EditAuditTermsRequest& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline EditAuditTermsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> exceptionWord_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> suggestWord_ {};
    shared_ptr<string> termsDesc_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
