// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    ListMembersRequest() = default ;
    ListMembersRequest(const ListMembersRequest &) = default ;
    ListMembersRequest(ListMembersRequest &&) = default ;
    ListMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersRequest() = default ;
    ListMembersRequest& operator=(const ListMembersRequest &) = default ;
    ListMembersRequest& operator=(ListMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->roles_ == nullptr; };
    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListMembersRequest& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListMembersRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMembersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline string getRoles() const { DARABONBA_PTR_GET_DEFAULT(roles_, "") };
    inline ListMembersRequest& setRoles(string roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };


  protected:
    // The member name. Fuzzy match is supported.
    shared_ptr<string> memberName_ {};
    // The page number of the workspace list. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The roles that are used to filter members. Multiple roles are separated by commas (,). Valid values:
    // 
    // *   PAI.AlgoDeveloper: algorithm developer
    // *   PAI.AlgoOperator: algorithm O\\&M engineer
    // *   PAI.LabelManager: labeling administrator
    // *   PAI.MaxComputeDeveloper: MaxCompute developer
    // *   PAI.WorkspaceAdmin: administrator
    // *   PAI.WorkspaceGuest: guest
    // *   PAI.WorkspaceOwner: owner
    shared_ptr<string> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
