// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODYAINODEPOOLINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODYAINODEPOOLINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListAINodePoolsResponseBodyAINodePoolInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAINodePoolsResponseBodyAINodePoolInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeInfos, AINodeInfos_);
      DARABONBA_PTR_TO_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListAINodePoolsResponseBodyAINodePoolInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeInfos, AINodeInfos_);
      DARABONBA_PTR_FROM_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
    };
    ListAINodePoolsResponseBodyAINodePoolInfos() = default ;
    ListAINodePoolsResponseBodyAINodePoolInfos(const ListAINodePoolsResponseBodyAINodePoolInfos &) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfos(ListAINodePoolsResponseBodyAINodePoolInfos &&) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAINodePoolsResponseBodyAINodePoolInfos() = default ;
    ListAINodePoolsResponseBodyAINodePoolInfos& operator=(const ListAINodePoolsResponseBodyAINodePoolInfos &) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfos& operator=(ListAINodePoolsResponseBodyAINodePoolInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AINodeInfos_ == nullptr
        && return this->AINodePoolId_ == nullptr && return this->nodeNum_ == nullptr; };
    // AINodeInfos Field Functions 
    bool hasAINodeInfos() const { return this->AINodeInfos_ != nullptr;};
    void deleteAINodeInfos() { this->AINodeInfos_ = nullptr;};
    inline const vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos> & AINodeInfos() const { DARABONBA_PTR_GET_CONST(AINodeInfos_, vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos>) };
    inline vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos> AINodeInfos() { DARABONBA_PTR_GET(AINodeInfos_, vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos>) };
    inline ListAINodePoolsResponseBodyAINodePoolInfos& setAINodeInfos(const vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos> & AINodeInfos) { DARABONBA_PTR_SET_VALUE(AINodeInfos_, AINodeInfos) };
    inline ListAINodePoolsResponseBodyAINodePoolInfos& setAINodeInfos(vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos> && AINodeInfos) { DARABONBA_PTR_SET_RVALUE(AINodeInfos_, AINodeInfos) };


    // AINodePoolId Field Functions 
    bool hasAINodePoolId() const { return this->AINodePoolId_ != nullptr;};
    void deleteAINodePoolId() { this->AINodePoolId_ = nullptr;};
    inline string AINodePoolId() const { DARABONBA_PTR_GET_DEFAULT(AINodePoolId_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfos& setAINodePoolId(string AINodePoolId) { DARABONBA_PTR_SET_VALUE(AINodePoolId_, AINodePoolId) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline string nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfos& setNodeNum(string nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


  protected:
    // AI node details.
    std::shared_ptr<vector<Models::ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos>> AINodeInfos_ = nullptr;
    // The ID of the resource pool to which the AI node belongs.
    std::shared_ptr<string> AINodePoolId_ = nullptr;
    // The number of nodes.
    std::shared_ptr<string> nodeNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
