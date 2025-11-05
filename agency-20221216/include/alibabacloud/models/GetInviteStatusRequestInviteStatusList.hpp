// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVITESTATUSREQUESTINVITESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINVITESTATUSREQUESTINVITESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetInviteStatusRequestInviteStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInviteStatusRequestInviteStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInviteStatusRequestInviteStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
    };
    GetInviteStatusRequestInviteStatusList() = default ;
    GetInviteStatusRequestInviteStatusList(const GetInviteStatusRequestInviteStatusList &) = default ;
    GetInviteStatusRequestInviteStatusList(GetInviteStatusRequestInviteStatusList &&) = default ;
    GetInviteStatusRequestInviteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInviteStatusRequestInviteStatusList() = default ;
    GetInviteStatusRequestInviteStatusList& operator=(const GetInviteStatusRequestInviteStatusList &) = default ;
    GetInviteStatusRequestInviteStatusList& operator=(GetInviteStatusRequestInviteStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inviteId_ == nullptr; };
    // inviteId Field Functions 
    bool hasInviteId() const { return this->inviteId_ != nullptr;};
    void deleteInviteId() { this->inviteId_ = nullptr;};
    inline int64_t inviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
    inline GetInviteStatusRequestInviteStatusList& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


  protected:
    // Invitation ID, From interface InviteSubAccount
    std::shared_ptr<int64_t> inviteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
