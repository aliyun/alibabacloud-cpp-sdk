// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYEXTRAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryExtraRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryExtraRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryExtraRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
    };
    ListImageRegistryExtraRequest() = default ;
    ListImageRegistryExtraRequest(const ListImageRegistryExtraRequest &) = default ;
    ListImageRegistryExtraRequest(ListImageRegistryExtraRequest &&) = default ;
    ListImageRegistryExtraRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryExtraRequest() = default ;
    ListImageRegistryExtraRequest& operator=(const ListImageRegistryExtraRequest &) = default ;
    ListImageRegistryExtraRequest& operator=(ListImageRegistryExtraRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registryId_ == nullptr; };
    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline ListImageRegistryExtraRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


  protected:
    // Image registry ID.
    // > You can obtain this parameter by calling the [PageImageRegistry](~~PageImageRegistry~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> registryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
