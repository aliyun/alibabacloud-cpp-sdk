// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINCIDENTTRACINGSUBNODESCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINCIDENTTRACINGSUBNODESCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryIncidentTracingSubNodesCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIncidentTracingSubNodesCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VertexIdAndTypeList, vertexIdAndTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIncidentTracingSubNodesCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VertexIdAndTypeList, vertexIdAndTypeList_);
    };
    QueryIncidentTracingSubNodesCountRequest() = default ;
    QueryIncidentTracingSubNodesCountRequest(const QueryIncidentTracingSubNodesCountRequest &) = default ;
    QueryIncidentTracingSubNodesCountRequest(QueryIncidentTracingSubNodesCountRequest &&) = default ;
    QueryIncidentTracingSubNodesCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIncidentTracingSubNodesCountRequest() = default ;
    QueryIncidentTracingSubNodesCountRequest& operator=(const QueryIncidentTracingSubNodesCountRequest &) = default ;
    QueryIncidentTracingSubNodesCountRequest& operator=(QueryIncidentTracingSubNodesCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vertexIdAndTypeList_ == nullptr; };
    // vertexIdAndTypeList Field Functions 
    bool hasVertexIdAndTypeList() const { return this->vertexIdAndTypeList_ != nullptr;};
    void deleteVertexIdAndTypeList() { this->vertexIdAndTypeList_ = nullptr;};
    inline const vector<vector<string>> & vertexIdAndTypeList() const { DARABONBA_PTR_GET_CONST(vertexIdAndTypeList_, vector<vector<string>>) };
    inline vector<vector<string>> vertexIdAndTypeList() { DARABONBA_PTR_GET(vertexIdAndTypeList_, vector<vector<string>>) };
    inline QueryIncidentTracingSubNodesCountRequest& setVertexIdAndTypeList(const vector<vector<string>> & vertexIdAndTypeList) { DARABONBA_PTR_SET_VALUE(vertexIdAndTypeList_, vertexIdAndTypeList) };
    inline QueryIncidentTracingSubNodesCountRequest& setVertexIdAndTypeList(vector<vector<string>> && vertexIdAndTypeList) { DARABONBA_PTR_SET_RVALUE(vertexIdAndTypeList_, vertexIdAndTypeList) };


  protected:
    std::shared_ptr<vector<vector<string>>> vertexIdAndTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
