// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDATASOURCESRESPONSEBODYDATAOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDATASOURCESRESPONSEBODYDATAOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMmsDataSourcesResponseBodyDataObjectListConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDataSourcesResponseBodyDataObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDataSourcesResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(agentIsOnline, agentIsOnline_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dbNum, dbNum_);
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
    friend void from_json(const Darabonba::Json& j, ListMmsDataSourcesResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(agentIsOnline, agentIsOnline_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dbNum, dbNum_);
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
    ListMmsDataSourcesResponseBodyDataObjectList() = default ;
    ListMmsDataSourcesResponseBodyDataObjectList(const ListMmsDataSourcesResponseBodyDataObjectList &) = default ;
    ListMmsDataSourcesResponseBodyDataObjectList(ListMmsDataSourcesResponseBodyDataObjectList &&) = default ;
    ListMmsDataSourcesResponseBodyDataObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDataSourcesResponseBodyDataObjectList() = default ;
    ListMmsDataSourcesResponseBodyDataObjectList& operator=(const ListMmsDataSourcesResponseBodyDataObjectList &) = default ;
    ListMmsDataSourcesResponseBodyDataObjectList& operator=(ListMmsDataSourcesResponseBodyDataObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentIsOnline_ != nullptr
        && this->config_ != nullptr && this->createTime_ != nullptr && this->dbNum_ != nullptr && this->errMsg_ != nullptr && this->id_ != nullptr
        && this->lastUpdateTime_ != nullptr && this->name_ != nullptr && this->networklink_ != nullptr && this->partitionNum_ != nullptr && this->partitionsDoingNum_ != nullptr
        && this->partitionsDoneNum_ != nullptr && this->partitionsFailedNum_ != nullptr && this->region_ != nullptr && this->scanId_ != nullptr && this->status_ != nullptr
        && this->tableNum_ != nullptr && this->tablesDoingNum_ != nullptr && this->tablesDoneNum_ != nullptr && this->tablesFailedNum_ != nullptr && this->tablesPartDoneNum_ != nullptr
        && this->type_ != nullptr; };
    // agentIsOnline Field Functions 
    bool hasAgentIsOnline() const { return this->agentIsOnline_ != nullptr;};
    void deleteAgentIsOnline() { this->agentIsOnline_ = nullptr;};
    inline bool agentIsOnline() const { DARABONBA_PTR_GET_DEFAULT(agentIsOnline_, false) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setAgentIsOnline(bool agentIsOnline) { DARABONBA_PTR_SET_VALUE(agentIsOnline_, agentIsOnline) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig> & config() const { DARABONBA_PTR_GET_CONST(config_, vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig>) };
    inline vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig> config() { DARABONBA_PTR_GET(config_, vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig>) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setConfig(const vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setConfig(vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbNum Field Functions 
    bool hasDbNum() const { return this->dbNum_ != nullptr;};
    void deleteDbNum() { this->dbNum_ = nullptr;};
    inline int32_t dbNum() const { DARABONBA_PTR_GET_DEFAULT(dbNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setDbNum(int32_t dbNum) { DARABONBA_PTR_SET_VALUE(dbNum_, dbNum) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networklink Field Functions 
    bool hasNetworklink() const { return this->networklink_ != nullptr;};
    void deleteNetworklink() { this->networklink_ = nullptr;};
    inline string networklink() const { DARABONBA_PTR_GET_DEFAULT(networklink_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setNetworklink(string networklink) { DARABONBA_PTR_SET_VALUE(networklink_, networklink) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // partitionsDoingNum Field Functions 
    bool hasPartitionsDoingNum() const { return this->partitionsDoingNum_ != nullptr;};
    void deletePartitionsDoingNum() { this->partitionsDoingNum_ = nullptr;};
    inline int32_t partitionsDoingNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoingNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setPartitionsDoingNum(int32_t partitionsDoingNum) { DARABONBA_PTR_SET_VALUE(partitionsDoingNum_, partitionsDoingNum) };


    // partitionsDoneNum Field Functions 
    bool hasPartitionsDoneNum() const { return this->partitionsDoneNum_ != nullptr;};
    void deletePartitionsDoneNum() { this->partitionsDoneNum_ = nullptr;};
    inline int32_t partitionsDoneNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoneNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setPartitionsDoneNum(int32_t partitionsDoneNum) { DARABONBA_PTR_SET_VALUE(partitionsDoneNum_, partitionsDoneNum) };


    // partitionsFailedNum Field Functions 
    bool hasPartitionsFailedNum() const { return this->partitionsFailedNum_ != nullptr;};
    void deletePartitionsFailedNum() { this->partitionsFailedNum_ = nullptr;};
    inline int32_t partitionsFailedNum() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailedNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setPartitionsFailedNum(int32_t partitionsFailedNum) { DARABONBA_PTR_SET_VALUE(partitionsFailedNum_, partitionsFailedNum) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scanId Field Functions 
    bool hasScanId() const { return this->scanId_ != nullptr;};
    void deleteScanId() { this->scanId_ = nullptr;};
    inline int64_t scanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableNum Field Functions 
    bool hasTableNum() const { return this->tableNum_ != nullptr;};
    void deleteTableNum() { this->tableNum_ = nullptr;};
    inline int32_t tableNum() const { DARABONBA_PTR_GET_DEFAULT(tableNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setTableNum(int32_t tableNum) { DARABONBA_PTR_SET_VALUE(tableNum_, tableNum) };


    // tablesDoingNum Field Functions 
    bool hasTablesDoingNum() const { return this->tablesDoingNum_ != nullptr;};
    void deleteTablesDoingNum() { this->tablesDoingNum_ = nullptr;};
    inline int32_t tablesDoingNum() const { DARABONBA_PTR_GET_DEFAULT(tablesDoingNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setTablesDoingNum(int32_t tablesDoingNum) { DARABONBA_PTR_SET_VALUE(tablesDoingNum_, tablesDoingNum) };


    // tablesDoneNum Field Functions 
    bool hasTablesDoneNum() const { return this->tablesDoneNum_ != nullptr;};
    void deleteTablesDoneNum() { this->tablesDoneNum_ = nullptr;};
    inline int32_t tablesDoneNum() const { DARABONBA_PTR_GET_DEFAULT(tablesDoneNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setTablesDoneNum(int32_t tablesDoneNum) { DARABONBA_PTR_SET_VALUE(tablesDoneNum_, tablesDoneNum) };


    // tablesFailedNum Field Functions 
    bool hasTablesFailedNum() const { return this->tablesFailedNum_ != nullptr;};
    void deleteTablesFailedNum() { this->tablesFailedNum_ = nullptr;};
    inline int32_t tablesFailedNum() const { DARABONBA_PTR_GET_DEFAULT(tablesFailedNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setTablesFailedNum(int32_t tablesFailedNum) { DARABONBA_PTR_SET_VALUE(tablesFailedNum_, tablesFailedNum) };


    // tablesPartDoneNum Field Functions 
    bool hasTablesPartDoneNum() const { return this->tablesPartDoneNum_ != nullptr;};
    void deleteTablesPartDoneNum() { this->tablesPartDoneNum_ = nullptr;};
    inline int32_t tablesPartDoneNum() const { DARABONBA_PTR_GET_DEFAULT(tablesPartDoneNum_, 0) };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setTablesPartDoneNum(int32_t tablesPartDoneNum) { DARABONBA_PTR_SET_VALUE(tablesPartDoneNum_, tablesPartDoneNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> agentIsOnline_ = nullptr;
    std::shared_ptr<vector<Models::ListMmsDataSourcesResponseBodyDataObjectListConfig>> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> dbNum_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networklink_ = nullptr;
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    std::shared_ptr<int32_t> partitionsDoingNum_ = nullptr;
    std::shared_ptr<int32_t> partitionsDoneNum_ = nullptr;
    std::shared_ptr<int32_t> partitionsFailedNum_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> scanId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> tableNum_ = nullptr;
    std::shared_ptr<int32_t> tablesDoingNum_ = nullptr;
    std::shared_ptr<int32_t> tablesDoneNum_ = nullptr;
    std::shared_ptr<int32_t> tablesFailedNum_ = nullptr;
    std::shared_ptr<int32_t> tablesPartDoneNum_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
