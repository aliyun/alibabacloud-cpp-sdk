// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DeleteServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DeleteServiceMeshRequest() = default ;
    DeleteServiceMeshRequest(const DeleteServiceMeshRequest &) = default ;
    DeleteServiceMeshRequest(DeleteServiceMeshRequest &&) = default ;
    DeleteServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceMeshRequest() = default ;
    DeleteServiceMeshRequest& operator=(const DeleteServiceMeshRequest &) = default ;
    DeleteServiceMeshRequest& operator=(DeleteServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && return this->retainResources_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteServiceMeshRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // retainResources Field Functions 
    bool hasRetainResources() const { return this->retainResources_ != nullptr;};
    void deleteRetainResources() { this->retainResources_ = nullptr;};
    inline string retainResources() const { DARABONBA_PTR_GET_DEFAULT(retainResources_, "") };
    inline DeleteServiceMeshRequest& setRetainResources(string retainResources) { DARABONBA_PTR_SET_VALUE(retainResources_, retainResources) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DeleteServiceMeshRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // Specifies whether to forcibly delete the ASM instance. Valid values:
    // 
    // *   `true`: forcibly deletes the ASM instance.
    // *   `false`: does not forcibly delete the ASM instance.
    // 
    // Default value: false.
    std::shared_ptr<bool> force_ = nullptr;
    // A JSON string that can be parsed into a string array. You can use this JSON string to specify the IDs of the resource instances that need to be retained when the ASM instance is deleted.
    std::shared_ptr<string> retainResources_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
