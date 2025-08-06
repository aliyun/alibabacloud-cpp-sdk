// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDRIVESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDRIVESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddDriveSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDriveSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(permissionMode, permissionMode_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(spaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(spaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(usedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, AddDriveSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(permissionMode, permissionMode_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(spaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(spaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(usedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    AddDriveSpaceResponseBody() = default ;
    AddDriveSpaceResponseBody(const AddDriveSpaceResponseBody &) = default ;
    AddDriveSpaceResponseBody(AddDriveSpaceResponseBody &&) = default ;
    AddDriveSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDriveSpaceResponseBody() = default ;
    AddDriveSpaceResponseBody& operator=(const AddDriveSpaceResponseBody &) = default ;
    AddDriveSpaceResponseBody& operator=(AddDriveSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifyTime_ != nullptr && this->permissionMode_ != nullptr && this->quota_ != nullptr && this->requestId_ != nullptr && this->spaceId_ != nullptr
        && this->spaceName_ != nullptr && this->spaceType_ != nullptr && this->usedQuota_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AddDriveSpaceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline AddDriveSpaceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // permissionMode Field Functions 
    bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
    void deletePermissionMode() { this->permissionMode_ = nullptr;};
    inline string permissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
    inline AddDriveSpaceResponseBody& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline AddDriveSpaceResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDriveSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline AddDriveSpaceResponseBody& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline AddDriveSpaceResponseBody& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline AddDriveSpaceResponseBody& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int64_t usedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
    inline AddDriveSpaceResponseBody& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline AddDriveSpaceResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline AddDriveSpaceResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> permissionMode_ = nullptr;
    std::shared_ptr<int64_t> quota_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> spaceName_ = nullptr;
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<int64_t> usedQuota_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
