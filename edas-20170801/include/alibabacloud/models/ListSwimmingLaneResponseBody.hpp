// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSwimmingLaneResponseBody() = default ;
    ListSwimmingLaneResponseBody(const ListSwimmingLaneResponseBody &) = default ;
    ListSwimmingLaneResponseBody(ListSwimmingLaneResponseBody &&) = default ;
    ListSwimmingLaneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneResponseBody() = default ;
    ListSwimmingLaneResponseBody& operator=(const ListSwimmingLaneResponseBody &) = default ;
    ListSwimmingLaneResponseBody& operator=(ListSwimmingLaneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
        DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(ScenarioSign, scenarioSign_);
        DARABONBA_PTR_TO_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
        DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(ScenarioSign, scenarioSign_);
        DARABONBA_PTR_FROM_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class SwimmingLaneAppRelationShipList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SwimmingLaneAppRelationShipList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(LaneId, laneId_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, SwimmingLaneAppRelationShipList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        SwimmingLaneAppRelationShipList() = default ;
        SwimmingLaneAppRelationShipList(const SwimmingLaneAppRelationShipList &) = default ;
        SwimmingLaneAppRelationShipList(SwimmingLaneAppRelationShipList &&) = default ;
        SwimmingLaneAppRelationShipList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SwimmingLaneAppRelationShipList() = default ;
        SwimmingLaneAppRelationShipList& operator=(const SwimmingLaneAppRelationShipList &) = default ;
        SwimmingLaneAppRelationShipList& operator=(SwimmingLaneAppRelationShipList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->extra_ == nullptr && this->laneId_ == nullptr && this->rules_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline SwimmingLaneAppRelationShipList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline SwimmingLaneAppRelationShipList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
        inline SwimmingLaneAppRelationShipList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


        // laneId Field Functions 
        bool hasLaneId() const { return this->laneId_ != nullptr;};
        void deleteLaneId() { this->laneId_ = nullptr;};
        inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
        inline SwimmingLaneAppRelationShipList& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
        inline SwimmingLaneAppRelationShipList& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // Additional information.
        shared_ptr<string> extra_ {};
        // The ID of the lane.
        shared_ptr<int64_t> laneId_ {};
        // The association rule.
        shared_ptr<string> rules_ {};
      };

      virtual bool empty() const override { return this->enableRules_ == nullptr
        && this->entryRule_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr
        && this->scenarioSign_ == nullptr && this->swimmingLaneAppRelationShipList_ == nullptr && this->tag_ == nullptr; };
      // enableRules Field Functions 
      bool hasEnableRules() const { return this->enableRules_ != nullptr;};
      void deleteEnableRules() { this->enableRules_ = nullptr;};
      inline bool getEnableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
      inline Data& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


      // entryRule Field Functions 
      bool hasEntryRule() const { return this->entryRule_ != nullptr;};
      void deleteEntryRule() { this->entryRule_ = nullptr;};
      inline string getEntryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
      inline Data& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Data& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // scenarioSign Field Functions 
      bool hasScenarioSign() const { return this->scenarioSign_ != nullptr;};
      void deleteScenarioSign() { this->scenarioSign_ = nullptr;};
      inline string getScenarioSign() const { DARABONBA_PTR_GET_DEFAULT(scenarioSign_, "") };
      inline Data& setScenarioSign(string scenarioSign) { DARABONBA_PTR_SET_VALUE(scenarioSign_, scenarioSign) };


      // swimmingLaneAppRelationShipList Field Functions 
      bool hasSwimmingLaneAppRelationShipList() const { return this->swimmingLaneAppRelationShipList_ != nullptr;};
      void deleteSwimmingLaneAppRelationShipList() { this->swimmingLaneAppRelationShipList_ = nullptr;};
      inline const vector<Data::SwimmingLaneAppRelationShipList> & getSwimmingLaneAppRelationShipList() const { DARABONBA_PTR_GET_CONST(swimmingLaneAppRelationShipList_, vector<Data::SwimmingLaneAppRelationShipList>) };
      inline vector<Data::SwimmingLaneAppRelationShipList> getSwimmingLaneAppRelationShipList() { DARABONBA_PTR_GET(swimmingLaneAppRelationShipList_, vector<Data::SwimmingLaneAppRelationShipList>) };
      inline Data& setSwimmingLaneAppRelationShipList(const vector<Data::SwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_VALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };
      inline Data& setSwimmingLaneAppRelationShipList(vector<Data::SwimmingLaneAppRelationShipList> && swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_RVALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // Indicates whether the throttling rule is enabled.
      shared_ptr<bool> enableRules_ {};
      // The conditions.
      shared_ptr<string> entryRule_ {};
      // The ID of the lane group.
      shared_ptr<int64_t> groupId_ {};
      // The ID of the lane.
      shared_ptr<int64_t> id_ {};
      // The name of the lane.
      shared_ptr<string> name_ {};
      // The ID of the microservices namespace.
      shared_ptr<string> namespaceId_ {};
      // The expected tag.
      shared_ptr<string> scenarioSign_ {};
      // The applications that are related to the lane.
      shared_ptr<vector<Data::SwimmingLaneAppRelationShipList>> swimmingLaneAppRelationShipList_ {};
      // The tag.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSwimmingLaneResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSwimmingLaneResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSwimmingLaneResponseBody::Data>) };
    inline vector<ListSwimmingLaneResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSwimmingLaneResponseBody::Data>) };
    inline ListSwimmingLaneResponseBody& setData(const vector<ListSwimmingLaneResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSwimmingLaneResponseBody& setData(vector<ListSwimmingLaneResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSwimmingLaneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSwimmingLaneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data that is returned.
    shared_ptr<vector<ListSwimmingLaneResponseBody::Data>> data_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
