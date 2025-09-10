// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCEGDNMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCEGDNMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList(const DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList(DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList &&) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& operator=(const DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& operator=(DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memberName_ != nullptr
        && this->role_ != nullptr && this->status_ != nullptr; };
    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
