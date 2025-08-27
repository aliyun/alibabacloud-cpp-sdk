// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILRESPONSEBODYMODULE_HPP_
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
  class QueryEmployeeDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmployeeDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(is_leave, isLeave_);
      DARABONBA_PTR_TO_JSON(job_number, jobNumber_);
      DARABONBA_PTR_TO_JSON(nick_name, nickName_);
      DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_TO_JSON(out_dept_id_list, outDeptIdList_);
      DARABONBA_PTR_TO_JSON(out_employee_id, outEmployeeId_);
      DARABONBA_PTR_TO_JSON(phone_no, phoneNo_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmployeeDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(is_leave, isLeave_);
      DARABONBA_PTR_FROM_JSON(job_number, jobNumber_);
      DARABONBA_PTR_FROM_JSON(nick_name, nickName_);
      DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_FROM_JSON(out_dept_id_list, outDeptIdList_);
      DARABONBA_PTR_FROM_JSON(out_employee_id, outEmployeeId_);
      DARABONBA_PTR_FROM_JSON(phone_no, phoneNo_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
    };
    QueryEmployeeDetailResponseBodyModule() = default ;
    QueryEmployeeDetailResponseBodyModule(const QueryEmployeeDetailResponseBodyModule &) = default ;
    QueryEmployeeDetailResponseBodyModule(QueryEmployeeDetailResponseBodyModule &&) = default ;
    QueryEmployeeDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmployeeDetailResponseBodyModule() = default ;
    QueryEmployeeDetailResponseBodyModule& operator=(const QueryEmployeeDetailResponseBodyModule &) = default ;
    QueryEmployeeDetailResponseBodyModule& operator=(QueryEmployeeDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->isLeave_ != nullptr && this->jobNumber_ != nullptr && this->nickName_ != nullptr && this->outDeptId_ != nullptr && this->outDeptIdList_ != nullptr
        && this->outEmployeeId_ != nullptr && this->phoneNo_ != nullptr && this->realName_ != nullptr && this->realNameEn_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // isLeave Field Functions 
    bool hasIsLeave() const { return this->isLeave_ != nullptr;};
    void deleteIsLeave() { this->isLeave_ = nullptr;};
    inline bool isLeave() const { DARABONBA_PTR_GET_DEFAULT(isLeave_, false) };
    inline QueryEmployeeDetailResponseBodyModule& setIsLeave(bool isLeave) { DARABONBA_PTR_SET_VALUE(isLeave_, isLeave) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // outDeptId Field Functions 
    bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
    void deleteOutDeptId() { this->outDeptId_ = nullptr;};
    inline string outDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


    // outDeptIdList Field Functions 
    bool hasOutDeptIdList() const { return this->outDeptIdList_ != nullptr;};
    void deleteOutDeptIdList() { this->outDeptIdList_ = nullptr;};
    inline const vector<string> & outDeptIdList() const { DARABONBA_PTR_GET_CONST(outDeptIdList_, vector<string>) };
    inline vector<string> outDeptIdList() { DARABONBA_PTR_GET(outDeptIdList_, vector<string>) };
    inline QueryEmployeeDetailResponseBodyModule& setOutDeptIdList(const vector<string> & outDeptIdList) { DARABONBA_PTR_SET_VALUE(outDeptIdList_, outDeptIdList) };
    inline QueryEmployeeDetailResponseBodyModule& setOutDeptIdList(vector<string> && outDeptIdList) { DARABONBA_PTR_SET_RVALUE(outDeptIdList_, outDeptIdList) };


    // outEmployeeId Field Functions 
    bool hasOutEmployeeId() const { return this->outEmployeeId_ != nullptr;};
    void deleteOutEmployeeId() { this->outEmployeeId_ = nullptr;};
    inline string outEmployeeId() const { DARABONBA_PTR_GET_DEFAULT(outEmployeeId_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setOutEmployeeId(string outEmployeeId) { DARABONBA_PTR_SET_VALUE(outEmployeeId_, outEmployeeId) };


    // phoneNo Field Functions 
    bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
    void deletePhoneNo() { this->phoneNo_ = nullptr;};
    inline string phoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline QueryEmployeeDetailResponseBodyModule& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> isLeave_ = nullptr;
    std::shared_ptr<string> jobNumber_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> outDeptId_ = nullptr;
    std::shared_ptr<vector<string>> outDeptIdList_ = nullptr;
    std::shared_ptr<string> outEmployeeId_ = nullptr;
    std::shared_ptr<string> phoneNo_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
