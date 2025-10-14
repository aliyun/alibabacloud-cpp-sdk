// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDYNAMICTAGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDYNAMICTAGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteDynamicTagGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDynamicTagGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDynamicTagGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDynamicTagGroupRequest() = default ;
    DeleteDynamicTagGroupRequest(const DeleteDynamicTagGroupRequest &) = default ;
    DeleteDynamicTagGroupRequest(DeleteDynamicTagGroupRequest &&) = default ;
    DeleteDynamicTagGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDynamicTagGroupRequest() = default ;
    DeleteDynamicTagGroupRequest& operator=(const DeleteDynamicTagGroupRequest &) = default ;
    DeleteDynamicTagGroupRequest& operator=(DeleteDynamicTagGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicTagRuleId_ == nullptr
        && return this->regionId_ == nullptr; };
    // dynamicTagRuleId Field Functions 
    bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
    void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
    inline string dynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
    inline DeleteDynamicTagGroupRequest& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDynamicTagGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the tag rule.
    // 
    // For information about how to obtain the ID of a tag rule, see [DescribeDynamicTagRuleList](https://help.aliyun.com/document_detail/150126.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> dynamicTagRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
