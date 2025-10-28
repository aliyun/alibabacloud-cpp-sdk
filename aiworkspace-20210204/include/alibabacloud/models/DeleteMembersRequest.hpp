// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
    };
    DeleteMembersRequest() = default ;
    DeleteMembersRequest(const DeleteMembersRequest &) = default ;
    DeleteMembersRequest(DeleteMembersRequest &&) = default ;
    DeleteMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMembersRequest() = default ;
    DeleteMembersRequest& operator=(const DeleteMembersRequest &) = default ;
    DeleteMembersRequest& operator=(DeleteMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberIds_ == nullptr; };
    // memberIds Field Functions 
    bool hasMemberIds() const { return this->memberIds_ != nullptr;};
    void deleteMemberIds() { this->memberIds_ = nullptr;};
    inline string memberIds() const { DARABONBA_PTR_GET_DEFAULT(memberIds_, "") };
    inline DeleteMembersRequest& setMemberIds(string memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };


  protected:
    // The list of member IDs. Separate multiple member IDs with commas (,). You can call [ListMembers](https://help.aliyun.com/document_detail/449135.html) to obtain the member ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> memberIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
