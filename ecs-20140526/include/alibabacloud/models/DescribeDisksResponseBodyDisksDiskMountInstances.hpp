// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKMOUNTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKMOUNTINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskMountInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskMountInstances& obj) { 
      DARABONBA_PTR_TO_JSON(MountInstance, mountInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskMountInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(MountInstance, mountInstance_);
    };
    DescribeDisksResponseBodyDisksDiskMountInstances() = default ;
    DescribeDisksResponseBodyDisksDiskMountInstances(const DescribeDisksResponseBodyDisksDiskMountInstances &) = default ;
    DescribeDisksResponseBodyDisksDiskMountInstances(DescribeDisksResponseBodyDisksDiskMountInstances &&) = default ;
    DescribeDisksResponseBodyDisksDiskMountInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskMountInstances() = default ;
    DescribeDisksResponseBodyDisksDiskMountInstances& operator=(const DescribeDisksResponseBodyDisksDiskMountInstances &) = default ;
    DescribeDisksResponseBodyDisksDiskMountInstances& operator=(DescribeDisksResponseBodyDisksDiskMountInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountInstance_ != nullptr; };
    // mountInstance Field Functions 
    bool hasMountInstance() const { return this->mountInstance_ != nullptr;};
    void deleteMountInstance() { this->mountInstance_ = nullptr;};
    inline const vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance> & mountInstance() const { DARABONBA_PTR_GET_CONST(mountInstance_, vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance>) };
    inline vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance> mountInstance() { DARABONBA_PTR_GET(mountInstance_, vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance>) };
    inline DescribeDisksResponseBodyDisksDiskMountInstances& setMountInstance(const vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance> & mountInstance) { DARABONBA_PTR_SET_VALUE(mountInstance_, mountInstance) };
    inline DescribeDisksResponseBodyDisksDiskMountInstances& setMountInstance(vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance> && mountInstance) { DARABONBA_PTR_SET_RVALUE(mountInstance_, mountInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksResponseBodyDisksDiskMountInstancesMountInstance>> mountInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
