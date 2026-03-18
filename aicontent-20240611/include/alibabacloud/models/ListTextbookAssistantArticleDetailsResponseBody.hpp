// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLEDETAILSRESPONSEBODY_HPP_
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
  class ListTextbookAssistantArticleDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantArticleDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantArticleDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListTextbookAssistantArticleDetailsResponseBody() = default ;
    ListTextbookAssistantArticleDetailsResponseBody(const ListTextbookAssistantArticleDetailsResponseBody &) = default ;
    ListTextbookAssistantArticleDetailsResponseBody(ListTextbookAssistantArticleDetailsResponseBody &&) = default ;
    ListTextbookAssistantArticleDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantArticleDetailsResponseBody() = default ;
    ListTextbookAssistantArticleDetailsResponseBody& operator=(const ListTextbookAssistantArticleDetailsResponseBody &) = default ;
    ListTextbookAssistantArticleDetailsResponseBody& operator=(ListTextbookAssistantArticleDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(articleId, articleId_);
        DARABONBA_PTR_TO_JSON(questionList, questionList_);
        DARABONBA_PTR_TO_JSON(sceneList, sceneList_);
        DARABONBA_PTR_TO_JSON(sentenceList, sentenceList_);
        DARABONBA_PTR_TO_JSON(target, target_);
        DARABONBA_PTR_TO_JSON(theme, theme_);
        DARABONBA_PTR_TO_JSON(topic, topic_);
        DARABONBA_PTR_TO_JSON(wordList, wordList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(articleId, articleId_);
        DARABONBA_PTR_FROM_JSON(questionList, questionList_);
        DARABONBA_PTR_FROM_JSON(sceneList, sceneList_);
        DARABONBA_PTR_FROM_JSON(sentenceList, sentenceList_);
        DARABONBA_PTR_FROM_JSON(target, target_);
        DARABONBA_PTR_FROM_JSON(theme, theme_);
        DARABONBA_PTR_FROM_JSON(topic, topic_);
        DARABONBA_PTR_FROM_JSON(wordList, wordList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WordList& obj) { 
          DARABONBA_PTR_TO_JSON(wordAnalysis, wordAnalysis_);
          DARABONBA_PTR_TO_JSON(wordId, wordId_);
          DARABONBA_PTR_TO_JSON(wordText, wordText_);
        };
        friend void from_json(const Darabonba::Json& j, WordList& obj) { 
          DARABONBA_PTR_FROM_JSON(wordAnalysis, wordAnalysis_);
          DARABONBA_PTR_FROM_JSON(wordId, wordId_);
          DARABONBA_PTR_FROM_JSON(wordText, wordText_);
        };
        WordList() = default ;
        WordList(const WordList &) = default ;
        WordList(WordList &&) = default ;
        WordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WordList() = default ;
        WordList& operator=(const WordList &) = default ;
        WordList& operator=(WordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->wordAnalysis_ == nullptr
        && this->wordId_ == nullptr && this->wordText_ == nullptr; };
        // wordAnalysis Field Functions 
        bool hasWordAnalysis() const { return this->wordAnalysis_ != nullptr;};
        void deleteWordAnalysis() { this->wordAnalysis_ = nullptr;};
        inline string getWordAnalysis() const { DARABONBA_PTR_GET_DEFAULT(wordAnalysis_, "") };
        inline WordList& setWordAnalysis(string wordAnalysis) { DARABONBA_PTR_SET_VALUE(wordAnalysis_, wordAnalysis) };


        // wordId Field Functions 
        bool hasWordId() const { return this->wordId_ != nullptr;};
        void deleteWordId() { this->wordId_ = nullptr;};
        inline string getWordId() const { DARABONBA_PTR_GET_DEFAULT(wordId_, "") };
        inline WordList& setWordId(string wordId) { DARABONBA_PTR_SET_VALUE(wordId_, wordId) };


        // wordText Field Functions 
        bool hasWordText() const { return this->wordText_ != nullptr;};
        void deleteWordText() { this->wordText_ = nullptr;};
        inline string getWordText() const { DARABONBA_PTR_GET_DEFAULT(wordText_, "") };
        inline WordList& setWordText(string wordText) { DARABONBA_PTR_SET_VALUE(wordText_, wordText) };


      protected:
        shared_ptr<string> wordAnalysis_ {};
        shared_ptr<string> wordId_ {};
        shared_ptr<string> wordText_ {};
      };

      class Topic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topic& obj) { 
          DARABONBA_PTR_TO_JSON(topicImageList, topicImageList_);
          DARABONBA_PTR_TO_JSON(topicName, topicName_);
          DARABONBA_PTR_TO_JSON(topicTranslate, topicTranslate_);
        };
        friend void from_json(const Darabonba::Json& j, Topic& obj) { 
          DARABONBA_PTR_FROM_JSON(topicImageList, topicImageList_);
          DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          DARABONBA_PTR_FROM_JSON(topicTranslate, topicTranslate_);
        };
        Topic() = default ;
        Topic(const Topic &) = default ;
        Topic(Topic &&) = default ;
        Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topic() = default ;
        Topic& operator=(const Topic &) = default ;
        Topic& operator=(Topic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->topicImageList_ == nullptr
        && this->topicName_ == nullptr && this->topicTranslate_ == nullptr; };
        // topicImageList Field Functions 
        bool hasTopicImageList() const { return this->topicImageList_ != nullptr;};
        void deleteTopicImageList() { this->topicImageList_ = nullptr;};
        inline const vector<string> & getTopicImageList() const { DARABONBA_PTR_GET_CONST(topicImageList_, vector<string>) };
        inline vector<string> getTopicImageList() { DARABONBA_PTR_GET(topicImageList_, vector<string>) };
        inline Topic& setTopicImageList(const vector<string> & topicImageList) { DARABONBA_PTR_SET_VALUE(topicImageList_, topicImageList) };
        inline Topic& setTopicImageList(vector<string> && topicImageList) { DARABONBA_PTR_SET_RVALUE(topicImageList_, topicImageList) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Topic& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // topicTranslate Field Functions 
        bool hasTopicTranslate() const { return this->topicTranslate_ != nullptr;};
        void deleteTopicTranslate() { this->topicTranslate_ = nullptr;};
        inline string getTopicTranslate() const { DARABONBA_PTR_GET_DEFAULT(topicTranslate_, "") };
        inline Topic& setTopicTranslate(string topicTranslate) { DARABONBA_PTR_SET_VALUE(topicTranslate_, topicTranslate) };


      protected:
        shared_ptr<vector<string>> topicImageList_ {};
        shared_ptr<string> topicName_ {};
        shared_ptr<string> topicTranslate_ {};
      };

      class Theme : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Theme& obj) { 
          DARABONBA_PTR_TO_JSON(themeImageList, themeImageList_);
          DARABONBA_PTR_TO_JSON(themeName, themeName_);
          DARABONBA_PTR_TO_JSON(themeTranslate, themeTranslate_);
        };
        friend void from_json(const Darabonba::Json& j, Theme& obj) { 
          DARABONBA_PTR_FROM_JSON(themeImageList, themeImageList_);
          DARABONBA_PTR_FROM_JSON(themeName, themeName_);
          DARABONBA_PTR_FROM_JSON(themeTranslate, themeTranslate_);
        };
        Theme() = default ;
        Theme(const Theme &) = default ;
        Theme(Theme &&) = default ;
        Theme(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Theme() = default ;
        Theme& operator=(const Theme &) = default ;
        Theme& operator=(Theme &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->themeImageList_ == nullptr
        && this->themeName_ == nullptr && this->themeTranslate_ == nullptr; };
        // themeImageList Field Functions 
        bool hasThemeImageList() const { return this->themeImageList_ != nullptr;};
        void deleteThemeImageList() { this->themeImageList_ = nullptr;};
        inline const vector<string> & getThemeImageList() const { DARABONBA_PTR_GET_CONST(themeImageList_, vector<string>) };
        inline vector<string> getThemeImageList() { DARABONBA_PTR_GET(themeImageList_, vector<string>) };
        inline Theme& setThemeImageList(const vector<string> & themeImageList) { DARABONBA_PTR_SET_VALUE(themeImageList_, themeImageList) };
        inline Theme& setThemeImageList(vector<string> && themeImageList) { DARABONBA_PTR_SET_RVALUE(themeImageList_, themeImageList) };


        // themeName Field Functions 
        bool hasThemeName() const { return this->themeName_ != nullptr;};
        void deleteThemeName() { this->themeName_ = nullptr;};
        inline string getThemeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
        inline Theme& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


        // themeTranslate Field Functions 
        bool hasThemeTranslate() const { return this->themeTranslate_ != nullptr;};
        void deleteThemeTranslate() { this->themeTranslate_ = nullptr;};
        inline string getThemeTranslate() const { DARABONBA_PTR_GET_DEFAULT(themeTranslate_, "") };
        inline Theme& setThemeTranslate(string themeTranslate) { DARABONBA_PTR_SET_VALUE(themeTranslate_, themeTranslate) };


      protected:
        shared_ptr<vector<string>> themeImageList_ {};
        shared_ptr<string> themeName_ {};
        shared_ptr<string> themeTranslate_ {};
      };

      class SentenceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SentenceList& obj) { 
          DARABONBA_PTR_TO_JSON(sentenceAnalysis, sentenceAnalysis_);
          DARABONBA_PTR_TO_JSON(sentenceId, sentenceId_);
          DARABONBA_PTR_TO_JSON(sentenceText, sentenceText_);
        };
        friend void from_json(const Darabonba::Json& j, SentenceList& obj) { 
          DARABONBA_PTR_FROM_JSON(sentenceAnalysis, sentenceAnalysis_);
          DARABONBA_PTR_FROM_JSON(sentenceId, sentenceId_);
          DARABONBA_PTR_FROM_JSON(sentenceText, sentenceText_);
        };
        SentenceList() = default ;
        SentenceList(const SentenceList &) = default ;
        SentenceList(SentenceList &&) = default ;
        SentenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SentenceList() = default ;
        SentenceList& operator=(const SentenceList &) = default ;
        SentenceList& operator=(SentenceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sentenceAnalysis_ == nullptr
        && this->sentenceId_ == nullptr && this->sentenceText_ == nullptr; };
        // sentenceAnalysis Field Functions 
        bool hasSentenceAnalysis() const { return this->sentenceAnalysis_ != nullptr;};
        void deleteSentenceAnalysis() { this->sentenceAnalysis_ = nullptr;};
        inline string getSentenceAnalysis() const { DARABONBA_PTR_GET_DEFAULT(sentenceAnalysis_, "") };
        inline SentenceList& setSentenceAnalysis(string sentenceAnalysis) { DARABONBA_PTR_SET_VALUE(sentenceAnalysis_, sentenceAnalysis) };


        // sentenceId Field Functions 
        bool hasSentenceId() const { return this->sentenceId_ != nullptr;};
        void deleteSentenceId() { this->sentenceId_ = nullptr;};
        inline string getSentenceId() const { DARABONBA_PTR_GET_DEFAULT(sentenceId_, "") };
        inline SentenceList& setSentenceId(string sentenceId) { DARABONBA_PTR_SET_VALUE(sentenceId_, sentenceId) };


        // sentenceText Field Functions 
        bool hasSentenceText() const { return this->sentenceText_ != nullptr;};
        void deleteSentenceText() { this->sentenceText_ = nullptr;};
        inline string getSentenceText() const { DARABONBA_PTR_GET_DEFAULT(sentenceText_, "") };
        inline SentenceList& setSentenceText(string sentenceText) { DARABONBA_PTR_SET_VALUE(sentenceText_, sentenceText) };


      protected:
        shared_ptr<string> sentenceAnalysis_ {};
        shared_ptr<string> sentenceId_ {};
        shared_ptr<string> sentenceText_ {};
      };

      class SceneList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SceneList& obj) { 
          DARABONBA_PTR_TO_JSON(scene, scene_);
          DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(sceneImageList, sceneImageList_);
          DARABONBA_PTR_TO_JSON(sceneTranslate, sceneTranslate_);
        };
        friend void from_json(const Darabonba::Json& j, SceneList& obj) { 
          DARABONBA_PTR_FROM_JSON(scene, scene_);
          DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(sceneImageList, sceneImageList_);
          DARABONBA_PTR_FROM_JSON(sceneTranslate, sceneTranslate_);
        };
        SceneList() = default ;
        SceneList(const SceneList &) = default ;
        SceneList(SceneList &&) = default ;
        SceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SceneList() = default ;
        SceneList& operator=(const SceneList &) = default ;
        SceneList& operator=(SceneList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scene_ == nullptr
        && this->sceneId_ == nullptr && this->sceneImageList_ == nullptr && this->sceneTranslate_ == nullptr; };
        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline SceneList& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline SceneList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // sceneImageList Field Functions 
        bool hasSceneImageList() const { return this->sceneImageList_ != nullptr;};
        void deleteSceneImageList() { this->sceneImageList_ = nullptr;};
        inline const vector<string> & getSceneImageList() const { DARABONBA_PTR_GET_CONST(sceneImageList_, vector<string>) };
        inline vector<string> getSceneImageList() { DARABONBA_PTR_GET(sceneImageList_, vector<string>) };
        inline SceneList& setSceneImageList(const vector<string> & sceneImageList) { DARABONBA_PTR_SET_VALUE(sceneImageList_, sceneImageList) };
        inline SceneList& setSceneImageList(vector<string> && sceneImageList) { DARABONBA_PTR_SET_RVALUE(sceneImageList_, sceneImageList) };


        // sceneTranslate Field Functions 
        bool hasSceneTranslate() const { return this->sceneTranslate_ != nullptr;};
        void deleteSceneTranslate() { this->sceneTranslate_ = nullptr;};
        inline string getSceneTranslate() const { DARABONBA_PTR_GET_DEFAULT(sceneTranslate_, "") };
        inline SceneList& setSceneTranslate(string sceneTranslate) { DARABONBA_PTR_SET_VALUE(sceneTranslate_, sceneTranslate) };


      protected:
        shared_ptr<string> scene_ {};
        shared_ptr<string> sceneId_ {};
        shared_ptr<vector<string>> sceneImageList_ {};
        shared_ptr<string> sceneTranslate_ {};
      };

      class QuestionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuestionList& obj) { 
          DARABONBA_PTR_TO_JSON(answer, answer_);
          DARABONBA_PTR_TO_JSON(question, question_);
          DARABONBA_PTR_TO_JSON(questionTranslate, questionTranslate_);
        };
        friend void from_json(const Darabonba::Json& j, QuestionList& obj) { 
          DARABONBA_PTR_FROM_JSON(answer, answer_);
          DARABONBA_PTR_FROM_JSON(question, question_);
          DARABONBA_PTR_FROM_JSON(questionTranslate, questionTranslate_);
        };
        QuestionList() = default ;
        QuestionList(const QuestionList &) = default ;
        QuestionList(QuestionList &&) = default ;
        QuestionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuestionList() = default ;
        QuestionList& operator=(const QuestionList &) = default ;
        QuestionList& operator=(QuestionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr && this->questionTranslate_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline QuestionList& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline QuestionList& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // questionTranslate Field Functions 
        bool hasQuestionTranslate() const { return this->questionTranslate_ != nullptr;};
        void deleteQuestionTranslate() { this->questionTranslate_ = nullptr;};
        inline string getQuestionTranslate() const { DARABONBA_PTR_GET_DEFAULT(questionTranslate_, "") };
        inline QuestionList& setQuestionTranslate(string questionTranslate) { DARABONBA_PTR_SET_VALUE(questionTranslate_, questionTranslate) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<string> question_ {};
        shared_ptr<string> questionTranslate_ {};
      };

      virtual bool empty() const override { return this->articleId_ == nullptr
        && this->questionList_ == nullptr && this->sceneList_ == nullptr && this->sentenceList_ == nullptr && this->target_ == nullptr && this->theme_ == nullptr
        && this->topic_ == nullptr && this->wordList_ == nullptr; };
      // articleId Field Functions 
      bool hasArticleId() const { return this->articleId_ != nullptr;};
      void deleteArticleId() { this->articleId_ = nullptr;};
      inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
      inline Data& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


      // questionList Field Functions 
      bool hasQuestionList() const { return this->questionList_ != nullptr;};
      void deleteQuestionList() { this->questionList_ = nullptr;};
      inline const vector<Data::QuestionList> & getQuestionList() const { DARABONBA_PTR_GET_CONST(questionList_, vector<Data::QuestionList>) };
      inline vector<Data::QuestionList> getQuestionList() { DARABONBA_PTR_GET(questionList_, vector<Data::QuestionList>) };
      inline Data& setQuestionList(const vector<Data::QuestionList> & questionList) { DARABONBA_PTR_SET_VALUE(questionList_, questionList) };
      inline Data& setQuestionList(vector<Data::QuestionList> && questionList) { DARABONBA_PTR_SET_RVALUE(questionList_, questionList) };


      // sceneList Field Functions 
      bool hasSceneList() const { return this->sceneList_ != nullptr;};
      void deleteSceneList() { this->sceneList_ = nullptr;};
      inline const vector<Data::SceneList> & getSceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<Data::SceneList>) };
      inline vector<Data::SceneList> getSceneList() { DARABONBA_PTR_GET(sceneList_, vector<Data::SceneList>) };
      inline Data& setSceneList(const vector<Data::SceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
      inline Data& setSceneList(vector<Data::SceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


      // sentenceList Field Functions 
      bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
      void deleteSentenceList() { this->sentenceList_ = nullptr;};
      inline const vector<Data::SentenceList> & getSentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<Data::SentenceList>) };
      inline vector<Data::SentenceList> getSentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<Data::SentenceList>) };
      inline Data& setSentenceList(const vector<Data::SentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
      inline Data& setSentenceList(vector<Data::SentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Data& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // theme Field Functions 
      bool hasTheme() const { return this->theme_ != nullptr;};
      void deleteTheme() { this->theme_ = nullptr;};
      inline const Data::Theme & getTheme() const { DARABONBA_PTR_GET_CONST(theme_, Data::Theme) };
      inline Data::Theme getTheme() { DARABONBA_PTR_GET(theme_, Data::Theme) };
      inline Data& setTheme(const Data::Theme & theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };
      inline Data& setTheme(Data::Theme && theme) { DARABONBA_PTR_SET_RVALUE(theme_, theme) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline const Data::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, Data::Topic) };
      inline Data::Topic getTopic() { DARABONBA_PTR_GET(topic_, Data::Topic) };
      inline Data& setTopic(const Data::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
      inline Data& setTopic(Data::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


      // wordList Field Functions 
      bool hasWordList() const { return this->wordList_ != nullptr;};
      void deleteWordList() { this->wordList_ = nullptr;};
      inline const vector<Data::WordList> & getWordList() const { DARABONBA_PTR_GET_CONST(wordList_, vector<Data::WordList>) };
      inline vector<Data::WordList> getWordList() { DARABONBA_PTR_GET(wordList_, vector<Data::WordList>) };
      inline Data& setWordList(const vector<Data::WordList> & wordList) { DARABONBA_PTR_SET_VALUE(wordList_, wordList) };
      inline Data& setWordList(vector<Data::WordList> && wordList) { DARABONBA_PTR_SET_RVALUE(wordList_, wordList) };


    protected:
      shared_ptr<string> articleId_ {};
      shared_ptr<vector<Data::QuestionList>> questionList_ {};
      shared_ptr<vector<Data::SceneList>> sceneList_ {};
      shared_ptr<vector<Data::SentenceList>> sentenceList_ {};
      shared_ptr<string> target_ {};
      shared_ptr<Data::Theme> theme_ {};
      shared_ptr<Data::Topic> topic_ {};
      shared_ptr<vector<Data::WordList>> wordList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTextbookAssistantArticleDetailsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTextbookAssistantArticleDetailsResponseBody::Data>) };
    inline vector<ListTextbookAssistantArticleDetailsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTextbookAssistantArticleDetailsResponseBody::Data>) };
    inline ListTextbookAssistantArticleDetailsResponseBody& setData(const vector<ListTextbookAssistantArticleDetailsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTextbookAssistantArticleDetailsResponseBody& setData(vector<ListTextbookAssistantArticleDetailsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListTextbookAssistantArticleDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListTextbookAssistantArticleDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTextbookAssistantArticleDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTextbookAssistantArticleDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTextbookAssistantArticleDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
