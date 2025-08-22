// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddPrometheusGlobalViewRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    AddPrometheusGlobalViewRequest() = default ;
    AddPrometheusGlobalViewRequest(const AddPrometheusGlobalViewRequest &) = default ;
    AddPrometheusGlobalViewRequest(AddPrometheusGlobalViewRequest &&) = default ;
    AddPrometheusGlobalViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewRequest() = default ;
    AddPrometheusGlobalViewRequest& operator=(const AddPrometheusGlobalViewRequest &) = default ;
    AddPrometheusGlobalViewRequest& operator=(AddPrometheusGlobalViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->groupName_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline string clusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
    inline AddPrometheusGlobalViewRequest& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddPrometheusGlobalViewRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPrometheusGlobalViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddPrometheusGlobalViewRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddPrometheusGlobalViewRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddPrometheusGlobalViewRequestTag>) };
    inline vector<AddPrometheusGlobalViewRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddPrometheusGlobalViewRequestTag>) };
    inline AddPrometheusGlobalViewRequest& setTag(const vector<AddPrometheusGlobalViewRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddPrometheusGlobalViewRequest& setTag(vector<AddPrometheusGlobalViewRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The queried global aggregation instances. The value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusters_ = nullptr;
    // The name of the aggregation instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<AddPrometheusGlobalViewRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
