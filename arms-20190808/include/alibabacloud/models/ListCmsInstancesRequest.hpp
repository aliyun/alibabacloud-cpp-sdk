// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCMSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCMSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListCmsInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCmsInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TypeFilter, typeFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListCmsInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TypeFilter, typeFilter_);
    };
    ListCmsInstancesRequest() = default ;
    ListCmsInstancesRequest(const ListCmsInstancesRequest &) = default ;
    ListCmsInstancesRequest(ListCmsInstancesRequest &&) = default ;
    ListCmsInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCmsInstancesRequest() = default ;
    ListCmsInstancesRequest& operator=(const ListCmsInstancesRequest &) = default ;
    ListCmsInstancesRequest& operator=(ListCmsInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->typeFilter_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCmsInstancesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCmsInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // typeFilter Field Functions 
    bool hasTypeFilter() const { return this->typeFilter_ != nullptr;};
    void deleteTypeFilter() { this->typeFilter_ = nullptr;};
    inline string typeFilter() const { DARABONBA_PTR_GET_DEFAULT(typeFilter_, "") };
    inline ListCmsInstancesRequest& setTypeFilter(string typeFilter) { DARABONBA_PTR_SET_VALUE(typeFilter_, typeFilter) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the cloud service integration. Valid values:
    // 
    // *   direct: self-monitoring
    // *   cms: Hybrid Cloud Monitoring
    std::shared_ptr<string> typeFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
