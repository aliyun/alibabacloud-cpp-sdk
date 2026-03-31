// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsDataSourceResponseBody() = default ;
    GetMmsDataSourceResponseBody(const GetMmsDataSourceResponseBody &) = default ;
    GetMmsDataSourceResponseBody(GetMmsDataSourceResponseBody &&) = default ;
    GetMmsDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsDataSourceResponseBody() = default ;
    GetMmsDataSourceResponseBody& operator=(const GetMmsDataSourceResponseBody &) = default ;
    GetMmsDataSourceResponseBody& operator=(GetMmsDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentIsOnline, agentIsOnline_);
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dbNum, dbNum_);
        DARABONBA_PTR_TO_JSON(dstProject, dstProject_);
        DARABONBA_PTR_TO_JSON(dstProjects, dstProjects_);
        DARABONBA_PTR_TO_JSON(errMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(lastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networklink, networklink_);
        DARABONBA_PTR_TO_JSON(partitionNum, partitionNum_);
        DARABONBA_PTR_TO_JSON(partitionsDoingNum, partitionsDoingNum_);
        DARABONBA_PTR_TO_JSON(partitionsDoneNum, partitionsDoneNum_);
        DARABONBA_PTR_TO_JSON(partitionsFailedNum, partitionsFailedNum_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(scanId, scanId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tableNum, tableNum_);
        DARABONBA_PTR_TO_JSON(tablesDoingNum, tablesDoingNum_);
        DARABONBA_PTR_TO_JSON(tablesDoneNum, tablesDoneNum_);
        DARABONBA_PTR_TO_JSON(tablesFailedNum, tablesFailedNum_);
        DARABONBA_PTR_TO_JSON(tablesPartDoneNum, tablesPartDoneNum_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentIsOnline, agentIsOnline_);
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dbNum, dbNum_);
        DARABONBA_PTR_FROM_JSON(dstProject, dstProject_);
        DARABONBA_PTR_FROM_JSON(dstProjects, dstProjects_);
        DARABONBA_PTR_FROM_JSON(errMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(lastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networklink, networklink_);
        DARABONBA_PTR_FROM_JSON(partitionNum, partitionNum_);
        DARABONBA_PTR_FROM_JSON(partitionsDoingNum, partitionsDoingNum_);
        DARABONBA_PTR_FROM_JSON(partitionsDoneNum, partitionsDoneNum_);
        DARABONBA_PTR_FROM_JSON(partitionsFailedNum, partitionsFailedNum_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(scanId, scanId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tableNum, tableNum_);
        DARABONBA_PTR_FROM_JSON(tablesDoingNum, tablesDoingNum_);
        DARABONBA_PTR_FROM_JSON(tablesDoneNum, tablesDoneNum_);
        DARABONBA_PTR_FROM_JSON(tablesFailedNum, tablesFailedNum_);
        DARABONBA_PTR_FROM_JSON(tablesPartDoneNum, tablesPartDoneNum_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(desc, desc_);
          DARABONBA_PTR_TO_JSON(enums, enums_);
          DARABONBA_PTR_TO_JSON(group, group_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(placeHolder, placeHolder_);
          DARABONBA_PTR_TO_JSON(required, required_);
          DARABONBA_ANY_TO_JSON(subItems, subItems_);
          DARABONBA_PTR_TO_JSON(subType, subType_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(desc, desc_);
          DARABONBA_PTR_FROM_JSON(enums, enums_);
          DARABONBA_PTR_FROM_JSON(group, group_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(placeHolder, placeHolder_);
          DARABONBA_PTR_FROM_JSON(required, required_);
          DARABONBA_ANY_FROM_JSON(subItems, subItems_);
          DARABONBA_PTR_FROM_JSON(subType, subType_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->enums_ == nullptr && this->group_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->placeHolder_ == nullptr
        && this->required_ == nullptr && this->subItems_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Config& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // enums Field Functions 
        bool hasEnums() const { return this->enums_ != nullptr;};
        void deleteEnums() { this->enums_ = nullptr;};
        inline const vector<string> & getEnums() const { DARABONBA_PTR_GET_CONST(enums_, vector<string>) };
        inline vector<string> getEnums() { DARABONBA_PTR_GET(enums_, vector<string>) };
        inline Config& setEnums(const vector<string> & enums) { DARABONBA_PTR_SET_VALUE(enums_, enums) };
        inline Config& setEnums(vector<string> && enums) { DARABONBA_PTR_SET_RVALUE(enums_, enums) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline Config& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Config& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Config& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // placeHolder Field Functions 
        bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
        void deletePlaceHolder() { this->placeHolder_ = nullptr;};
        inline string getPlaceHolder() const { DARABONBA_PTR_GET_DEFAULT(placeHolder_, "") };
        inline Config& setPlaceHolder(string placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Config& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // subItems Field Functions 
        bool hasSubItems() const { return this->subItems_ != nullptr;};
        void deleteSubItems() { this->subItems_ = nullptr;};
        inline         const Darabonba::Json & getSubItems() const { DARABONBA_GET(subItems_) };
        Darabonba::Json & getSubItems() { DARABONBA_GET(subItems_) };
        inline Config& setSubItems(const Darabonba::Json & subItems) { DARABONBA_SET_VALUE(subItems_, subItems) };
        inline Config& setSubItems(Darabonba::Json && subItems) { DARABONBA_SET_RVALUE(subItems_, subItems) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline Config& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Config& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Config& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Config& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<vector<string>> enums_ {};
        shared_ptr<string> group_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> placeHolder_ {};
        shared_ptr<bool> required_ {};
        Darabonba::Json subItems_ {};
        shared_ptr<string> subType_ {};
        shared_ptr<string> type_ {};
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->agentIsOnline_ == nullptr
        && this->config_ == nullptr && this->createTime_ == nullptr && this->dbNum_ == nullptr && this->dstProject_ == nullptr && this->dstProjects_ == nullptr
        && this->errMsg_ == nullptr && this->id_ == nullptr && this->lastUpdateTime_ == nullptr && this->name_ == nullptr && this->networklink_ == nullptr
        && this->partitionNum_ == nullptr && this->partitionsDoingNum_ == nullptr && this->partitionsDoneNum_ == nullptr && this->partitionsFailedNum_ == nullptr && this->region_ == nullptr
        && this->scanId_ == nullptr && this->status_ == nullptr && this->tableNum_ == nullptr && this->tablesDoingNum_ == nullptr && this->tablesDoneNum_ == nullptr
        && this->tablesFailedNum_ == nullptr && this->tablesPartDoneNum_ == nullptr && this->type_ == nullptr; };
      // agentIsOnline Field Functions 
      bool hasAgentIsOnline() const { return this->agentIsOnline_ != nullptr;};
      void deleteAgentIsOnline() { this->agentIsOnline_ = nullptr;};
      inline bool getAgentIsOnline() const { DARABONBA_PTR_GET_DEFAULT(agentIsOnline_, false) };
      inline Data& setAgentIsOnline(bool agentIsOnline) { DARABONBA_PTR_SET_VALUE(agentIsOnline_, agentIsOnline) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const vector<Data::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<Data::Config>) };
      inline vector<Data::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<Data::Config>) };
      inline Data& setConfig(const vector<Data::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(vector<Data::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dbNum Field Functions 
      bool hasDbNum() const { return this->dbNum_ != nullptr;};
      void deleteDbNum() { this->dbNum_ = nullptr;};
      inline int32_t getDbNum() const { DARABONBA_PTR_GET_DEFAULT(dbNum_, 0) };
      inline Data& setDbNum(int32_t dbNum) { DARABONBA_PTR_SET_VALUE(dbNum_, dbNum) };


      // dstProject Field Functions 
      bool hasDstProject() const { return this->dstProject_ != nullptr;};
      void deleteDstProject() { this->dstProject_ = nullptr;};
      inline string getDstProject() const { DARABONBA_PTR_GET_DEFAULT(dstProject_, "") };
      inline Data& setDstProject(string dstProject) { DARABONBA_PTR_SET_VALUE(dstProject_, dstProject) };


      // dstProjects Field Functions 
      bool hasDstProjects() const { return this->dstProjects_ != nullptr;};
      void deleteDstProjects() { this->dstProjects_ = nullptr;};
      inline const vector<string> & getDstProjects() const { DARABONBA_PTR_GET_CONST(dstProjects_, vector<string>) };
      inline vector<string> getDstProjects() { DARABONBA_PTR_GET(dstProjects_, vector<string>) };
      inline Data& setDstProjects(const vector<string> & dstProjects) { DARABONBA_PTR_SET_VALUE(dstProjects_, dstProjects) };
      inline Data& setDstProjects(vector<string> && dstProjects) { DARABONBA_PTR_SET_RVALUE(dstProjects_, dstProjects) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline Data& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastUpdateTime Field Functions 
      bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
      void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
      inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
      inline Data& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networklink Field Functions 
      bool hasNetworklink() const { return this->networklink_ != nullptr;};
      void deleteNetworklink() { this->networklink_ = nullptr;};
      inline string getNetworklink() const { DARABONBA_PTR_GET_DEFAULT(networklink_, "") };
      inline Data& setNetworklink(string networklink) { DARABONBA_PTR_SET_VALUE(networklink_, networklink) };


      // partitionNum Field Functions 
      bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
      void deletePartitionNum() { this->partitionNum_ = nullptr;};
      inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
      inline Data& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


      // partitionsDoingNum Field Functions 
      bool hasPartitionsDoingNum() const { return this->partitionsDoingNum_ != nullptr;};
      void deletePartitionsDoingNum() { this->partitionsDoingNum_ = nullptr;};
      inline int32_t getPartitionsDoingNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoingNum_, 0) };
      inline Data& setPartitionsDoingNum(int32_t partitionsDoingNum) { DARABONBA_PTR_SET_VALUE(partitionsDoingNum_, partitionsDoingNum) };


      // partitionsDoneNum Field Functions 
      bool hasPartitionsDoneNum() const { return this->partitionsDoneNum_ != nullptr;};
      void deletePartitionsDoneNum() { this->partitionsDoneNum_ = nullptr;};
      inline int32_t getPartitionsDoneNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoneNum_, 0) };
      inline Data& setPartitionsDoneNum(int32_t partitionsDoneNum) { DARABONBA_PTR_SET_VALUE(partitionsDoneNum_, partitionsDoneNum) };


      // partitionsFailedNum Field Functions 
      bool hasPartitionsFailedNum() const { return this->partitionsFailedNum_ != nullptr;};
      void deletePartitionsFailedNum() { this->partitionsFailedNum_ = nullptr;};
      inline int32_t getPartitionsFailedNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailedNum_, 0) };
      inline Data& setPartitionsFailedNum(int32_t partitionsFailedNum) { DARABONBA_PTR_SET_VALUE(partitionsFailedNum_, partitionsFailedNum) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // scanId Field Functions 
      bool hasScanId() const { return this->scanId_ != nullptr;};
      void deleteScanId() { this->scanId_ = nullptr;};
      inline int64_t getScanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
      inline Data& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableNum Field Functions 
      bool hasTableNum() const { return this->tableNum_ != nullptr;};
      void deleteTableNum() { this->tableNum_ = nullptr;};
      inline int32_t getTableNum() const { DARABONBA_PTR_GET_DEFAULT(tableNum_, 0) };
      inline Data& setTableNum(int32_t tableNum) { DARABONBA_PTR_SET_VALUE(tableNum_, tableNum) };


      // tablesDoingNum Field Functions 
      bool hasTablesDoingNum() const { return this->tablesDoingNum_ != nullptr;};
      void deleteTablesDoingNum() { this->tablesDoingNum_ = nullptr;};
      inline int32_t getTablesDoingNum() const { DARABONBA_PTR_GET_DEFAULT(tablesDoingNum_, 0) };
      inline Data& setTablesDoingNum(int32_t tablesDoingNum) { DARABONBA_PTR_SET_VALUE(tablesDoingNum_, tablesDoingNum) };


      // tablesDoneNum Field Functions 
      bool hasTablesDoneNum() const { return this->tablesDoneNum_ != nullptr;};
      void deleteTablesDoneNum() { this->tablesDoneNum_ = nullptr;};
      inline int32_t getTablesDoneNum() const { DARABONBA_PTR_GET_DEFAULT(tablesDoneNum_, 0) };
      inline Data& setTablesDoneNum(int32_t tablesDoneNum) { DARABONBA_PTR_SET_VALUE(tablesDoneNum_, tablesDoneNum) };


      // tablesFailedNum Field Functions 
      bool hasTablesFailedNum() const { return this->tablesFailedNum_ != nullptr;};
      void deleteTablesFailedNum() { this->tablesFailedNum_ = nullptr;};
      inline int32_t getTablesFailedNum() const { DARABONBA_PTR_GET_DEFAULT(tablesFailedNum_, 0) };
      inline Data& setTablesFailedNum(int32_t tablesFailedNum) { DARABONBA_PTR_SET_VALUE(tablesFailedNum_, tablesFailedNum) };


      // tablesPartDoneNum Field Functions 
      bool hasTablesPartDoneNum() const { return this->tablesPartDoneNum_ != nullptr;};
      void deleteTablesPartDoneNum() { this->tablesPartDoneNum_ = nullptr;};
      inline int32_t getTablesPartDoneNum() const { DARABONBA_PTR_GET_DEFAULT(tablesPartDoneNum_, 0) };
      inline Data& setTablesPartDoneNum(int32_t tablesPartDoneNum) { DARABONBA_PTR_SET_VALUE(tablesPartDoneNum_, tablesPartDoneNum) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> agentIsOnline_ {};
      shared_ptr<vector<Data::Config>> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> dbNum_ {};
      shared_ptr<string> dstProject_ {};
      shared_ptr<vector<string>> dstProjects_ {};
      shared_ptr<string> errMsg_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> lastUpdateTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> networklink_ {};
      shared_ptr<int32_t> partitionNum_ {};
      shared_ptr<int32_t> partitionsDoingNum_ {};
      shared_ptr<int32_t> partitionsDoneNum_ {};
      shared_ptr<int32_t> partitionsFailedNum_ {};
      shared_ptr<string> region_ {};
      shared_ptr<int64_t> scanId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> tableNum_ {};
      shared_ptr<int32_t> tablesDoingNum_ {};
      shared_ptr<int32_t> tablesDoneNum_ {};
      shared_ptr<int32_t> tablesFailedNum_ {};
      shared_ptr<int32_t> tablesPartDoneNum_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsDataSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMmsDataSourceResponseBody::Data) };
    inline GetMmsDataSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMmsDataSourceResponseBody::Data) };
    inline GetMmsDataSourceResponseBody& setData(const GetMmsDataSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsDataSourceResponseBody& setData(GetMmsDataSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMmsDataSourceResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
