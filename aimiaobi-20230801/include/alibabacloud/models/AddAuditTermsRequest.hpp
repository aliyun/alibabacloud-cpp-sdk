// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUDITTERMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUDITTERMSREQUEST_HPP_
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
  class AddAuditTermsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuditTermsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuditTermsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddAuditTermsRequest() = default ;
    AddAuditTermsRequest(const AddAuditTermsRequest &) = default ;
    AddAuditTermsRequest(AddAuditTermsRequest &&) = default ;
    AddAuditTermsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuditTermsRequest() = default ;
    AddAuditTermsRequest& operator=(const AddAuditTermsRequest &) = default ;
    AddAuditTermsRequest& operator=(AddAuditTermsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionWord_ == nullptr
        && this->keyword_ == nullptr && this->suggestWord_ == nullptr && this->termsDesc_ == nullptr && this->termsName_ == nullptr && this->workspaceId_ == nullptr; };
    // exceptionWord Field Functions 
    bool hasExceptionWord() const { return this->exceptionWord_ != nullptr;};
    void deleteExceptionWord() { this->exceptionWord_ = nullptr;};
    inline const vector<string> & getExceptionWord() const { DARABONBA_PTR_GET_CONST(exceptionWord_, vector<string>) };
    inline vector<string> getExceptionWord() { DARABONBA_PTR_GET(exceptionWord_, vector<string>) };
    inline AddAuditTermsRequest& setExceptionWord(const vector<string> & exceptionWord) { DARABONBA_PTR_SET_VALUE(exceptionWord_, exceptionWord) };
    inline AddAuditTermsRequest& setExceptionWord(vector<string> && exceptionWord) { DARABONBA_PTR_SET_RVALUE(exceptionWord_, exceptionWord) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline AddAuditTermsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // suggestWord Field Functions 
    bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
    void deleteSuggestWord() { this->suggestWord_ = nullptr;};
    inline string getSuggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
    inline AddAuditTermsRequest& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


    // termsDesc Field Functions 
    bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
    void deleteTermsDesc() { this->termsDesc_ = nullptr;};
    inline string getTermsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
    inline AddAuditTermsRequest& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string getTermsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline AddAuditTermsRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddAuditTermsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> exceptionWord_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> suggestWord_ {};
    shared_ptr<string> termsDesc_ {};
    shared_ptr<string> termsName_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
