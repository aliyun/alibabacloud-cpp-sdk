// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERACCESSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERACCESSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListMemberAccessRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemberAccessRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_TO_JSON(Contactor, contactor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemberAccessRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_FROM_JSON(Contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListMemberAccessRecordRequest() = default ;
    ListMemberAccessRecordRequest(const ListMemberAccessRecordRequest &) = default ;
    ListMemberAccessRecordRequest(ListMemberAccessRecordRequest &&) = default ;
    ListMemberAccessRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemberAccessRecordRequest() = default ;
    ListMemberAccessRecordRequest& operator=(const ListMemberAccessRecordRequest &) = default ;
    ListMemberAccessRecordRequest& operator=(ListMemberAccessRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessStatus_ == nullptr
        && return this->contactor_ == nullptr && return this->name_ == nullptr && return this->num_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr
        && return this->uid_ == nullptr; };
    // accessStatus Field Functions 
    bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
    void deleteAccessStatus() { this->accessStatus_ = nullptr;};
    inline string accessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
    inline ListMemberAccessRecordRequest& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string contactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline ListMemberAccessRecordRequest& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMemberAccessRecordRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline ListMemberAccessRecordRequest& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMemberAccessRecordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListMemberAccessRecordRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListMemberAccessRecordRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> accessStatus_ = nullptr;
    std::shared_ptr<string> contactor_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
