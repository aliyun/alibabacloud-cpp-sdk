// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFCTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFCTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeFCTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FCTrigger, FCTrigger_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FCTrigger, FCTrigger_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFCTriggerResponseBody() = default ;
    DescribeFCTriggerResponseBody(const DescribeFCTriggerResponseBody &) = default ;
    DescribeFCTriggerResponseBody(DescribeFCTriggerResponseBody &&) = default ;
    DescribeFCTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFCTriggerResponseBody() = default ;
    DescribeFCTriggerResponseBody& operator=(const DescribeFCTriggerResponseBody &) = default ;
    DescribeFCTriggerResponseBody& operator=(DescribeFCTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FCTrigger : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FCTrigger& obj) { 
        DARABONBA_PTR_TO_JSON(EventMetaName, eventMetaName_);
        DARABONBA_PTR_TO_JSON(EventMetaVersion, eventMetaVersion_);
        DARABONBA_PTR_TO_JSON(Notes, notes_);
        DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
        DARABONBA_PTR_TO_JSON(SourceArn, sourceArn_);
        DARABONBA_PTR_TO_JSON(TriggerARN, triggerARN_);
      };
      friend void from_json(const Darabonba::Json& j, FCTrigger& obj) { 
        DARABONBA_PTR_FROM_JSON(EventMetaName, eventMetaName_);
        DARABONBA_PTR_FROM_JSON(EventMetaVersion, eventMetaVersion_);
        DARABONBA_PTR_FROM_JSON(Notes, notes_);
        DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
        DARABONBA_PTR_FROM_JSON(SourceArn, sourceArn_);
        DARABONBA_PTR_FROM_JSON(TriggerARN, triggerARN_);
      };
      FCTrigger() = default ;
      FCTrigger(const FCTrigger &) = default ;
      FCTrigger(FCTrigger &&) = default ;
      FCTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FCTrigger() = default ;
      FCTrigger& operator=(const FCTrigger &) = default ;
      FCTrigger& operator=(FCTrigger &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventMetaName_ == nullptr
        && this->eventMetaVersion_ == nullptr && this->notes_ == nullptr && this->roleARN_ == nullptr && this->sourceArn_ == nullptr && this->triggerARN_ == nullptr; };
      // eventMetaName Field Functions 
      bool hasEventMetaName() const { return this->eventMetaName_ != nullptr;};
      void deleteEventMetaName() { this->eventMetaName_ = nullptr;};
      inline string getEventMetaName() const { DARABONBA_PTR_GET_DEFAULT(eventMetaName_, "") };
      inline FCTrigger& setEventMetaName(string eventMetaName) { DARABONBA_PTR_SET_VALUE(eventMetaName_, eventMetaName) };


      // eventMetaVersion Field Functions 
      bool hasEventMetaVersion() const { return this->eventMetaVersion_ != nullptr;};
      void deleteEventMetaVersion() { this->eventMetaVersion_ = nullptr;};
      inline string getEventMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(eventMetaVersion_, "") };
      inline FCTrigger& setEventMetaVersion(string eventMetaVersion) { DARABONBA_PTR_SET_VALUE(eventMetaVersion_, eventMetaVersion) };


      // notes Field Functions 
      bool hasNotes() const { return this->notes_ != nullptr;};
      void deleteNotes() { this->notes_ = nullptr;};
      inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
      inline FCTrigger& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


      // roleARN Field Functions 
      bool hasRoleARN() const { return this->roleARN_ != nullptr;};
      void deleteRoleARN() { this->roleARN_ = nullptr;};
      inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
      inline FCTrigger& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


      // sourceArn Field Functions 
      bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
      void deleteSourceArn() { this->sourceArn_ = nullptr;};
      inline string getSourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
      inline FCTrigger& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


      // triggerARN Field Functions 
      bool hasTriggerARN() const { return this->triggerARN_ != nullptr;};
      void deleteTriggerARN() { this->triggerARN_ = nullptr;};
      inline string getTriggerARN() const { DARABONBA_PTR_GET_DEFAULT(triggerARN_, "") };
      inline FCTrigger& setTriggerARN(string triggerARN) { DARABONBA_PTR_SET_VALUE(triggerARN_, triggerARN) };


    protected:
      // The name of the event.
      shared_ptr<string> eventMetaName_ {};
      // The version of the event.
      shared_ptr<string> eventMetaVersion_ {};
      // The remarks of the Function Compute trigger.
      shared_ptr<string> notes_ {};
      // The assigned Resource Access Management (RAM) role.
      shared_ptr<string> roleARN_ {};
      // The resources and filters for event listening.
      shared_ptr<string> sourceArn_ {};
      // The trigger that corresponds to the Function Compute service.
      shared_ptr<string> triggerARN_ {};
    };

    virtual bool empty() const override { return this->FCTrigger_ == nullptr
        && this->requestId_ == nullptr; };
    // FCTrigger Field Functions 
    bool hasFCTrigger() const { return this->FCTrigger_ != nullptr;};
    void deleteFCTrigger() { this->FCTrigger_ = nullptr;};
    inline const DescribeFCTriggerResponseBody::FCTrigger & getFCTrigger() const { DARABONBA_PTR_GET_CONST(FCTrigger_, DescribeFCTriggerResponseBody::FCTrigger) };
    inline DescribeFCTriggerResponseBody::FCTrigger getFCTrigger() { DARABONBA_PTR_GET(FCTrigger_, DescribeFCTriggerResponseBody::FCTrigger) };
    inline DescribeFCTriggerResponseBody& setFCTrigger(const DescribeFCTriggerResponseBody::FCTrigger & fCTrigger) { DARABONBA_PTR_SET_VALUE(FCTrigger_, fCTrigger) };
    inline DescribeFCTriggerResponseBody& setFCTrigger(DescribeFCTriggerResponseBody::FCTrigger && fCTrigger) { DARABONBA_PTR_SET_RVALUE(FCTrigger_, fCTrigger) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFCTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Function Compute trigger that you want to query.
    shared_ptr<DescribeFCTriggerResponseBody::FCTrigger> FCTrigger_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
