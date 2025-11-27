// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountMaskingPrivilegeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountMaskingPrivilegeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(UserPrivilege, userPrivilege_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountMaskingPrivilegeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPrivilege, userPrivilege_);
    };
    DescribeAccountMaskingPrivilegeResponseBodyData() = default ;
    DescribeAccountMaskingPrivilegeResponseBodyData(const DescribeAccountMaskingPrivilegeResponseBodyData &) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyData(DescribeAccountMaskingPrivilegeResponseBodyData &&) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountMaskingPrivilegeResponseBodyData() = default ;
    DescribeAccountMaskingPrivilegeResponseBodyData& operator=(const DescribeAccountMaskingPrivilegeResponseBodyData &) = default ;
    DescribeAccountMaskingPrivilegeResponseBodyData& operator=(DescribeAccountMaskingPrivilegeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPrivilege_ == nullptr; };
    // userPrivilege Field Functions 
    bool hasUserPrivilege() const { return this->userPrivilege_ != nullptr;};
    void deleteUserPrivilege() { this->userPrivilege_ = nullptr;};
    inline const vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege> & userPrivilege() const { DARABONBA_PTR_GET_CONST(userPrivilege_, vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege>) };
    inline vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege> userPrivilege() { DARABONBA_PTR_GET(userPrivilege_, vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege>) };
    inline DescribeAccountMaskingPrivilegeResponseBodyData& setUserPrivilege(const vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege> & userPrivilege) { DARABONBA_PTR_SET_VALUE(userPrivilege_, userPrivilege) };
    inline DescribeAccountMaskingPrivilegeResponseBodyData& setUserPrivilege(vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege> && userPrivilege) { DARABONBA_PTR_SET_RVALUE(userPrivilege_, userPrivilege) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountMaskingPrivilegeResponseBodyDataUserPrivilege>> userPrivilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
