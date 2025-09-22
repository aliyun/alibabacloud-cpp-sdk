// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SendDocumentAskQuestionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDocumentAskQuestionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(document, document_);
    };
    friend void from_json(const Darabonba::Json& j, SendDocumentAskQuestionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(document, document_);
    };
    SendDocumentAskQuestionResponseBodyData() = default ;
    SendDocumentAskQuestionResponseBodyData(const SendDocumentAskQuestionResponseBodyData &) = default ;
    SendDocumentAskQuestionResponseBodyData(SendDocumentAskQuestionResponseBodyData &&) = default ;
    SendDocumentAskQuestionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDocumentAskQuestionResponseBodyData() = default ;
    SendDocumentAskQuestionResponseBodyData& operator=(const SendDocumentAskQuestionResponseBodyData &) = default ;
    SendDocumentAskQuestionResponseBodyData& operator=(SendDocumentAskQuestionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answer_ != nullptr
        && this->document_ != nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline SendDocumentAskQuestionResponseBodyData& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const vector<string> & document() const { DARABONBA_PTR_GET_CONST(document_, vector<string>) };
    inline vector<string> document() { DARABONBA_PTR_GET(document_, vector<string>) };
    inline SendDocumentAskQuestionResponseBodyData& setDocument(const vector<string> & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline SendDocumentAskQuestionResponseBodyData& setDocument(vector<string> && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


  protected:
    // Q&A result
    std::shared_ptr<string> answer_ = nullptr;
    // Documents associated with the answer returned by the query
    std::shared_ptr<vector<string>> document_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
