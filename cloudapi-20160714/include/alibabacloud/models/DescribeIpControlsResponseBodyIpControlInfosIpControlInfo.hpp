// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODYIPCONTROLINFOSIPCONTROLINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODYIPCONTROLINFOSIPCONTROLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlsResponseBodyIpControlInfosIpControlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_TO_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_FROM_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo() = default ;
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo(const DescribeIpControlsResponseBodyIpControlInfosIpControlInfo &) = default ;
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo(DescribeIpControlsResponseBodyIpControlInfosIpControlInfo &&) = default ;
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlsResponseBodyIpControlInfosIpControlInfo() = default ;
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& operator=(const DescribeIpControlsResponseBodyIpControlInfosIpControlInfo &) = default ;
    DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& operator=(DescribeIpControlsResponseBodyIpControlInfosIpControlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->ipControlId_ == nullptr && return this->ipControlName_ == nullptr && return this->ipControlType_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->regionId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string ipControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


    // ipControlType Field Functions 
    bool hasIpControlType() const { return this->ipControlType_ != nullptr;};
    void deleteIpControlType() { this->ipControlType_ = nullptr;};
    inline string ipControlType() const { DARABONBA_PTR_GET_DEFAULT(ipControlType_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setIpControlType(string ipControlType) { DARABONBA_PTR_SET_VALUE(ipControlType_, ipControlType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpControlsResponseBodyIpControlInfosIpControlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The time when the ACL was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the ACL.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ACL.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The name of the ACL.
    std::shared_ptr<string> ipControlName_ = nullptr;
    // The type of the ACL.
    std::shared_ptr<string> ipControlType_ = nullptr;
    // The time when the ACL was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the region in which the ACL is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
