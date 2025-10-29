// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizdateFrom, bizdateFrom_);
      DARABONBA_PTR_TO_JSON(BizdateTo, bizdateTo_);
      DARABONBA_PTR_TO_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_TO_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskInstanceId, dataQualityEvaluationTaskInstanceId_);
      DARABONBA_PTR_TO_JSON(DataQualityRuleId, dataQualityRuleId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizdateFrom, bizdateFrom_);
      DARABONBA_PTR_FROM_JSON(BizdateTo, bizdateTo_);
      DARABONBA_PTR_FROM_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_FROM_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskInstanceId, dataQualityEvaluationTaskInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataQualityRuleId, dataQualityRuleId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataQualityResultsRequest() = default ;
    ListDataQualityResultsRequest(const ListDataQualityResultsRequest &) = default ;
    ListDataQualityResultsRequest(ListDataQualityResultsRequest &&) = default ;
    ListDataQualityResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsRequest() = default ;
    ListDataQualityResultsRequest& operator=(const ListDataQualityResultsRequest &) = default ;
    ListDataQualityResultsRequest& operator=(ListDataQualityResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdateFrom_ == nullptr
        && return this->bizdateTo_ == nullptr && return this->createTimeFrom_ == nullptr && return this->createTimeTo_ == nullptr && return this->dataQualityEvaluationTaskId_ == nullptr && return this->dataQualityEvaluationTaskInstanceId_ == nullptr
        && return this->dataQualityRuleId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectId_ == nullptr; };
    // bizdateFrom Field Functions 
    bool hasBizdateFrom() const { return this->bizdateFrom_ != nullptr;};
    void deleteBizdateFrom() { this->bizdateFrom_ = nullptr;};
    inline string bizdateFrom() const { DARABONBA_PTR_GET_DEFAULT(bizdateFrom_, "") };
    inline ListDataQualityResultsRequest& setBizdateFrom(string bizdateFrom) { DARABONBA_PTR_SET_VALUE(bizdateFrom_, bizdateFrom) };


    // bizdateTo Field Functions 
    bool hasBizdateTo() const { return this->bizdateTo_ != nullptr;};
    void deleteBizdateTo() { this->bizdateTo_ = nullptr;};
    inline string bizdateTo() const { DARABONBA_PTR_GET_DEFAULT(bizdateTo_, "") };
    inline ListDataQualityResultsRequest& setBizdateTo(string bizdateTo) { DARABONBA_PTR_SET_VALUE(bizdateTo_, bizdateTo) };


    // createTimeFrom Field Functions 
    bool hasCreateTimeFrom() const { return this->createTimeFrom_ != nullptr;};
    void deleteCreateTimeFrom() { this->createTimeFrom_ = nullptr;};
    inline int64_t createTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(createTimeFrom_, 0L) };
    inline ListDataQualityResultsRequest& setCreateTimeFrom(int64_t createTimeFrom) { DARABONBA_PTR_SET_VALUE(createTimeFrom_, createTimeFrom) };


    // createTimeTo Field Functions 
    bool hasCreateTimeTo() const { return this->createTimeTo_ != nullptr;};
    void deleteCreateTimeTo() { this->createTimeTo_ = nullptr;};
    inline int64_t createTimeTo() const { DARABONBA_PTR_GET_DEFAULT(createTimeTo_, 0L) };
    inline ListDataQualityResultsRequest& setCreateTimeTo(int64_t createTimeTo) { DARABONBA_PTR_SET_VALUE(createTimeTo_, createTimeTo) };


    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline ListDataQualityResultsRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // dataQualityEvaluationTaskInstanceId Field Functions 
    bool hasDataQualityEvaluationTaskInstanceId() const { return this->dataQualityEvaluationTaskInstanceId_ != nullptr;};
    void deleteDataQualityEvaluationTaskInstanceId() { this->dataQualityEvaluationTaskInstanceId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskInstanceId_, 0L) };
    inline ListDataQualityResultsRequest& setDataQualityEvaluationTaskInstanceId(int64_t dataQualityEvaluationTaskInstanceId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskInstanceId_, dataQualityEvaluationTaskInstanceId) };


    // dataQualityRuleId Field Functions 
    bool hasDataQualityRuleId() const { return this->dataQualityRuleId_ != nullptr;};
    void deleteDataQualityRuleId() { this->dataQualityRuleId_ = nullptr;};
    inline int64_t dataQualityRuleId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityRuleId_, 0L) };
    inline ListDataQualityResultsRequest& setDataQualityRuleId(int64_t dataQualityRuleId) { DARABONBA_PTR_SET_VALUE(dataQualityRuleId_, dataQualityRuleId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityResultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityResultsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The beginning of the time range to query.
    std::shared_ptr<string> bizdateFrom_ = nullptr;
    // The end of the time range to query.
    std::shared_ptr<string> bizdateTo_ = nullptr;
    // The earliest time when the data quality check result was generated.
    std::shared_ptr<int64_t> createTimeFrom_ = nullptr;
    // The latest time when the data quality check result was generated.
    std::shared_ptr<int64_t> createTimeTo_ = nullptr;
    // The ID of the data quality monitoring task.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskId_ = nullptr;
    // The ID of the instance generated by the check.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskInstanceId_ = nullptr;
    // The ID of the data quality monitoring rule.
    std::shared_ptr<int64_t> dataQualityRuleId_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
