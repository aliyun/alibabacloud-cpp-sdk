// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceMembersResponseBody() = default ;
    DescribeInstanceMembersResponseBody(const DescribeInstanceMembersResponseBody &) = default ;
    DescribeInstanceMembersResponseBody(DescribeInstanceMembersResponseBody &&) = default ;
    DescribeInstanceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMembersResponseBody() = default ;
    DescribeInstanceMembersResponseBody& operator=(const DescribeInstanceMembersResponseBody &) = default ;
    DescribeInstanceMembersResponseBody& operator=(DescribeInstanceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of the members.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
        DARABONBA_PTR_TO_JSON(MemberDisplayName, memberDisplayName_);
        DARABONBA_PTR_TO_JSON(MemberStatus, memberStatus_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
        DARABONBA_PTR_FROM_JSON(MemberDisplayName, memberDisplayName_);
        DARABONBA_PTR_FROM_JSON(MemberStatus, memberStatus_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->memberDesc_ == nullptr && this->memberDisplayName_ == nullptr && this->memberStatus_ == nullptr && this->memberUid_ == nullptr && this->modifyTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int32_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
      inline Members& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // memberDesc Field Functions 
      bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
      void deleteMemberDesc() { this->memberDesc_ = nullptr;};
      inline string getMemberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
      inline Members& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


      // memberDisplayName Field Functions 
      bool hasMemberDisplayName() const { return this->memberDisplayName_ != nullptr;};
      void deleteMemberDisplayName() { this->memberDisplayName_ = nullptr;};
      inline string getMemberDisplayName() const { DARABONBA_PTR_GET_DEFAULT(memberDisplayName_, "") };
      inline Members& setMemberDisplayName(string memberDisplayName) { DARABONBA_PTR_SET_VALUE(memberDisplayName_, memberDisplayName) };


      // memberStatus Field Functions 
      bool hasMemberStatus() const { return this->memberStatus_ != nullptr;};
      void deleteMemberStatus() { this->memberStatus_ = nullptr;};
      inline string getMemberStatus() const { DARABONBA_PTR_GET_DEFAULT(memberStatus_, "") };
      inline Members& setMemberStatus(string memberStatus) { DARABONBA_PTR_SET_VALUE(memberStatus_, memberStatus) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline Members& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int32_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0) };
      inline Members& setModifyTime(int32_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    protected:
      // The time when the member was added to Cloud Firewall. The value is a timestamp. Unit: seconds.
      shared_ptr<int32_t> createTime_ {};
      // The remarks of the member.
      shared_ptr<string> memberDesc_ {};
      // The name of the member.
      shared_ptr<string> memberDisplayName_ {};
      // The status of the member. Valid values:
      // 
      // *   **normal**
      // *   **deleting**
      shared_ptr<string> memberStatus_ {};
      // The UID of the member.
      shared_ptr<int64_t> memberUid_ {};
      // The time when the member was last modified. The value is a timestamp. Unit: seconds.
      shared_ptr<int32_t> modifyTime_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DescribeInstanceMembersResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<DescribeInstanceMembersResponseBody::Members>) };
    inline vector<DescribeInstanceMembersResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<DescribeInstanceMembersResponseBody::Members>) };
    inline DescribeInstanceMembersResponseBody& setMembers(const vector<DescribeInstanceMembersResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DescribeInstanceMembersResponseBody& setMembers(vector<DescribeInstanceMembersResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInstanceMembersResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInstanceMembersResponseBody::PageInfo) };
    inline DescribeInstanceMembersResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInstanceMembersResponseBody::PageInfo) };
    inline DescribeInstanceMembersResponseBody& setPageInfo(const DescribeInstanceMembersResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInstanceMembersResponseBody& setPageInfo(DescribeInstanceMembersResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the member.
    shared_ptr<vector<DescribeInstanceMembersResponseBody::Members>> members_ {};
    // The pagination information.
    shared_ptr<DescribeInstanceMembersResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
