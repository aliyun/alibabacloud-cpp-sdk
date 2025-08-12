// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEMETRICRULEBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EnableMetricRuleBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableMetricRuleBlackListRequest() = default ;
    EnableMetricRuleBlackListRequest(const EnableMetricRuleBlackListRequest &) = default ;
    EnableMetricRuleBlackListRequest(EnableMetricRuleBlackListRequest &&) = default ;
    EnableMetricRuleBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableMetricRuleBlackListRequest() = default ;
    EnableMetricRuleBlackListRequest& operator=(const EnableMetricRuleBlackListRequest &) = default ;
    EnableMetricRuleBlackListRequest& operator=(EnableMetricRuleBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->isEnable_ != nullptr && this->regionId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline EnableMetricRuleBlackListRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline bool isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
    inline EnableMetricRuleBlackListRequest& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the blacklist policies. Separate multiple IDs with commas (,). You can specify up to 50 IDs.
    // 
    // For information about how to obtain the ID of a blacklist policy, see [DescribeMetricRuleBlackList](https://help.aliyun.com/document_detail/457257.html).
    // 
    // > You can also set this parameter to a JSON array. Example: `["a9ad2ac2-3ed9-11ed-b878-0242ac12****","5cb8a9a4-198f-4651-a353-f8b28788****"]`.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // Specifies whether to enable the blacklist policy. Valid values:
    // 
    // *   true: The blacklist policy is enabled.
    // *   false (default): The blacklist policy is disabled.
    // 
    // This parameter is required.
    std::shared_ptr<bool> isEnable_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
