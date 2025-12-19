// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPAISTAFF_HPP_
#define ALIBABACLOUD_MODELS_APPAISTAFF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppAiStaff : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppAiStaff& obj) { 
      DARABONBA_PTR_TO_JSON(StaffId, staffId_);
      DARABONBA_PTR_TO_JSON(StaffName, staffName_);
      DARABONBA_PTR_TO_JSON(StaffType, staffType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AppAiStaff& obj) { 
      DARABONBA_PTR_FROM_JSON(StaffId, staffId_);
      DARABONBA_PTR_FROM_JSON(StaffName, staffName_);
      DARABONBA_PTR_FROM_JSON(StaffType, staffType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AppAiStaff() = default ;
    AppAiStaff(const AppAiStaff &) = default ;
    AppAiStaff(AppAiStaff &&) = default ;
    AppAiStaff(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppAiStaff() = default ;
    AppAiStaff& operator=(const AppAiStaff &) = default ;
    AppAiStaff& operator=(AppAiStaff &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->staffId_ == nullptr
        && return this->staffName_ == nullptr && return this->staffType_ == nullptr && return this->status_ == nullptr; };
    // staffId Field Functions 
    bool hasStaffId() const { return this->staffId_ != nullptr;};
    void deleteStaffId() { this->staffId_ = nullptr;};
    inline string staffId() const { DARABONBA_PTR_GET_DEFAULT(staffId_, "") };
    inline AppAiStaff& setStaffId(string staffId) { DARABONBA_PTR_SET_VALUE(staffId_, staffId) };


    // staffName Field Functions 
    bool hasStaffName() const { return this->staffName_ != nullptr;};
    void deleteStaffName() { this->staffName_ = nullptr;};
    inline string staffName() const { DARABONBA_PTR_GET_DEFAULT(staffName_, "") };
    inline AppAiStaff& setStaffName(string staffName) { DARABONBA_PTR_SET_VALUE(staffName_, staffName) };


    // staffType Field Functions 
    bool hasStaffType() const { return this->staffType_ != nullptr;};
    void deleteStaffType() { this->staffType_ = nullptr;};
    inline string staffType() const { DARABONBA_PTR_GET_DEFAULT(staffType_, "") };
    inline AppAiStaff& setStaffType(string staffType) { DARABONBA_PTR_SET_VALUE(staffType_, staffType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppAiStaff& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> staffId_ = nullptr;
    std::shared_ptr<string> staffName_ = nullptr;
    std::shared_ptr<string> staffType_ = nullptr;
    // 可能的值：unknown, init, testing, online
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
