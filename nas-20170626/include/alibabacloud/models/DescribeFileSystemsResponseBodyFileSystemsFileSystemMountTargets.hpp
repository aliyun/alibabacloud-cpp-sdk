// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& obj) { 
      DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountTarget_ == nullptr; };
    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget> & mountTarget() const { DARABONBA_PTR_GET_CONST(mountTarget_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget> mountTarget() { DARABONBA_PTR_GET(mountTarget_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& setMountTarget(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget> & mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets& setMountTarget(vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget> && mountTarget) { DARABONBA_PTR_SET_RVALUE(mountTarget_, mountTarget) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget>> mountTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
