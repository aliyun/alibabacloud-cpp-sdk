// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATAINSTANCETOPOLOGYLISTPHYSICALNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATAINSTANCETOPOLOGYLISTPHYSICALNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& obj) { 
      DARABONBA_PTR_TO_JSON(AZone, AZone_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(AZone, AZone_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes() = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes(const DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes &) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes(DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes &&) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes() = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& operator=(const DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes &) = default ;
    DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& operator=(DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AZone_ == nullptr
        && return this->disk_ == nullptr && return this->nodeClass_ == nullptr && return this->nodeId_ == nullptr && return this->status_ == nullptr && return this->version_ == nullptr; };
    // AZone Field Functions 
    bool hasAZone() const { return this->AZone_ != nullptr;};
    void deleteAZone() { this->AZone_ = nullptr;};
    inline string AZone() const { DARABONBA_PTR_GET_DEFAULT(AZone_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setAZone(string AZone) { DARABONBA_PTR_SET_VALUE(AZone_, AZone) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string nodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeColumnarInfoResponseBodyDataInstanceTopologyListPhysicalNodes& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> AZone_ = nullptr;
    std::shared_ptr<int32_t> disk_ = nullptr;
    std::shared_ptr<string> nodeClass_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
