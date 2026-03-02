// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LINEAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Edge.hpp>
#include <vector>
#include <alibabacloud/models/JobInfo.hpp>
#include <alibabacloud/models/Node.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class LineageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(edges, edges_);
      DARABONBA_PTR_TO_JSON(jobInfos, jobInfos_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, LineageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(edges, edges_);
      DARABONBA_PTR_FROM_JSON(jobInfos, jobInfos_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
    };
    LineageInfo() = default ;
    LineageInfo(const LineageInfo &) = default ;
    LineageInfo(LineageInfo &&) = default ;
    LineageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageInfo() = default ;
    LineageInfo& operator=(const LineageInfo &) = default ;
    LineageInfo& operator=(LineageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && this->jobInfos_ == nullptr && this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const Edge & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, Edge) };
    inline Edge getEdges() { DARABONBA_PTR_GET(edges_, Edge) };
    inline LineageInfo& setEdges(const Edge & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline LineageInfo& setEdges(Edge && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // jobInfos Field Functions 
    bool hasJobInfos() const { return this->jobInfos_ != nullptr;};
    void deleteJobInfos() { this->jobInfos_ = nullptr;};
    inline const vector<JobInfo> & getJobInfos() const { DARABONBA_PTR_GET_CONST(jobInfos_, vector<JobInfo>) };
    inline vector<JobInfo> getJobInfos() { DARABONBA_PTR_GET(jobInfos_, vector<JobInfo>) };
    inline LineageInfo& setJobInfos(const vector<JobInfo> & jobInfos) { DARABONBA_PTR_SET_VALUE(jobInfos_, jobInfos) };
    inline LineageInfo& setJobInfos(vector<JobInfo> && jobInfos) { DARABONBA_PTR_SET_RVALUE(jobInfos_, jobInfos) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Node> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Node>) };
    inline vector<Node> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Node>) };
    inline LineageInfo& setNodes(const vector<Node> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline LineageInfo& setNodes(vector<Node> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The edge information.
    shared_ptr<Edge> edges_ {};
    // The deployments.
    shared_ptr<vector<JobInfo>> jobInfos_ {};
    // The nodes.
    shared_ptr<vector<Node>> nodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
