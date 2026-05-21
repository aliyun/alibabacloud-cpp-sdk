// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeType.hpp>
#include <alibabacloud/models/NodeTypeStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodeTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    ListNodeTypesResponseBody() = default ;
    ListNodeTypesResponseBody(const ListNodeTypesResponseBody &) = default ;
    ListNodeTypesResponseBody(ListNodeTypesResponseBody &&) = default ;
    ListNodeTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeTypesResponseBody() = default ;
    ListNodeTypesResponseBody& operator=(const ListNodeTypesResponseBody &) = default ;
    ListNodeTypesResponseBody& operator=(ListNodeTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeTypes_ == nullptr
        && this->requestId_ == nullptr && this->statistics_ == nullptr; };
    // nodeTypes Field Functions 
    bool hasNodeTypes() const { return this->nodeTypes_ != nullptr;};
    void deleteNodeTypes() { this->nodeTypes_ = nullptr;};
    inline const vector<NodeType> & getNodeTypes() const { DARABONBA_PTR_GET_CONST(nodeTypes_, vector<NodeType>) };
    inline vector<NodeType> getNodeTypes() { DARABONBA_PTR_GET(nodeTypes_, vector<NodeType>) };
    inline ListNodeTypesResponseBody& setNodeTypes(const vector<NodeType> & nodeTypes) { DARABONBA_PTR_SET_VALUE(nodeTypes_, nodeTypes) };
    inline ListNodeTypesResponseBody& setNodeTypes(vector<NodeType> && nodeTypes) { DARABONBA_PTR_SET_RVALUE(nodeTypes_, nodeTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<NodeTypeStatistic> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<NodeTypeStatistic>) };
    inline vector<NodeTypeStatistic> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<NodeTypeStatistic>) };
    inline ListNodeTypesResponseBody& setStatistics(const vector<NodeTypeStatistic> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline ListNodeTypesResponseBody& setStatistics(vector<NodeTypeStatistic> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    shared_ptr<vector<NodeType>> nodeTypes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<NodeTypeStatistic>> statistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
