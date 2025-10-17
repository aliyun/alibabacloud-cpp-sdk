// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALIYUNACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_ALIYUNACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AliyunAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AliyunAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(EmployeeId, employeeId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, AliyunAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(EmployeeId, employeeId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
    };
    AliyunAccounts() = default ;
    AliyunAccounts(const AliyunAccounts &) = default ;
    AliyunAccounts(AliyunAccounts &&) = default ;
    AliyunAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AliyunAccounts() = default ;
    AliyunAccounts& operator=(const AliyunAccounts &) = default ;
    AliyunAccounts& operator=(AliyunAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && return this->employeeId_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifyTime_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline AliyunAccounts& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // employeeId Field Functions 
    bool hasEmployeeId() const { return this->employeeId_ != nullptr;};
    void deleteEmployeeId() { this->employeeId_ = nullptr;};
    inline string employeeId() const { DARABONBA_PTR_GET_DEFAULT(employeeId_, "") };
    inline AliyunAccounts& setEmployeeId(string employeeId) { DARABONBA_PTR_SET_VALUE(employeeId_, employeeId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline AliyunAccounts& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline AliyunAccounts& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


  protected:
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> employeeId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
