// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEEXTENDEDPRIVILEGESROLEPRIVILEGESVALUE_HPP_
#define ALIBABACLOUD_MODELS_TABLEEXTENDEDPRIVILEGESROLEPRIVILEGESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableExtendedPrivilegesRolePrivilegesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableExtendedPrivilegesRolePrivilegesValue& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GrantOption, grantOption_);
      DARABONBA_PTR_TO_JSON(Grantor, grantor_);
      DARABONBA_PTR_TO_JSON(GrantorType, grantorType_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
    };
    friend void from_json(const Darabonba::Json& j, TableExtendedPrivilegesRolePrivilegesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GrantOption, grantOption_);
      DARABONBA_PTR_FROM_JSON(Grantor, grantor_);
      DARABONBA_PTR_FROM_JSON(GrantorType, grantorType_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
    };
    TableExtendedPrivilegesRolePrivilegesValue() = default ;
    TableExtendedPrivilegesRolePrivilegesValue(const TableExtendedPrivilegesRolePrivilegesValue &) = default ;
    TableExtendedPrivilegesRolePrivilegesValue(TableExtendedPrivilegesRolePrivilegesValue &&) = default ;
    TableExtendedPrivilegesRolePrivilegesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableExtendedPrivilegesRolePrivilegesValue() = default ;
    TableExtendedPrivilegesRolePrivilegesValue& operator=(const TableExtendedPrivilegesRolePrivilegesValue &) = default ;
    TableExtendedPrivilegesRolePrivilegesValue& operator=(TableExtendedPrivilegesRolePrivilegesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->grantOption_ == nullptr && return this->grantor_ == nullptr && return this->grantorType_ == nullptr && return this->privilege_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline TableExtendedPrivilegesRolePrivilegesValue& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // grantOption Field Functions 
    bool hasGrantOption() const { return this->grantOption_ != nullptr;};
    void deleteGrantOption() { this->grantOption_ = nullptr;};
    inline bool grantOption() const { DARABONBA_PTR_GET_DEFAULT(grantOption_, false) };
    inline TableExtendedPrivilegesRolePrivilegesValue& setGrantOption(bool grantOption) { DARABONBA_PTR_SET_VALUE(grantOption_, grantOption) };


    // grantor Field Functions 
    bool hasGrantor() const { return this->grantor_ != nullptr;};
    void deleteGrantor() { this->grantor_ = nullptr;};
    inline string grantor() const { DARABONBA_PTR_GET_DEFAULT(grantor_, "") };
    inline TableExtendedPrivilegesRolePrivilegesValue& setGrantor(string grantor) { DARABONBA_PTR_SET_VALUE(grantor_, grantor) };


    // grantorType Field Functions 
    bool hasGrantorType() const { return this->grantorType_ != nullptr;};
    void deleteGrantorType() { this->grantorType_ = nullptr;};
    inline string grantorType() const { DARABONBA_PTR_GET_DEFAULT(grantorType_, "") };
    inline TableExtendedPrivilegesRolePrivilegesValue& setGrantorType(string grantorType) { DARABONBA_PTR_SET_VALUE(grantorType_, grantorType) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline TableExtendedPrivilegesRolePrivilegesValue& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


  protected:
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<bool> grantOption_ = nullptr;
    std::shared_ptr<string> grantor_ = nullptr;
    std::shared_ptr<string> grantorType_ = nullptr;
    std::shared_ptr<string> privilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
