// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICREQUEST_HPP_
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
  class QueryTunnelMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(codeList, codeList_);
      DARABONBA_PTR_TO_JSON(groupList, groupList_);
      DARABONBA_PTR_TO_JSON(operationList, operationList_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(tableList, tableList_);
      DARABONBA_PTR_TO_JSON(topN, topN_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(codeList, codeList_);
      DARABONBA_PTR_FROM_JSON(groupList, groupList_);
      DARABONBA_PTR_FROM_JSON(operationList, operationList_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(tableList, tableList_);
      DARABONBA_PTR_FROM_JSON(topN, topN_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    QueryTunnelMetricRequest() = default ;
    QueryTunnelMetricRequest(const QueryTunnelMetricRequest &) = default ;
    QueryTunnelMetricRequest(QueryTunnelMetricRequest &&) = default ;
    QueryTunnelMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricRequest() = default ;
    QueryTunnelMetricRequest& operator=(const QueryTunnelMetricRequest &) = default ;
    QueryTunnelMetricRequest& operator=(QueryTunnelMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeList_ != nullptr
        && this->groupList_ != nullptr && this->operationList_ != nullptr && this->project_ != nullptr && this->quotaNickname_ != nullptr && this->tableList_ != nullptr
        && this->topN_ != nullptr && this->endTime_ != nullptr && this->startTime_ != nullptr && this->strategy_ != nullptr; };
    // codeList Field Functions 
    bool hasCodeList() const { return this->codeList_ != nullptr;};
    void deleteCodeList() { this->codeList_ = nullptr;};
    inline const vector<int32_t> & codeList() const { DARABONBA_PTR_GET_CONST(codeList_, vector<int32_t>) };
    inline vector<int32_t> codeList() { DARABONBA_PTR_GET(codeList_, vector<int32_t>) };
    inline QueryTunnelMetricRequest& setCodeList(const vector<int32_t> & codeList) { DARABONBA_PTR_SET_VALUE(codeList_, codeList) };
    inline QueryTunnelMetricRequest& setCodeList(vector<int32_t> && codeList) { DARABONBA_PTR_SET_RVALUE(codeList_, codeList) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<string> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
    inline vector<string> groupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
    inline QueryTunnelMetricRequest& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline QueryTunnelMetricRequest& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<string> & operationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<string>) };
    inline vector<string> operationList() { DARABONBA_PTR_GET(operationList_, vector<string>) };
    inline QueryTunnelMetricRequest& setOperationList(const vector<string> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline QueryTunnelMetricRequest& setOperationList(vector<string> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline QueryTunnelMetricRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline QueryTunnelMetricRequest& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<string> & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<string>) };
    inline vector<string> tableList() { DARABONBA_PTR_GET(tableList_, vector<string>) };
    inline QueryTunnelMetricRequest& setTableList(const vector<string> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline QueryTunnelMetricRequest& setTableList(vector<string> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t topN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline QueryTunnelMetricRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryTunnelMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryTunnelMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline QueryTunnelMetricRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<int32_t>> codeList_ = nullptr;
    std::shared_ptr<vector<string>> groupList_ = nullptr;
    std::shared_ptr<vector<string>> operationList_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> quotaNickname_ = nullptr;
    std::shared_ptr<vector<string>> tableList_ = nullptr;
    std::shared_ptr<int32_t> topN_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
