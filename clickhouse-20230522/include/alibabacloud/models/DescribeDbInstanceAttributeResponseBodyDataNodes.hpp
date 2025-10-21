// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBodyDataNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyDataNodes(const DescribeDBInstanceAttributeResponseBodyDataNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyDataNodes(DescribeDBInstanceAttributeResponseBodyDataNodes &&) = default ;
    DescribeDBInstanceAttributeResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyDataNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyDataNodes& operator=(const DescribeDBInstanceAttributeResponseBodyDataNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyDataNodes& operator=(DescribeDBInstanceAttributeResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeStatus_ == nullptr
        && return this->zoneId_ == nullptr; };
    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDataNodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDataNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The node status.
    std::shared_ptr<string> nodeStatus_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
