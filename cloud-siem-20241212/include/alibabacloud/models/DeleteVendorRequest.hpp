// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVENDORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVENDORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteVendorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVendorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVendorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    DeleteVendorRequest() = default ;
    DeleteVendorRequest(const DeleteVendorRequest &) = default ;
    DeleteVendorRequest(DeleteVendorRequest &&) = default ;
    DeleteVendorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVendorRequest() = default ;
    DeleteVendorRequest& operator=(const DeleteVendorRequest &) = default ;
    DeleteVendorRequest& operator=(DeleteVendorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->vendorId_ == nullptr && this->vendorName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteVendorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteVendorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteVendorRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline DeleteVendorRequest& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline DeleteVendorRequest& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
    shared_ptr<string> vendorId_ {};
    shared_ptr<string> vendorName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
