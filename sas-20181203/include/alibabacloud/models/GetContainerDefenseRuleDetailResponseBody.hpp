// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetContainerDefenseRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContainerDefenseRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContainerDefenseRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContainerDefenseRuleDetailResponseBody() = default ;
    GetContainerDefenseRuleDetailResponseBody(const GetContainerDefenseRuleDetailResponseBody &) = default ;
    GetContainerDefenseRuleDetailResponseBody(GetContainerDefenseRuleDetailResponseBody &&) = default ;
    GetContainerDefenseRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContainerDefenseRuleDetailResponseBody() = default ;
    GetContainerDefenseRuleDetailResponseBody& operator=(const GetContainerDefenseRuleDetailResponseBody &) = default ;
    GetContainerDefenseRuleDetailResponseBody& operator=(GetContainerDefenseRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
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
      class Whitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Whitelist& obj) { 
          DARABONBA_PTR_TO_JSON(Hash, hash_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, Whitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(Hash, hash_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        Whitelist() = default ;
        Whitelist(const Whitelist &) = default ;
        Whitelist(Whitelist &&) = default ;
        Whitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Whitelist() = default ;
        Whitelist& operator=(const Whitelist &) = default ;
        Whitelist& operator=(Whitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hash_ == nullptr
        && this->image_ == nullptr && this->path_ == nullptr; };
        // hash Field Functions 
        bool hasHash() const { return this->hash_ != nullptr;};
        void deleteHash() { this->hash_ = nullptr;};
        inline const vector<string> & getHash() const { DARABONBA_PTR_GET_CONST(hash_, vector<string>) };
        inline vector<string> getHash() { DARABONBA_PTR_GET(hash_, vector<string>) };
        inline Whitelist& setHash(const vector<string> & hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };
        inline Whitelist& setHash(vector<string> && hash) { DARABONBA_PTR_SET_RVALUE(hash_, hash) };


        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline const vector<string> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<string>) };
        inline vector<string> getImage() { DARABONBA_PTR_GET(image_, vector<string>) };
        inline Whitelist& setImage(const vector<string> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
        inline Whitelist& setImage(vector<string> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
        inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
        inline Whitelist& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
        inline Whitelist& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


      protected:
        // The hash values of the files that are added to the whitelist.
        // 
        // >  This parameter is not supported.
        shared_ptr<vector<string>> hash_ {};
        // An array consisting of images that are added to the whitelist.
        shared_ptr<vector<string>> image_ {};
        // The paths to the files that are added to the whitelist.
        shared_ptr<vector<string>> path_ {};
      };

      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allNamespace_ == nullptr
        && this->clusterId_ == nullptr && this->namespaces_ == nullptr; };
        // allNamespace Field Functions 
        bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
        void deleteAllNamespace() { this->allNamespace_ = nullptr;};
        inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
        inline Scope& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Scope& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // namespaces Field Functions 
        bool hasNamespaces() const { return this->namespaces_ != nullptr;};
        void deleteNamespaces() { this->namespaces_ = nullptr;};
        inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
        inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
        inline Scope& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
        inline Scope& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      protected:
        // Indicates whether all namespaces are included. Valid values:
        // 
        // *   **0**: no
        // *   **1**: yes
        shared_ptr<int32_t> allNamespace_ {};
        // The ID of the container cluster.
        shared_ptr<string> clusterId_ {};
        // An array that consists of queried namespaces.
        shared_ptr<vector<string>> namespaces_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->description_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->id_ == nullptr && this->ruleAction_ == nullptr
        && this->ruleName_ == nullptr && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr && this->scope_ == nullptr && this->whitelist_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
      inline Data& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleSwitch Field Functions 
      bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
      void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
      inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
      inline Data& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Data& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const vector<Data::Scope> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Data::Scope>) };
      inline vector<Data::Scope> getScope() { DARABONBA_PTR_GET(scope_, vector<Data::Scope>) };
      inline Data& setScope(const vector<Data::Scope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Data& setScope(vector<Data::Scope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline const Data::Whitelist & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, Data::Whitelist) };
      inline Data::Whitelist getWhitelist() { DARABONBA_PTR_GET(whitelist_, Data::Whitelist) };
      inline Data& setWhitelist(const Data::Whitelist & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
      inline Data& setWhitelist(Data::Whitelist && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    protected:
      // The user ID.
      shared_ptr<int64_t> aliUid_ {};
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The alert name. Valid values:
      // 
      // *   **Non-image Program Startup**
      shared_ptr<string> eventName_ {};
      // The alert type. Valid values:
      // 
      // *   **Proactive Defense for Containers**
      shared_ptr<string> eventType_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The action specified in the rule. Valid values:
      // 
      // *   **1**: alert
      // *   **2**: block
      shared_ptr<int32_t> ruleAction_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the rule. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> ruleSwitch_ {};
      // The type of the rule. Valid values:
      // 
      // *   **1**: system rule
      // *   **2**: custom rule
      shared_ptr<string> ruleType_ {};
      // The effective scope of the rule.
      shared_ptr<vector<Data::Scope>> scope_ {};
      // The whitelist.
      shared_ptr<Data::Whitelist> whitelist_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContainerDefenseRuleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContainerDefenseRuleDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContainerDefenseRuleDetailResponseBody::Data) };
    inline GetContainerDefenseRuleDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContainerDefenseRuleDetailResponseBody::Data) };
    inline GetContainerDefenseRuleDetailResponseBody& setData(const GetContainerDefenseRuleDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContainerDefenseRuleDetailResponseBody& setData(GetContainerDefenseRuleDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetContainerDefenseRuleDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContainerDefenseRuleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContainerDefenseRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContainerDefenseRuleDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The details of the rule.
    shared_ptr<GetContainerDefenseRuleDetailResponseBody::Data> data_ {};
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
