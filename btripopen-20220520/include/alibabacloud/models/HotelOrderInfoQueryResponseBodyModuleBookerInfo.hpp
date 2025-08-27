// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBOOKERINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBOOKERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleBookerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleBookerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(booker_role, bookerRole_);
      DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(en_name, enName_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(need_apply, needApply_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleBookerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(booker_role, bookerRole_);
      DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(en_name, enName_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(need_apply, needApply_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    HotelOrderInfoQueryResponseBodyModuleBookerInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfo(const HotelOrderInfoQueryResponseBodyModuleBookerInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfo(HotelOrderInfoQueryResponseBodyModuleBookerInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleBookerInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleBookerInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfo& operator=(HotelOrderInfoQueryResponseBodyModuleBookerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookerRole_ != nullptr
        && this->contactEmail_ != nullptr && this->contactPhone_ != nullptr && this->corpId_ != nullptr && this->department_ != nullptr && this->enName_ != nullptr
        && this->jobNo_ != nullptr && this->needApply_ != nullptr && this->realName_ != nullptr && this->userId_ != nullptr; };
    // bookerRole Field Functions 
    bool hasBookerRole() const { return this->bookerRole_ != nullptr;};
    void deleteBookerRole() { this->bookerRole_ = nullptr;};
    inline string bookerRole() const { DARABONBA_PTR_GET_DEFAULT(bookerRole_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setBookerRole(string bookerRole) { DARABONBA_PTR_SET_VALUE(bookerRole_, bookerRole) };


    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string contactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment & department() const { DARABONBA_PTR_GET_CONST(department_, Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment department() { DARABONBA_PTR_GET(department_, Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment) };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setDepartment(const Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setDepartment(Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // needApply Field Functions 
    bool hasNeedApply() const { return this->needApply_ != nullptr;};
    void deleteNeedApply() { this->needApply_ = nullptr;};
    inline bool needApply() const { DARABONBA_PTR_GET_DEFAULT(needApply_, false) };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setNeedApply(bool needApply) { DARABONBA_PTR_SET_VALUE(needApply_, needApply) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> bookerRole_ = nullptr;
    std::shared_ptr<string> contactEmail_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment> department_ = nullptr;
    std::shared_ptr<string> enName_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<bool> needApply_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
