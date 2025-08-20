// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountPrivilegesResponseBodyDataPrivilegeObject.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountPrivilegesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
    };
    DescribeAccountPrivilegesResponseBodyData() = default ;
    DescribeAccountPrivilegesResponseBodyData(const DescribeAccountPrivilegesResponseBodyData &) = default ;
    DescribeAccountPrivilegesResponseBodyData(DescribeAccountPrivilegesResponseBodyData &&) = default ;
    DescribeAccountPrivilegesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountPrivilegesResponseBodyData() = default ;
    DescribeAccountPrivilegesResponseBodyData& operator=(const DescribeAccountPrivilegesResponseBodyData &) = default ;
    DescribeAccountPrivilegesResponseBodyData& operator=(DescribeAccountPrivilegesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privilegeObject_ != nullptr
        && this->privilegeType_ != nullptr && this->privileges_ != nullptr; };
    // privilegeObject Field Functions 
    bool hasPrivilegeObject() const { return this->privilegeObject_ != nullptr;};
    void deletePrivilegeObject() { this->privilegeObject_ = nullptr;};
    inline const Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject & privilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject) };
    inline Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject privilegeObject() { DARABONBA_PTR_GET(privilegeObject_, Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject) };
    inline DescribeAccountPrivilegesResponseBodyData& setPrivilegeObject(const Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
    inline DescribeAccountPrivilegesResponseBodyData& setPrivilegeObject(Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline DescribeAccountPrivilegesResponseBodyData& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<string> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
    inline vector<string> privileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
    inline DescribeAccountPrivilegesResponseBodyData& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline DescribeAccountPrivilegesResponseBodyData& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


  protected:
    // The objects on which the permission takes effect, including databases, tables, columns, and additional descriptions.
    std::shared_ptr<Models::DescribeAccountPrivilegesResponseBodyDataPrivilegeObject> privilegeObject_ = nullptr;
    // The permission level of the permission. Valid values: `Global`, `Database`, `Table`, and `Column`. You can call the `DescribeEnabledPrivileges` parameter to query the permission level of a specific permission.
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The name of the permission. You can call the `DescribeEnabledPrivileges` operation to query the name of the permission.
    std::shared_ptr<vector<string>> privileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
