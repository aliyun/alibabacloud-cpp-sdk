// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWER_HPP_
#define ALIBABACLOUD_MODELS_ANSWER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReferenceFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Answer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Answer& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(References, references_);
    };
    friend void from_json(const Darabonba::Json& j, Answer& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(References, references_);
    };
    Answer() = default ;
    Answer(const Answer &) = default ;
    Answer(Answer &&) = default ;
    Answer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Answer() = default ;
    Answer& operator=(const Answer &) = default ;
    Answer& operator=(Answer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->references_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Answer& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<ReferenceFile> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<ReferenceFile>) };
    inline vector<ReferenceFile> references() { DARABONBA_PTR_GET(references_, vector<ReferenceFile>) };
    inline Answer& setReferences(const vector<ReferenceFile> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline Answer& setReferences(vector<ReferenceFile> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<ReferenceFile>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
