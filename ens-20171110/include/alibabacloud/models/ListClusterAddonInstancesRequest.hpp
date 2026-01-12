// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListClusterAddonInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    ListClusterAddonInstancesRequest() = default ;
    ListClusterAddonInstancesRequest(const ListClusterAddonInstancesRequest &) = default ;
    ListClusterAddonInstancesRequest(ListClusterAddonInstancesRequest &&) = default ;
    ListClusterAddonInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstancesRequest() = default ;
    ListClusterAddonInstancesRequest& operator=(const ListClusterAddonInstancesRequest &) = default ;
    ListClusterAddonInstancesRequest& operator=(ListClusterAddonInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterAddonInstancesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // Cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
