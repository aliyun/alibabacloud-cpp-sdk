// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEREGISTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEREGISTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeletePrivateRegistryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateRegistryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
    };
    DeletePrivateRegistryRequest() = default ;
    DeletePrivateRegistryRequest(const DeletePrivateRegistryRequest &) = default ;
    DeletePrivateRegistryRequest(DeletePrivateRegistryRequest &&) = default ;
    DeletePrivateRegistryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateRegistryRequest() = default ;
    DeletePrivateRegistryRequest& operator=(const DeletePrivateRegistryRequest &) = default ;
    DeletePrivateRegistryRequest& operator=(DeletePrivateRegistryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registryId_ == nullptr; };
    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline DeletePrivateRegistryRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


  protected:
    // The ID of the image repository.
    // 
    // > You can call the [PageImageRegistry](~~PageImageRegistry~~) operation to query the IDs of image repositories.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> registryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
