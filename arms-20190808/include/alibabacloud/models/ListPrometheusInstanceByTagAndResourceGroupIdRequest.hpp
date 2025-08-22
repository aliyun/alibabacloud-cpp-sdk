// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusInstanceByTagAndResourceGroupIdRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusInstanceByTagAndResourceGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstanceByTagAndResourceGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstanceByTagAndResourceGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListPrometheusInstanceByTagAndResourceGroupIdRequest() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdRequest(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdRequest(ListPrometheusInstanceByTagAndResourceGroupIdRequest &&) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstanceByTagAndResourceGroupIdRequest() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdRequest& operator=(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdRequest& operator=(ListPrometheusInstanceByTagAndResourceGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag>) };
    inline vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag>) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdRequest& setTag(const vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdRequest& setTag(vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The region ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
