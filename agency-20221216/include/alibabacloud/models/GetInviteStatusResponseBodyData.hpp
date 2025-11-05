// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInviteStatusResponseBodyDataInviteStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetInviteStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInviteStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InviteStatus, inviteStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInviteStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteStatus, inviteStatus_);
    };
    GetInviteStatusResponseBodyData() = default ;
    GetInviteStatusResponseBodyData(const GetInviteStatusResponseBodyData &) = default ;
    GetInviteStatusResponseBodyData(GetInviteStatusResponseBodyData &&) = default ;
    GetInviteStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInviteStatusResponseBodyData() = default ;
    GetInviteStatusResponseBodyData& operator=(const GetInviteStatusResponseBodyData &) = default ;
    GetInviteStatusResponseBodyData& operator=(GetInviteStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inviteStatus_ == nullptr; };
    // inviteStatus Field Functions 
    bool hasInviteStatus() const { return this->inviteStatus_ != nullptr;};
    void deleteInviteStatus() { this->inviteStatus_ = nullptr;};
    inline const vector<Models::GetInviteStatusResponseBodyDataInviteStatus> & inviteStatus() const { DARABONBA_PTR_GET_CONST(inviteStatus_, vector<Models::GetInviteStatusResponseBodyDataInviteStatus>) };
    inline vector<Models::GetInviteStatusResponseBodyDataInviteStatus> inviteStatus() { DARABONBA_PTR_GET(inviteStatus_, vector<Models::GetInviteStatusResponseBodyDataInviteStatus>) };
    inline GetInviteStatusResponseBodyData& setInviteStatus(const vector<Models::GetInviteStatusResponseBodyDataInviteStatus> & inviteStatus) { DARABONBA_PTR_SET_VALUE(inviteStatus_, inviteStatus) };
    inline GetInviteStatusResponseBodyData& setInviteStatus(vector<Models::GetInviteStatusResponseBodyDataInviteStatus> && inviteStatus) { DARABONBA_PTR_SET_RVALUE(inviteStatus_, inviteStatus) };


  protected:
    std::shared_ptr<vector<Models::GetInviteStatusResponseBodyDataInviteStatus>> inviteStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
