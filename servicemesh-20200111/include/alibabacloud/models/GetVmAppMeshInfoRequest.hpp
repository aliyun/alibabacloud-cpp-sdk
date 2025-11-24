// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMAPPMESHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVMAPPMESHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetVmAppMeshInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmAppMeshInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmAppMeshInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    GetVmAppMeshInfoRequest() = default ;
    GetVmAppMeshInfoRequest(const GetVmAppMeshInfoRequest &) = default ;
    GetVmAppMeshInfoRequest(GetVmAppMeshInfoRequest &&) = default ;
    GetVmAppMeshInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmAppMeshInfoRequest() = default ;
    GetVmAppMeshInfoRequest& operator=(const GetVmAppMeshInfoRequest &) = default ;
    GetVmAppMeshInfoRequest& operator=(GetVmAppMeshInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceMeshId_ == nullptr; };
    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetVmAppMeshInfoRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
