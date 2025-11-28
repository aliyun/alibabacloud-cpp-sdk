// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEGROUPRESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEGROUPRESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListDeviceGroupResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceGroupResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(CurrentUser, currentUser_);
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceGroupResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(CurrentUser, currentUser_);
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeviceGroupResponseBodyDataPageData() = default ;
    ListDeviceGroupResponseBodyDataPageData(const ListDeviceGroupResponseBodyDataPageData &) = default ;
    ListDeviceGroupResponseBodyDataPageData(ListDeviceGroupResponseBodyDataPageData &&) = default ;
    ListDeviceGroupResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceGroupResponseBodyDataPageData() = default ;
    ListDeviceGroupResponseBodyDataPageData& operator=(const ListDeviceGroupResponseBodyDataPageData &) = default ;
    ListDeviceGroupResponseBodyDataPageData& operator=(ListDeviceGroupResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->currentUser_ == nullptr && return this->deviceCount_ == nullptr && return this->deviceGroupId_ == nullptr && return this->memberName_ == nullptr && return this->name_ == nullptr
        && return this->productKey_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int32_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0) };
    inline ListDeviceGroupResponseBodyDataPageData& setAuthorizedCount(int32_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // currentUser Field Functions 
    bool hasCurrentUser() const { return this->currentUser_ != nullptr;};
    void deleteCurrentUser() { this->currentUser_ = nullptr;};
    inline bool currentUser() const { DARABONBA_PTR_GET_DEFAULT(currentUser_, false) };
    inline ListDeviceGroupResponseBodyDataPageData& setCurrentUser(bool currentUser) { DARABONBA_PTR_SET_VALUE(currentUser_, currentUser) };


    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline int64_t deviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0L) };
    inline ListDeviceGroupResponseBodyDataPageData& setDeviceCount(int64_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeviceGroupResponseBodyDataPageData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> authorizedCount_ = nullptr;
    std::shared_ptr<bool> currentUser_ = nullptr;
    std::shared_ptr<int64_t> deviceCount_ = nullptr;
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> productKey_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
