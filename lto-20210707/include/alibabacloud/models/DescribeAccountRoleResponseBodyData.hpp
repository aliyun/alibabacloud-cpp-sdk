// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTROLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTROLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeAccountRoleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountRoleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedBaaS, authorizedBaaS_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountRoleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedBaaS, authorizedBaaS_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeAccountRoleResponseBodyData() = default ;
    DescribeAccountRoleResponseBodyData(const DescribeAccountRoleResponseBodyData &) = default ;
    DescribeAccountRoleResponseBodyData(DescribeAccountRoleResponseBodyData &&) = default ;
    DescribeAccountRoleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountRoleResponseBodyData() = default ;
    DescribeAccountRoleResponseBodyData& operator=(const DescribeAccountRoleResponseBodyData &) = default ;
    DescribeAccountRoleResponseBodyData& operator=(DescribeAccountRoleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedBaaS_ == nullptr
        && return this->roleType_ == nullptr; };
    // authorizedBaaS Field Functions 
    bool hasAuthorizedBaaS() const { return this->authorizedBaaS_ != nullptr;};
    void deleteAuthorizedBaaS() { this->authorizedBaaS_ = nullptr;};
    inline bool authorizedBaaS() const { DARABONBA_PTR_GET_DEFAULT(authorizedBaaS_, false) };
    inline DescribeAccountRoleResponseBodyData& setAuthorizedBaaS(bool authorizedBaaS) { DARABONBA_PTR_SET_VALUE(authorizedBaaS_, authorizedBaaS) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeAccountRoleResponseBodyData& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    std::shared_ptr<bool> authorizedBaaS_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
