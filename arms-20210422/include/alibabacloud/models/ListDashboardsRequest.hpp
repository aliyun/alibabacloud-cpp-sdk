// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListDashboardsRequest() = default ;
    ListDashboardsRequest(const ListDashboardsRequest &) = default ;
    ListDashboardsRequest(ListDashboardsRequest &&) = default ;
    ListDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsRequest() = default ;
    ListDashboardsRequest& operator=(const ListDashboardsRequest &) = default ;
    ListDashboardsRequest& operator=(ListDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterType_ == nullptr && this->product_ == nullptr && this->recreateSwitch_ == nullptr && this->regionId_ == nullptr && this->title_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDashboardsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListDashboardsRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListDashboardsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // recreateSwitch Field Functions 
    bool hasRecreateSwitch() const { return this->recreateSwitch_ != nullptr;};
    void deleteRecreateSwitch() { this->recreateSwitch_ = nullptr;};
    inline bool getRecreateSwitch() const { DARABONBA_PTR_GET_DEFAULT(recreateSwitch_, false) };
    inline ListDashboardsRequest& setRecreateSwitch(bool recreateSwitch) { DARABONBA_PTR_SET_VALUE(recreateSwitch_, recreateSwitch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDashboardsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDashboardsRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> clusterType_ {};
    shared_ptr<string> product_ {};
    shared_ptr<bool> recreateSwitch_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
