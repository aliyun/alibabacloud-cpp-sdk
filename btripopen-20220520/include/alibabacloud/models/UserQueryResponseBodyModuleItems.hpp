// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UserQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(employee_nick, employeeNick_);
      DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_TO_JSON(third_part_employee_id, thirdPartEmployeeId_);
      DARABONBA_PTR_TO_JSON(third_part_job_no, thirdPartJobNo_);
    };
    friend void from_json(const Darabonba::Json& j, UserQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(employee_nick, employeeNick_);
      DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_FROM_JSON(third_part_employee_id, thirdPartEmployeeId_);
      DARABONBA_PTR_FROM_JSON(third_part_job_no, thirdPartJobNo_);
    };
    UserQueryResponseBodyModuleItems() = default ;
    UserQueryResponseBodyModuleItems(const UserQueryResponseBodyModuleItems &) = default ;
    UserQueryResponseBodyModuleItems(UserQueryResponseBodyModuleItems &&) = default ;
    UserQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserQueryResponseBodyModuleItems() = default ;
    UserQueryResponseBodyModuleItems& operator=(const UserQueryResponseBodyModuleItems &) = default ;
    UserQueryResponseBodyModuleItems& operator=(UserQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->employeeNick_ != nullptr
        && this->leaveStatus_ != nullptr && this->thirdPartEmployeeId_ != nullptr && this->thirdPartJobNo_ != nullptr; };
    // employeeNick Field Functions 
    bool hasEmployeeNick() const { return this->employeeNick_ != nullptr;};
    void deleteEmployeeNick() { this->employeeNick_ = nullptr;};
    inline string employeeNick() const { DARABONBA_PTR_GET_DEFAULT(employeeNick_, "") };
    inline UserQueryResponseBodyModuleItems& setEmployeeNick(string employeeNick) { DARABONBA_PTR_SET_VALUE(employeeNick_, employeeNick) };


    // leaveStatus Field Functions 
    bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
    void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
    inline int32_t leaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
    inline UserQueryResponseBodyModuleItems& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


    // thirdPartEmployeeId Field Functions 
    bool hasThirdPartEmployeeId() const { return this->thirdPartEmployeeId_ != nullptr;};
    void deleteThirdPartEmployeeId() { this->thirdPartEmployeeId_ = nullptr;};
    inline string thirdPartEmployeeId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartEmployeeId_, "") };
    inline UserQueryResponseBodyModuleItems& setThirdPartEmployeeId(string thirdPartEmployeeId) { DARABONBA_PTR_SET_VALUE(thirdPartEmployeeId_, thirdPartEmployeeId) };


    // thirdPartJobNo Field Functions 
    bool hasThirdPartJobNo() const { return this->thirdPartJobNo_ != nullptr;};
    void deleteThirdPartJobNo() { this->thirdPartJobNo_ = nullptr;};
    inline string thirdPartJobNo() const { DARABONBA_PTR_GET_DEFAULT(thirdPartJobNo_, "") };
    inline UserQueryResponseBodyModuleItems& setThirdPartJobNo(string thirdPartJobNo) { DARABONBA_PTR_SET_VALUE(thirdPartJobNo_, thirdPartJobNo) };


  protected:
    std::shared_ptr<string> employeeNick_ = nullptr;
    std::shared_ptr<int32_t> leaveStatus_ = nullptr;
    std::shared_ptr<string> thirdPartEmployeeId_ = nullptr;
    std::shared_ptr<string> thirdPartJobNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
