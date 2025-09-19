// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHREGISTRYTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHREGISTRYTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RefreshRegistryTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshRegistryTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshRegistryTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
    };
    RefreshRegistryTokenRequest() = default ;
    RefreshRegistryTokenRequest(const RefreshRegistryTokenRequest &) = default ;
    RefreshRegistryTokenRequest(RefreshRegistryTokenRequest &&) = default ;
    RefreshRegistryTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshRegistryTokenRequest() = default ;
    RefreshRegistryTokenRequest& operator=(const RefreshRegistryTokenRequest &) = default ;
    RefreshRegistryTokenRequest& operator=(RefreshRegistryTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->registryId_ != nullptr; };
    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline RefreshRegistryTokenRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


  protected:
    // The ID of the image repository.
    // 
    // >  You can call the [PageImageRegistry](~~PageImageRegistry~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> registryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
