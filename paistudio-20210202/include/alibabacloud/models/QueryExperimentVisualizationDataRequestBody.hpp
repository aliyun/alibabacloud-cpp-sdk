// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATAREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATAREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class QueryExperimentVisualizationDataRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExperimentVisualizationDataRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VisualizationDataIds, visualizationDataIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExperimentVisualizationDataRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VisualizationDataIds, visualizationDataIds_);
    };
    QueryExperimentVisualizationDataRequestBody() = default ;
    QueryExperimentVisualizationDataRequestBody(const QueryExperimentVisualizationDataRequestBody &) = default ;
    QueryExperimentVisualizationDataRequestBody(QueryExperimentVisualizationDataRequestBody &&) = default ;
    QueryExperimentVisualizationDataRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExperimentVisualizationDataRequestBody() = default ;
    QueryExperimentVisualizationDataRequestBody& operator=(const QueryExperimentVisualizationDataRequestBody &) = default ;
    QueryExperimentVisualizationDataRequestBody& operator=(QueryExperimentVisualizationDataRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->nodeId_ == nullptr && return this->startTime_ == nullptr && return this->visualizationDataIds_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryExperimentVisualizationDataRequestBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline QueryExperimentVisualizationDataRequestBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryExperimentVisualizationDataRequestBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // visualizationDataIds Field Functions 
    bool hasVisualizationDataIds() const { return this->visualizationDataIds_ != nullptr;};
    void deleteVisualizationDataIds() { this->visualizationDataIds_ = nullptr;};
    inline const vector<string> & visualizationDataIds() const { DARABONBA_PTR_GET_CONST(visualizationDataIds_, vector<string>) };
    inline vector<string> visualizationDataIds() { DARABONBA_PTR_GET(visualizationDataIds_, vector<string>) };
    inline QueryExperimentVisualizationDataRequestBody& setVisualizationDataIds(const vector<string> & visualizationDataIds) { DARABONBA_PTR_SET_VALUE(visualizationDataIds_, visualizationDataIds) };
    inline QueryExperimentVisualizationDataRequestBody& setVisualizationDataIds(vector<string> && visualizationDataIds) { DARABONBA_PTR_SET_RVALUE(visualizationDataIds_, visualizationDataIds) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<vector<string>> visualizationDataIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
