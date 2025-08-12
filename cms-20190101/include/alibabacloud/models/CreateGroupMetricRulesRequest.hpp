// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupMetricRules, groupMetricRules_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupMetricRules, groupMetricRules_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateGroupMetricRulesRequest() = default ;
    CreateGroupMetricRulesRequest(const CreateGroupMetricRulesRequest &) = default ;
    CreateGroupMetricRulesRequest(CreateGroupMetricRulesRequest &&) = default ;
    CreateGroupMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesRequest() = default ;
    CreateGroupMetricRulesRequest& operator=(const CreateGroupMetricRulesRequest &) = default ;
    CreateGroupMetricRulesRequest& operator=(CreateGroupMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupMetricRules_ != nullptr && this->regionId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateGroupMetricRulesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupMetricRules Field Functions 
    bool hasGroupMetricRules() const { return this->groupMetricRules_ != nullptr;};
    void deleteGroupMetricRules() { this->groupMetricRules_ = nullptr;};
    inline const vector<CreateGroupMetricRulesRequestGroupMetricRules> & groupMetricRules() const { DARABONBA_PTR_GET_CONST(groupMetricRules_, vector<CreateGroupMetricRulesRequestGroupMetricRules>) };
    inline vector<CreateGroupMetricRulesRequestGroupMetricRules> groupMetricRules() { DARABONBA_PTR_GET(groupMetricRules_, vector<CreateGroupMetricRulesRequestGroupMetricRules>) };
    inline CreateGroupMetricRulesRequest& setGroupMetricRules(const vector<CreateGroupMetricRulesRequestGroupMetricRules> & groupMetricRules) { DARABONBA_PTR_SET_VALUE(groupMetricRules_, groupMetricRules) };
    inline CreateGroupMetricRulesRequest& setGroupMetricRules(vector<CreateGroupMetricRulesRequestGroupMetricRules> && groupMetricRules) { DARABONBA_PTR_SET_RVALUE(groupMetricRules_, groupMetricRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGroupMetricRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<vector<CreateGroupMetricRulesRequestGroupMetricRules>> groupMetricRules_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
