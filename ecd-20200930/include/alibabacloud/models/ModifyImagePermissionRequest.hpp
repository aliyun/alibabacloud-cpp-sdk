// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyImagePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImagePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveAccount, removeAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImagePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveAccount, removeAccount_);
    };
    ModifyImagePermissionRequest() = default ;
    ModifyImagePermissionRequest(const ModifyImagePermissionRequest &) = default ;
    ModifyImagePermissionRequest(ModifyImagePermissionRequest &&) = default ;
    ModifyImagePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImagePermissionRequest() = default ;
    ModifyImagePermissionRequest& operator=(const ModifyImagePermissionRequest &) = default ;
    ModifyImagePermissionRequest& operator=(ModifyImagePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccount_ == nullptr
        && return this->imageId_ == nullptr && return this->regionId_ == nullptr && return this->removeAccount_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<int64_t> & addAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<int64_t>) };
    inline vector<int64_t> addAccount() { DARABONBA_PTR_GET(addAccount_, vector<int64_t>) };
    inline ModifyImagePermissionRequest& setAddAccount(const vector<int64_t> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline ModifyImagePermissionRequest& setAddAccount(vector<int64_t> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyImagePermissionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyImagePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeAccount Field Functions 
    bool hasRemoveAccount() const { return this->removeAccount_ != nullptr;};
    void deleteRemoveAccount() { this->removeAccount_ = nullptr;};
    inline const vector<int64_t> & removeAccount() const { DARABONBA_PTR_GET_CONST(removeAccount_, vector<int64_t>) };
    inline vector<int64_t> removeAccount() { DARABONBA_PTR_GET(removeAccount_, vector<int64_t>) };
    inline ModifyImagePermissionRequest& setRemoveAccount(const vector<int64_t> & removeAccount) { DARABONBA_PTR_SET_VALUE(removeAccount_, removeAccount) };
    inline ModifyImagePermissionRequest& setRemoveAccount(vector<int64_t> && removeAccount) { DARABONBA_PTR_SET_RVALUE(removeAccount_, removeAccount) };


  protected:
    // The IDs of Alibaba Cloud accounts to which to share the image that will be created based on the image template. You can specify up to 20 account IDs.
    std::shared_ptr<vector<int64_t>> addAccount_ = nullptr;
    // The IDs of the images.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of Alibaba Cloud account N from which you want to unshare the custom image. Valid values of N: 1 to 10. If the value of N is greater than 10, this parameter is ignored.
    std::shared_ptr<vector<int64_t>> removeAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
