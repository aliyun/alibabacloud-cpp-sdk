// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSlowLogStatisticRequest() = default ;
    DescribeSlowLogStatisticRequest(const DescribeSlowLogStatisticRequest &) = default ;
    DescribeSlowLogStatisticRequest(DescribeSlowLogStatisticRequest &&) = default ;
    DescribeSlowLogStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticRequest() = default ;
    DescribeSlowLogStatisticRequest& operator=(const DescribeSlowLogStatisticRequest &) = default ;
    DescribeSlowLogStatisticRequest& operator=(DescribeSlowLogStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The filter parameter.
      shared_ptr<string> key_ {};
      // The value of the filter parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->asc_ == nullptr
        && this->endTime_ == nullptr && this->filters_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->orderBy_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline DescribeSlowLogStatisticRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSlowLogStatisticRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeSlowLogStatisticRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeSlowLogStatisticRequest::Filters>) };
    inline vector<DescribeSlowLogStatisticRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeSlowLogStatisticRequest::Filters>) };
    inline DescribeSlowLogStatisticRequest& setFilters(const vector<DescribeSlowLogStatisticRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeSlowLogStatisticRequest& setFilters(vector<DescribeSlowLogStatisticRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSlowLogStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSlowLogStatisticRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeSlowLogStatisticRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSlowLogStatisticRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSlowLogStatisticRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSlowLogStatisticRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSlowLogStatisticRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSlowLogStatisticRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to sort the results in ascending order. The default value is false.
    shared_ptr<bool> asc_ {};
    // The end time of the query. This value is a UNIX timestamp in UTC. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The filter conditions.
    shared_ptr<vector<DescribeSlowLogStatisticRequest::Filters>> filters_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID.
    // 
    // - For RDS for MySQL and PolarDB for MySQL, this parameter applies only to cluster instances. If you do not specify this parameter, the slow query logs of the primary node are queried by default.
    // 
    // - For PolarDB-X 2.0, specify **polarx_cn** for compute nodes or **polarx_dn** for data nodes.
    shared_ptr<string> nodeId_ {};
    // The sorting method. Valid values:
    // 
    // **Count**
    // 
    // **QueryTime**
    // 
    // **LockTime**
    // 
    // **RowsExamined**
    // 
    // **RowsSent**
    shared_ptr<string> orderBy_ {};
    // The page number. The value must be a positive integer. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the query. This value is a UNIX timestamp in UTC. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The task type.
    // 
    // For SQL engines:
    // 
    // **SlowLogRequestOrigin**: Aggregates logs by source IP address.
    // 
    // **SlowLogRequestUser**: Aggregates logs by source user.
    // 
    // **SQL**: Aggregates logs by SQL ID.
    // 
    // For ApsaraDB for MongoDB engines:
    // 
    // **SlowLogRequestOrigin**: Aggregates logs by source IP address.
    // 
    // **SlowLogRequestUser**: Aggregates logs by source user.
    // 
    // **SQL**: Aggregates logs by query ID.
    // 
    // **SlowLogRequestOpType**: Aggregates logs by operation type.
    // 
    // **SlowLogRequestNamespace**: Aggregates logs by namespace.
    // 
    // For Redis engines:
    // 
    // **SlowLogRequestNodeId**: Aggregates logs by node ID.
    // 
    // **SlowLogRequestHostInsId**: Aggregates logs by host instance ID.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
