// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTSINSTANCESVSCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODYMOUNTPOINTSINSTANCESVSCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsResponseBodyMountPointsInstancesVscs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& obj) { 
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
      DARABONBA_PTR_TO_JSON(VscName, vscName_);
      DARABONBA_PTR_TO_JSON(VscStatus, vscStatus_);
      DARABONBA_PTR_TO_JSON(VscType, vscType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& obj) { 
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      DARABONBA_PTR_FROM_JSON(VscName, vscName_);
      DARABONBA_PTR_FROM_JSON(VscStatus, vscStatus_);
      DARABONBA_PTR_FROM_JSON(VscType, vscType_);
    };
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs() = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs(const DescribeVscMountPointsResponseBodyMountPointsInstancesVscs &) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs(DescribeVscMountPointsResponseBodyMountPointsInstancesVscs &&) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsResponseBodyMountPointsInstancesVscs() = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& operator=(const DescribeVscMountPointsResponseBodyMountPointsInstancesVscs &) = default ;
    DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& operator=(DescribeVscMountPointsResponseBodyMountPointsInstancesVscs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vscId_ == nullptr
        && return this->vscName_ == nullptr && return this->vscStatus_ == nullptr && return this->vscType_ == nullptr; };
    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    // vscName Field Functions 
    bool hasVscName() const { return this->vscName_ != nullptr;};
    void deleteVscName() { this->vscName_ = nullptr;};
    inline string vscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


    // vscStatus Field Functions 
    bool hasVscStatus() const { return this->vscStatus_ != nullptr;};
    void deleteVscStatus() { this->vscStatus_ = nullptr;};
    inline string vscStatus() const { DARABONBA_PTR_GET_DEFAULT(vscStatus_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& setVscStatus(string vscStatus) { DARABONBA_PTR_SET_VALUE(vscStatus_, vscStatus) };


    // vscType Field Functions 
    bool hasVscType() const { return this->vscType_ != nullptr;};
    void deleteVscType() { this->vscType_ = nullptr;};
    inline string vscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
    inline DescribeVscMountPointsResponseBodyMountPointsInstancesVscs& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


  protected:
    std::shared_ptr<string> vscId_ = nullptr;
    std::shared_ptr<string> vscName_ = nullptr;
    std::shared_ptr<string> vscStatus_ = nullptr;
    std::shared_ptr<string> vscType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
