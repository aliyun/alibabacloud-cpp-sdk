// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListFCTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FCTriggers, FCTriggers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FCTriggers, FCTriggers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFCTriggerResponseBody() = default ;
    ListFCTriggerResponseBody(const ListFCTriggerResponseBody &) = default ;
    ListFCTriggerResponseBody(ListFCTriggerResponseBody &&) = default ;
    ListFCTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFCTriggerResponseBody() = default ;
    ListFCTriggerResponseBody& operator=(const ListFCTriggerResponseBody &) = default ;
    ListFCTriggerResponseBody& operator=(ListFCTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FCTriggers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FCTriggers& obj) { 
        DARABONBA_PTR_TO_JSON(EventMetaName, eventMetaName_);
        DARABONBA_PTR_TO_JSON(EventMetaVersion, eventMetaVersion_);
        DARABONBA_PTR_TO_JSON(Notes, notes_);
        DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
        DARABONBA_PTR_TO_JSON(SourceArn, sourceArn_);
        DARABONBA_PTR_TO_JSON(TriggerARN, triggerARN_);
      };
      friend void from_json(const Darabonba::Json& j, FCTriggers& obj) { 
        DARABONBA_PTR_FROM_JSON(EventMetaName, eventMetaName_);
        DARABONBA_PTR_FROM_JSON(EventMetaVersion, eventMetaVersion_);
        DARABONBA_PTR_FROM_JSON(Notes, notes_);
        DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
        DARABONBA_PTR_FROM_JSON(SourceArn, sourceArn_);
        DARABONBA_PTR_FROM_JSON(TriggerARN, triggerARN_);
      };
      FCTriggers() = default ;
      FCTriggers(const FCTriggers &) = default ;
      FCTriggers(FCTriggers &&) = default ;
      FCTriggers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FCTriggers() = default ;
      FCTriggers& operator=(const FCTriggers &) = default ;
      FCTriggers& operator=(FCTriggers &&) = default ;
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
      inline FCTriggers& setEventMetaName(string eventMetaName) { DARABONBA_PTR_SET_VALUE(eventMetaName_, eventMetaName) };


      // eventMetaVersion Field Functions 
      bool hasEventMetaVersion() const { return this->eventMetaVersion_ != nullptr;};
      void deleteEventMetaVersion() { this->eventMetaVersion_ = nullptr;};
      inline string getEventMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(eventMetaVersion_, "") };
      inline FCTriggers& setEventMetaVersion(string eventMetaVersion) { DARABONBA_PTR_SET_VALUE(eventMetaVersion_, eventMetaVersion) };


      // notes Field Functions 
      bool hasNotes() const { return this->notes_ != nullptr;};
      void deleteNotes() { this->notes_ = nullptr;};
      inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
      inline FCTriggers& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


      // roleARN Field Functions 
      bool hasRoleARN() const { return this->roleARN_ != nullptr;};
      void deleteRoleARN() { this->roleARN_ = nullptr;};
      inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
      inline FCTriggers& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


      // sourceArn Field Functions 
      bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
      void deleteSourceArn() { this->sourceArn_ = nullptr;};
      inline string getSourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
      inline FCTriggers& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


      // triggerARN Field Functions 
      bool hasTriggerARN() const { return this->triggerARN_ != nullptr;};
      void deleteTriggerARN() { this->triggerARN_ = nullptr;};
      inline string getTriggerARN() const { DARABONBA_PTR_GET_DEFAULT(triggerARN_, "") };
      inline FCTriggers& setTriggerARN(string triggerARN) { DARABONBA_PTR_SET_VALUE(triggerARN_, triggerARN) };


    protected:
      // The name of the event.
      shared_ptr<string> eventMetaName_ {};
      // The version of the event.
      shared_ptr<string> eventMetaVersion_ {};
      // The remarks.
      shared_ptr<string> notes_ {};
      // The Resource Access Management (RAM) role.
      shared_ptr<string> roleARN_ {};
      // The resources and filters for event listening.
      shared_ptr<string> sourceArn_ {};
      // The trigger that corresponds to the Function Compute service.
      shared_ptr<string> triggerARN_ {};
    };

    virtual bool empty() const override { return this->FCTriggers_ == nullptr
        && this->requestId_ == nullptr; };
    // FCTriggers Field Functions 
    bool hasFCTriggers() const { return this->FCTriggers_ != nullptr;};
    void deleteFCTriggers() { this->FCTriggers_ = nullptr;};
    inline const vector<ListFCTriggerResponseBody::FCTriggers> & getFCTriggers() const { DARABONBA_PTR_GET_CONST(FCTriggers_, vector<ListFCTriggerResponseBody::FCTriggers>) };
    inline vector<ListFCTriggerResponseBody::FCTriggers> getFCTriggers() { DARABONBA_PTR_GET(FCTriggers_, vector<ListFCTriggerResponseBody::FCTriggers>) };
    inline ListFCTriggerResponseBody& setFCTriggers(const vector<ListFCTriggerResponseBody::FCTriggers> & fCTriggers) { DARABONBA_PTR_SET_VALUE(FCTriggers_, fCTriggers) };
    inline ListFCTriggerResponseBody& setFCTriggers(vector<ListFCTriggerResponseBody::FCTriggers> && fCTriggers) { DARABONBA_PTR_SET_RVALUE(FCTriggers_, fCTriggers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFCTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Function Compute triggers that are set for Alibaba Cloud CDN events.
    shared_ptr<vector<ListFCTriggerResponseBody::FCTriggers>> FCTriggers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
