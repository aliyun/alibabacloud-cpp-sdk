// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAYPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAYPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListWaypointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaypointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Continue, continue_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaypointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Continue, continue_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ListWaypointsRequest() = default ;
    ListWaypointsRequest(const ListWaypointsRequest &) = default ;
    ListWaypointsRequest(ListWaypointsRequest &&) = default ;
    ListWaypointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaypointsRequest() = default ;
    ListWaypointsRequest& operator=(const ListWaypointsRequest &) = default ;
    ListWaypointsRequest& operator=(ListWaypointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->continue_ == nullptr && return this->limit_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListWaypointsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // continue Field Functions 
    bool hasContinue() const { return this->continue_ != nullptr;};
    void deleteContinue() { this->continue_ = nullptr;};
    inline string _continue() const { DARABONBA_PTR_GET_DEFAULT(continue_, "") };
    inline ListWaypointsRequest& setContinue(string _continue) { DARABONBA_PTR_SET_VALUE(continue_, _continue) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ListWaypointsRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWaypointsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListWaypointsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ListWaypointsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Used in conjunction with Limit, it is used to query waypoints starting from a specified offset. When calling for the first time, no need to care abount it. If the Continue in the returned result is not empty, it means that there is still data that has not been returned, and you need to continue the call with the returned Continue.
    std::shared_ptr<string> continue_ = nullptr;
    // Limit the number of waypoints returned.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // Waypoint which you want to get. If empty, return all waypoints.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The Service Mesh (ASM) instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
