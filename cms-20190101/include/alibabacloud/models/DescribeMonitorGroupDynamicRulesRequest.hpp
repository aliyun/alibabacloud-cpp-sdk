// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeMonitorGroupDynamicRulesRequest() = default ;
    DescribeMonitorGroupDynamicRulesRequest(const DescribeMonitorGroupDynamicRulesRequest &) = default ;
    DescribeMonitorGroupDynamicRulesRequest(DescribeMonitorGroupDynamicRulesRequest &&) = default ;
    DescribeMonitorGroupDynamicRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesRequest() = default ;
    DescribeMonitorGroupDynamicRulesRequest& operator=(const DescribeMonitorGroupDynamicRulesRequest &) = default ;
    DescribeMonitorGroupDynamicRulesRequest& operator=(DescribeMonitorGroupDynamicRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeMonitorGroupDynamicRulesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitorGroupDynamicRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
