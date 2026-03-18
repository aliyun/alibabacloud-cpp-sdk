// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERGRAMMARCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERGRAMMARCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherGrammarCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherGrammarCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherGrammarCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ExecuteAITeacherGrammarCheckRequest() = default ;
    ExecuteAITeacherGrammarCheckRequest(const ExecuteAITeacherGrammarCheckRequest &) = default ;
    ExecuteAITeacherGrammarCheckRequest(ExecuteAITeacherGrammarCheckRequest &&) = default ;
    ExecuteAITeacherGrammarCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherGrammarCheckRequest() = default ;
    ExecuteAITeacherGrammarCheckRequest& operator=(const ExecuteAITeacherGrammarCheckRequest &) = default ;
    ExecuteAITeacherGrammarCheckRequest& operator=(ExecuteAITeacherGrammarCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->userId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExecuteAITeacherGrammarCheckRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ExecuteAITeacherGrammarCheckRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
