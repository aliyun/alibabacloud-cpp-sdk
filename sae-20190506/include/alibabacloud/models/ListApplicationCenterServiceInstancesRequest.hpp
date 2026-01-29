// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCENTERSERVICEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCENTERSERVICEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationCenterServiceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationCenterServiceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationCenterServiceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListApplicationCenterServiceInstancesRequest() = default ;
    ListApplicationCenterServiceInstancesRequest(const ListApplicationCenterServiceInstancesRequest &) = default ;
    ListApplicationCenterServiceInstancesRequest(ListApplicationCenterServiceInstancesRequest &&) = default ;
    ListApplicationCenterServiceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationCenterServiceInstancesRequest() = default ;
    ListApplicationCenterServiceInstancesRequest& operator=(const ListApplicationCenterServiceInstancesRequest &) = default ;
    ListApplicationCenterServiceInstancesRequest& operator=(ListApplicationCenterServiceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->regionId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationCenterServiceInstancesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationCenterServiceInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> namespaceId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
