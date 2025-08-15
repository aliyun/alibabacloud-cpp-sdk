// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITTERMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITTERMSRESPONSEBODYDATA_HPP_
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
  class ListAuditTermsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditTermsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditTermsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWord_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
      DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
    };
    ListAuditTermsResponseBodyData() = default ;
    ListAuditTermsResponseBodyData(const ListAuditTermsResponseBodyData &) = default ;
    ListAuditTermsResponseBodyData(ListAuditTermsResponseBodyData &&) = default ;
    ListAuditTermsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditTermsResponseBodyData() = default ;
    ListAuditTermsResponseBodyData& operator=(const ListAuditTermsResponseBodyData &) = default ;
    ListAuditTermsResponseBodyData& operator=(ListAuditTermsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exceptionWord_ != nullptr
        && this->id_ != nullptr && this->keyword_ != nullptr && this->suggestWord_ != nullptr && this->termsDesc_ != nullptr; };
    // exceptionWord Field Functions 
    bool hasExceptionWord() const { return this->exceptionWord_ != nullptr;};
    void deleteExceptionWord() { this->exceptionWord_ = nullptr;};
    inline const vector<string> & exceptionWord() const { DARABONBA_PTR_GET_CONST(exceptionWord_, vector<string>) };
    inline vector<string> exceptionWord() { DARABONBA_PTR_GET(exceptionWord_, vector<string>) };
    inline ListAuditTermsResponseBodyData& setExceptionWord(const vector<string> & exceptionWord) { DARABONBA_PTR_SET_VALUE(exceptionWord_, exceptionWord) };
    inline ListAuditTermsResponseBodyData& setExceptionWord(vector<string> && exceptionWord) { DARABONBA_PTR_SET_RVALUE(exceptionWord_, exceptionWord) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAuditTermsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAuditTermsResponseBodyData& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // suggestWord Field Functions 
    bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
    void deleteSuggestWord() { this->suggestWord_ = nullptr;};
    inline string suggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
    inline ListAuditTermsResponseBodyData& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


    // termsDesc Field Functions 
    bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
    void deleteTermsDesc() { this->termsDesc_ = nullptr;};
    inline string termsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
    inline ListAuditTermsResponseBodyData& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


  protected:
    std::shared_ptr<vector<string>> exceptionWord_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> suggestWord_ = nullptr;
    std::shared_ptr<string> termsDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
