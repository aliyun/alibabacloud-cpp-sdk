// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnswerSqlSyntaxByMetaAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerSqlSyntaxByMetaAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerSqlSyntaxByMetaAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AnswerSqlSyntaxByMetaAgentResponseBodyData() = default ;
    AnswerSqlSyntaxByMetaAgentResponseBodyData(const AnswerSqlSyntaxByMetaAgentResponseBodyData &) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBodyData(AnswerSqlSyntaxByMetaAgentResponseBodyData &&) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerSqlSyntaxByMetaAgentResponseBodyData() = default ;
    AnswerSqlSyntaxByMetaAgentResponseBodyData& operator=(const AnswerSqlSyntaxByMetaAgentResponseBodyData &) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBodyData& operator=(AnswerSqlSyntaxByMetaAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->sessionId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
