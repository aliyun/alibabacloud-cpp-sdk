// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCSINGLEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCSINGLEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class SyncSingleUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncSingleUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(third_depart_id_list, thirdDepartIdList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SyncSingleUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(third_depart_id_list, thirdDepartIdList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    SyncSingleUserRequest() = default ;
    SyncSingleUserRequest(const SyncSingleUserRequest &) = default ;
    SyncSingleUserRequest(SyncSingleUserRequest &&) = default ;
    SyncSingleUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncSingleUserRequest() = default ;
    SyncSingleUserRequest& operator=(const SyncSingleUserRequest &) = default ;
    SyncSingleUserRequest& operator=(SyncSingleUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->jobNo_ != nullptr && this->leaveStatus_ != nullptr && this->managerUserId_ != nullptr && this->phone_ != nullptr && this->position_ != nullptr
        && this->positionLevel_ != nullptr && this->realNameEn_ != nullptr && this->thirdDepartIdList_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SyncSingleUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline SyncSingleUserRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // leaveStatus Field Functions 
    bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
    void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
    inline int32_t leaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
    inline SyncSingleUserRequest& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string managerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline SyncSingleUserRequest& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline SyncSingleUserRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline SyncSingleUserRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline SyncSingleUserRequest& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline SyncSingleUserRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // thirdDepartIdList Field Functions 
    bool hasThirdDepartIdList() const { return this->thirdDepartIdList_ != nullptr;};
    void deleteThirdDepartIdList() { this->thirdDepartIdList_ = nullptr;};
    inline const vector<string> & thirdDepartIdList() const { DARABONBA_PTR_GET_CONST(thirdDepartIdList_, vector<string>) };
    inline vector<string> thirdDepartIdList() { DARABONBA_PTR_GET(thirdDepartIdList_, vector<string>) };
    inline SyncSingleUserRequest& setThirdDepartIdList(const vector<string> & thirdDepartIdList) { DARABONBA_PTR_SET_VALUE(thirdDepartIdList_, thirdDepartIdList) };
    inline SyncSingleUserRequest& setThirdDepartIdList(vector<string> && thirdDepartIdList) { DARABONBA_PTR_SET_RVALUE(thirdDepartIdList_, thirdDepartIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SyncSingleUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline SyncSingleUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<int32_t> leaveStatus_ = nullptr;
    std::shared_ptr<string> managerUserId_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
    std::shared_ptr<vector<string>> thirdDepartIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
