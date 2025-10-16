// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSRESPONSEBODYCLOUDDRIVEGROUPSADMINUSERINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSRESPONSEBODYCLOUDDRIVEGROUPSADMINUSERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos() = default ;
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos(const DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos &) = default ;
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos(DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos &&) = default ;
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos() = default ;
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& operator=(const DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos &) = default ;
    DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& operator=(DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->endUserId_ == nullptr && return this->jobNumber_ == nullptr && return this->nickName_ == nullptr && return this->phone_ == nullptr && return this->realNickName_ == nullptr
        && return this->remark_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNickName Field Functions 
    bool hasRealNickName() const { return this->realNickName_ != nullptr;};
    void deleteRealNickName() { this->realNickName_ = nullptr;};
    inline string realNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudDriveGroupsResponseBodyCloudDriveGroupsAdminUserInfos& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> jobNumber_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> realNickName_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
