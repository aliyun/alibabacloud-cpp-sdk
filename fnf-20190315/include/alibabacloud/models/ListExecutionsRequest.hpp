// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionNamePrefix, executionNamePrefix_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_TO_JSON(MetadataOnly, metadataOnly_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(StartedTimeBegin, startedTimeBegin_);
      DARABONBA_PTR_TO_JSON(StartedTimeEnd, startedTimeEnd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionNamePrefix, executionNamePrefix_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_FROM_JSON(MetadataOnly, metadataOnly_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(StartedTimeBegin, startedTimeBegin_);
      DARABONBA_PTR_FROM_JSON(StartedTimeEnd, startedTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListExecutionsRequest() = default ;
    ListExecutionsRequest(const ListExecutionsRequest &) = default ;
    ListExecutionsRequest(ListExecutionsRequest &&) = default ;
    ListExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsRequest() = default ;
    ListExecutionsRequest& operator=(const ListExecutionsRequest &) = default ;
    ListExecutionsRequest& operator=(ListExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionNamePrefix_ == nullptr
        && return this->flowName_ == nullptr && return this->limit_ == nullptr && return this->mapRunName_ == nullptr && return this->metadataOnly_ == nullptr && return this->nextToken_ == nullptr
        && return this->qualifier_ == nullptr && return this->startedTimeBegin_ == nullptr && return this->startedTimeEnd_ == nullptr && return this->status_ == nullptr; };
    // executionNamePrefix Field Functions 
    bool hasExecutionNamePrefix() const { return this->executionNamePrefix_ != nullptr;};
    void deleteExecutionNamePrefix() { this->executionNamePrefix_ = nullptr;};
    inline string executionNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(executionNamePrefix_, "") };
    inline ListExecutionsRequest& setExecutionNamePrefix(string executionNamePrefix) { DARABONBA_PTR_SET_VALUE(executionNamePrefix_, executionNamePrefix) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline ListExecutionsRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListExecutionsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mapRunName Field Functions 
    bool hasMapRunName() const { return this->mapRunName_ != nullptr;};
    void deleteMapRunName() { this->mapRunName_ = nullptr;};
    inline string mapRunName() const { DARABONBA_PTR_GET_DEFAULT(mapRunName_, "") };
    inline ListExecutionsRequest& setMapRunName(string mapRunName) { DARABONBA_PTR_SET_VALUE(mapRunName_, mapRunName) };


    // metadataOnly Field Functions 
    bool hasMetadataOnly() const { return this->metadataOnly_ != nullptr;};
    void deleteMetadataOnly() { this->metadataOnly_ = nullptr;};
    inline bool metadataOnly() const { DARABONBA_PTR_GET_DEFAULT(metadataOnly_, false) };
    inline ListExecutionsRequest& setMetadataOnly(bool metadataOnly) { DARABONBA_PTR_SET_VALUE(metadataOnly_, metadataOnly) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListExecutionsRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // startedTimeBegin Field Functions 
    bool hasStartedTimeBegin() const { return this->startedTimeBegin_ != nullptr;};
    void deleteStartedTimeBegin() { this->startedTimeBegin_ = nullptr;};
    inline string startedTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startedTimeBegin_, "") };
    inline ListExecutionsRequest& setStartedTimeBegin(string startedTimeBegin) { DARABONBA_PTR_SET_VALUE(startedTimeBegin_, startedTimeBegin) };


    // startedTimeEnd Field Functions 
    bool hasStartedTimeEnd() const { return this->startedTimeEnd_ != nullptr;};
    void deleteStartedTimeEnd() { this->startedTimeEnd_ = nullptr;};
    inline string startedTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startedTimeEnd_, "") };
    inline ListExecutionsRequest& setStartedTimeEnd(string startedTimeEnd) { DARABONBA_PTR_SET_VALUE(startedTimeEnd_, startedTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name prefix of the execution.
    std::shared_ptr<string> executionNamePrefix_ = nullptr;
    // The name of the flow. The name must be unique within the region and cannot be modified after the flow is created. The name must meet the following conventions:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must start with a letter or an underscore (_).
    // *   The name is case-sensitive.
    // *   The name must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The number of executions that you want to query. Valid values: 1-99. Default value: 60.
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<string> mapRunName_ = nullptr;
    std::shared_ptr<bool> metadataOnly_ = nullptr;
    // The name of the execution to start the query. You can obtain the value from the response data. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    // The beginning of the time range to query executions. Specify the value in the UTC RFC3339 format.
    std::shared_ptr<string> startedTimeBegin_ = nullptr;
    // The end of the time range to query executions. Specify the value in the UTC RFC3339 format.
    std::shared_ptr<string> startedTimeEnd_ = nullptr;
    // The status of the execution that you want to filter. Valid values:
    // 
    // *   **Starting**
    // *   **Running**
    // *   **Stopped**
    // *   **Succeeded**
    // *   **Failed**
    // *   **TimedOut**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
