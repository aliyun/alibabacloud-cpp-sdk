// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryExperimentVisualizationDataRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class QueryExperimentVisualizationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExperimentVisualizationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExperimentVisualizationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryExperimentVisualizationDataRequest() = default ;
    QueryExperimentVisualizationDataRequest(const QueryExperimentVisualizationDataRequest &) = default ;
    QueryExperimentVisualizationDataRequest(QueryExperimentVisualizationDataRequest &&) = default ;
    QueryExperimentVisualizationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExperimentVisualizationDataRequest() = default ;
    QueryExperimentVisualizationDataRequest& operator=(const QueryExperimentVisualizationDataRequest &) = default ;
    QueryExperimentVisualizationDataRequest& operator=(QueryExperimentVisualizationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<QueryExperimentVisualizationDataRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<QueryExperimentVisualizationDataRequestBody>) };
    inline vector<QueryExperimentVisualizationDataRequestBody> body() { DARABONBA_PTR_GET(body_, vector<QueryExperimentVisualizationDataRequestBody>) };
    inline QueryExperimentVisualizationDataRequest& setBody(const vector<QueryExperimentVisualizationDataRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryExperimentVisualizationDataRequest& setBody(vector<QueryExperimentVisualizationDataRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<QueryExperimentVisualizationDataRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
