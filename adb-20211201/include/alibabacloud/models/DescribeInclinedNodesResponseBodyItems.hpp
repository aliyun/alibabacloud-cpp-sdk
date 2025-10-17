// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeInclinedNodesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInclinedNodesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DiskUsageRatio, diskUsageRatio_);
      DARABONBA_PTR_TO_JSON(Node, node_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInclinedNodesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskUsageRatio, diskUsageRatio_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
    };
    DescribeInclinedNodesResponseBodyItems() = default ;
    DescribeInclinedNodesResponseBodyItems(const DescribeInclinedNodesResponseBodyItems &) = default ;
    DescribeInclinedNodesResponseBodyItems(DescribeInclinedNodesResponseBodyItems &&) = default ;
    DescribeInclinedNodesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInclinedNodesResponseBodyItems() = default ;
    DescribeInclinedNodesResponseBodyItems& operator=(const DescribeInclinedNodesResponseBodyItems &) = default ;
    DescribeInclinedNodesResponseBodyItems& operator=(DescribeInclinedNodesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskUsageRatio_ == nullptr
        && return this->node_ == nullptr; };
    // diskUsageRatio Field Functions 
    bool hasDiskUsageRatio() const { return this->diskUsageRatio_ != nullptr;};
    void deleteDiskUsageRatio() { this->diskUsageRatio_ = nullptr;};
    inline string diskUsageRatio() const { DARABONBA_PTR_GET_DEFAULT(diskUsageRatio_, "") };
    inline DescribeInclinedNodesResponseBodyItems& setDiskUsageRatio(string diskUsageRatio) { DARABONBA_PTR_SET_VALUE(diskUsageRatio_, diskUsageRatio) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline string node() const { DARABONBA_PTR_GET_DEFAULT(node_, "") };
    inline DescribeInclinedNodesResponseBodyItems& setNode(string node) { DARABONBA_PTR_SET_VALUE(node_, node) };


  protected:
    // The disk usage of the storage node.
    std::shared_ptr<string> diskUsageRatio_ = nullptr;
    // The number of the storage node.
    std::shared_ptr<string> node_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
