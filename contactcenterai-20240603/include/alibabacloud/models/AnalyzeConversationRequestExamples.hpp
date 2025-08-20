// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTEXAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeConversationRequestExamplesSentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestExamples& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(sentences, sentences_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(sentences, sentences_);
    };
    AnalyzeConversationRequestExamples() = default ;
    AnalyzeConversationRequestExamples(const AnalyzeConversationRequestExamples &) = default ;
    AnalyzeConversationRequestExamples(AnalyzeConversationRequestExamples &&) = default ;
    AnalyzeConversationRequestExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestExamples() = default ;
    AnalyzeConversationRequestExamples& operator=(const AnalyzeConversationRequestExamples &) = default ;
    AnalyzeConversationRequestExamples& operator=(AnalyzeConversationRequestExamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->sentences_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline AnalyzeConversationRequestExamples& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // sentences Field Functions 
    bool hasSentences() const { return this->sentences_ != nullptr;};
    void deleteSentences() { this->sentences_ = nullptr;};
    inline const vector<Models::AnalyzeConversationRequestExamplesSentences> & sentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Models::AnalyzeConversationRequestExamplesSentences>) };
    inline vector<Models::AnalyzeConversationRequestExamplesSentences> sentences() { DARABONBA_PTR_GET(sentences_, vector<Models::AnalyzeConversationRequestExamplesSentences>) };
    inline AnalyzeConversationRequestExamples& setSentences(const vector<Models::AnalyzeConversationRequestExamplesSentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
    inline AnalyzeConversationRequestExamples& setSentences(vector<Models::AnalyzeConversationRequestExamplesSentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> output_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::AnalyzeConversationRequestExamplesSentences>> sentences_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
