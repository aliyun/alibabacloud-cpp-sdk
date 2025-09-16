// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodes.hpp>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultQueryNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(dataNodes, dataNodes_);
      DARABONBA_PTR_TO_JSON(queryNode, queryNode_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(dataNodes, dataNodes_);
      DARABONBA_PTR_FROM_JSON(queryNode, queryNode_);
    };
    GetClusterRunTimeInfoResponseBodyResult() = default ;
    GetClusterRunTimeInfoResponseBodyResult(const GetClusterRunTimeInfoResponseBodyResult &) = default ;
    GetClusterRunTimeInfoResponseBodyResult(GetClusterRunTimeInfoResponseBodyResult &&) = default ;
    GetClusterRunTimeInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResult() = default ;
    GetClusterRunTimeInfoResponseBodyResult& operator=(const GetClusterRunTimeInfoResponseBodyResult &) = default ;
    GetClusterRunTimeInfoResponseBodyResult& operator=(GetClusterRunTimeInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->dataNodes_ != nullptr && this->queryNode_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterRunTimeInfoResponseBodyResult& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dataNodes Field Functions 
    bool hasDataNodes() const { return this->dataNodes_ != nullptr;};
    void deleteDataNodes() { this->dataNodes_ = nullptr;};
    inline const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes> & dataNodes() const { DARABONBA_PTR_GET_CONST(dataNodes_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes>) };
    inline vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes> dataNodes() { DARABONBA_PTR_GET(dataNodes_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes>) };
    inline GetClusterRunTimeInfoResponseBodyResult& setDataNodes(const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes> & dataNodes) { DARABONBA_PTR_SET_VALUE(dataNodes_, dataNodes) };
    inline GetClusterRunTimeInfoResponseBodyResult& setDataNodes(vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes> && dataNodes) { DARABONBA_PTR_SET_RVALUE(dataNodes_, dataNodes) };


    // queryNode Field Functions 
    bool hasQueryNode() const { return this->queryNode_ != nullptr;};
    void deleteQueryNode() { this->queryNode_ = nullptr;};
    inline const Models::GetClusterRunTimeInfoResponseBodyResultQueryNode & queryNode() const { DARABONBA_PTR_GET_CONST(queryNode_, Models::GetClusterRunTimeInfoResponseBodyResultQueryNode) };
    inline Models::GetClusterRunTimeInfoResponseBodyResultQueryNode queryNode() { DARABONBA_PTR_GET(queryNode_, Models::GetClusterRunTimeInfoResponseBodyResultQueryNode) };
    inline GetClusterRunTimeInfoResponseBodyResult& setQueryNode(const Models::GetClusterRunTimeInfoResponseBodyResultQueryNode & queryNode) { DARABONBA_PTR_SET_VALUE(queryNode_, queryNode) };
    inline GetClusterRunTimeInfoResponseBodyResult& setQueryNode(Models::GetClusterRunTimeInfoResponseBodyResultQueryNode && queryNode) { DARABONBA_PTR_SET_RVALUE(queryNode_, queryNode) };


  protected:
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The information about the Searcher workers.
    std::shared_ptr<vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodes>> dataNodes_ = nullptr;
    // The information about the Query Result Searcher (QRS) workers.
    std::shared_ptr<Models::GetClusterRunTimeInfoResponseBodyResultQueryNode> queryNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
