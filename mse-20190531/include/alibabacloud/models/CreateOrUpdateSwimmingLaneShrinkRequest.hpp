// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJsonShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJsonShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateOrUpdateSwimmingLaneShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(const CreateOrUpdateSwimmingLaneShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(CreateOrUpdateSwimmingLaneShrinkRequest &&) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest& operator=(const CreateOrUpdateSwimmingLaneShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest& operator=(CreateOrUpdateSwimmingLaneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntryRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntryRules& obj) { 
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RestItems, restItems_);
      };
      friend void from_json(const Darabonba::Json& j, EntryRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RestItems, restItems_);
      };
      EntryRules() = default ;
      EntryRules(const EntryRules &) = default ;
      EntryRules(EntryRules &&) = default ;
      EntryRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntryRules() = default ;
      EntryRules& operator=(const EntryRules &) = default ;
      EntryRules& operator=(EntryRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestItems& obj) { 
          DARABONBA_PTR_TO_JSON(Cond, cond_);
          DARABONBA_PTR_TO_JSON(Datum, datum_);
          DARABONBA_PTR_TO_JSON(Divisor, divisor_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameList, nameList_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Remainder, remainder_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RestItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Cond, cond_);
          DARABONBA_PTR_FROM_JSON(Datum, datum_);
          DARABONBA_PTR_FROM_JSON(Divisor, divisor_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameList, nameList_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Remainder, remainder_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RestItems() = default ;
        RestItems(const RestItems &) = default ;
        RestItems(RestItems &&) = default ;
        RestItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestItems() = default ;
        RestItems& operator=(const RestItems &) = default ;
        RestItems& operator=(RestItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cond_ == nullptr
        && this->datum_ == nullptr && this->divisor_ == nullptr && this->name_ == nullptr && this->nameList_ == nullptr && this->operator_ == nullptr
        && this->rate_ == nullptr && this->remainder_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // cond Field Functions 
        bool hasCond() const { return this->cond_ != nullptr;};
        void deleteCond() { this->cond_ = nullptr;};
        inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
        inline RestItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


        // datum Field Functions 
        bool hasDatum() const { return this->datum_ != nullptr;};
        void deleteDatum() { this->datum_ = nullptr;};
        inline string getDatum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
        inline RestItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


        // divisor Field Functions 
        bool hasDivisor() const { return this->divisor_ != nullptr;};
        void deleteDivisor() { this->divisor_ = nullptr;};
        inline int32_t getDivisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
        inline RestItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RestItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameList Field Functions 
        bool hasNameList() const { return this->nameList_ != nullptr;};
        void deleteNameList() { this->nameList_ = nullptr;};
        inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
        inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
        inline RestItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
        inline RestItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline RestItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
        inline RestItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // remainder Field Functions 
        bool hasRemainder() const { return this->remainder_ != nullptr;};
        void deleteRemainder() { this->remainder_ = nullptr;};
        inline int32_t getRemainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
        inline RestItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RestItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RestItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> cond_ {};
        shared_ptr<string> datum_ {};
        shared_ptr<int32_t> divisor_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> nameList_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<int32_t> rate_ {};
        shared_ptr<int32_t> remainder_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->condition_ == nullptr
        && this->paths_ == nullptr && this->priority_ == nullptr && this->restItems_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline EntryRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
      inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
      inline EntryRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline EntryRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline EntryRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // restItems Field Functions 
      bool hasRestItems() const { return this->restItems_ != nullptr;};
      void deleteRestItems() { this->restItems_ = nullptr;};
      inline const vector<EntryRules::RestItems> & getRestItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<EntryRules::RestItems>) };
      inline vector<EntryRules::RestItems> getRestItems() { DARABONBA_PTR_GET(restItems_, vector<EntryRules::RestItems>) };
      inline EntryRules& setRestItems(const vector<EntryRules::RestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
      inline EntryRules& setRestItems(vector<EntryRules::RestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


    protected:
      shared_ptr<string> condition_ {};
      shared_ptr<vector<string>> paths_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<vector<EntryRules::RestItems>> restItems_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->enable_ == nullptr && this->enableRules_ == nullptr && this->entryRule_ == nullptr && this->entryRules_ == nullptr && this->gatewaySwimmingLaneRouteJsonShrink_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->pathIndependentPercentageEnable_ == nullptr
        && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool getEnableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string getEntryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline const vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules> & getEntryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules>) };
    inline vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules> getEntryRules() { DARABONBA_PTR_GET(entryRules_, vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules>) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEntryRules(const vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEntryRules(vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


    // gatewaySwimmingLaneRouteJsonShrink Field Functions 
    bool hasGatewaySwimmingLaneRouteJsonShrink() const { return this->gatewaySwimmingLaneRouteJsonShrink_ != nullptr;};
    void deleteGatewaySwimmingLaneRouteJsonShrink() { this->gatewaySwimmingLaneRouteJsonShrink_ = nullptr;};
    inline string getGatewaySwimmingLaneRouteJsonShrink() const { DARABONBA_PTR_GET_DEFAULT(gatewaySwimmingLaneRouteJsonShrink_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setGatewaySwimmingLaneRouteJsonShrink(string gatewaySwimmingLaneRouteJsonShrink) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJsonShrink_, gatewaySwimmingLaneRouteJsonShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pathIndependentPercentageEnable Field Functions 
    bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
    void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
    inline bool getPathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The language of the response. Valid values: zh and en. Default value: zh. The value zh indicates Chinese, and the value en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to enable the lane.
    shared_ptr<bool> enable_ {};
    // Specifies whether to configure a routing rule for the lane. If an Ingress gateway is used, this parameter is not required.
    shared_ptr<bool> enableRules_ {};
    // The JSON string.
    shared_ptr<string> entryRule_ {};
    shared_ptr<vector<CreateOrUpdateSwimmingLaneShrinkRequest::EntryRules>> entryRules_ {};
    // The information about the routing rule for the gateway. This parameter is required when a cloud-native gateway is used as the ingress.
    shared_ptr<string> gatewaySwimmingLaneRouteJsonShrink_ {};
    // The language of the response. Valid values:****
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US**: English
    // 
    // > Default value: **zh-CN**.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the primary key. The value -1 indicates a request that is used to create a lane. A value greater than 0 indicates a request that is used to modify a lane.
    shared_ptr<int64_t> id_ {};
    // The name of the lane.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<bool> pathIndependentPercentageEnable_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The tag.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
