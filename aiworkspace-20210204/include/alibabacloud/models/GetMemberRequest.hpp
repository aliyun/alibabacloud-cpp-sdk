// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMemberRequest() = default ;
    GetMemberRequest(const GetMemberRequest &) = default ;
    GetMemberRequest(GetMemberRequest &&) = default ;
    GetMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemberRequest() = default ;
    GetMemberRequest& operator=(const GetMemberRequest &) = default ;
    GetMemberRequest& operator=(GetMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && this->userId_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline GetMemberRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMemberRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The member ID. You must specify only one of the following parameters: UserId and MemberId.
    shared_ptr<string> memberId_ {};
    // The ID of the Alibaba Cloud account. You can call [ListWorkspaceUsers](https://help.aliyun.com/document_detail/449133.html) to obtain the ID of the Alibaba Cloud account. You must specify only one of the following parameters: UserId and MemberId.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
