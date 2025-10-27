// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
    };
    ListPrivateRegistryListRequest() = default ;
    ListPrivateRegistryListRequest(const ListPrivateRegistryListRequest &) = default ;
    ListPrivateRegistryListRequest(ListPrivateRegistryListRequest &&) = default ;
    ListPrivateRegistryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryListRequest() = default ;
    ListPrivateRegistryListRequest& operator=(const ListPrivateRegistryListRequest &) = default ;
    ListPrivateRegistryListRequest& operator=(ListPrivateRegistryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registryType_ == nullptr; };
    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListPrivateRegistryListRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // The type of the image repository. Valid values:
    // 
    // *   **acr**: Container Registry
    // *   **harbor**: Harbor
    // *   **quay**: Quay
    // *   **CI/CD**: Jenkins
    std::shared_ptr<string> registryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
