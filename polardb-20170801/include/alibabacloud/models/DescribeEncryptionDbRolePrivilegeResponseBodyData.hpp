// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeEncryptionDBRolePrivilegeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEncryptionDBRolePrivilegeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RolePrivilegeList, rolePrivilegeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEncryptionDBRolePrivilegeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RolePrivilegeList, rolePrivilegeList_);
    };
    DescribeEncryptionDBRolePrivilegeResponseBodyData() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyData(const DescribeEncryptionDBRolePrivilegeResponseBodyData &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyData(DescribeEncryptionDBRolePrivilegeResponseBodyData &&) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEncryptionDBRolePrivilegeResponseBodyData() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyData& operator=(const DescribeEncryptionDBRolePrivilegeResponseBodyData &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyData& operator=(DescribeEncryptionDBRolePrivilegeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rolePrivilegeList_ == nullptr; };
    // rolePrivilegeList Field Functions 
    bool hasRolePrivilegeList() const { return this->rolePrivilegeList_ != nullptr;};
    void deleteRolePrivilegeList() { this->rolePrivilegeList_ = nullptr;};
    inline const vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList> & rolePrivilegeList() const { DARABONBA_PTR_GET_CONST(rolePrivilegeList_, vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList>) };
    inline vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList> rolePrivilegeList() { DARABONBA_PTR_GET(rolePrivilegeList_, vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList>) };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyData& setRolePrivilegeList(const vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList> & rolePrivilegeList) { DARABONBA_PTR_SET_VALUE(rolePrivilegeList_, rolePrivilegeList) };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyData& setRolePrivilegeList(vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList> && rolePrivilegeList) { DARABONBA_PTR_SET_RVALUE(rolePrivilegeList_, rolePrivilegeList) };


  protected:
    std::shared_ptr<vector<Models::DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList>> rolePrivilegeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
