// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTEXAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestExamplesSentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequestExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestExamples& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(sentences, sentences_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(sentences, sentences_);
    };
    CreateTaskRequestExamples() = default ;
    CreateTaskRequestExamples(const CreateTaskRequestExamples &) = default ;
    CreateTaskRequestExamples(CreateTaskRequestExamples &&) = default ;
    CreateTaskRequestExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestExamples() = default ;
    CreateTaskRequestExamples& operator=(const CreateTaskRequestExamples &) = default ;
    CreateTaskRequestExamples& operator=(CreateTaskRequestExamples &&) = default ;
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
    inline CreateTaskRequestExamples& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // sentences Field Functions 
    bool hasSentences() const { return this->sentences_ != nullptr;};
    void deleteSentences() { this->sentences_ = nullptr;};
    inline const vector<Models::CreateTaskRequestExamplesSentences> & sentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Models::CreateTaskRequestExamplesSentences>) };
    inline vector<Models::CreateTaskRequestExamplesSentences> sentences() { DARABONBA_PTR_GET(sentences_, vector<Models::CreateTaskRequestExamplesSentences>) };
    inline CreateTaskRequestExamples& setSentences(const vector<Models::CreateTaskRequestExamplesSentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
    inline CreateTaskRequestExamples& setSentences(vector<Models::CreateTaskRequestExamplesSentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


  protected:
    std::shared_ptr<string> output_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateTaskRequestExamplesSentences>> sentences_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
