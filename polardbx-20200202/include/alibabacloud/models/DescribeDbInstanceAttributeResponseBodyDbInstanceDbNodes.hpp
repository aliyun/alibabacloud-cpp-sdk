// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCEDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCEDBNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeNodeId, computeNodeId_);
      DARABONBA_PTR_TO_JSON(DataNodeId, dataNodeId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeNodeId, computeNodeId_);
      DARABONBA_PTR_FROM_JSON(DataNodeId, dataNodeId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes(const DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes(DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes &&) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& operator=(const DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& operator=(DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeNodeId_ == nullptr
        && return this->dataNodeId_ == nullptr && return this->id_ == nullptr && return this->nodeClass_ == nullptr && return this->regionId_ == nullptr && return this->zoneId_ == nullptr; };
    // computeNodeId Field Functions 
    bool hasComputeNodeId() const { return this->computeNodeId_ != nullptr;};
    void deleteComputeNodeId() { this->computeNodeId_ = nullptr;};
    inline string computeNodeId() const { DARABONBA_PTR_GET_DEFAULT(computeNodeId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setComputeNodeId(string computeNodeId) { DARABONBA_PTR_SET_VALUE(computeNodeId_, computeNodeId) };


    // dataNodeId Field Functions 
    bool hasDataNodeId() const { return this->dataNodeId_ != nullptr;};
    void deleteDataNodeId() { this->dataNodeId_ = nullptr;};
    inline string dataNodeId() const { DARABONBA_PTR_GET_DEFAULT(dataNodeId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setDataNodeId(string dataNodeId) { DARABONBA_PTR_SET_VALUE(dataNodeId_, dataNodeId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string nodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> computeNodeId_ = nullptr;
    std::shared_ptr<string> dataNodeId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> nodeClass_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
