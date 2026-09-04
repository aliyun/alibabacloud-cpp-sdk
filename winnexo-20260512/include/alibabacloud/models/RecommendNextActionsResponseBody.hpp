// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDNEXTACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDNEXTACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RecommendNextActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendNextActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextActions, nextActions_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendNextActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextActions, nextActions_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    RecommendNextActionsResponseBody() = default ;
    RecommendNextActionsResponseBody(const RecommendNextActionsResponseBody &) = default ;
    RecommendNextActionsResponseBody(RecommendNextActionsResponseBody &&) = default ;
    RecommendNextActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendNextActionsResponseBody() = default ;
    RecommendNextActionsResponseBody& operator=(const RecommendNextActionsResponseBody &) = default ;
    RecommendNextActionsResponseBody& operator=(RecommendNextActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NextActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NextActions& obj) { 
        DARABONBA_PTR_TO_JSON(actionTitle, actionTitle_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(skillName, skillName_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, NextActions& obj) { 
        DARABONBA_PTR_FROM_JSON(actionTitle, actionTitle_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(skillName, skillName_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      NextActions() = default ;
      NextActions(const NextActions &) = default ;
      NextActions(NextActions &&) = default ;
      NextActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NextActions() = default ;
      NextActions& operator=(const NextActions &) = default ;
      NextActions& operator=(NextActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionTitle_ == nullptr
        && this->skillCode_ == nullptr && this->skillName_ == nullptr && this->type_ == nullptr; };
      // actionTitle Field Functions 
      bool hasActionTitle() const { return this->actionTitle_ != nullptr;};
      void deleteActionTitle() { this->actionTitle_ = nullptr;};
      inline string getActionTitle() const { DARABONBA_PTR_GET_DEFAULT(actionTitle_, "") };
      inline NextActions& setActionTitle(string actionTitle) { DARABONBA_PTR_SET_VALUE(actionTitle_, actionTitle) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline NextActions& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline NextActions& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NextActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The recommendation title.
      shared_ptr<string> actionTitle_ {};
      // The skill code.
      shared_ptr<string> skillCode_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The recommendation type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nextActions_ == nullptr && this->requestId_ == nullptr && this->title_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RecommendNextActionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RecommendNextActionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextActions Field Functions 
    bool hasNextActions() const { return this->nextActions_ != nullptr;};
    void deleteNextActions() { this->nextActions_ = nullptr;};
    inline const vector<RecommendNextActionsResponseBody::NextActions> & getNextActions() const { DARABONBA_PTR_GET_CONST(nextActions_, vector<RecommendNextActionsResponseBody::NextActions>) };
    inline vector<RecommendNextActionsResponseBody::NextActions> getNextActions() { DARABONBA_PTR_GET(nextActions_, vector<RecommendNextActionsResponseBody::NextActions>) };
    inline RecommendNextActionsResponseBody& setNextActions(const vector<RecommendNextActionsResponseBody::NextActions> & nextActions) { DARABONBA_PTR_SET_VALUE(nextActions_, nextActions) };
    inline RecommendNextActionsResponseBody& setNextActions(vector<RecommendNextActionsResponseBody::NextActions> && nextActions) { DARABONBA_PTR_SET_RVALUE(nextActions_, nextActions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecommendNextActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RecommendNextActionsResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* / InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The next-step recommendations.
    shared_ptr<vector<RecommendNextActionsResponseBody::NextActions>> nextActions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The meeting reservation title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
