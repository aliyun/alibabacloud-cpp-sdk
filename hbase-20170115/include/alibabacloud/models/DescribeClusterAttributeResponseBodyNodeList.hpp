// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyNodeListNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
    };
    DescribeClusterAttributeResponseBodyNodeList() = default ;
    DescribeClusterAttributeResponseBodyNodeList(const DescribeClusterAttributeResponseBodyNodeList &) = default ;
    DescribeClusterAttributeResponseBodyNodeList(DescribeClusterAttributeResponseBodyNodeList &&) = default ;
    DescribeClusterAttributeResponseBodyNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyNodeList() = default ;
    DescribeClusterAttributeResponseBodyNodeList& operator=(const DescribeClusterAttributeResponseBodyNodeList &) = default ;
    DescribeClusterAttributeResponseBodyNodeList& operator=(DescribeClusterAttributeResponseBodyNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->node_ == nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const vector<Models::DescribeClusterAttributeResponseBodyNodeListNode> & node() const { DARABONBA_PTR_GET_CONST(node_, vector<Models::DescribeClusterAttributeResponseBodyNodeListNode>) };
    inline vector<Models::DescribeClusterAttributeResponseBodyNodeListNode> node() { DARABONBA_PTR_GET(node_, vector<Models::DescribeClusterAttributeResponseBodyNodeListNode>) };
    inline DescribeClusterAttributeResponseBodyNodeList& setNode(const vector<Models::DescribeClusterAttributeResponseBodyNodeListNode> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline DescribeClusterAttributeResponseBodyNodeList& setNode(vector<Models::DescribeClusterAttributeResponseBodyNodeListNode> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterAttributeResponseBodyNodeListNode>> node_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
