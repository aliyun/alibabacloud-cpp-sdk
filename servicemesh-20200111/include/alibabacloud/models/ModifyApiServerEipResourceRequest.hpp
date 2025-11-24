// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISERVEREIPRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISERVEREIPRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ModifyApiServerEipResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiServerEipResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiServerEipId, apiServerEipId_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiServerEipResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiServerEipId, apiServerEipId_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ModifyApiServerEipResourceRequest() = default ;
    ModifyApiServerEipResourceRequest(const ModifyApiServerEipResourceRequest &) = default ;
    ModifyApiServerEipResourceRequest(ModifyApiServerEipResourceRequest &&) = default ;
    ModifyApiServerEipResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiServerEipResourceRequest() = default ;
    ModifyApiServerEipResourceRequest& operator=(const ModifyApiServerEipResourceRequest &) = default ;
    ModifyApiServerEipResourceRequest& operator=(ModifyApiServerEipResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiServerEipId_ == nullptr
        && return this->operation_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // apiServerEipId Field Functions 
    bool hasApiServerEipId() const { return this->apiServerEipId_ != nullptr;};
    void deleteApiServerEipId() { this->apiServerEipId_ = nullptr;};
    inline string apiServerEipId() const { DARABONBA_PTR_GET_DEFAULT(apiServerEipId_, "") };
    inline ModifyApiServerEipResourceRequest& setApiServerEipId(string apiServerEipId) { DARABONBA_PTR_SET_VALUE(apiServerEipId_, apiServerEipId) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ModifyApiServerEipResourceRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ModifyApiServerEipResourceRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the EIP.
    std::shared_ptr<string> apiServerEipId_ = nullptr;
    // The type of the operation. Valid values:
    // 
    // *   `UnBindEip`: disassociates an EIP from the API server.
    // *   `BindEip`: associates an EIP with the API server.
    std::shared_ptr<string> operation_ = nullptr;
    // The ID of the Alibaba Cloud Service Mesh (ASM) instance.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
