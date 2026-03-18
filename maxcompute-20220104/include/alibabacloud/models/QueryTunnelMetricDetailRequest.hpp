// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILREQUEST_HPP_
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
  class QueryTunnelMetricDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_TO_JSON(groupList, groupList_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(operationList, operationList_);
      DARABONBA_PTR_TO_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(tableList, tableList_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_FROM_JSON(groupList, groupList_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(operationList, operationList_);
      DARABONBA_PTR_FROM_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(tableList, tableList_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    QueryTunnelMetricDetailRequest() = default ;
    QueryTunnelMetricDetailRequest(const QueryTunnelMetricDetailRequest &) = default ;
    QueryTunnelMetricDetailRequest(QueryTunnelMetricDetailRequest &&) = default ;
    QueryTunnelMetricDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricDetailRequest() = default ;
    QueryTunnelMetricDetailRequest& operator=(const QueryTunnelMetricDetailRequest &) = default ;
    QueryTunnelMetricDetailRequest& operator=(QueryTunnelMetricDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ascOrder_ == nullptr
        && this->groupList_ == nullptr && this->limit_ == nullptr && this->operationList_ == nullptr && this->orderColumn_ == nullptr && this->project_ == nullptr
        && this->quotaNickname_ == nullptr && this->tableList_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool getAscOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline QueryTunnelMetricDetailRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<string> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
    inline vector<string> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
    inline QueryTunnelMetricDetailRequest& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline QueryTunnelMetricDetailRequest& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline QueryTunnelMetricDetailRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<string> & getOperationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<string>) };
    inline vector<string> getOperationList() { DARABONBA_PTR_GET(operationList_, vector<string>) };
    inline QueryTunnelMetricDetailRequest& setOperationList(const vector<string> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline QueryTunnelMetricDetailRequest& setOperationList(vector<string> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline QueryTunnelMetricDetailRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline QueryTunnelMetricDetailRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline QueryTunnelMetricDetailRequest& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<string> & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<string>) };
    inline vector<string> getTableList() { DARABONBA_PTR_GET(tableList_, vector<string>) };
    inline QueryTunnelMetricDetailRequest& setTableList(const vector<string> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline QueryTunnelMetricDetailRequest& setTableList(vector<string> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryTunnelMetricDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryTunnelMetricDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies whether to sort the results in ascending order.
    shared_ptr<bool> ascOrder_ {};
    // The list of grouping bases.
    shared_ptr<vector<string>> groupList_ {};
    // The maximum number of entries to return. The default value is 10. The maximum value is 100.
    shared_ptr<int64_t> limit_ {};
    // The list of operation types.
    shared_ptr<vector<string>> operationList_ {};
    // The column to sort by.
    shared_ptr<string> orderColumn_ {};
    // The name of the project.
    shared_ptr<string> project_ {};
    // The nickname of the level-2 quota for the tunnel.
    // 
    // The nickname of the shared quota is default.
    // 
    // The nickname of the exclusive quota is in the quotaNickname#subQuotaNickname format.
    shared_ptr<string> quotaNickname_ {};
    // The list of table names.
    // 
    // The tables belong to a project. Therefore, if tableList is not empty, project cannot be empty.
    shared_ptr<vector<string>> tableList_ {};
    // The end of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The start of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
