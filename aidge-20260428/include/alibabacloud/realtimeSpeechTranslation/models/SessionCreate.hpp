// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONCREATE_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONCREATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class SessionCreate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionCreate& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(language_pair, languagePair_);
      DARABONBA_PTR_TO_JSON(session, session_);
    };
    friend void from_json(const Darabonba::Json& j, SessionCreate& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(language_pair, languagePair_);
      DARABONBA_PTR_FROM_JSON(session, session_);
    };
    SessionCreate() = default ;
    SessionCreate(const SessionCreate &) = default ;
    SessionCreate(SessionCreate &&) = default ;
    SessionCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionCreate() = default ;
    SessionCreate& operator=(const SessionCreate &) = default ;
    SessionCreate& operator=(SessionCreate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Session : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Session& obj) { 
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(language_pair, languagePair_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(language_pair, languagePair_);
      };
      Session() = default ;
      Session(const Session &) = default ;
      Session(Session &&) = default ;
      Session(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Session() = default ;
      Session& operator=(const Session &) = default ;
      Session& operator=(Session &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->languagePair_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Session& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // languagePair Field Functions 
      bool hasLanguagePair() const { return this->languagePair_ != nullptr;};
      void deleteLanguagePair() { this->languagePair_ = nullptr;};
      inline const vector<string> & getLanguagePair() const { DARABONBA_PTR_GET_CONST(languagePair_, vector<string>) };
      inline vector<string> getLanguagePair() { DARABONBA_PTR_GET(languagePair_, vector<string>) };
      inline Session& setLanguagePair(const vector<string> & languagePair) { DARABONBA_PTR_SET_VALUE(languagePair_, languagePair) };
      inline Session& setLanguagePair(vector<string> && languagePair) { DARABONBA_PTR_SET_RVALUE(languagePair_, languagePair) };


    protected:
      shared_ptr<string> mode_ {};
      // 双向须提供本字段或根节点 language_pair；须包含 zh 和 en/ja/ko 之一。
      shared_ptr<vector<string>> languagePair_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->mode_ == nullptr && this->languagePair_ == nullptr && this->session_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionCreate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionCreate& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SessionCreate& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // languagePair Field Functions 
    bool hasLanguagePair() const { return this->languagePair_ != nullptr;};
    void deleteLanguagePair() { this->languagePair_ = nullptr;};
    inline const vector<string> & getLanguagePair() const { DARABONBA_PTR_GET_CONST(languagePair_, vector<string>) };
    inline vector<string> getLanguagePair() { DARABONBA_PTR_GET(languagePair_, vector<string>) };
    inline SessionCreate& setLanguagePair(const vector<string> & languagePair) { DARABONBA_PTR_SET_VALUE(languagePair_, languagePair) };
    inline SessionCreate& setLanguagePair(vector<string> && languagePair) { DARABONBA_PTR_SET_RVALUE(languagePair_, languagePair) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const SessionCreate::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, SessionCreate::Session) };
    inline SessionCreate::Session getSession() { DARABONBA_PTR_GET(session_, SessionCreate::Session) };
    inline SessionCreate& setSession(const SessionCreate::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline SessionCreate& setSession(SessionCreate::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 可省略；提供时必须为非空、非纯空白字符串，用于关联响应。
    shared_ptr<string> eventId_ {};
    // 与 session.mode 二选一；同时提供必须一致。均省略时后端选择 single，网关不补默认值。
    shared_ptr<string> mode_ {};
    // 双向条件必填，与 session.language_pair 二选一；同时提供时内容及顺序必须一致。仅支持 zh 与 en/ja/ko 组合，顺序可反转，由后端校验。
    shared_ptr<vector<string>> languagePair_ {};
    // 单向可省略或指定 mode=single；双向须指定 bidirectional 模式及语言对。创建后模式与语言对不可变，音频和输出配置通过 SessionUpdate 下发。
    shared_ptr<SessionCreate::Session> session_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
