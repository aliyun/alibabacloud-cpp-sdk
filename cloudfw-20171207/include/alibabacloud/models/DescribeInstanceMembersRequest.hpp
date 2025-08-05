// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_TO_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_FROM_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeInstanceMembersRequest() = default ;
    DescribeInstanceMembersRequest(const DescribeInstanceMembersRequest &) = default ;
    DescribeInstanceMembersRequest(DescribeInstanceMembersRequest &&) = default ;
    DescribeInstanceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMembersRequest() = default ;
    DescribeInstanceMembersRequest& operator=(const DescribeInstanceMembersRequest &) = default ;
    DescribeInstanceMembersRequest& operator=(DescribeInstanceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->memberDesc_ != nullptr && this->memberDisplayName_ != nullptr && this->memberUid_ != nullptr && this->pageSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInstanceMembersRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // memberDesc Field Functions 
    bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
    void deleteMemberDesc() { this->memberDesc_ = nullptr;};
    inline string memberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
    inline DescribeInstanceMembersRequest& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


    // memberDisplayName Field Functions 
    bool hasMemberDisplayName() const { return this->memberDisplayName_ != nullptr;};
    void deleteMemberDisplayName() { this->memberDisplayName_ = nullptr;};
    inline string memberDisplayName() const { DARABONBA_PTR_GET_DEFAULT(memberDisplayName_, "") };
    inline DescribeInstanceMembersRequest& setMemberDisplayName(string memberDisplayName) { DARABONBA_PTR_SET_VALUE(memberDisplayName_, memberDisplayName) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeInstanceMembersRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstanceMembersRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The remarks of the member. The remarks must be 1 to 256 characters in length.
    std::shared_ptr<string> memberDesc_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> memberDisplayName_ = nullptr;
    // The UID of the member.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: **20**.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
