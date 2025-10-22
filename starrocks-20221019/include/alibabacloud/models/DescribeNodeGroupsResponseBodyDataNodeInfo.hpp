// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODYDATANODEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODYDATANODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeNodeGroupsResponseBodyDataNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupsResponseBodyDataNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupsResponseBodyDataNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DescribeNodeGroupsResponseBodyDataNodeInfo() = default ;
    DescribeNodeGroupsResponseBodyDataNodeInfo(const DescribeNodeGroupsResponseBodyDataNodeInfo &) = default ;
    DescribeNodeGroupsResponseBodyDataNodeInfo(DescribeNodeGroupsResponseBodyDataNodeInfo &&) = default ;
    DescribeNodeGroupsResponseBodyDataNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupsResponseBodyDataNodeInfo() = default ;
    DescribeNodeGroupsResponseBodyDataNodeInfo& operator=(const DescribeNodeGroupsResponseBodyDataNodeInfo &) = default ;
    DescribeNodeGroupsResponseBodyDataNodeInfo& operator=(DescribeNodeGroupsResponseBodyDataNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeNodeGroupsResponseBodyDataNodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
