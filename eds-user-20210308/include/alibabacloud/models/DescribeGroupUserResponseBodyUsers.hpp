// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupUserResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupUserResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtJoinGroup, gmtJoinGroup_);
      DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupUserResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtJoinGroup, gmtJoinGroup_);
      DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeGroupUserResponseBodyUsers() = default ;
    DescribeGroupUserResponseBodyUsers(const DescribeGroupUserResponseBodyUsers &) = default ;
    DescribeGroupUserResponseBodyUsers(DescribeGroupUserResponseBodyUsers &&) = default ;
    DescribeGroupUserResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupUserResponseBodyUsers() = default ;
    DescribeGroupUserResponseBodyUsers& operator=(const DescribeGroupUserResponseBodyUsers &) = default ;
    DescribeGroupUserResponseBodyUsers& operator=(DescribeGroupUserResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->avatar_ != nullptr && this->email_ != nullptr && this->endUserId_ != nullptr && this->gmtCreated_ != nullptr && this->gmtJoinGroup_ != nullptr
        && this->jobNumber_ != nullptr && this->nickName_ != nullptr && this->phone_ != nullptr && this->remark_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeGroupUserResponseBodyUsers& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline DescribeGroupUserResponseBodyUsers& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeGroupUserResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeGroupUserResponseBodyUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeGroupUserResponseBodyUsers& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtJoinGroup Field Functions 
    bool hasGmtJoinGroup() const { return this->gmtJoinGroup_ != nullptr;};
    void deleteGmtJoinGroup() { this->gmtJoinGroup_ = nullptr;};
    inline string gmtJoinGroup() const { DARABONBA_PTR_GET_DEFAULT(gmtJoinGroup_, "") };
    inline DescribeGroupUserResponseBodyUsers& setGmtJoinGroup(string gmtJoinGroup) { DARABONBA_PTR_SET_VALUE(gmtJoinGroup_, gmtJoinGroup) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline DescribeGroupUserResponseBodyUsers& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeGroupUserResponseBodyUsers& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeGroupUserResponseBodyUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeGroupUserResponseBodyUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtJoinGroup_ = nullptr;
    std::shared_ptr<string> jobNumber_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
