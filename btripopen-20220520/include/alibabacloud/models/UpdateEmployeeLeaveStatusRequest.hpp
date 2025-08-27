// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEMPLOYEELEAVESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEMPLOYEELEAVESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateEmployeeLeaveStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEmployeeLeaveStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(is_leave, isLeave_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEmployeeLeaveStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(is_leave, isLeave_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    UpdateEmployeeLeaveStatusRequest() = default ;
    UpdateEmployeeLeaveStatusRequest(const UpdateEmployeeLeaveStatusRequest &) = default ;
    UpdateEmployeeLeaveStatusRequest(UpdateEmployeeLeaveStatusRequest &&) = default ;
    UpdateEmployeeLeaveStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEmployeeLeaveStatusRequest() = default ;
    UpdateEmployeeLeaveStatusRequest& operator=(const UpdateEmployeeLeaveStatusRequest &) = default ;
    UpdateEmployeeLeaveStatusRequest& operator=(UpdateEmployeeLeaveStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isLeave_ != nullptr
        && this->userId_ != nullptr; };
    // isLeave Field Functions 
    bool hasIsLeave() const { return this->isLeave_ != nullptr;};
    void deleteIsLeave() { this->isLeave_ = nullptr;};
    inline bool isLeave() const { DARABONBA_PTR_GET_DEFAULT(isLeave_, false) };
    inline UpdateEmployeeLeaveStatusRequest& setIsLeave(bool isLeave) { DARABONBA_PTR_SET_VALUE(isLeave_, isLeave) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateEmployeeLeaveStatusRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> isLeave_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
