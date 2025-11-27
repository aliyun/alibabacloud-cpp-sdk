// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODYDATAUSERPRIVILEGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODYDATAUSERPRIVILEGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege() = default ;
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege(const DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege &) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege(DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege &&) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege() = default ;
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& operator=(const DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege &) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& operator=(DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->privilege_ == nullptr && return this->userName_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> privilege_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
