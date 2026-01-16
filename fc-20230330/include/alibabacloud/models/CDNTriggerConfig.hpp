// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CDNTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CDNTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CDNTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CDNTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventVersion, eventVersion_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
    };
    friend void from_json(const Darabonba::Json& j, CDNTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventVersion, eventVersion_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
    };
    CDNTriggerConfig() = default ;
    CDNTriggerConfig(const CDNTriggerConfig &) = default ;
    CDNTriggerConfig(CDNTriggerConfig &&) = default ;
    CDNTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CDNTriggerConfig() = default ;
    CDNTriggerConfig& operator=(const CDNTriggerConfig &) = default ;
    CDNTriggerConfig& operator=(CDNTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventVersion_ == nullptr && this->filter_ == nullptr && this->notes_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CDNTriggerConfig& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventVersion Field Functions 
    bool hasEventVersion() const { return this->eventVersion_ != nullptr;};
    void deleteEventVersion() { this->eventVersion_ = nullptr;};
    inline string getEventVersion() const { DARABONBA_PTR_GET_DEFAULT(eventVersion_, "") };
    inline CDNTriggerConfig& setEventVersion(string eventVersion) { DARABONBA_PTR_SET_VALUE(eventVersion_, eventVersion) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const map<string, vector<string>> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, map<string, vector<string>>) };
    inline map<string, vector<string>> getFilter() { DARABONBA_PTR_GET(filter_, map<string, vector<string>>) };
    inline CDNTriggerConfig& setFilter(const map<string, vector<string>> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline CDNTriggerConfig& setFilter(map<string, vector<string>> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CDNTriggerConfig& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


  protected:
    shared_ptr<string> eventName_ {};
    shared_ptr<string> eventVersion_ {};
    shared_ptr<map<string, vector<string>>> filter_ {};
    shared_ptr<string> notes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
