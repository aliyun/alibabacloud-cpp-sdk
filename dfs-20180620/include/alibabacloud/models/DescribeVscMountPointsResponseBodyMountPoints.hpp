// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVscMountPointsResponseBodyMountPointsInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsResponseBodyMountPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsResponseBodyMountPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceTotalCount, instanceTotalCount_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(MountPointAlias, mountPointAlias_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsResponseBodyMountPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceTotalCount, instanceTotalCount_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(MountPointAlias, mountPointAlias_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
    };
    DescribeVscMountPointsResponseBodyMountPoints() = default ;
    DescribeVscMountPointsResponseBodyMountPoints(const DescribeVscMountPointsResponseBodyMountPoints &) = default ;
    DescribeVscMountPointsResponseBodyMountPoints(DescribeVscMountPointsResponseBodyMountPoints &&) = default ;
    DescribeVscMountPointsResponseBodyMountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsResponseBodyMountPoints() = default ;
    DescribeVscMountPointsResponseBodyMountPoints& operator=(const DescribeVscMountPointsResponseBodyMountPoints &) = default ;
    DescribeVscMountPointsResponseBodyMountPoints& operator=(DescribeVscMountPointsResponseBodyMountPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->instanceTotalCount_ == nullptr && return this->instances_ == nullptr && return this->mountPointAlias_ == nullptr && return this->mountPointId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVscMountPointsResponseBodyMountPoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceTotalCount Field Functions 
    bool hasInstanceTotalCount() const { return this->instanceTotalCount_ != nullptr;};
    void deleteInstanceTotalCount() { this->instanceTotalCount_ = nullptr;};
    inline int32_t instanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(instanceTotalCount_, 0) };
    inline DescribeVscMountPointsResponseBodyMountPoints& setInstanceTotalCount(int32_t instanceTotalCount) { DARABONBA_PTR_SET_VALUE(instanceTotalCount_, instanceTotalCount) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances>) };
    inline vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances>) };
    inline DescribeVscMountPointsResponseBodyMountPoints& setInstances(const vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeVscMountPointsResponseBodyMountPoints& setInstances(vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // mountPointAlias Field Functions 
    bool hasMountPointAlias() const { return this->mountPointAlias_ != nullptr;};
    void deleteMountPointAlias() { this->mountPointAlias_ = nullptr;};
    inline string mountPointAlias() const { DARABONBA_PTR_GET_DEFAULT(mountPointAlias_, "") };
    inline DescribeVscMountPointsResponseBodyMountPoints& setMountPointAlias(string mountPointAlias) { DARABONBA_PTR_SET_VALUE(mountPointAlias_, mountPointAlias) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DescribeVscMountPointsResponseBodyMountPoints& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> instanceTotalCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstances>> instances_ = nullptr;
    std::shared_ptr<string> mountPointAlias_ = nullptr;
    std::shared_ptr<string> mountPointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
