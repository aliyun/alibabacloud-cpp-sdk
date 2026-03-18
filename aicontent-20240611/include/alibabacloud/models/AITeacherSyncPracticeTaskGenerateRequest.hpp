// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITEACHERSYNCPRACTICETASKGENERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AITEACHERSYNCPRACTICETASKGENERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class AITeacherSyncPracticeTaskGenerateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AITeacherSyncPracticeTaskGenerateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(keySentences, keySentences_);
      DARABONBA_PTR_TO_JSON(keyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(learningObject, learningObject_);
      DARABONBA_PTR_TO_JSON(textContent, textContent_);
      DARABONBA_PTR_TO_JSON(textbook, textbook_);
      DARABONBA_PTR_TO_JSON(topic, topic_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AITeacherSyncPracticeTaskGenerateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(keySentences, keySentences_);
      DARABONBA_PTR_FROM_JSON(keyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(learningObject, learningObject_);
      DARABONBA_PTR_FROM_JSON(textContent, textContent_);
      DARABONBA_PTR_FROM_JSON(textbook, textbook_);
      DARABONBA_PTR_FROM_JSON(topic, topic_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    AITeacherSyncPracticeTaskGenerateRequest() = default ;
    AITeacherSyncPracticeTaskGenerateRequest(const AITeacherSyncPracticeTaskGenerateRequest &) = default ;
    AITeacherSyncPracticeTaskGenerateRequest(AITeacherSyncPracticeTaskGenerateRequest &&) = default ;
    AITeacherSyncPracticeTaskGenerateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AITeacherSyncPracticeTaskGenerateRequest() = default ;
    AITeacherSyncPracticeTaskGenerateRequest& operator=(const AITeacherSyncPracticeTaskGenerateRequest &) = default ;
    AITeacherSyncPracticeTaskGenerateRequest& operator=(AITeacherSyncPracticeTaskGenerateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grade_ == nullptr
        && this->keySentences_ == nullptr && this->keyWords_ == nullptr && this->learningObject_ == nullptr && this->textContent_ == nullptr && this->textbook_ == nullptr
        && this->topic_ == nullptr && this->userId_ == nullptr; };
    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // keySentences Field Functions 
    bool hasKeySentences() const { return this->keySentences_ != nullptr;};
    void deleteKeySentences() { this->keySentences_ = nullptr;};
    inline const vector<string> & getKeySentences() const { DARABONBA_PTR_GET_CONST(keySentences_, vector<string>) };
    inline vector<string> getKeySentences() { DARABONBA_PTR_GET(keySentences_, vector<string>) };
    inline AITeacherSyncPracticeTaskGenerateRequest& setKeySentences(const vector<string> & keySentences) { DARABONBA_PTR_SET_VALUE(keySentences_, keySentences) };
    inline AITeacherSyncPracticeTaskGenerateRequest& setKeySentences(vector<string> && keySentences) { DARABONBA_PTR_SET_RVALUE(keySentences_, keySentences) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
    inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
    inline AITeacherSyncPracticeTaskGenerateRequest& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline AITeacherSyncPracticeTaskGenerateRequest& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // learningObject Field Functions 
    bool hasLearningObject() const { return this->learningObject_ != nullptr;};
    void deleteLearningObject() { this->learningObject_ = nullptr;};
    inline string getLearningObject() const { DARABONBA_PTR_GET_DEFAULT(learningObject_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setLearningObject(string learningObject) { DARABONBA_PTR_SET_VALUE(learningObject_, learningObject) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string getTextContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // textbook Field Functions 
    bool hasTextbook() const { return this->textbook_ != nullptr;};
    void deleteTextbook() { this->textbook_ = nullptr;};
    inline string getTextbook() const { DARABONBA_PTR_GET_DEFAULT(textbook_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setTextbook(string textbook) { DARABONBA_PTR_SET_VALUE(textbook_, textbook) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AITeacherSyncPracticeTaskGenerateRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> grade_ {};
    shared_ptr<vector<string>> keySentences_ {};
    shared_ptr<vector<string>> keyWords_ {};
    shared_ptr<string> learningObject_ {};
    // This parameter is required.
    shared_ptr<string> textContent_ {};
    shared_ptr<string> textbook_ {};
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
