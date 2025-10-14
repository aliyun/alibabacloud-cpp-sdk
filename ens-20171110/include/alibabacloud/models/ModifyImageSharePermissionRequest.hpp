// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGESHAREPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGESHAREPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyImageSharePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccounts, addAccounts_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RemoveAccounts, removeAccounts_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccounts, addAccounts_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RemoveAccounts, removeAccounts_);
    };
    ModifyImageSharePermissionRequest() = default ;
    ModifyImageSharePermissionRequest(const ModifyImageSharePermissionRequest &) = default ;
    ModifyImageSharePermissionRequest(ModifyImageSharePermissionRequest &&) = default ;
    ModifyImageSharePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageSharePermissionRequest() = default ;
    ModifyImageSharePermissionRequest& operator=(const ModifyImageSharePermissionRequest &) = default ;
    ModifyImageSharePermissionRequest& operator=(ModifyImageSharePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccounts_ == nullptr
        && return this->imageId_ == nullptr && return this->removeAccounts_ == nullptr; };
    // addAccounts Field Functions 
    bool hasAddAccounts() const { return this->addAccounts_ != nullptr;};
    void deleteAddAccounts() { this->addAccounts_ = nullptr;};
    inline string addAccounts() const { DARABONBA_PTR_GET_DEFAULT(addAccounts_, "") };
    inline ModifyImageSharePermissionRequest& setAddAccounts(string addAccounts) { DARABONBA_PTR_SET_VALUE(addAccounts_, addAccounts) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyImageSharePermissionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // removeAccounts Field Functions 
    bool hasRemoveAccounts() const { return this->removeAccounts_ != nullptr;};
    void deleteRemoveAccounts() { this->removeAccounts_ = nullptr;};
    inline string removeAccounts() const { DARABONBA_PTR_GET_DEFAULT(removeAccounts_, "") };
    inline ModifyImageSharePermissionRequest& setRemoveAccounts(string removeAccounts) { DARABONBA_PTR_SET_VALUE(removeAccounts_, removeAccounts) };


  protected:
    // The ID of the Alibaba Cloud account with which you want to share the image. You can specify multiple Alibaba Cloud IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> addAccounts_ = nullptr;
    // The ID of the image. You can specify only one image ID. Custom images and public images are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the Alibaba Cloud account from which you want to unshare the image. You can specify only one Alibaba Cloud account ID.
    std::shared_ptr<string> removeAccounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
