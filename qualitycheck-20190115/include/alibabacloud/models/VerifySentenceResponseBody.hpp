// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TargetRole, targetRole_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TargetRole, targetRole_);
    };
    VerifySentenceResponseBody() = default ;
    VerifySentenceResponseBody(const VerifySentenceResponseBody &) = default ;
    VerifySentenceResponseBody(VerifySentenceResponseBody &&) = default ;
    VerifySentenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBody() = default ;
    VerifySentenceResponseBody& operator=(const VerifySentenceResponseBody &) = default ;
    VerifySentenceResponseBody& operator=(VerifySentenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Delta, delta_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Delta, delta_);
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
      class Delta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Delta& obj) { 
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Delta& obj) { 
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Delta() = default ;
        Delta(const Delta &) = default ;
        Delta(Delta &&) = default ;
        Delta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Delta() = default ;
        Delta& operator=(const Delta &) = default ;
        Delta& operator=(Delta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Target : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Target& obj) { 
            DARABONBA_PTR_TO_JSON(Line, line_);
            DARABONBA_PTR_TO_JSON(Position, position_);
          };
          friend void from_json(const Darabonba::Json& j, Target& obj) { 
            DARABONBA_PTR_FROM_JSON(Line, line_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
          };
          Target() = default ;
          Target(const Target &) = default ;
          Target(Target &&) = default ;
          Target(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Target() = default ;
          Target& operator=(const Target &) = default ;
          Target& operator=(Target &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Line : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Line& obj) { 
              DARABONBA_PTR_TO_JSON(Line, line_);
            };
            friend void from_json(const Darabonba::Json& j, Line& obj) { 
              DARABONBA_PTR_FROM_JSON(Line, line_);
            };
            Line() = default ;
            Line(const Line &) = default ;
            Line(Line &&) = default ;
            Line(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Line() = default ;
            Line& operator=(const Line &) = default ;
            Line& operator=(Line &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->line_ == nullptr; };
            // line Field Functions 
            bool hasLine() const { return this->line_ != nullptr;};
            void deleteLine() { this->line_ = nullptr;};
            inline const vector<string> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<string>) };
            inline vector<string> getLine() { DARABONBA_PTR_GET(line_, vector<string>) };
            inline Line& setLine(const vector<string> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
            inline Line& setLine(vector<string> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


          protected:
            shared_ptr<vector<string>> line_ {};
          };

          virtual bool empty() const override { return this->line_ == nullptr
        && this->position_ == nullptr; };
          // line Field Functions 
          bool hasLine() const { return this->line_ != nullptr;};
          void deleteLine() { this->line_ = nullptr;};
          inline const Target::Line & getLine() const { DARABONBA_PTR_GET_CONST(line_, Target::Line) };
          inline Target::Line getLine() { DARABONBA_PTR_GET(line_, Target::Line) };
          inline Target& setLine(const Target::Line & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
          inline Target& setLine(Target::Line && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
          inline Target& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        protected:
          shared_ptr<Target::Line> line_ {};
          shared_ptr<int32_t> position_ {};
        };

        class Source : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Source& obj) { 
            DARABONBA_PTR_TO_JSON(Line, line_);
            DARABONBA_PTR_TO_JSON(Position, position_);
          };
          friend void from_json(const Darabonba::Json& j, Source& obj) { 
            DARABONBA_PTR_FROM_JSON(Line, line_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
          };
          Source() = default ;
          Source(const Source &) = default ;
          Source(Source &&) = default ;
          Source(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Source() = default ;
          Source& operator=(const Source &) = default ;
          Source& operator=(Source &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Line : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Line& obj) { 
              DARABONBA_PTR_TO_JSON(Line, line_);
            };
            friend void from_json(const Darabonba::Json& j, Line& obj) { 
              DARABONBA_PTR_FROM_JSON(Line, line_);
            };
            Line() = default ;
            Line(const Line &) = default ;
            Line(Line &&) = default ;
            Line(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Line() = default ;
            Line& operator=(const Line &) = default ;
            Line& operator=(Line &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->line_ == nullptr; };
            // line Field Functions 
            bool hasLine() const { return this->line_ != nullptr;};
            void deleteLine() { this->line_ = nullptr;};
            inline const vector<string> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<string>) };
            inline vector<string> getLine() { DARABONBA_PTR_GET(line_, vector<string>) };
            inline Line& setLine(const vector<string> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
            inline Line& setLine(vector<string> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


          protected:
            shared_ptr<vector<string>> line_ {};
          };

          virtual bool empty() const override { return this->line_ == nullptr
        && this->position_ == nullptr; };
          // line Field Functions 
          bool hasLine() const { return this->line_ != nullptr;};
          void deleteLine() { this->line_ = nullptr;};
          inline const Source::Line & getLine() const { DARABONBA_PTR_GET_CONST(line_, Source::Line) };
          inline Source::Line getLine() { DARABONBA_PTR_GET(line_, Source::Line) };
          inline Source& setLine(const Source::Line & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
          inline Source& setLine(Source::Line && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
          inline Source& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        protected:
          shared_ptr<Source::Line> line_ {};
          shared_ptr<int32_t> position_ {};
        };

        virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr && this->type_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline const Delta::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Delta::Source) };
        inline Delta::Source getSource() { DARABONBA_PTR_GET(source_, Delta::Source) };
        inline Delta& setSource(const Delta::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
        inline Delta& setSource(Delta::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline const Delta::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Delta::Target) };
        inline Delta::Target getTarget() { DARABONBA_PTR_GET(target_, Delta::Target) };
        inline Delta& setTarget(const Delta::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
        inline Delta& setTarget(Delta::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Delta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Delta::Source> source_ {};
        shared_ptr<Delta::Target> target_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->delta_ == nullptr; };
      // delta Field Functions 
      bool hasDelta() const { return this->delta_ != nullptr;};
      void deleteDelta() { this->delta_ = nullptr;};
      inline const vector<Data::Delta> & getDelta() const { DARABONBA_PTR_GET_CONST(delta_, vector<Data::Delta>) };
      inline vector<Data::Delta> getDelta() { DARABONBA_PTR_GET(delta_, vector<Data::Delta>) };
      inline Data& setDelta(const vector<Data::Delta> & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
      inline Data& setDelta(vector<Data::Delta> && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


    protected:
      shared_ptr<vector<Data::Delta>> delta_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->incorrectWords_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->sourceRole_ == nullptr
        && this->success_ == nullptr && this->targetRole_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifySentenceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifySentenceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifySentenceResponseBody::Data) };
    inline VerifySentenceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifySentenceResponseBody::Data) };
    inline VerifySentenceResponseBody& setData(const VerifySentenceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifySentenceResponseBody& setData(VerifySentenceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t getIncorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline VerifySentenceResponseBody& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifySentenceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifySentenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceRole Field Functions 
    bool hasSourceRole() const { return this->sourceRole_ != nullptr;};
    void deleteSourceRole() { this->sourceRole_ = nullptr;};
    inline int32_t getSourceRole() const { DARABONBA_PTR_GET_DEFAULT(sourceRole_, 0) };
    inline VerifySentenceResponseBody& setSourceRole(int32_t sourceRole) { DARABONBA_PTR_SET_VALUE(sourceRole_, sourceRole) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifySentenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // targetRole Field Functions 
    bool hasTargetRole() const { return this->targetRole_ != nullptr;};
    void deleteTargetRole() { this->targetRole_ = nullptr;};
    inline int32_t getTargetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, 0) };
    inline VerifySentenceResponseBody& setTargetRole(int32_t targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<VerifySentenceResponseBody::Data> data_ {};
    shared_ptr<int32_t> incorrectWords_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> sourceRole_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> targetRole_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
