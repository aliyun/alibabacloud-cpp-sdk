// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVICEMESHNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVICEMESHNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ModifyServiceMeshNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServiceMeshNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServiceMeshNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ModifyServiceMeshNameRequest() = default ;
    ModifyServiceMeshNameRequest(const ModifyServiceMeshNameRequest &) = default ;
    ModifyServiceMeshNameRequest(ModifyServiceMeshNameRequest &&) = default ;
    ModifyServiceMeshNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServiceMeshNameRequest() = default ;
    ModifyServiceMeshNameRequest& operator=(const ModifyServiceMeshNameRequest &) = default ;
    ModifyServiceMeshNameRequest& operator=(ModifyServiceMeshNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyServiceMeshNameRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ModifyServiceMeshNameRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The new name of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
