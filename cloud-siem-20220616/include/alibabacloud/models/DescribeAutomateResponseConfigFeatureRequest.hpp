// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeAutomateResponseConfigFeatureRequest() = default ;
    DescribeAutomateResponseConfigFeatureRequest(const DescribeAutomateResponseConfigFeatureRequest &) = default ;
    DescribeAutomateResponseConfigFeatureRequest(DescribeAutomateResponseConfigFeatureRequest &&) = default ;
    DescribeAutomateResponseConfigFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureRequest() = default ;
    DescribeAutomateResponseConfigFeatureRequest& operator=(const DescribeAutomateResponseConfigFeatureRequest &) = default ;
    DescribeAutomateResponseConfigFeatureRequest& operator=(DescribeAutomateResponseConfigFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoResponseType_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // autoResponseType Field Functions 
    bool hasAutoResponseType() const { return this->autoResponseType_ != nullptr;};
    void deleteAutoResponseType() { this->autoResponseType_ = nullptr;};
    inline string getAutoResponseType() const { DARABONBA_PTR_GET_DEFAULT(autoResponseType_, "") };
    inline DescribeAutomateResponseConfigFeatureRequest& setAutoResponseType(string autoResponseType) { DARABONBA_PTR_SET_VALUE(autoResponseType_, autoResponseType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutomateResponseConfigFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeAutomateResponseConfigFeatureRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeAutomateResponseConfigFeatureRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The type of the automated response rule. Valid values:
    // 
    // *   event
    // *   alert
    shared_ptr<string> autoResponseType_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
