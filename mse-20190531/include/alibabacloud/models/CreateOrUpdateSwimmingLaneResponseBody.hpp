// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODY_HPP_
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
  class CreateOrUpdateSwimmingLaneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateOrUpdateSwimmingLaneResponseBody() = default ;
    CreateOrUpdateSwimmingLaneResponseBody(const CreateOrUpdateSwimmingLaneResponseBody &) = default ;
    CreateOrUpdateSwimmingLaneResponseBody(CreateOrUpdateSwimmingLaneResponseBody &&) = default ;
    CreateOrUpdateSwimmingLaneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneResponseBody() = default ;
    CreateOrUpdateSwimmingLaneResponseBody& operator=(const CreateOrUpdateSwimmingLaneResponseBody &) = default ;
    CreateOrUpdateSwimmingLaneResponseBody& operator=(CreateOrUpdateSwimmingLaneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(enableRules, enableRules_);
        DARABONBA_PTR_TO_JSON(entryRule, entryRule_);
        DARABONBA_PTR_TO_JSON(entryRules, entryRules_);
        DARABONBA_PTR_TO_JSON(gatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(pathIndependentPercentageEnable, pathIndependentPercentageEnable_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(enableRules, enableRules_);
        DARABONBA_PTR_FROM_JSON(entryRule, entryRule_);
        DARABONBA_PTR_FROM_JSON(entryRules, entryRules_);
        DARABONBA_PTR_FROM_JSON(gatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(pathIndependentPercentageEnable, pathIndependentPercentageEnable_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
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
      class EntryRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntryRules& obj) { 
          DARABONBA_PTR_TO_JSON(condition, condition_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(restItems, restItems_);
        };
        friend void from_json(const Darabonba::Json& j, EntryRules& obj) { 
          DARABONBA_PTR_FROM_JSON(condition, condition_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(restItems, restItems_);
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
            DARABONBA_PTR_TO_JSON(cond, cond_);
            DARABONBA_PTR_TO_JSON(datum, datum_);
            DARABONBA_PTR_TO_JSON(divisor, divisor_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nameList, nameList_);
            DARABONBA_PTR_TO_JSON(operator, operator_);
            DARABONBA_PTR_TO_JSON(rate, rate_);
            DARABONBA_PTR_TO_JSON(remainder, remainder_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RestItems& obj) { 
            DARABONBA_PTR_FROM_JSON(cond, cond_);
            DARABONBA_PTR_FROM_JSON(datum, datum_);
            DARABONBA_PTR_FROM_JSON(divisor, divisor_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nameList, nameList_);
            DARABONBA_PTR_FROM_JSON(operator, operator_);
            DARABONBA_PTR_FROM_JSON(rate, rate_);
            DARABONBA_PTR_FROM_JSON(remainder, remainder_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(value, value_);
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
        && this->path_ == nullptr && this->paths_ == nullptr && this->restItems_ == nullptr; };
        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline EntryRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline EntryRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline EntryRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline EntryRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // restItems Field Functions 
        bool hasRestItems() const { return this->restItems_ != nullptr;};
        void deleteRestItems() { this->restItems_ = nullptr;};
        inline const vector<EntryRules::RestItems> & getRestItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<EntryRules::RestItems>) };
        inline vector<EntryRules::RestItems> getRestItems() { DARABONBA_PTR_GET(restItems_, vector<EntryRules::RestItems>) };
        inline EntryRules& setRestItems(const vector<EntryRules::RestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
        inline EntryRules& setRestItems(vector<EntryRules::RestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


      protected:
        shared_ptr<string> condition_ {};
        shared_ptr<string> path_ {};
        shared_ptr<vector<string>> paths_ {};
        shared_ptr<vector<EntryRules::RestItems>> restItems_ {};
      };

      virtual bool empty() const override { return this->enable_ == nullptr
        && this->enableRules_ == nullptr && this->entryRule_ == nullptr && this->entryRules_ == nullptr && this->gatewaySwimmingLaneRouteJson_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->pathIndependentPercentageEnable_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


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


      // entryRules Field Functions 
      bool hasEntryRules() const { return this->entryRules_ != nullptr;};
      void deleteEntryRules() { this->entryRules_ = nullptr;};
      inline const vector<Data::EntryRules> & getEntryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<Data::EntryRules>) };
      inline vector<Data::EntryRules> getEntryRules() { DARABONBA_PTR_GET(entryRules_, vector<Data::EntryRules>) };
      inline Data& setEntryRules(const vector<Data::EntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
      inline Data& setEntryRules(vector<Data::EntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


      // gatewaySwimmingLaneRouteJson Field Functions 
      bool hasGatewaySwimmingLaneRouteJson() const { return this->gatewaySwimmingLaneRouteJson_ != nullptr;};
      void deleteGatewaySwimmingLaneRouteJson() { this->gatewaySwimmingLaneRouteJson_ = nullptr;};
      inline string getGatewaySwimmingLaneRouteJson() const { DARABONBA_PTR_GET_DEFAULT(gatewaySwimmingLaneRouteJson_, "") };
      inline Data& setGatewaySwimmingLaneRouteJson(string gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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


      // pathIndependentPercentageEnable Field Functions 
      bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
      void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
      inline bool getPathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
      inline Data& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      shared_ptr<bool> enable_ {};
      shared_ptr<bool> enableRules_ {};
      shared_ptr<string> entryRule_ {};
      shared_ptr<vector<Data::EntryRules>> entryRules_ {};
      shared_ptr<string> gatewaySwimmingLaneRouteJson_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> groupId_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> pathIndependentPercentageEnable_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateOrUpdateSwimmingLaneResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateOrUpdateSwimmingLaneResponseBody::Data) };
    inline CreateOrUpdateSwimmingLaneResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateOrUpdateSwimmingLaneResponseBody::Data) };
    inline CreateOrUpdateSwimmingLaneResponseBody& setData(const CreateOrUpdateSwimmingLaneResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateOrUpdateSwimmingLaneResponseBody& setData(CreateOrUpdateSwimmingLaneResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateOrUpdateSwimmingLaneResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateOrUpdateSwimmingLaneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The value 200 is returned if the request is successful.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<CreateOrUpdateSwimmingLaneResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
