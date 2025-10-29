// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizdateFrom, bizdateFrom_);
      DARABONBA_PTR_TO_JSON(BizdateTo, bizdateTo_);
      DARABONBA_PTR_TO_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_TO_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TriggerClient, triggerClient_);
      DARABONBA_PTR_TO_JSON(TriggerClientId, triggerClientId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizdateFrom, bizdateFrom_);
      DARABONBA_PTR_FROM_JSON(BizdateTo, bizdateTo_);
      DARABONBA_PTR_FROM_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_FROM_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TriggerClient, triggerClient_);
      DARABONBA_PTR_FROM_JSON(TriggerClientId, triggerClientId_);
    };
    ListDataQualityEvaluationTaskInstancesRequest() = default ;
    ListDataQualityEvaluationTaskInstancesRequest(const ListDataQualityEvaluationTaskInstancesRequest &) = default ;
    ListDataQualityEvaluationTaskInstancesRequest(ListDataQualityEvaluationTaskInstancesRequest &&) = default ;
    ListDataQualityEvaluationTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTaskInstancesRequest() = default ;
    ListDataQualityEvaluationTaskInstancesRequest& operator=(const ListDataQualityEvaluationTaskInstancesRequest &) = default ;
    ListDataQualityEvaluationTaskInstancesRequest& operator=(ListDataQualityEvaluationTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdateFrom_ == nullptr
        && return this->bizdateTo_ == nullptr && return this->createTimeFrom_ == nullptr && return this->createTimeTo_ == nullptr && return this->dataQualityEvaluationTaskId_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->projectId_ == nullptr && return this->tableGuid_ == nullptr && return this->triggerClient_ == nullptr && return this->triggerClientId_ == nullptr; };
    // bizdateFrom Field Functions 
    bool hasBizdateFrom() const { return this->bizdateFrom_ != nullptr;};
    void deleteBizdateFrom() { this->bizdateFrom_ = nullptr;};
    inline string bizdateFrom() const { DARABONBA_PTR_GET_DEFAULT(bizdateFrom_, "") };
    inline ListDataQualityEvaluationTaskInstancesRequest& setBizdateFrom(string bizdateFrom) { DARABONBA_PTR_SET_VALUE(bizdateFrom_, bizdateFrom) };


    // bizdateTo Field Functions 
    bool hasBizdateTo() const { return this->bizdateTo_ != nullptr;};
    void deleteBizdateTo() { this->bizdateTo_ = nullptr;};
    inline string bizdateTo() const { DARABONBA_PTR_GET_DEFAULT(bizdateTo_, "") };
    inline ListDataQualityEvaluationTaskInstancesRequest& setBizdateTo(string bizdateTo) { DARABONBA_PTR_SET_VALUE(bizdateTo_, bizdateTo) };


    // createTimeFrom Field Functions 
    bool hasCreateTimeFrom() const { return this->createTimeFrom_ != nullptr;};
    void deleteCreateTimeFrom() { this->createTimeFrom_ = nullptr;};
    inline int64_t createTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(createTimeFrom_, 0L) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setCreateTimeFrom(int64_t createTimeFrom) { DARABONBA_PTR_SET_VALUE(createTimeFrom_, createTimeFrom) };


    // createTimeTo Field Functions 
    bool hasCreateTimeTo() const { return this->createTimeTo_ != nullptr;};
    void deleteCreateTimeTo() { this->createTimeTo_ = nullptr;};
    inline int64_t createTimeTo() const { DARABONBA_PTR_GET_DEFAULT(createTimeTo_, 0L) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setCreateTimeTo(int64_t createTimeTo) { DARABONBA_PTR_SET_VALUE(createTimeTo_, createTimeTo) };


    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityEvaluationTaskInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline ListDataQualityEvaluationTaskInstancesRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // triggerClient Field Functions 
    bool hasTriggerClient() const { return this->triggerClient_ != nullptr;};
    void deleteTriggerClient() { this->triggerClient_ = nullptr;};
    inline string triggerClient() const { DARABONBA_PTR_GET_DEFAULT(triggerClient_, "") };
    inline ListDataQualityEvaluationTaskInstancesRequest& setTriggerClient(string triggerClient) { DARABONBA_PTR_SET_VALUE(triggerClient_, triggerClient) };


    // triggerClientId Field Functions 
    bool hasTriggerClientId() const { return this->triggerClientId_ != nullptr;};
    void deleteTriggerClientId() { this->triggerClientId_ = nullptr;};
    inline string triggerClientId() const { DARABONBA_PTR_GET_DEFAULT(triggerClientId_, "") };
    inline ListDataQualityEvaluationTaskInstancesRequest& setTriggerClientId(string triggerClientId) { DARABONBA_PTR_SET_VALUE(triggerClientId_, triggerClientId) };


  protected:
    // The start time of the data quality monitoring task.
    std::shared_ptr<string> bizdateFrom_ = nullptr;
    // The end time of the data quality monitoring task.
    std::shared_ptr<string> bizdateTo_ = nullptr;
    // The earliest start time at which the instances are generated.
    std::shared_ptr<int64_t> createTimeFrom_ = nullptr;
    // The latest start time at which the instances are generated.
    std::shared_ptr<int64_t> createTimeTo_ = nullptr;
    // The ID of the data quality monitoring task.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskId_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The ID of the table in Data Map.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the trigger module of the instance.
    std::shared_ptr<string> triggerClient_ = nullptr;
    // The ID of the instance that is generated by the task.
    std::shared_ptr<string> triggerClientId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
