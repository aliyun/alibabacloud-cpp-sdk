// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADMININFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADMININFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeAdminInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdminInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDate, accessDate_);
      DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_TO_JSON(Contactor, contactor_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Telephony, telephony_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdminInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDate, accessDate_);
      DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_FROM_JSON(Contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Telephony, telephony_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DescribeAdminInfoResponseBodyData() = default ;
    DescribeAdminInfoResponseBodyData(const DescribeAdminInfoResponseBodyData &) = default ;
    DescribeAdminInfoResponseBodyData(DescribeAdminInfoResponseBodyData &&) = default ;
    DescribeAdminInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdminInfoResponseBodyData() = default ;
    DescribeAdminInfoResponseBodyData& operator=(const DescribeAdminInfoResponseBodyData &) = default ;
    DescribeAdminInfoResponseBodyData& operator=(DescribeAdminInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDate_ == nullptr
        && return this->accessStatus_ == nullptr && return this->authorizedCount_ == nullptr && return this->authorizedDeviceCount_ == nullptr && return this->contactor_ == nullptr && return this->memberId_ == nullptr
        && return this->name_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr && return this->telephony_ == nullptr && return this->uid_ == nullptr; };
    // accessDate Field Functions 
    bool hasAccessDate() const { return this->accessDate_ != nullptr;};
    void deleteAccessDate() { this->accessDate_ = nullptr;};
    inline int64_t accessDate() const { DARABONBA_PTR_GET_DEFAULT(accessDate_, 0L) };
    inline DescribeAdminInfoResponseBodyData& setAccessDate(int64_t accessDate) { DARABONBA_PTR_SET_VALUE(accessDate_, accessDate) };


    // accessStatus Field Functions 
    bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
    void deleteAccessStatus() { this->accessStatus_ = nullptr;};
    inline string accessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
    inline DescribeAdminInfoResponseBodyData& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int64_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0L) };
    inline DescribeAdminInfoResponseBodyData& setAuthorizedCount(int64_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // authorizedDeviceCount Field Functions 
    bool hasAuthorizedDeviceCount() const { return this->authorizedDeviceCount_ != nullptr;};
    void deleteAuthorizedDeviceCount() { this->authorizedDeviceCount_ = nullptr;};
    inline int64_t authorizedDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedDeviceCount_, 0L) };
    inline DescribeAdminInfoResponseBodyData& setAuthorizedDeviceCount(int64_t authorizedDeviceCount) { DARABONBA_PTR_SET_VALUE(authorizedDeviceCount_, authorizedDeviceCount) };


    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string contactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline DescribeAdminInfoResponseBodyData& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline DescribeAdminInfoResponseBodyData& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAdminInfoResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeAdminInfoResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAdminInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // telephony Field Functions 
    bool hasTelephony() const { return this->telephony_ != nullptr;};
    void deleteTelephony() { this->telephony_ = nullptr;};
    inline string telephony() const { DARABONBA_PTR_GET_DEFAULT(telephony_, "") };
    inline DescribeAdminInfoResponseBodyData& setTelephony(string telephony) { DARABONBA_PTR_SET_VALUE(telephony_, telephony) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeAdminInfoResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<int64_t> accessDate_ = nullptr;
    std::shared_ptr<string> accessStatus_ = nullptr;
    std::shared_ptr<int64_t> authorizedCount_ = nullptr;
    std::shared_ptr<int64_t> authorizedDeviceCount_ = nullptr;
    std::shared_ptr<string> contactor_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> telephony_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
