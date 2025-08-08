// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODYNODELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODYNODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskInstanceRelationResponseBodyNodeListNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskInstanceRelationResponseBodyNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceRelationResponseBodyNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceRelationResponseBodyNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
    };
    GetTaskInstanceRelationResponseBodyNodeList() = default ;
    GetTaskInstanceRelationResponseBodyNodeList(const GetTaskInstanceRelationResponseBodyNodeList &) = default ;
    GetTaskInstanceRelationResponseBodyNodeList(GetTaskInstanceRelationResponseBodyNodeList &&) = default ;
    GetTaskInstanceRelationResponseBodyNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceRelationResponseBodyNodeList() = default ;
    GetTaskInstanceRelationResponseBodyNodeList& operator=(const GetTaskInstanceRelationResponseBodyNodeList &) = default ;
    GetTaskInstanceRelationResponseBodyNodeList& operator=(GetTaskInstanceRelationResponseBodyNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->node_ != nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode> & node() const { DARABONBA_PTR_GET_CONST(node_, vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode>) };
    inline vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode> node() { DARABONBA_PTR_GET(node_, vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode>) };
    inline GetTaskInstanceRelationResponseBodyNodeList& setNode(const vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetTaskInstanceRelationResponseBodyNodeList& setNode(vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


  protected:
    std::shared_ptr<vector<Models::GetTaskInstanceRelationResponseBodyNodeListNode>> node_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
