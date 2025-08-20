// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnabledPrivilegesResponseBodyDataPrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEnabledPrivilegesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnabledPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnabledPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribeEnabledPrivilegesResponseBodyData() = default ;
    DescribeEnabledPrivilegesResponseBodyData(const DescribeEnabledPrivilegesResponseBodyData &) = default ;
    DescribeEnabledPrivilegesResponseBodyData(DescribeEnabledPrivilegesResponseBodyData &&) = default ;
    DescribeEnabledPrivilegesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnabledPrivilegesResponseBodyData() = default ;
    DescribeEnabledPrivilegesResponseBodyData& operator=(const DescribeEnabledPrivilegesResponseBodyData &) = default ;
    DescribeEnabledPrivilegesResponseBodyData& operator=(DescribeEnabledPrivilegesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->privileges_ != nullptr && this->scope_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnabledPrivilegesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges>) };
    inline vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges> privileges() { DARABONBA_PTR_GET(privileges_, vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges>) };
    inline DescribeEnabledPrivilegesResponseBodyData& setPrivileges(const vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline DescribeEnabledPrivilegesResponseBodyData& setPrivileges(vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeEnabledPrivilegesResponseBodyData& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The description of the permission level.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The queried permissions.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::DescribeEnabledPrivilegesResponseBodyDataPrivileges>> privileges_ = nullptr;
    // The permission level.
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
