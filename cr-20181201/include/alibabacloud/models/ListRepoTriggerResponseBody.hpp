// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    ListRepoTriggerResponseBody() = default ;
    ListRepoTriggerResponseBody(const ListRepoTriggerResponseBody &) = default ;
    ListRepoTriggerResponseBody(ListRepoTriggerResponseBody &&) = default ;
    ListRepoTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTriggerResponseBody() = default ;
    ListRepoTriggerResponseBody& operator=(const ListRepoTriggerResponseBody &) = default ;
    ListRepoTriggerResponseBody& operator=(ListRepoTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Triggers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
        DARABONBA_PTR_TO_JSON(RepoEvent, repoEvent_);
        DARABONBA_PTR_TO_JSON(TriggerId, triggerId_);
        DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
        DARABONBA_PTR_TO_JSON(TriggerTag, triggerTag_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(TriggerUrl, triggerUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
        DARABONBA_PTR_FROM_JSON(RepoEvent, repoEvent_);
        DARABONBA_PTR_FROM_JSON(TriggerId, triggerId_);
        DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
        DARABONBA_PTR_FROM_JSON(TriggerTag, triggerTag_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(TriggerUrl, triggerUrl_);
      };
      Triggers() = default ;
      Triggers(const Triggers &) = default ;
      Triggers(Triggers &&) = default ;
      Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Triggers() = default ;
      Triggers& operator=(const Triggers &) = default ;
      Triggers& operator=(Triggers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->repoEvent_ == nullptr
        && this->triggerId_ == nullptr && this->triggerName_ == nullptr && this->triggerTag_ == nullptr && this->triggerType_ == nullptr && this->triggerUrl_ == nullptr; };
      // repoEvent Field Functions 
      bool hasRepoEvent() const { return this->repoEvent_ != nullptr;};
      void deleteRepoEvent() { this->repoEvent_ = nullptr;};
      inline string getRepoEvent() const { DARABONBA_PTR_GET_DEFAULT(repoEvent_, "") };
      inline Triggers& setRepoEvent(string repoEvent) { DARABONBA_PTR_SET_VALUE(repoEvent_, repoEvent) };


      // triggerId Field Functions 
      bool hasTriggerId() const { return this->triggerId_ != nullptr;};
      void deleteTriggerId() { this->triggerId_ = nullptr;};
      inline string getTriggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
      inline Triggers& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


      // triggerName Field Functions 
      bool hasTriggerName() const { return this->triggerName_ != nullptr;};
      void deleteTriggerName() { this->triggerName_ = nullptr;};
      inline string getTriggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
      inline Triggers& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


      // triggerTag Field Functions 
      bool hasTriggerTag() const { return this->triggerTag_ != nullptr;};
      void deleteTriggerTag() { this->triggerTag_ = nullptr;};
      inline string getTriggerTag() const { DARABONBA_PTR_GET_DEFAULT(triggerTag_, "") };
      inline Triggers& setTriggerTag(string triggerTag) { DARABONBA_PTR_SET_VALUE(triggerTag_, triggerTag) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Triggers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // triggerUrl Field Functions 
      bool hasTriggerUrl() const { return this->triggerUrl_ != nullptr;};
      void deleteTriggerUrl() { this->triggerUrl_ = nullptr;};
      inline string getTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(triggerUrl_, "") };
      inline Triggers& setTriggerUrl(string triggerUrl) { DARABONBA_PTR_SET_VALUE(triggerUrl_, triggerUrl) };


    protected:
      // The type of the event that activates the trigger. Valid values:
      // 
      // *   `BUILD_SUCCESS`: The trigger is activated when an image building task is successful.
      // *   `BUILD_Fail`: The trigger is activated when an image building task fails.
      shared_ptr<string> repoEvent_ {};
      // The ID of the trigger.
      shared_ptr<string> triggerId_ {};
      // The name of the trigger.
      shared_ptr<string> triggerName_ {};
      // The image tag based on which the trigger is set.
      shared_ptr<string> triggerTag_ {};
      // The type of the trigger. Valid values:
      // 
      // *   `ALL`: a trigger that supports both tags and regular expressions.
      // *   `TAG_LISTTAG`: a tag-based trigger.
      // *   `TAG_REG_EXP`: a regular expression-based trigger.
      shared_ptr<string> triggerType_ {};
      // The URL of the trigger.
      shared_ptr<string> triggerUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->triggers_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoTriggerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoTriggerResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<ListRepoTriggerResponseBody::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<ListRepoTriggerResponseBody::Triggers>) };
    inline vector<ListRepoTriggerResponseBody::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<ListRepoTriggerResponseBody::Triggers>) };
    inline ListRepoTriggerResponseBody& setTriggers(const vector<ListRepoTriggerResponseBody::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ListRepoTriggerResponseBody& setTriggers(vector<ListRepoTriggerResponseBody::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The triggers of the repository.
    shared_ptr<vector<ListRepoTriggerResponseBody::Triggers>> triggers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
