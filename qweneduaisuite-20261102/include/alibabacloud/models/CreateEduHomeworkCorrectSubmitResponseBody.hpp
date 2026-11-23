// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDUHOMEWORKCORRECTSUBMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDUHOMEWORKCORRECTSUBMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class CreateEduHomeworkCorrectSubmitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEduHomeworkCorrectSubmitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduHomeworkCorrectSubmitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateEduHomeworkCorrectSubmitResponseBody() = default ;
    CreateEduHomeworkCorrectSubmitResponseBody(const CreateEduHomeworkCorrectSubmitResponseBody &) = default ;
    CreateEduHomeworkCorrectSubmitResponseBody(CreateEduHomeworkCorrectSubmitResponseBody &&) = default ;
    CreateEduHomeworkCorrectSubmitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEduHomeworkCorrectSubmitResponseBody() = default ;
    CreateEduHomeworkCorrectSubmitResponseBody& operator=(const CreateEduHomeworkCorrectSubmitResponseBody &) = default ;
    CreateEduHomeworkCorrectSubmitResponseBody& operator=(CreateEduHomeworkCorrectSubmitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(angle, angle_);
        DARABONBA_PTR_TO_JSON(dewarpUrl, dewarpUrl_);
        DARABONBA_PTR_TO_JSON(questionResults, questionResults_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(angle, angle_);
        DARABONBA_PTR_FROM_JSON(dewarpUrl, dewarpUrl_);
        DARABONBA_PTR_FROM_JSON(questionResults, questionResults_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      class QuestionResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuestionResults& obj) { 
          DARABONBA_PTR_TO_JSON(answerResults, answerResults_);
          DARABONBA_PTR_TO_JSON(finish, finish_);
          DARABONBA_PTR_TO_JSON(questionContent, questionContent_);
          DARABONBA_PTR_TO_JSON(questionId, questionId_);
          DARABONBA_PTR_TO_JSON(questionPoints, questionPoints_);
          DARABONBA_PTR_TO_JSON(questionType, questionType_);
          DARABONBA_PTR_TO_JSON(solution, solution_);
        };
        friend void from_json(const Darabonba::Json& j, QuestionResults& obj) { 
          DARABONBA_PTR_FROM_JSON(answerResults, answerResults_);
          DARABONBA_PTR_FROM_JSON(finish, finish_);
          DARABONBA_PTR_FROM_JSON(questionContent, questionContent_);
          DARABONBA_PTR_FROM_JSON(questionId, questionId_);
          DARABONBA_PTR_FROM_JSON(questionPoints, questionPoints_);
          DARABONBA_PTR_FROM_JSON(questionType, questionType_);
          DARABONBA_PTR_FROM_JSON(solution, solution_);
        };
        QuestionResults() = default ;
        QuestionResults(const QuestionResults &) = default ;
        QuestionResults(QuestionResults &&) = default ;
        QuestionResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuestionResults() = default ;
        QuestionResults& operator=(const QuestionResults &) = default ;
        QuestionResults& operator=(QuestionResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AnswerResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnswerResults& obj) { 
            DARABONBA_PTR_TO_JSON(answerPoints, answerPoints_);
            DARABONBA_PTR_TO_JSON(checkPoint, checkPoint_);
            DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
            DARABONBA_PTR_TO_JSON(standardAnswer, standardAnswer_);
            DARABONBA_PTR_TO_JSON(userAnswer, userAnswer_);
          };
          friend void from_json(const Darabonba::Json& j, AnswerResults& obj) { 
            DARABONBA_PTR_FROM_JSON(answerPoints, answerPoints_);
            DARABONBA_PTR_FROM_JSON(checkPoint, checkPoint_);
            DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
            DARABONBA_PTR_FROM_JSON(standardAnswer, standardAnswer_);
            DARABONBA_PTR_FROM_JSON(userAnswer, userAnswer_);
          };
          AnswerResults() = default ;
          AnswerResults(const AnswerResults &) = default ;
          AnswerResults(AnswerResults &&) = default ;
          AnswerResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnswerResults() = default ;
          AnswerResults& operator=(const AnswerResults &) = default ;
          AnswerResults& operator=(AnswerResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CheckPoint : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CheckPoint& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, CheckPoint& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            CheckPoint() = default ;
            CheckPoint(const CheckPoint &) = default ;
            CheckPoint(CheckPoint &&) = default ;
            CheckPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CheckPoint() = default ;
            CheckPoint& operator=(const CheckPoint &) = default ;
            CheckPoint& operator=(CheckPoint &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline CheckPoint& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline CheckPoint& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The X-axis coordinate.
            shared_ptr<int64_t> x_ {};
            // The Y-axis coordinate.
            shared_ptr<int64_t> y_ {};
          };

          class AnswerPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AnswerPoints& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, AnswerPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            AnswerPoints() = default ;
            AnswerPoints(const AnswerPoints &) = default ;
            AnswerPoints(AnswerPoints &&) = default ;
            AnswerPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AnswerPoints() = default ;
            AnswerPoints& operator=(const AnswerPoints &) = default ;
            AnswerPoints& operator=(AnswerPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline AnswerPoints& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline AnswerPoints& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The X-axis coordinate value.
            shared_ptr<int64_t> x_ {};
            // The Y-axis coordinate value.
            shared_ptr<int64_t> y_ {};
          };

          virtual bool empty() const override { return this->answerPoints_ == nullptr
        && this->checkPoint_ == nullptr && this->checkResult_ == nullptr && this->standardAnswer_ == nullptr && this->userAnswer_ == nullptr; };
          // answerPoints Field Functions 
          bool hasAnswerPoints() const { return this->answerPoints_ != nullptr;};
          void deleteAnswerPoints() { this->answerPoints_ = nullptr;};
          inline const vector<AnswerResults::AnswerPoints> & getAnswerPoints() const { DARABONBA_PTR_GET_CONST(answerPoints_, vector<AnswerResults::AnswerPoints>) };
          inline vector<AnswerResults::AnswerPoints> getAnswerPoints() { DARABONBA_PTR_GET(answerPoints_, vector<AnswerResults::AnswerPoints>) };
          inline AnswerResults& setAnswerPoints(const vector<AnswerResults::AnswerPoints> & answerPoints) { DARABONBA_PTR_SET_VALUE(answerPoints_, answerPoints) };
          inline AnswerResults& setAnswerPoints(vector<AnswerResults::AnswerPoints> && answerPoints) { DARABONBA_PTR_SET_RVALUE(answerPoints_, answerPoints) };


          // checkPoint Field Functions 
          bool hasCheckPoint() const { return this->checkPoint_ != nullptr;};
          void deleteCheckPoint() { this->checkPoint_ = nullptr;};
          inline const AnswerResults::CheckPoint & getCheckPoint() const { DARABONBA_PTR_GET_CONST(checkPoint_, AnswerResults::CheckPoint) };
          inline AnswerResults::CheckPoint getCheckPoint() { DARABONBA_PTR_GET(checkPoint_, AnswerResults::CheckPoint) };
          inline AnswerResults& setCheckPoint(const AnswerResults::CheckPoint & checkPoint) { DARABONBA_PTR_SET_VALUE(checkPoint_, checkPoint) };
          inline AnswerResults& setCheckPoint(AnswerResults::CheckPoint && checkPoint) { DARABONBA_PTR_SET_RVALUE(checkPoint_, checkPoint) };


          // checkResult Field Functions 
          bool hasCheckResult() const { return this->checkResult_ != nullptr;};
          void deleteCheckResult() { this->checkResult_ = nullptr;};
          inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
          inline AnswerResults& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


          // standardAnswer Field Functions 
          bool hasStandardAnswer() const { return this->standardAnswer_ != nullptr;};
          void deleteStandardAnswer() { this->standardAnswer_ = nullptr;};
          inline string getStandardAnswer() const { DARABONBA_PTR_GET_DEFAULT(standardAnswer_, "") };
          inline AnswerResults& setStandardAnswer(string standardAnswer) { DARABONBA_PTR_SET_VALUE(standardAnswer_, standardAnswer) };


          // userAnswer Field Functions 
          bool hasUserAnswer() const { return this->userAnswer_ != nullptr;};
          void deleteUserAnswer() { this->userAnswer_ = nullptr;};
          inline string getUserAnswer() const { DARABONBA_PTR_GET_DEFAULT(userAnswer_, "") };
          inline AnswerResults& setUserAnswer(string userAnswer) { DARABONBA_PTR_SET_VALUE(userAnswer_, userAnswer) };


        protected:
          // The coordinate group of the user\\"s answering area. It generally contains four vertex coordinates arranged in the order of top-left, top-right, bottom-right, and bottom-left, formatted as `[{"x": ..., "y": ...}, ...]`.
          shared_ptr<vector<AnswerResults::AnswerPoints>> answerPoints_ {};
          // The coordinates of the grading mark point, formatted as `{ "x": ..., "y": ... }`.
          shared_ptr<AnswerResults::CheckPoint> checkPoint_ {};
          // The grading conclusion, such as `correct`, `wrong`, or `partial`.
          shared_ptr<string> checkResult_ {};
          // The ground truth.
          shared_ptr<string> standardAnswer_ {};
          // The student\\"s answer.
          shared_ptr<string> userAnswer_ {};
        };

        virtual bool empty() const override { return this->answerResults_ == nullptr
        && this->finish_ == nullptr && this->questionContent_ == nullptr && this->questionId_ == nullptr && this->questionPoints_ == nullptr && this->questionType_ == nullptr
        && this->solution_ == nullptr; };
        // answerResults Field Functions 
        bool hasAnswerResults() const { return this->answerResults_ != nullptr;};
        void deleteAnswerResults() { this->answerResults_ = nullptr;};
        inline const vector<QuestionResults::AnswerResults> & getAnswerResults() const { DARABONBA_PTR_GET_CONST(answerResults_, vector<QuestionResults::AnswerResults>) };
        inline vector<QuestionResults::AnswerResults> getAnswerResults() { DARABONBA_PTR_GET(answerResults_, vector<QuestionResults::AnswerResults>) };
        inline QuestionResults& setAnswerResults(const vector<QuestionResults::AnswerResults> & answerResults) { DARABONBA_PTR_SET_VALUE(answerResults_, answerResults) };
        inline QuestionResults& setAnswerResults(vector<QuestionResults::AnswerResults> && answerResults) { DARABONBA_PTR_SET_RVALUE(answerResults_, answerResults) };


        // finish Field Functions 
        bool hasFinish() const { return this->finish_ != nullptr;};
        void deleteFinish() { this->finish_ = nullptr;};
        inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
        inline QuestionResults& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


        // questionContent Field Functions 
        bool hasQuestionContent() const { return this->questionContent_ != nullptr;};
        void deleteQuestionContent() { this->questionContent_ = nullptr;};
        inline string getQuestionContent() const { DARABONBA_PTR_GET_DEFAULT(questionContent_, "") };
        inline QuestionResults& setQuestionContent(string questionContent) { DARABONBA_PTR_SET_VALUE(questionContent_, questionContent) };


        // questionId Field Functions 
        bool hasQuestionId() const { return this->questionId_ != nullptr;};
        void deleteQuestionId() { this->questionId_ = nullptr;};
        inline string getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, "") };
        inline QuestionResults& setQuestionId(string questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


        // questionPoints Field Functions 
        bool hasQuestionPoints() const { return this->questionPoints_ != nullptr;};
        void deleteQuestionPoints() { this->questionPoints_ = nullptr;};
        inline const vector<vector<QuestionResults::QuestionPoints>> & getQuestionPoints() const { DARABONBA_PTR_GET_CONST(questionPoints_, vector<vector<QuestionResults::QuestionPoints>>) };
        inline vector<vector<QuestionResults::QuestionPoints>> getQuestionPoints() { DARABONBA_PTR_GET(questionPoints_, vector<vector<QuestionResults::QuestionPoints>>) };
        inline QuestionResults& setQuestionPoints(const vector<vector<QuestionResults::QuestionPoints>> & questionPoints) { DARABONBA_PTR_SET_VALUE(questionPoints_, questionPoints) };
        inline QuestionResults& setQuestionPoints(vector<vector<QuestionResults::QuestionPoints>> && questionPoints) { DARABONBA_PTR_SET_RVALUE(questionPoints_, questionPoints) };


        // questionType Field Functions 
        bool hasQuestionType() const { return this->questionType_ != nullptr;};
        void deleteQuestionType() { this->questionType_ = nullptr;};
        inline string getQuestionType() const { DARABONBA_PTR_GET_DEFAULT(questionType_, "") };
        inline QuestionResults& setQuestionType(string questionType) { DARABONBA_PTR_SET_VALUE(questionType_, questionType) };


        // solution Field Functions 
        bool hasSolution() const { return this->solution_ != nullptr;};
        void deleteSolution() { this->solution_ = nullptr;};
        inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
        inline QuestionResults& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


      protected:
        // The array of answering and grading results for the question.
        shared_ptr<vector<QuestionResults::AnswerResults>> answerResults_ {};
        // Specifies whether the task is completed:
        // 
        // - **true**: The task is completed.
        // - **false**: The task is not completed.
        shared_ptr<bool> finish_ {};
        // The text content of the question.
        shared_ptr<string> questionContent_ {};
        // The question ID.
        shared_ptr<string> questionId_ {};
        // The coordinate group of the question area. It generally contains four vertex coordinates arranged in the order of top-left, top-right, bottom-right, and bottom-left.
        shared_ptr<vector<vector<QuestionResults::QuestionPoints>>> questionPoints_ {};
        // The question type.
        shared_ptr<string> questionType_ {};
        // The question analysis and solution.
        shared_ptr<string> solution_ {};
      };

      virtual bool empty() const override { return this->angle_ == nullptr
        && this->dewarpUrl_ == nullptr && this->questionResults_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // angle Field Functions 
      bool hasAngle() const { return this->angle_ != nullptr;};
      void deleteAngle() { this->angle_ = nullptr;};
      inline int64_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
      inline Data& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


      // dewarpUrl Field Functions 
      bool hasDewarpUrl() const { return this->dewarpUrl_ != nullptr;};
      void deleteDewarpUrl() { this->dewarpUrl_ = nullptr;};
      inline string getDewarpUrl() const { DARABONBA_PTR_GET_DEFAULT(dewarpUrl_, "") };
      inline Data& setDewarpUrl(string dewarpUrl) { DARABONBA_PTR_SET_VALUE(dewarpUrl_, dewarpUrl) };


      // questionResults Field Functions 
      bool hasQuestionResults() const { return this->questionResults_ != nullptr;};
      void deleteQuestionResults() { this->questionResults_ = nullptr;};
      inline const vector<Data::QuestionResults> & getQuestionResults() const { DARABONBA_PTR_GET_CONST(questionResults_, vector<Data::QuestionResults>) };
      inline vector<Data::QuestionResults> getQuestionResults() { DARABONBA_PTR_GET(questionResults_, vector<Data::QuestionResults>) };
      inline Data& setQuestionResults(const vector<Data::QuestionResults> & questionResults) { DARABONBA_PTR_SET_VALUE(questionResults_, questionResults) };
      inline Data& setQuestionResults(vector<Data::QuestionResults> && questionResults) { DARABONBA_PTR_SET_RVALUE(questionResults_, questionResults) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The clockwise rotation angle of the image, in degrees.
      shared_ptr<int64_t> angle_ {};
      // The URL of the corrected image. If `dewarp` is set to `false`, the URL of the original image is returned.
      shared_ptr<string> dewarpUrl_ {};
      // The array of question recognition and grading results.
      shared_ptr<vector<Data::QuestionResults>> questionResults_ {};
      // The task status.
      shared_ptr<string> status_ {};
      // The unique identifier of the task. You must include this ID in subsequent queries.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateEduHomeworkCorrectSubmitResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateEduHomeworkCorrectSubmitResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateEduHomeworkCorrectSubmitResponseBody::Data) };
    inline CreateEduHomeworkCorrectSubmitResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateEduHomeworkCorrectSubmitResponseBody::Data) };
    inline CreateEduHomeworkCorrectSubmitResponseBody& setData(const CreateEduHomeworkCorrectSubmitResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateEduHomeworkCorrectSubmitResponseBody& setData(CreateEduHomeworkCorrectSubmitResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateEduHomeworkCorrectSubmitResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEduHomeworkCorrectSubmitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API status.
    shared_ptr<string> code_ {};
    // The import command.
    shared_ptr<CreateEduHomeworkCorrectSubmitResponseBody::Data> data_ {};
    // The request error message.
    shared_ptr<string> message_ {};
    // The request ID on the caller side.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
