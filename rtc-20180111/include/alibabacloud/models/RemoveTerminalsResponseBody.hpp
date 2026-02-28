// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveTerminalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Terminals, terminals_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Terminals, terminals_);
    };
    RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody(RemoveTerminalsResponseBody &&) = default ;
    RemoveTerminalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody& operator=(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody& operator=(RemoveTerminalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Terminals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Terminals& obj) { 
        DARABONBA_PTR_TO_JSON(Terminal, terminal_);
      };
      friend void from_json(const Darabonba::Json& j, Terminals& obj) { 
        DARABONBA_PTR_FROM_JSON(Terminal, terminal_);
      };
      Terminals() = default ;
      Terminals(const Terminals &) = default ;
      Terminals(Terminals &&) = default ;
      Terminals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Terminals() = default ;
      Terminals& operator=(const Terminals &) = default ;
      Terminals& operator=(Terminals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Terminal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Terminal& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Terminal& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Terminal() = default ;
        Terminal(const Terminal &) = default ;
        Terminal(Terminal &&) = default ;
        Terminal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Terminal() = default ;
        Terminal& operator=(const Terminal &) = default ;
        Terminal& operator=(Terminal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Terminal& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Terminal& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Terminal& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<int32_t> code_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->terminal_ == nullptr; };
      // terminal Field Functions 
      bool hasTerminal() const { return this->terminal_ != nullptr;};
      void deleteTerminal() { this->terminal_ = nullptr;};
      inline const vector<Terminals::Terminal> & getTerminal() const { DARABONBA_PTR_GET_CONST(terminal_, vector<Terminals::Terminal>) };
      inline vector<Terminals::Terminal> getTerminal() { DARABONBA_PTR_GET(terminal_, vector<Terminals::Terminal>) };
      inline Terminals& setTerminal(const vector<Terminals::Terminal> & terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };
      inline Terminals& setTerminal(vector<Terminals::Terminal> && terminal) { DARABONBA_PTR_SET_RVALUE(terminal_, terminal) };


    protected:
      shared_ptr<vector<Terminals::Terminal>> terminal_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->terminals_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveTerminalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // terminals Field Functions 
    bool hasTerminals() const { return this->terminals_ != nullptr;};
    void deleteTerminals() { this->terminals_ = nullptr;};
    inline const RemoveTerminalsResponseBody::Terminals & getTerminals() const { DARABONBA_PTR_GET_CONST(terminals_, RemoveTerminalsResponseBody::Terminals) };
    inline RemoveTerminalsResponseBody::Terminals getTerminals() { DARABONBA_PTR_GET(terminals_, RemoveTerminalsResponseBody::Terminals) };
    inline RemoveTerminalsResponseBody& setTerminals(const RemoveTerminalsResponseBody::Terminals & terminals) { DARABONBA_PTR_SET_VALUE(terminals_, terminals) };
    inline RemoveTerminalsResponseBody& setTerminals(RemoveTerminalsResponseBody::Terminals && terminals) { DARABONBA_PTR_SET_RVALUE(terminals_, terminals) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<RemoveTerminalsResponseBody::Terminals> terminals_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
