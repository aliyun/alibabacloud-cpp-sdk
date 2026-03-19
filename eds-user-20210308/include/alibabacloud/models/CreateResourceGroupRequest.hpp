// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(EnableAliyunResourceGroup, enableAliyunResourceGroup_);
      DARABONBA_PTR_TO_JSON(IsResourceGroupWithOfficeSite, isResourceGroupWithOfficeSite_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(EnableAliyunResourceGroup, enableAliyunResourceGroup_);
      DARABONBA_PTR_FROM_JSON(IsResourceGroupWithOfficeSite, isResourceGroupWithOfficeSite_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest(CreateResourceGroupRequest &&) = default ;
    CreateResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest& operator=(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest& operator=(CreateResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->enableAliyunResourceGroup_ == nullptr && this->isResourceGroupWithOfficeSite_ == nullptr && this->platform_ == nullptr && this->resourceGroupName_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateResourceGroupRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // enableAliyunResourceGroup Field Functions 
    bool hasEnableAliyunResourceGroup() const { return this->enableAliyunResourceGroup_ != nullptr;};
    void deleteEnableAliyunResourceGroup() { this->enableAliyunResourceGroup_ = nullptr;};
    inline bool getEnableAliyunResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(enableAliyunResourceGroup_, false) };
    inline CreateResourceGroupRequest& setEnableAliyunResourceGroup(bool enableAliyunResourceGroup) { DARABONBA_PTR_SET_VALUE(enableAliyunResourceGroup_, enableAliyunResourceGroup) };


    // isResourceGroupWithOfficeSite Field Functions 
    bool hasIsResourceGroupWithOfficeSite() const { return this->isResourceGroupWithOfficeSite_ != nullptr;};
    void deleteIsResourceGroupWithOfficeSite() { this->isResourceGroupWithOfficeSite_ = nullptr;};
    inline int64_t getIsResourceGroupWithOfficeSite() const { DARABONBA_PTR_GET_DEFAULT(isResourceGroupWithOfficeSite_, 0L) };
    inline CreateResourceGroupRequest& setIsResourceGroupWithOfficeSite(int64_t isResourceGroupWithOfficeSite) { DARABONBA_PTR_SET_VALUE(isResourceGroupWithOfficeSite_, isResourceGroupWithOfficeSite) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateResourceGroupRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline CreateResourceGroupRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    shared_ptr<string> businessChannel_ {};
    shared_ptr<bool> enableAliyunResourceGroup_ {};
    // >  This parameter is not publicly available.
    shared_ptr<int64_t> isResourceGroupWithOfficeSite_ {};
    // >  Set the value to AliyunConsole.
    // 
    // *   This parameter is not publicly available in other platforms.
    shared_ptr<string> platform_ {};
    // The name of the resource group.
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
