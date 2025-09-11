// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargetsMountTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargets& obj) { 
      DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
    };
    DescribeMountTargetsResponseBodyMountTargets() = default ;
    DescribeMountTargetsResponseBodyMountTargets(const DescribeMountTargetsResponseBodyMountTargets &) = default ;
    DescribeMountTargetsResponseBodyMountTargets(DescribeMountTargetsResponseBodyMountTargets &&) = default ;
    DescribeMountTargetsResponseBodyMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargets() = default ;
    DescribeMountTargetsResponseBodyMountTargets& operator=(const DescribeMountTargetsResponseBodyMountTargets &) = default ;
    DescribeMountTargetsResponseBodyMountTargets& operator=(DescribeMountTargetsResponseBodyMountTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountTarget_ != nullptr; };
    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget> & mountTarget() const { DARABONBA_PTR_GET_CONST(mountTarget_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget>) };
    inline vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget> mountTarget() { DARABONBA_PTR_GET(mountTarget_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget>) };
    inline DescribeMountTargetsResponseBodyMountTargets& setMountTarget(const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget> & mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };
    inline DescribeMountTargetsResponseBodyMountTargets& setMountTarget(vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget> && mountTarget) { DARABONBA_PTR_SET_RVALUE(mountTarget_, mountTarget) };


  protected:
    std::shared_ptr<vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTarget>> mountTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
