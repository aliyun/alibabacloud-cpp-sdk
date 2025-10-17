// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyResourcePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourcePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoQuota, autoQuota_);
      DARABONBA_PTR_TO_JSON(ResourcePackageId, resourcePackageId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourcePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoQuota, autoQuota_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageId, resourcePackageId_);
    };
    ModifyResourcePackageRequest() = default ;
    ModifyResourcePackageRequest(const ModifyResourcePackageRequest &) = default ;
    ModifyResourcePackageRequest(ModifyResourcePackageRequest &&) = default ;
    ModifyResourcePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourcePackageRequest() = default ;
    ModifyResourcePackageRequest& operator=(const ModifyResourcePackageRequest &) = default ;
    ModifyResourcePackageRequest& operator=(ModifyResourcePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoQuota_ == nullptr
        && return this->resourcePackageId_ == nullptr; };
    // autoQuota Field Functions 
    bool hasAutoQuota() const { return this->autoQuota_ != nullptr;};
    void deleteAutoQuota() { this->autoQuota_ = nullptr;};
    inline bool autoQuota() const { DARABONBA_PTR_GET_DEFAULT(autoQuota_, false) };
    inline ModifyResourcePackageRequest& setAutoQuota(bool autoQuota) { DARABONBA_PTR_SET_VALUE(autoQuota_, autoQuota) };


    // resourcePackageId Field Functions 
    bool hasResourcePackageId() const { return this->resourcePackageId_ != nullptr;};
    void deleteResourcePackageId() { this->resourcePackageId_ = nullptr;};
    inline string resourcePackageId() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageId_, "") };
    inline ModifyResourcePackageRequest& setResourcePackageId(string resourcePackageId) { DARABONBA_PTR_SET_VALUE(resourcePackageId_, resourcePackageId) };


  protected:
    std::shared_ptr<bool> autoQuota_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourcePackageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
