// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQALIBRARYREQUESTPARSEQARESULTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQALIBRARYREQUESTPARSEQARESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateQaLibraryRequestParseQaResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQaLibraryRequestParseQaResults& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(question, question_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQaLibraryRequestParseQaResults& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(question, question_);
    };
    UpdateQaLibraryRequestParseQaResults() = default ;
    UpdateQaLibraryRequestParseQaResults(const UpdateQaLibraryRequestParseQaResults &) = default ;
    UpdateQaLibraryRequestParseQaResults(UpdateQaLibraryRequestParseQaResults &&) = default ;
    UpdateQaLibraryRequestParseQaResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQaLibraryRequestParseQaResults() = default ;
    UpdateQaLibraryRequestParseQaResults& operator=(const UpdateQaLibraryRequestParseQaResults &) = default ;
    UpdateQaLibraryRequestParseQaResults& operator=(UpdateQaLibraryRequestParseQaResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answer_ != nullptr
        && this->question_ != nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline UpdateQaLibraryRequestParseQaResults& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline UpdateQaLibraryRequestParseQaResults& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> answer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> question_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
