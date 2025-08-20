// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountAllPrivilegesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
    };
    DescribeAccountAllPrivilegesResponseBodyDataResult() = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResult(const DescribeAccountAllPrivilegesResponseBodyDataResult &) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResult(DescribeAccountAllPrivilegesResponseBodyDataResult &&) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesResponseBodyDataResult() = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResult& operator=(const DescribeAccountAllPrivilegesResponseBodyDataResult &) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResult& operator=(DescribeAccountAllPrivilegesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privilegeObject_ != nullptr
        && this->privilegeType_ != nullptr && this->privileges_ != nullptr; };
    // privilegeObject Field Functions 
    bool hasPrivilegeObject() const { return this->privilegeObject_ != nullptr;};
    void deletePrivilegeObject() { this->privilegeObject_ = nullptr;};
    inline const Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject & privilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject) };
    inline Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject privilegeObject() { DARABONBA_PTR_GET(privilegeObject_, Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject) };
    inline DescribeAccountAllPrivilegesResponseBodyDataResult& setPrivilegeObject(const Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
    inline DescribeAccountAllPrivilegesResponseBodyDataResult& setPrivilegeObject(Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyDataResult& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<string> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
    inline vector<string> privileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
    inline DescribeAccountAllPrivilegesResponseBodyDataResult& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline DescribeAccountAllPrivilegesResponseBodyDataResult& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


  protected:
    // The objects on which the permission takes effect, including databases, tables, and columns. If Global is returned for the PrivilegeType parameter, an empty string is returned for this parameter.
    std::shared_ptr<Models::DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject> privilegeObject_ = nullptr;
    // The permission level of the database account. You can call the `DescribeEnabledPrivileges` operation to query the permission level of the database account.
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The name of the permission, which is the same as the permission name returned by the `DescribeEnabledPrivileges` operation.
    std::shared_ptr<vector<string>> privileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
