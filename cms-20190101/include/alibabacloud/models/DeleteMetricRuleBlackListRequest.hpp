// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULEBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMetricRuleBlackListRequest() = default ;
    DeleteMetricRuleBlackListRequest(const DeleteMetricRuleBlackListRequest &) = default ;
    DeleteMetricRuleBlackListRequest(DeleteMetricRuleBlackListRequest &&) = default ;
    DeleteMetricRuleBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleBlackListRequest() = default ;
    DeleteMetricRuleBlackListRequest& operator=(const DeleteMetricRuleBlackListRequest &) = default ;
    DeleteMetricRuleBlackListRequest& operator=(DeleteMetricRuleBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->regionId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteMetricRuleBlackListRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the blacklist policies. Separate multiple IDs with commas (,). You can specify up to 50 IDs.
    // 
    // For more information about how to obtain the ID of a blacklist policy, see [DescribeMetricRuleBlackList](https://help.aliyun.com/document_detail/457257.html).
    // 
    // >  You can also set this parameter to a JSON array. Example: `["a9ad2ac2-3ed9-11ed-b878-0242ac12****","5cb8a9a4-198f-4651-a353-f8b28788****"]`.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
