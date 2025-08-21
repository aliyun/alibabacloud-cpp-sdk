// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODYFCTRIGGERS_HPP_
#define ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODYFCTRIGGERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListFCTriggerResponseBodyFCTriggers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFCTriggerResponseBodyFCTriggers& obj) { 
      DARABONBA_PTR_TO_JSON(EventMetaName, eventMetaName_);
      DARABONBA_PTR_TO_JSON(EventMetaVersion, eventMetaVersion_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(SourceArn, sourceArn_);
      DARABONBA_PTR_TO_JSON(TriggerARN, triggerARN_);
    };
    friend void from_json(const Darabonba::Json& j, ListFCTriggerResponseBodyFCTriggers& obj) { 
      DARABONBA_PTR_FROM_JSON(EventMetaName, eventMetaName_);
      DARABONBA_PTR_FROM_JSON(EventMetaVersion, eventMetaVersion_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(SourceArn, sourceArn_);
      DARABONBA_PTR_FROM_JSON(TriggerARN, triggerARN_);
    };
    ListFCTriggerResponseBodyFCTriggers() = default ;
    ListFCTriggerResponseBodyFCTriggers(const ListFCTriggerResponseBodyFCTriggers &) = default ;
    ListFCTriggerResponseBodyFCTriggers(ListFCTriggerResponseBodyFCTriggers &&) = default ;
    ListFCTriggerResponseBodyFCTriggers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFCTriggerResponseBodyFCTriggers() = default ;
    ListFCTriggerResponseBodyFCTriggers& operator=(const ListFCTriggerResponseBodyFCTriggers &) = default ;
    ListFCTriggerResponseBodyFCTriggers& operator=(ListFCTriggerResponseBodyFCTriggers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventMetaName_ != nullptr
        && this->eventMetaVersion_ != nullptr && this->notes_ != nullptr && this->roleARN_ != nullptr && this->sourceArn_ != nullptr && this->triggerARN_ != nullptr; };
    // eventMetaName Field Functions 
    bool hasEventMetaName() const { return this->eventMetaName_ != nullptr;};
    void deleteEventMetaName() { this->eventMetaName_ = nullptr;};
    inline string eventMetaName() const { DARABONBA_PTR_GET_DEFAULT(eventMetaName_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setEventMetaName(string eventMetaName) { DARABONBA_PTR_SET_VALUE(eventMetaName_, eventMetaName) };


    // eventMetaVersion Field Functions 
    bool hasEventMetaVersion() const { return this->eventMetaVersion_ != nullptr;};
    void deleteEventMetaVersion() { this->eventMetaVersion_ = nullptr;};
    inline string eventMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(eventMetaVersion_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setEventMetaVersion(string eventMetaVersion) { DARABONBA_PTR_SET_VALUE(eventMetaVersion_, eventMetaVersion) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string notes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string roleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // sourceArn Field Functions 
    bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
    void deleteSourceArn() { this->sourceArn_ = nullptr;};
    inline string sourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


    // triggerARN Field Functions 
    bool hasTriggerARN() const { return this->triggerARN_ != nullptr;};
    void deleteTriggerARN() { this->triggerARN_ = nullptr;};
    inline string triggerARN() const { DARABONBA_PTR_GET_DEFAULT(triggerARN_, "") };
    inline ListFCTriggerResponseBodyFCTriggers& setTriggerARN(string triggerARN) { DARABONBA_PTR_SET_VALUE(triggerARN_, triggerARN) };


  protected:
    // The name of the event.
    std::shared_ptr<string> eventMetaName_ = nullptr;
    // The version of the event.
    std::shared_ptr<string> eventMetaVersion_ = nullptr;
    // The remarks.
    std::shared_ptr<string> notes_ = nullptr;
    // The Resource Access Management (RAM) role.
    std::shared_ptr<string> roleARN_ = nullptr;
    // The resources and filters for event listening.
    std::shared_ptr<string> sourceArn_ = nullptr;
    // The trigger that corresponds to the Function Compute service.
    std::shared_ptr<string> triggerARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
