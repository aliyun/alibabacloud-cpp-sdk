// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVMINTOSERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDVMINTOSERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class AddVMIntoServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVMIntoServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVMIntoServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    AddVMIntoServiceMeshRequest() = default ;
    AddVMIntoServiceMeshRequest(const AddVMIntoServiceMeshRequest &) = default ;
    AddVMIntoServiceMeshRequest(AddVMIntoServiceMeshRequest &&) = default ;
    AddVMIntoServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVMIntoServiceMeshRequest() = default ;
    AddVMIntoServiceMeshRequest& operator=(const AddVMIntoServiceMeshRequest &) = default ;
    AddVMIntoServiceMeshRequest& operator=(AddVMIntoServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsId_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // ecsId Field Functions 
    bool hasEcsId() const { return this->ecsId_ != nullptr;};
    void deleteEcsId() { this->ecsId_ = nullptr;};
    inline string ecsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
    inline AddVMIntoServiceMeshRequest& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline AddVMIntoServiceMeshRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the ECS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecsId_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
