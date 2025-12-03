// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTSINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVscMountPointsResponseBodyMountPointsInstancesVscs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsResponseBodyMountPointsInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsResponseBodyMountPointsInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vscs, vscs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsResponseBodyMountPointsInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
    };
    DescribeVscMountPointsResponseBodyMountPointsInstances() = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstances(const DescribeVscMountPointsResponseBodyMountPointsInstances &) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstances(DescribeVscMountPointsResponseBodyMountPointsInstances &&) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsResponseBodyMountPointsInstances() = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstances& operator=(const DescribeVscMountPointsResponseBodyMountPointsInstances &) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstances& operator=(DescribeVscMountPointsResponseBodyMountPointsInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->status_ == nullptr && return this->vscs_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vscs Field Functions 
    bool hasVscs() const { return this->vscs_ != nullptr;};
    void deleteVscs() { this->vscs_ = nullptr;};
    inline const vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs> & vscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs>) };
    inline vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs> vscs() { DARABONBA_PTR_GET(vscs_, vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs>) };
    inline DescribeVscMountPointsResponseBodyMountPointsInstances& setVscs(const vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
    inline DescribeVscMountPointsResponseBodyMountPointsInstances& setVscs(vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeVscMountPointsResponseBodyMountPointsInstancesVscs>> vscs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
