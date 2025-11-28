// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATMEMBERDEVICEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATMEMBERDEVICEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeStatMemberDeviceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatMemberDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(BizChainCount, bizChainCount_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatMemberDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(BizChainCount, bizChainCount_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
    };
    DescribeStatMemberDeviceInfoResponseBodyData() = default ;
    DescribeStatMemberDeviceInfoResponseBodyData(const DescribeStatMemberDeviceInfoResponseBodyData &) = default ;
    DescribeStatMemberDeviceInfoResponseBodyData(DescribeStatMemberDeviceInfoResponseBodyData &&) = default ;
    DescribeStatMemberDeviceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatMemberDeviceInfoResponseBodyData() = default ;
    DescribeStatMemberDeviceInfoResponseBodyData& operator=(const DescribeStatMemberDeviceInfoResponseBodyData &) = default ;
    DescribeStatMemberDeviceInfoResponseBodyData& operator=(DescribeStatMemberDeviceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->bizChainCount_ == nullptr && return this->memberId_ == nullptr && return this->memberName_ == nullptr && return this->usedCount_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline string authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, "") };
    inline DescribeStatMemberDeviceInfoResponseBodyData& setAuthorizedCount(string authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // bizChainCount Field Functions 
    bool hasBizChainCount() const { return this->bizChainCount_ != nullptr;};
    void deleteBizChainCount() { this->bizChainCount_ = nullptr;};
    inline string bizChainCount() const { DARABONBA_PTR_GET_DEFAULT(bizChainCount_, "") };
    inline DescribeStatMemberDeviceInfoResponseBodyData& setBizChainCount(string bizChainCount) { DARABONBA_PTR_SET_VALUE(bizChainCount_, bizChainCount) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline DescribeStatMemberDeviceInfoResponseBodyData& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline DescribeStatMemberDeviceInfoResponseBodyData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline string usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, "") };
    inline DescribeStatMemberDeviceInfoResponseBodyData& setUsedCount(string usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    std::shared_ptr<string> authorizedCount_ = nullptr;
    std::shared_ptr<string> bizChainCount_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
