// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_TO_JSON(Contactor, contactor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Telephony, telephony_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, AddMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_FROM_JSON(Contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Telephony, telephony_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    AddMemberRequest() = default ;
    AddMemberRequest(const AddMemberRequest &) = default ;
    AddMemberRequest(AddMemberRequest &&) = default ;
    AddMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMemberRequest() = default ;
    AddMemberRequest& operator=(const AddMemberRequest &) = default ;
    AddMemberRequest& operator=(AddMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->authorizedDeviceCount_ == nullptr && return this->contactor_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr
        && return this->telephony_ == nullptr && return this->uid_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int64_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0L) };
    inline AddMemberRequest& setAuthorizedCount(int64_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // authorizedDeviceCount Field Functions 
    bool hasAuthorizedDeviceCount() const { return this->authorizedDeviceCount_ != nullptr;};
    void deleteAuthorizedDeviceCount() { this->authorizedDeviceCount_ = nullptr;};
    inline int32_t authorizedDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedDeviceCount_, 0) };
    inline AddMemberRequest& setAuthorizedDeviceCount(int32_t authorizedDeviceCount) { DARABONBA_PTR_SET_VALUE(authorizedDeviceCount_, authorizedDeviceCount) };


    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string contactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline AddMemberRequest& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMemberRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddMemberRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // telephony Field Functions 
    bool hasTelephony() const { return this->telephony_ != nullptr;};
    void deleteTelephony() { this->telephony_ = nullptr;};
    inline string telephony() const { DARABONBA_PTR_GET_DEFAULT(telephony_, "") };
    inline AddMemberRequest& setTelephony(string telephony) { DARABONBA_PTR_SET_VALUE(telephony_, telephony) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline AddMemberRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> authorizedCount_ = nullptr;
    std::shared_ptr<int32_t> authorizedDeviceCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> telephony_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
