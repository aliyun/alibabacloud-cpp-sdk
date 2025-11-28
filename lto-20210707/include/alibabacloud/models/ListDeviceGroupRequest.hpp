// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeviceGroupRequest() = default ;
    ListDeviceGroupRequest(const ListDeviceGroupRequest &) = default ;
    ListDeviceGroupRequest(ListDeviceGroupRequest &&) = default ;
    ListDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceGroupRequest() = default ;
    ListDeviceGroupRequest& operator=(const ListDeviceGroupRequest &) = default ;
    ListDeviceGroupRequest& operator=(ListDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberName_ == nullptr
        && return this->name_ == nullptr && return this->num_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr && return this->status_ == nullptr; };
    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListDeviceGroupRequest& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeviceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListDeviceGroupRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDeviceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListDeviceGroupRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeviceGroupRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
