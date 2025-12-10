// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryExperimentVisualizationDataResponseBodyVisualizationData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class QueryExperimentVisualizationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExperimentVisualizationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(VisualizationData, visualizationData_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExperimentVisualizationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(VisualizationData, visualizationData_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryExperimentVisualizationDataResponseBody() = default ;
    QueryExperimentVisualizationDataResponseBody(const QueryExperimentVisualizationDataResponseBody &) = default ;
    QueryExperimentVisualizationDataResponseBody(QueryExperimentVisualizationDataResponseBody &&) = default ;
    QueryExperimentVisualizationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExperimentVisualizationDataResponseBody() = default ;
    QueryExperimentVisualizationDataResponseBody& operator=(const QueryExperimentVisualizationDataResponseBody &) = default ;
    QueryExperimentVisualizationDataResponseBody& operator=(QueryExperimentVisualizationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->visualizationData_ == nullptr
        && return this->requestId_ == nullptr; };
    // visualizationData Field Functions 
    bool hasVisualizationData() const { return this->visualizationData_ != nullptr;};
    void deleteVisualizationData() { this->visualizationData_ = nullptr;};
    inline const vector<QueryExperimentVisualizationDataResponseBodyVisualizationData> & visualizationData() const { DARABONBA_PTR_GET_CONST(visualizationData_, vector<QueryExperimentVisualizationDataResponseBodyVisualizationData>) };
    inline vector<QueryExperimentVisualizationDataResponseBodyVisualizationData> visualizationData() { DARABONBA_PTR_GET(visualizationData_, vector<QueryExperimentVisualizationDataResponseBodyVisualizationData>) };
    inline QueryExperimentVisualizationDataResponseBody& setVisualizationData(const vector<QueryExperimentVisualizationDataResponseBodyVisualizationData> & visualizationData) { DARABONBA_PTR_SET_VALUE(visualizationData_, visualizationData) };
    inline QueryExperimentVisualizationDataResponseBody& setVisualizationData(vector<QueryExperimentVisualizationDataResponseBodyVisualizationData> && visualizationData) { DARABONBA_PTR_SET_RVALUE(visualizationData_, visualizationData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryExperimentVisualizationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryExperimentVisualizationDataResponseBodyVisualizationData>> visualizationData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
